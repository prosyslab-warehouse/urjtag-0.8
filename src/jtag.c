/*
 * $Id: jtag.c 1037 2008-02-16 22:42:52Z kawk $
 *
 * Copyright (C) 2002, 2003 ETC s.r.o.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Written by Marcel Telka <marcel@telka.sk>, 2002, 2003.
 * Modified by Ajith Kumar P.C <ajithpc@kila.com>, 20/09/2006.
 *
 */

#include "sysdep.h"

#ifndef SVN_REVISION
#define SVN_REVISION "0"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#ifdef HAVE_LIBREADLINE
#include <readline/readline.h>
#ifdef HAVE_READLINE_HISTORY_H
#include <readline/history.h>
#endif
#endif
#include <getopt.h>
#ifdef ENABLE_NLS
#include <locale.h>
#endif /* ENABLE_NLS */

#include "chain.h"
#include "bus.h"
#include "cmd.h"
#include "jtag.h"

#ifndef HAVE_GETLINE
ssize_t getline( char **lineptr, size_t *n, FILE *stream );
#endif

chain_t *chain = NULL;
int debug_mode = 0;
int big_endian = 0;
int interactive = 0;
extern cfi_array_t *cfi_array;

static char *
get_token( char *buf )
{
	char *t = strtok( buf, " \f\n\r\t\v" );
	if (t && (*t == '#'))
		return NULL;
	return t;
}

#define	JTAGDIR		".jtag"
#define	HISTORYFILE	"history"
#define	RCFILE		"rc"

static void
jtag_create_jtagdir( void )
{
	char *home = getenv( "HOME" );
	char *jdir;

	if (!home)
		return;

	jdir = malloc( strlen(home) + strlen(JTAGDIR) + 2 );	/* "/" and trailing \0 */
	if (!jdir)
		return;

	strcpy( jdir, home );
	strcat( jdir, "/" );
	strcat( jdir, JTAGDIR );

	/* Create the directory if it doesn't exists. */
	mkdir( jdir, S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH );

	free( jdir );
}

#ifdef HAVE_LIBREADLINE
#ifdef HAVE_READLINE_HISTORY
						 
static void
jtag_load_history( void )
{
	char *home = getenv( "HOME" );
	char *file;

	using_history();

	if (!home)
		return;

	file = malloc( strlen(home) + strlen(JTAGDIR) + strlen(HISTORYFILE) + 3 );	/* 2 x "/" and trailing \0 */
	if (!file)
		return;

	strcpy( file, home );
	strcat( file, "/" );
	strcat( file, JTAGDIR );
	strcat( file, "/" );
	strcat( file, HISTORYFILE );

	read_history( file );

	free( file );
}

static void
jtag_save_history( void )
{
	char *home = getenv( "HOME" );
	char *file;

	if (!home)
		return;

	file = malloc( strlen(home) + strlen(JTAGDIR) + strlen(HISTORYFILE) + 3);	/* 2 x "/" and trailing \0 */
	if (!file)
		return;

	strcpy( file, home );
	strcat( file, "/" );
	strcat( file, JTAGDIR );
	strcat( file, "/");
	strcat( file, HISTORYFILE );

	write_history( file );

	free( file );
}

#endif /* HAVE_READLINE_HISTORY */
#endif

static int
jtag_parse_line( char *line )
{
	char *t;
	int l;
	int n;
	char **a;
	int r;

	if (!line || !(strlen( line ) > 0))
		return 1;

	t = get_token( line );
	if (!t)
		return 1;

	n = 0;
	l = 0;
	a = NULL;
	while (t) {
		if (n + 2 > l) {
			char **newa;
			l = (l < 16) ? 16 : (l * 2);
			newa = realloc( a, l * sizeof (char *) );
			if (!newa) {
				free( a );
				printf( _("Out of memory\n") );
				return 1;
			}
			a = newa;
		}
		a[n++] = t;
		a[n] = NULL;
		
		t = get_token( NULL );
	}

	r = cmd_run( a );
	if(debug_mode & 1)printf("Return in jtag_parse_line r=%d\n",r);
	free( a );
	return r;
}


