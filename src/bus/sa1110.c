/*
 * $Id: sa1110.c 914 2008-01-09 20:07:55Z arniml $
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
 *
 * Documentation:
 * [1] Intel Corporation, "Intel StrongARM SA-1110 Microprocessor
 *     Developer's Manual", October 2001, Order Number: 278240-004
 *
 */

#include "sysdep.h"

#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "part.h"
#include "bus.h"
#include "chain.h"
#include "bssignal.h"
#include "jtag.h"
#include "buses.h"

typedef struct {
	chain_t *chain;
	part_t *part;
	signal_t *a[26];
	signal_t *d[32];
	signal_t *ncs[6];
	signal_t *rd_nwr;
	signal_t *nwe;
	signal_t *noe;
} bus_params_t;

#define	CHAIN	((bus_params_t *) bus->params)->chain
#define	PART	((bus_params_t *) bus->params)->part
#define	A	((bus_params_t *) bus->params)->a
#define	D	((bus_params_t *) bus->params)->d
#define	nCS	((bus_params_t *) bus->params)->ncs
#define	RD_nWR	((bus_params_t *) bus->params)->rd_nwr
#define	nWE	((bus_params_t *) bus->params)->nwe
#define	nOE	((bus_params_t *) bus->params)->noe

static void
setup_address( bus_t *bus, uint32_t a )
{
	int i;
	part_t *p = PART;

	for (i = 0; i < 26; i++)
		part_set_signal( p, A[i], 1, (a >> i) & 1 );
}

static int sa1110_bus_area( bus_t *bus, uint32_t adr, bus_area_t *area );

static void
set_data_in( bus_t *bus )
{
	int i;
	part_t *p = PART;
	bus_area_t area;

	sa1110_bus_area( bus, 0, &area );

	for (i = 0; i < area.width; i++)
		part_set_signal( p, D[i], 0, 0 );
}

static void
setup_data( bus_t *bus, uint32_t d )
{
	int i;
	part_t *p = PART;
	bus_area_t area;

	sa1110_bus_area( bus, 0, &area );

	for (i = 0; i < area.width; i++)
		part_set_signal( p, D[i], 1, (d >> i) & 1 );
}

static void
sa1110_bus_printinfo( bus_t *bus )
{
	int i;

	for (i = 0; i < CHAIN->parts->len; i++)
		if (PART == CHAIN->parts->parts[i])
			break;
	printf( _("Intel SA-1110 compatible bus driver via BSR (JTAG part No. %d)\n"), i );
}

static void
sa1110_bus_prepare( bus_t *bus )
{       
	part_set_instruction( PART, "EXTEST" );
	chain_shift_instructions( CHAIN );
}

static void
sa1110_bus_read_start( bus_t *bus, uint32_t adr )
{
	/* see Figure 10-12 in [1] */
	part_t *p = PART;
	chain_t *chain = CHAIN;

	part_set_signal( p, nCS[0], 1, (adr >> 27) != 0 );
	part_set_signal( p, nCS[1], 1, (adr >> 27) != 1 );
	part_set_signal( p, nCS[2], 1, (adr >> 27) != 2 );
	part_set_signal( p, nCS[3], 1, (adr >> 27) != 3 );
	part_set_signal( p, nCS[4], 1, (adr >> 27) != 8 );
	part_set_signal( p, nCS[5], 1, (adr >> 27) != 9 );
	part_set_signal( p, RD_nWR, 1, 1 );
	part_set_signal( p, nWE, 1, 1 );
	part_set_signal( p, nOE, 1, 0 );

	setup_address( bus, adr );
	set_data_in( bus );

	chain_shift_data_registers( chain, 0 );
}

static uint32_t
sa1110_bus_read_next( bus_t *bus, uint32_t adr )
{
	/* see Figure 10-12 in [1] */
	part_t *p = PART;
	chain_t *chain = CHAIN;
	int i;
	uint32_t d = 0;
	bus_area_t area;

	sa1110_bus_area( bus, adr, &area );

	setup_address( bus, adr );
	chain_shift_data_registers( chain, 1 );

	for (i = 0; i < area.width; i++)
		d |= (uint32_t) (part_get_signal( p, D[i] ) << i);

	return d;
}

static uint32_t
sa1110_bus_read_end( bus_t *bus )
{
	/* see Figure 10-12 in [1] */
	part_t *p = PART;
	chain_t *chain = CHAIN;
	int i;
	uint32_t d = 0;
	bus_area_t area;

	sa1110_bus_area( bus, 0, &area );

	part_set_signal( p, nCS[0], 1, 1 );
	part_set_signal( p, nCS[1], 1, 1 );
	part_set_signal( p, nCS[2], 1, 1 );
	part_set_signal( p, nCS[3], 1, 1 );
	part_set_signal( p, nCS[4], 1, 1 );
	part_set_signal( p, nCS[5], 1, 1 );
	part_set_signal( p, nOE, 1, 1 );
	chain_shift_data_registers( chain, 1 );

	for (i = 0; i < area.width; i++)
		d |= (uint32_t) (part_get_signal( p, D[i] ) << i);

	return d;
}

