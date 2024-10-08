/*
 * $Id: tap.h 990 2008-02-02 23:33:01Z kawk $
 *
 * Copyright (C) 2002 ETC s.r.o.
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
 * Written by Marcel Telka <marcel@telka.sk>, 2002.
 *
 */

#ifndef TAP_H
#define	TAP_H

#include "register.h"
#include "chain.h"

void tap_reset( chain_t *chain );
void tap_capture_dr( chain_t *chain );
void tap_capture_ir( chain_t *chain );
void tap_defer_shift_register( chain_t *chain, const tap_register *in, tap_register *out, int exit );
void tap_shift_register_output( chain_t *chain, const tap_register *in, tap_register *out, int exit );
void tap_shift_register( chain_t *chain, const tap_register *in, tap_register *out, int exit );

#endif /* TAP_H */
