#
# $Id: Makefile.am 931 2008-01-19 12:24:23Z kawk $
#
# Copyright (C) 2002 ETC s.r.o.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
# 02111-1307, USA.
#
# Written by Marcel Telka <marcel@telka.sk>, 2002.
#

include $(top_srcdir)/Makefile.rules

noinst_LIBRARIES = libtap.a

libtap_a_SOURCES = \
	tap.c \
	register.c \
	state.c \
	chain.c \
	parport.c \
	parport/direct.c \
	parport/ppdev.c \
	parport/ppi.c \
	cable.c \
	cable/generic.h \
	cable/generic.c \
	cable/arcom.c \
	cable/byteblaster.c \
	cable/dlc5.c \
	cable/ea253.c \
	cable/ei012.c \
	cable/keithkoep.c \
	cable/lattice.c \
	cable/mpcbdm.c \
	cable/triton.c \
	cable/wiggler.c \
	cable/wiggler2.c

if HAVE_LIBUSB
libtap_a_SOURCES += \
	parport/xpcu_common.c \
	parport/xpcu_pp.c \
	cable/xpc.c
endif

if ENABLE_JIM
libtap_a_SOURCES += \
	cable/jim.c
endif

if HAVE_LIBFTDI
libtap_a_SOURCES += \
	parport/ftdi.c
endif

if HAVE_LIBFTD2XX
libtap_a_SOURCES += \
	parport/ftd2xx.c
endif

FTDIDEPENDENT= \
	cable/usbblaster.c \
	cable/ft2232.c

if HAVE_LIBFTDI
libtap_a_SOURCES += $(FTDIDEPENDENT)
else
if HAVE_LIBFTD2XX
libtap_a_SOURCES += $(FTDIDEPENDENT)
endif
endif

if ENABLE_EP9307
libtap_a_SOURCES += \
	cable/vision_ep9307.c
endif