static uint32_t
sa1110_bus_read( bus_t *bus, uint32_t adr )
{
	sa1110_bus_read_start( bus, adr );
	return sa1110_bus_read_end( bus );
}

static void
sa1110_bus_write( bus_t *bus, uint32_t adr, uint32_t data )
{
	/* see Figure 10-16 in [1] */
	part_t *p = PART;
	chain_t *chain = CHAIN;

	part_set_signal( p, nCS[0], 1, (adr >> 27) != 0 );
	part_set_signal( p, nCS[1], 1, (adr >> 27) != 1 );
	part_set_signal( p, nCS[2], 1, (adr >> 27) != 2 );
	part_set_signal( p, nCS[3], 1, (adr >> 27) != 3 );
	part_set_signal( p, nCS[4], 1, (adr >> 27) != 8 );
	part_set_signal( p, nCS[5], 1, (adr >> 27) != 9 );
	part_set_signal( p, RD_nWR, 1, 0 );
	part_set_signal( p, nWE, 1, 1 );
	part_set_signal( p, nOE, 1, 1 );

	setup_address( bus, adr );
	setup_data( bus, data );

	chain_shift_data_registers( chain, 0 );

	part_set_signal( p, nWE, 1, 0 );
	chain_shift_data_registers( chain, 0 );
	part_set_signal( p, nWE, 1, 1 );
	part_set_signal( p, nCS[0], 1, 1 );
	part_set_signal( p, nCS[1], 1, 1 );
	part_set_signal( p, nCS[2], 1, 1 );
	part_set_signal( p, nCS[3], 1, 1 );
	part_set_signal( p, nCS[4], 1, 1 );
	part_set_signal( p, nCS[5], 1, 1 );
	chain_shift_data_registers( chain, 0 );
}

static int
sa1110_bus_area( bus_t *bus, uint32_t adr, bus_area_t *area )
{
	area->description = NULL;
	area->start = UINT32_C(0x00000000);
	area->length = UINT64_C(0x100000000);
	area->width = part_get_signal( PART, part_find_signal( PART, "ROM_SEL" ) ) ? 32 : 16;

	return 0;
}

static void
sa1110_bus_free( bus_t *bus )
{
	free( bus->params );
	free( bus );
}

static bus_t *sa1110_bus_new( char *cmd_params[] );

const bus_driver_t sa1110_bus = {
	"sa1110",
	N_("Intel SA-1110 compatible bus driver via BSR"),
	sa1110_bus_new,
	sa1110_bus_free,
	sa1110_bus_printinfo,
	sa1110_bus_prepare,
	sa1110_bus_area,
	sa1110_bus_read_start,
	sa1110_bus_read_next,
	sa1110_bus_read_end,
	sa1110_bus_read,
	sa1110_bus_write,
	NULL
};

static bus_t *
sa1110_bus_new( char *cmd_params[] )
{
	bus_t *bus;
	char buff[10];
	int i;
	int failed = 0;

	if (!chain || !chain->parts || chain->parts->len <= chain->active_part || chain->active_part < 0)
		return NULL;

	bus = malloc( sizeof (bus_t) );
	if (!bus)
		return NULL;

	bus->driver = &sa1110_bus;
	bus->params = malloc( sizeof (bus_params_t) );
	if (!bus->params) {
		free( bus );
		return NULL;
	}

	CHAIN = chain;
	PART = chain->parts->parts[chain->active_part];

	for (i = 0; i < 26; i++) {
		sprintf( buff, "A%d", i );
		A[i] = part_find_signal( PART, buff );
		if (!A[i]) {
			printf( _("signal '%s' not found\n"), buff );
			failed = 1;
			break;
		}
	}
	for (i = 0; i < 32; i++) {
		sprintf( buff, "D%d", i );
		D[i] = part_find_signal( PART, buff );
		if (!D[i]) {
			printf( _("signal '%s' not found\n"), buff );
			failed = 1;
			break;
		}
	}
	for (i = 0; i < 6; i++) {
		sprintf( buff, "nCS%d", i );
		nCS[i] = part_find_signal( PART, buff );
		if (!nCS[i]) {
			printf( _("signal '%s' not found\n"), buff );
			failed = 1;
			break;
		}
	}
	RD_nWR = part_find_signal( PART, "RD_nWR" );
	if (!RD_nWR) {
		printf( _("signal '%s' not found\n"), "RD_nWR" );
		failed = 1;
	}
	nWE = part_find_signal( PART, "nWE" );
	if (!nWE) {
		printf( _("signal '%s' not found\n"), "nWE" );
		failed = 1;
	}
	nOE = part_find_signal( PART, "nOE" );
	if (!nOE) {
		printf( _("signal '%s' not found\n"), "nOE" );
		failed = 1;
	}

	if (failed) {
		free( bus->params );
		free( bus );
		return NULL;
	}

	return bus;
}
