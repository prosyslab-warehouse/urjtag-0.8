#
# $Id: Makefile.am 1052 2008-02-18 19:59:31Z kawk $
#
# Copyright (C) 2003 ETC s.r.o.
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
# Written by Marcel Telka <marcel@telka.sk>, 2003.
#

include $(top_srcdir)/Makefile.rules

noinst_LIBRARIES = libcmd.a

libcmd_a_SOURCES = \
	frequency.c \
	cable.c \
	reset.c \
	discovery.c \
	detect.c \
	detectflash.c \
	help.c \
	quit.c \
	scan.c \
	signal.c \
	salias.c \
	bit.c \
	register.c \
	initbus.c \
	print.c \
	part.c \
	bus.c \
	instruction.c \
	shift.c \
	dr.c \
	get.c \
	test.c \
	debug.c \
	shell.c \
	set.c \
	endian.c \
	peekpoke.c \
	readmem.c \
	writemem.c \
	flashmem.c \
	eraseflash.c \
	include.c \
	cmd.c

if ENABLE_SVF
libcmd_a_SOURCES += svf.c
endif

if ENABLE_BSDL
libcmd_a_SOURCES += bsdl.c
endif

INCLUDES = -DJTAG_DATA_DIR=\"$(pkgdatadir)\"
