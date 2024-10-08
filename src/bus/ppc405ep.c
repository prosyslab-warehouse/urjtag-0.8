/*
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
 * Modified by Wojtek Kaniewski <wojtekka@toxygen.net>, 2004.
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
	signal_t *a[32];
	signal_t *d[16];
	signal_t *ncs;
	signal_t *nwe;
	signal_t *noe;
} bus_params_t;

#define	CHAIN	((bus_params_t *) bus->params)->chain
#define	PART	((bus_params_t *) bus->params)->part
#define	A	((bus_params_t *) bus->params)->a
#define	D	((bus_params_t *) bus->params)->d
#define	nCS	((bus_params_t *) bus->params)->ncs
#define	nWE	((bus_params_t *) bus->params)->nwe
#define	nOE	((bus_params_t *) bus->params)->noe


static void
setup_address( bus_t *bus, uint32_t a )
{
	int i;
	part_t *p = PART;

	for (i = 6; i < 32; i++)
		part_set_signal( p, A[i], 1, (a >> (31-i)) & 1 );
}

static int ppc405ep_bus_area( bus_t *bus, uint32_t adr, bus_area_t *area );

static void
set_data_in( bus_t *bus )
{
	int i;
	part_t *p = PART;
	bus_area_t area;

	ppc405ep_bus_area( bus, 0, &area );

	for (i = 0; i < area.width; i++)
		part_set_signal( p, D[i], 0, 0 );
}

static void
setup_data( bus_t *bus, uint32_t d )
{
	int i;
	part_t *p = PART;
	bus_area_t area;

	ppc405ep_bus_area( bus, 0, &area );

	for (i = 0; i < area.width; i++)
		part_set_signal( p, D[15-i], 1, (d >> i) & 1 );
}

static void
ppc405ep_bus_printinfo( bus_t *bus )
{
	int i;

	for (i = 0; i < CHAIN->parts->len; i++)
		if (PART == CHAIN->parts->parts[i])
			break;
	printf( _("IBM PowerPC 405EP compatible bus driver via BSR (JTAG part No. %d)\n"), i );
}

static void
ppc405ep_bus_prepare( bus_t *bus )
{
	part_set_instruction( PART, "EXTEST" );
	chain_shift_instructions( CHAIN );
}

static void
ppc405ep_bus_read_start( bus_t *bus, uint32_t adr )
{
	part_t *p = PART;
	chain_t *chain = CHAIN;

	part_set_signal( p, nCS, 1, 0 );
	part_set_signal( p, nWE, 1, 1 );
	part_set_signal( p, nOE, 1, 0 );

	setup_address( bus, adr );
	set_data_in( bus );

	chain_shift_data_registers( chain, 0 );
}

static uint32_t
ppc405ep_bus_read_next( bus_t *bus, uint32_t adr )
{
	part_t *p = PART;
	chain_t *chain = CHAIN;
	int i;
	uint32_t d = 0;
	bus_area_t area;

	ppc405ep_bus_area( bus, adr, &area );

	setup_address( bus, adr );
	chain_shift_data_registers( chain, 1 );

	for (i = 0; i < area.width; i++)
		d |= (uint32_t) (part_get_signal( p, D[15-i] ) << i);

	return d;
}

static uint32_t
ppc405ep_bus_read_end( bus_t *bus )
{
	part_t *p = PART;
	chain_t *chain = CHAIN;
	int i;
	uint32_t d = 0;
	bus_area_t area;

	ppc405ep_bus_area( bus, 0, &area );

	part_set_signal( p, nCS, 1, 1 );
	part_set_signal( p, nOE, 1, 1 );
	chain_shift_data_registers( chain, 1 );

	for (i = 0; i < area.width; i++)
		d |= (uint32_t) (part_get_signal( p, D[15-i] ) << i);

	return d;
}

static uint32_t
ppc405ep_bus_read( bus_t *bus, uint32_t adr )
{
	int res;
	
	ppc405ep_bus_read_start( bus, adr );
	res = ppc405ep_bus_read_end( bus );
	
	return res;
}

static void
ppc405ep_bus_write( bus_t *bus, uint32_t adr, uint32_t data )
{
	part_t *p = PART;
	chain_t *chain = CHAIN;

	part_set_signal( p, nCS, 1, 0 );
	part_set_signal( p, nWE, 1, 1 );
	part_set_signal( p, nOE, 1, 1 );

	setup_address( bus, adr );
	setup_data( bus, data );

	chain_shift_data_registers( chain, 0 );

	part_set_signal( p, nWE, 1, 0 );
	chain_shift_data_registers( chain, 0 );
	part_set_signal( p, nWE, 1, 1 );
	part_set_signal( p, nCS, 1, 1 );
	chain_shift_data_registers( chain, 0 );
}

static int
ppc405ep_bus_area( bus_t *bus, uint32_t adr, bus_area_t *area )
{
	area->description = NULL;
	area->start = UINT32_C(0x00000000);
	area->length = UINT64_C(0x100000000);
	area->width = 16;

	return 0;
}

static void
ppc405ep_bus_free( bus_t *bus )
{
	free( bus->params );
	free( bus );
}

static bus_t *ppc405ep_bus_new( char *cmd_params[] );

const bus_driver_t ppc405ep_bus = {
	"ppc405ep",
	N_("IBM PowerPC 405EP compatible bus driver via BSR"),
	ppc405ep_bus_new,
	ppc405ep_bus_free,
	ppc405ep_bus_printinfo,
	ppc405ep_bus_prepare,
	ppc405ep_bus_area,
	ppc405ep_bus_read_start,
	ppc405ep_bus_read_next,
	ppc405ep_bus_read_end,
	ppc405ep_bus_read,
	ppc405ep_bus_write
};

static bus_t *
ppc405ep_bus_new( char *cmd_params[] )
{
	bus_t *bus;
	char buff[10];
	int i;
	int failed = 0;

	if (!chain || !chain->parts || (chain->parts->len <= chain->active_part) || (chain->active_part < 0))
		return NULL;

	bus = malloc( sizeof (bus_t) );
	if (!bus)
		return NULL;

	bus->driver = &ppc405ep_bus;
	bus->params = malloc( sizeof (bus_params_t) );
	if (!bus->params) {
		free( bus );
		return NULL;
	}

	CHAIN = chain;
	PART = chain->parts->parts[chain->active_part];

	for (i = 6; i < 32; i++) {
		sprintf( buff, "PerAddr%d", i );
		A[i] = part_find_signal( PART, buff );
		if (!A[i]) {
			printf( _("signal '%s' not found\n"), buff );
			failed = 1;
			break;
		}
	}
	for (i = 0; i < 16; i++) {
		sprintf( buff, "PerData%d", i );
		D[i] = part_find_signal( PART, buff );
		if (!D[i]) {
			printf( _("signal '%s' not found\n"), buff );
			failed = 1;
			break;
		}
	}
	sprintf( buff, "PerCS0");
	nCS = part_find_signal( PART, buff );
	if (!nCS) {
		printf( _("signal '%s' not found\n"), "nCS0" );
		failed = 1;
	}
	nWE = part_find_signal( PART, "PerWBE1" );
	if (!nWE) {
		printf( _("signal '%s' not found\n"), "nWE" );
		failed = 1;
	}
	nOE = part_find_signal( PART, "PerOE" );
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