static int jtag_readline_multiple_commands_support(char * line) /* multiple commands should be separated with '::' */
{
  int 	r;
  char	*nextcmd = line;

  if (!line || !(strlen( line ) > 0))
		return 1;
  
  do {
  line = nextcmd;

  nextcmd = strstr(nextcmd, "::"); /* :: to not confuse ms-dos users ;-) */
  
  if (nextcmd) {  
    *nextcmd++ = 0;
     ++nextcmd;
     while (*line == ':') ++line;
  } 
  
  r = jtag_parse_line( line );

  chain_flush( chain );
  
  } while (nextcmd && r);

  return r;
}

static void
jtag_readline_loop( const char *prompt )
{
#ifdef HAVE_LIBREADLINE
	char *line = NULL;

	/* Iterate */
	while (jtag_readline_multiple_commands_support( line )) {
		free( line );

		/* Read a line from the terminal */
		line = readline( prompt );

#ifdef HAVE_READLINE_HISTORY
		/* Check if we actually got something */
		if (line && (strlen( line ) > 0))
			add_history( line );
#endif
	}
	free( line );
#else
	char line[1024];
	line[0] = 0;
	do
	{
		jtag_readline_multiple_commands_support( line );
		printf("%s", prompt);
		fflush(stdout);
	}
	while(fgets(line, 1023, stdin));
#endif
}

static int
jtag_parse_stream( FILE *f )
{
	int go = 1;
	char *line = NULL;
	size_t n = 0;

	while (go && (getline( &line, &n, f ) != -1))
		if ((strlen(line) > 0) && (line[0] != '#'))
			go = jtag_parse_line(line);

	free(line);

	return go;
}

int
jtag_parse_file( const char *filename )
{
	FILE *f;
	int go;

	f = fopen( filename, "r" );
	if (!f)
		return -1;

	go = jtag_parse_stream( f );

	fclose(f);
	if(debug_mode & 1)printf("File Closed gp=%d\n",go);
	return go;
}

static int
jtag_parse_rc( void )
{
	char *home = getenv( "HOME" );
	char *file;
	int go;

	if (!home)
		return 1;

	file = malloc( strlen(home) + strlen(JTAGDIR) + strlen(RCFILE) + 3 );	/* 2 x "/" and trailing \0 */
	if (!file)
		return 1;

	strcpy( file, home );
	strcat( file, "/" );
	strcat( file, JTAGDIR );
	strcat( file, "/" );
	strcat( file, RCFILE );

	go = jtag_parse_file( file );

	free( file );

	return go;
}

static void
cleanup( void )
{
	cfi_array_free( cfi_array );
	cfi_array = NULL;

	if (bus) {
		bus_free( bus );
		bus = NULL;
	}
	chain_free( chain );
	chain = NULL;
}

