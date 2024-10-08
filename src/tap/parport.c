/*
 * $Id: parport.c 851 2007-12-15 22:53:24Z kawk $
 *
 * Copyright (C) 2003 ETC s.r.o.
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
 * Written by Marcel Telka <marcel@telka.sk>, 2003.
 *
 */

#include "sysdep.h"

#include "parport.h"

#if defined(HAVE_IOPERM) || defined(HAVE_I386_SET_IOPERM)
extern parport_driver_t direct_parport_driver;
#endif /* defined(HAVE_IOPERM) || defined(HAVE_I386_SET_IOPERM) */
#ifdef HAVE_LINUX_PPDEV_H
extern parport_driver_t ppdev_parport_driver;
#endif /* HAVE_LINUX_PPDEV_H */
#ifdef HAVE_LIBFTD2XX
extern parport_driver_t ftd2xx_parport_driver;
extern parport_driver_t ftd2xx_mpsse_parport_driver;
#endif /* HAVE_LIBFTD2xx */
#ifdef HAVE_LIBFTDI
extern parport_driver_t ftdi_parport_driver;
extern parport_driver_t ftdi_mpsse_parport_driver;
#endif /* HAVE_LIBFTDI */
#ifdef HAVE_LIBUSB
extern parport_driver_t xpcu_pp_driver;
#endif /* HAVE_LIBUSB */
#ifdef HAVE_DEV_PPBUS_PPI_H
extern parport_driver_t ppi_parport_driver;
#endif /* HAVE_DEV_PPBUS_PPI_H */

parport_driver_t *parport_drivers[] = {
#if defined(HAVE_IOPERM) || defined(HAVE_I386_SET_IOPERM)
	&direct_parport_driver,
#endif /* defined(HAVE_IOPERM) || defined(HAVE_I386_SET_IOPERM) */
#ifdef HAVE_LINUX_PPDEV_H
	&ppdev_parport_driver,
#endif /* HAVE_LINUX_PPDEV_H */
#ifdef HAVE_LIBFTD2XX
	&ftd2xx_parport_driver,
	&ftd2xx_mpsse_parport_driver,
#endif /* HAVE_LIBFTD2XX */
#ifdef HAVE_LIBFTDI
	&ftdi_parport_driver,
	&ftdi_mpsse_parport_driver,
#endif /* HAVE_LIBFTDI */
#ifdef HAVE_LIBUSB
	&xpcu_pp_driver,
#endif /* HAVE_LIBUSB */
#ifdef HAVE_DEV_PPBUS_PPI_H
	&ppi_parport_driver,
#endif /* HAVE_DEV_PPBUS_PPI_H */
	NULL				/* last must be NULL */
};


int
parport_open( parport_t *port )
{
	return port->driver->open( port );
}

int
parport_close( parport_t *port )
{
	return port->driver->close( port );
}

int
parport_set_data( parport_t *port, uint8_t data )
{
	return port->driver->set_data( port, data );
}

int
parport_get_data( parport_t *port )
{
	return port->driver->get_data( port );
}

int
parport_get_status( parport_t *port )
{
	return port->driver->get_status( port );
}

int
parport_set_control( parport_t *port, uint8_t data )
{
	return port->driver->set_control( port, data );
}