int
main( int argc, char *const argv[] )
{
	int go = 0;
	int i;
	int c;
	int norc = 0;
	int help = 0;
	int version = 0;
	
	if(geteuid()==0 && getuid()!=0)
	{
		printf (_("'%s' must not be run suid root!\n"), "jtag");
		return(-1);
	};

#ifdef ENABLE_NLS
	/* l10n support */
	setlocale( LC_ALL, "" );
	bindtextdomain( PACKAGE, LOCALEDIR );
	textdomain( PACKAGE );
#endif /* ENABLE_NLS */

	while (1)
	{
		static struct option long_options[] =
		{
			{"version", no_argument,      0, 'v'},
			{"norc",    no_argument,      0, 'n'},
			{"interactive", no_argument,  0, 'i'},
			{"help",    no_argument,      0, 'h'},
			{0, 0, 0, 0}
		};

		/* `getopt_long' stores the option index here. */
		int option_index = 0;

		c = getopt_long (argc, argv, "vnhi",
		long_options, &option_index);

		/* Detect the end of the options. */
		if (c == -1)
			break;

		switch (c)
		{
		case 'v':
			version = 1;
			break;

		case 'n':
			norc = 1;
			break;

		case 'i':
			interactive = 1;
			break;

		case 'h':
		default:
			help = 1;
			break;
		}
	}

	if (help)
	{
		/* Print help info and exit.  */
		printf (_("%s #%s\n"), PACKAGE_STRING, SVN_REVISION);
		printf ("\n");

		printf (_("Usage: %s [OPTION] [FILE]\n"), "jtag");
		printf ("\n");

		printf (_("  -h, --help          display this help and exit\n"));
		printf (_("  -v, --version       display version information and exit\n"));
		printf ("\n");
		printf (_("  -n, --norc          disable reading ~/.jtag/rc on startup\n"));
		printf (_("  -i, --interactive   enter interactive mode after reading files\n"));
		printf ("\n");
		printf (_("  [FILE]              file containing commands to execute\n"));
		printf ("\n");

		printf (_("  Please report bugs at http://www.urjtag.org\n"));

		exit(0);
	}

	if (version)
	{
		printf(_("\n%s #%s\n\n"
          "Copyright (C) 2002, 2003 ETC s.r.o.\n"
          "Copyright (C) 2007, 2008 Kolja Waschk and the respective authors\n"
         ), PACKAGE_STRING, SVN_REVISION);

		printf(_("\n"
		"This program is free software; you can redistribute it and/or modify\n"
		"it under the terms of the GNU General Public License as published by\n"
		"the Free Software Foundation; either version 2 of the License, or\n"
		"(at your option) any later version.\n"
		"\n"
		"This program is distributed in the hope that it will be useful,\n"
		"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
		"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
		"GNU General Public License for more details.\n"
		"\n"
		"You should have received a copy of the GNU General Public License\n"
		"along with this program; if not, write to the Free Software\n"
		"Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA\n"));

		exit(0);
	}


	/* input from files */
	if (argc > optind) {
		for (i = optind; i < argc; i++) {
			chain = chain_alloc();
			if (!chain) {
				printf( _("Out of memory\n") );
				return -1;
			}

			go = jtag_parse_file( argv[i] );
			cleanup();
			if (go < 0) {
				printf( _("Unable to open file `%s'!\n"), argv[i] );
				break;
			}
		}

		if(!interactive) return 0;
	}

	/* input from stdin */
	if (!isatty(0)) {
		chain = chain_alloc();
		if (!chain) {
			printf( _("Out of memory\n") );
			return -1;
		}

		jtag_parse_stream( stdin );

		cleanup();

		return 0;
	}

	/* interactive */
	printf(
			_("\n%s #%s\n"
			"Copyright (C) 2002, 2003 ETC s.r.o.\n"
			"Copyright (C) 2007, 2008 Kolja Waschk and the respective authors\n\n"
			"%s is free software, covered by the GNU General Public License, and you are\n"
			"welcome to change it and/or distribute copies of it under certain conditions.\n"
			"There is absolutely no warranty for %s.\n\n"), PACKAGE_STRING, SVN_REVISION,
			PACKAGE_NAME, PACKAGE_NAME
	);

	chain = chain_alloc();
	if (!chain) {
		printf( _("Out of memory\n") );
		return -1;
	}

	printf( _("WARNING: %s may damage your hardware!\n"), PACKAGE_NAME );
	printf( _("Type \"quit\" to exit, \"help\" for help.\n\n") );

	/* Create ~/.jtag */
	jtag_create_jtagdir();

	/* Parse and execute the RC file */
	go = norc ? 1 : jtag_parse_rc();

	if (go) {

#ifdef HAVE_READLINE_HISTORY
		/* Load history */
		jtag_load_history();
#endif

		/* main loop */
		jtag_readline_loop( "jtag> " );

#ifdef HAVE_READLINE_HISTORY
		/* Save history */
		jtag_save_history();
#endif
	}

	cleanup();

	return 0;
}
