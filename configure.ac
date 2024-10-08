#
# $Id: configure.ac 1064 2008-02-20 19:46:07Z kawk $
#
# Copyright (C) 2007, 2008 Kolja Waschk and other
#    UrJTAG.org developers, (C) 2002, 2003 ETC s.r.o.
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
# Written by Marcel Telka <marcel@telka.sk>, 2002, 2003,
#  and other UrJTAG authors, 2007, 2008, ...
#

AC_INIT(UrJTAG,0.8,http://urjtag.org,urjtag)

AC_PREREQ(2.54)
AC_COPYRIGHT([Copyright (C) 2007/08 Kolja Waschk and other UrJTAG authors; 2002/03 ETC s.r.o.])
AC_REVISION($Revision: 1064 $)

# Get SVN Revision - idea from xfce-power-manager (C) 2007 by B.Tarricone
dnl get svn revision
AC_MSG_CHECKING([code revision])
SVN=`which svn`
SVN_REVISION=0
if test -n "$SVN" -a -x "$SVN"; then
    SVN_REVISION=`LC_ALL=C svn info -R | awk 'BEGIN { x=0 } /^Revision: / { if($2>x) x=$2; } END { printf "%d\n",x }'`
    if test "$SVN_REVISION" -ne "0" ; then
        AC_MSG_RESULT([from svn info: $SVN_REVISION])
    fi
fi
if test "$SVN_REVISION" -eq 0 -a -e "ChangeLog"; then
    SVN_REVISION=`awk 'BEGIN { x=0 } /Revision: / { if($2>x) x=$2; } END { printf "%d\n",x }' ChangeLog`
    if test "$SVN_REVISION" -ne "0" ; then
        AC_MSG_RESULT([from ChangeLog: $SVN_REVISION])
    fi
fi
if test "$SVN_REVISION" -eq "0" ; then
    AC_MSG_RESULT([unknown, using 0])
fi
AC_DEFINE_UNQUOTED([SVN_REVISION], "$SVN_REVISION", [subversion revision number])
AC_SUBST([SVN_REVISION])

AC_CONFIG_AUX_DIR(tools)

AM_INIT_AUTOMAKE([check-news dist-bzip2])

AC_CONFIG_FILES(
	Makefile
	doc/Makefile
	data/Makefile
	include/Makefile
	src/Makefile
	src/lib/Makefile
	src/tap/Makefile
	src/part/Makefile
	src/bus/Makefile
	src/flash/Makefile
	src/cmd/Makefile
	src/svf/Makefile
	src/bsdl/Makefile
	src/jim/Makefile
	po/Makefile.in
)

AM_MAINTAINER_MODE

AM_CONFIG_HEADER(config.h)

AC_GNU_SOURCE

AM_GNU_GETTEXT(external)
AM_GNU_GETTEXT_VERSION(0.14.1)

AC_PROG_CC
AC_PROG_RANLIB
AC_PROG_YACC


AC_SEARCH_LIBS([ioperm], [ioperm])
if test "$ac_cv_search_ioperm" != "no"; then
	AC_DEFINE(HAVE_IOPERM, 1, [Define to 1 if you have the ioperm() function])
else
	AC_SEARCH_LIBS([i386_set_ioperm], [i386])
	if test "$ac_cv_search_i386_set_ioperm" != "no"; then
		AC_DEFINE(HAVE_I386_SET_IOPERM, 1,
			[Define to 1 if you have the i386_set_ioperm() function])
	fi
fi

AC_CHECK_FUNCS(getline getdelim)
AC_CHECK_FUNCS(swprintf)

AC_CHECK_FUNC(clock_gettime, [], [ AC_CHECK_LIB(rt, clock_gettime) ])

AC_CHECK_HEADERS(linux/ppdev.h)
AC_CHECK_HEADERS(dev/ppbus/ppi.h)
AC_CHECK_HEADERS(stropts.h)

VL_LIB_READLINE

AC_ARG_WITH([libftdi],
  [AS_HELP_STRING([--with-libftdi],
    [use libftdi for FTDI-based cables])],
    [], [with_libftdi=check])

AS_IF([test "x$with_libftdi" != xno], [
  AS_IF([test "x$with_libftdi" != xyes -a "x$with_libftdi" != xcheck], [
    CFLAGS="$CFLAGS -I$with_libftdi -L$with_libftdi"
    LIBS="$LIBS -lftdi"
  ],[
    AC_PATH_PROG(LIBFTDI_CONFIG, libftdi-config, no) 
    AS_IF([test "$LIBFTDI_CONFIG" != "no"],[
      LIBS="$LIBS `$LIBFTDI_CONFIG --libs`"
      CFLAGS="$CFLAGS `$LIBFTDI_CONFIG --cflags`"
    ],)
  ])
  AC_CHECK_FUNC([ftdi_usb_open], [
    AC_DEFINE(HAVE_LIBFTDI, 1, [Define if you have libftdi])
    HAVELIBFTDI=yes
  ],[
    AC_MSG_WARN([*** libftdi not detected. No support for FTDI-based USB JTAG cables via libftdi.])
  ])
],)

AS_IF([test "x$HAVELIBFTDI" == "xyes"],[
  AM_CONDITIONAL(HAVE_LIBFTDI, true)
],[
  AM_CONDITIONAL(HAVE_LIBFTDI, false)
])


dnl check for libusb-config

AC_ARG_WITH([libusb],
  [AS_HELP_STRING([--with-libusb],
    [use libusb for some USB JTAG cables])],,
    [with_libusb=check])

AS_IF([test "x$with_libusb" != xno], [
  AS_IF([test "x$with_libusb" != xyes -a "x$with_libusb" != xcheck], [
    case $host in
    *cygwin*)
      CFLAGS="$CFLAGS -I$with_libusb/include -L$with_libusb/lib/gcc"
      ;;
    *)
      CFLAGS="$CFLAGS -I$with_libusb -L$with_libusb"
      ;;
    esac
    LIBS="$LIBS -lusb"
  ],[
    AC_PATH_PROG(LIBUSB_CONFIG, libusb-config, no) 
    AS_IF([test "$LIBUSB_CONFIG" != "no"],[
      LIBS="$LIBS `$LIBUSB_CONFIG --libs`"
      CFLAGS="$CFLAGS `$LIBUSB_CONFIG --cflags`"
    ],)
  ])
  AC_CHECK_FUNC([usb_find_devices], [
    AC_DEFINE(HAVE_LIBUSB, 1, [Define if you have libusb])
    HAVELIBUSB=yes
  ],[
    AC_MSG_WARN([*** libusb not detected. No support for USB JTAG cables via libusb.])
  ])
],)

AS_IF([test "x$HAVELIBUSB" == "xyes"],[
  AM_CONDITIONAL(HAVE_LIBUSB, true)
],[
  AM_CONDITIONAL(HAVE_LIBUSB, false)
])


dnl Use FTDI ftd2xx library?

AC_ARG_WITH([ftd2xx],
  [AS_HELP_STRING([--with-ftd2xx],
    [use ftd2xx library for FTDI-based cables])],
    [], [with_ftd2xx=check])

FTD2XXLIB=
AS_IF([test "x$with_ftd2xx" == xyes -o "x$with_ftd2xx" = xcheck], [
  AC_CHECK_LIB([ftd2xx], [FT_Open], [
    HAVELIBFTD2XX=yes
    LIBS="-lftd2xx $LIBS"
  ],[
    AC_MSG_WARN([*** libftd2xx not found. No support for FTDI-based USB JTAG cables via libftd2xx.])
  ])
],[
  AS_IF([test "x$with_ftd2xx" != xno], [
    HAVELIBFTD2XX=yes
    case $host in
    *cygwin*)
      CFLAGS="$CFLAGS -I$with_ftd2xx"
      AS_IF([test -d "$with_ftd2xx/i386"], [
        FTD2XXLIB="$with_ftd2xx/i386/ftd2xx.lib"
      ],[
        FTD2XXLIB="$with_ftd2xx/ftd2xx.lib"
      ])
      ;;
    *)
      CFLAGS="$CFLAGS -I$with_ftd2xx -L$with_ftd2xx"
      LIBS="-lftd2xx $LIBS"
      ;;
    esac
  ],)
])
AS_IF([test "x$HAVELIBFTD2XX" == xyes], [
  AM_CONDITIONAL(HAVE_LIBFTD2XX, true)
  AC_DEFINE(HAVE_LIBFTD2XX, 1, [define if you have libftd2xx])
],[
  AM_CONDITIONAL(HAVE_LIBFTD2XX, false)
])
AC_SUBST(FTD2XXLIB)


dnl Enable cable driver for Vision EP9307?
AC_ARG_ENABLE(ep9307,
[  --enable-ep9307         Enable cable driver for EP9307],
[case "${enableval}" in
   yes) ep9307=true ;;
   no)  ep9307=false ;;
   *) AC_MSG_ERROR(bad value ${enableval} for --enable-ep9307) ;;
 esac],
[ep9307=false])
AS_IF([test "x$ep9307" = xtrue], [
  AM_CONDITIONAL(ENABLE_EP9307, true)
  AC_DEFINE(ENABLE_EP9307, 1, [define if cable driver for ep9307 is enabled])
],[
  AM_CONDITIONAL(ENABLE_EP9307, false)
])

CFLAGS="$CFLAGS -Wall"
CPPFLAGS="$CPPFLAGS -I\$(top_srcdir) -I\$(top_srcdir)/include"


dnl Enable SVF player?
AC_ARG_ENABLE(svf,
[  --enable-svf            Enable SVF player (default is enabled)],
[case "${enableval}" in
   yes) svf=true ;;
   no)  svf=false ;;
   *)   AC_MSG_ERROR(bad value ${enableval} for --enable-svf) ;;
 esac],
[svf=true])
AS_IF([test "x$svf" = xtrue], [
  AM_CONDITIONAL(ENABLE_SVF, true)
  AC_DEFINE(ENABLE_SVF, 1, [define if SVF player is enabled])
],[
  AM_CONDITIONAL(ENABLE_SVF, false)
])


# check for lex/flex
AC_PROG_LEX
# check for modern version of flex
AC_PROG_AWK
ACI_PROG_SED

AS_IF([test "$LEX" == flex], [
   ver_ge_ver () {
      v1=$1
      v2=$2
      v3=$3
      ref_v1=$4
      ref_v2=$5
      ref_v3=$6

      AS_IF([test -n "$v1" -a "$v1" -gt "$ref_v1"], [
         return 0
      ])
      AS_IF([test -n "$v1" -a "$v1" -eq "$ref_v1"], [
         AS_IF([test "$v2" -gt "$ref_v2"], [
	    return 0
         ])
         AS_IF([test "$v2" -eq "$ref_v2"], [
            AS_IF([test "$v3" -ge "$ref_v3"], [
	       return 0
            ])
         ])
      ])

      return 1
   }

   flex_version=`$LEX --version | $AWK '{print $2}'`
   AS_IF([test "$flex_version" == "version"], [
       flex_version=`$LEX --version | $AWK '{print $3}'`
   ])

   flex_v1=`echo $flex_version | $AWK -F . '{print $1}' | $SED -e 's/[a-zA-Z]//g'`
   flex_v2=`echo $flex_version | $AWK -F . '{print $2}' | $SED -e 's/[a-zA-Z]//g'`
   flex_v3=`echo $flex_version | $AWK -F . '{print $3}' | $SED -e 's/[a-zA-Z]//g'`

   # bison error locations require flex >= 2.5.31
   flex_ref_v1=2
   flex_ref_v2=5
   flex_ref_v3=31
   flex_ref_version="$flex_ref_v1.$flex_ref_v2.$flex_ref_v3"
   AC_MSG_CHECKING([for flex >= $flex_ref_version, required for SVF error locations])
   #
   AS_IF([ver_ge_ver $flex_v1 $flex_v2 $flex_v3 $flex_ref_v1 $flex_ref_v2 $flex_ref_v3], [
      AC_MSG_RESULT([yes - flex $flex_version])
      AM_CONDITIONAL([BISON_LOCATIONS], true)
      bison_locations=yes
   ], [
      AS_IF([test -r src/svf/svf_flex.c], [
         # If the transformed svf_flex.c is already existing, it shouldn't matter
         # that flex is too old for building a lexer with bison locations
         AC_MSG_RESULT([using pre-generated src/svf/svf_flex.c])
         AM_CONDITIONAL([BISON_LOCATIONS], false)
         bison_locations="as is"
      ], [
         AC_MSG_RESULT([no - flex $flex_version])
         AM_CONDITIONAL([BISON_LOCATIONS], false)
         bison_locations=no
      ])
   ])

   # bsdl lexer requires flex >= 2.5.33
   flex_ref_v1=2
   flex_ref_v2=5
   flex_ref_v3=33
   flex_ref_version="$flex_ref_v1.$flex_ref_v2.$flex_ref_v3"
   AC_MSG_CHECKING([for flex >= $flex_ref_version, required for BSDL lexer])
   #
   AS_IF([ver_ge_ver $flex_v1 $flex_v2 $flex_v3 $flex_ref_v1 $flex_ref_v2 $flex_ref_v3], [
      AC_MSG_RESULT([yes - flex $flex_version])
      bsdl_lexer=true
   ], [
      AC_MSG_RESULT([no - flex $flex_version])
      bsdl_lexer=false
   ])
], [
   bison_locations=no
   AM_CONDITIONAL([BISON_LOCATIONS], false)
   bsdl_lexer=false
])


dnl If the transformed bsdl_flex.c is already existing, it doesn't matter
dnl that flex is too old for building the lexer.
AS_IF([test "x$bsdl_lexer" == xfalse], [
   AS_IF([test -r src/bsdl/bsdl_flex.c], [
      bsdl_lexer=true
   ])
])


dnl Enable BSDL subsystem?
AC_ARG_ENABLE(bsdl,
[  --enable-bsdl           Enable BSDL subsystem (default is enabled)],
[case "${enableval}" in
   yes) bsdl=true ;;
   no)  bsdl=false ;;
   *)   AC_MSG_ERROR(bad value ${enableval} for --enable-bsdl) ;;
 esac],
[bsdl=$bsdl_lexer])
AS_IF([test "x$bsdl" = xtrue], [
  AM_CONDITIONAL(ENABLE_BSDL, true)
  AC_DEFINE(ENABLE_BSDL, 1, [define if BSDL subsystem is enabled])
],[
  AM_CONDITIONAL(ENABLE_BSDL, false)
])

dnl Enable JTAG target simulator JIM?
AC_ARG_ENABLE(jim,
[  --enable-jim            Enable JTAG target simulator JIM],
[case "${enableval}" in
   yes) jim=true ;;
   no)  jim=false ;;
   *)   AC_MSG_ERROR(bad value ${enableval} for --enable-jim) ;;
 esac],
[jim=false])
AS_IF([test "x$jim" = xtrue], [
  AM_CONDITIONAL(ENABLE_JIM, true)
  AC_DEFINE(ENABLE_JIM, 1, [define if JTAG target simulator JIM is enabled])
],[
  AM_CONDITIONAL(ENABLE_JIM, false)
])


dnl Use conservative flush?
AC_ARG_ENABLE(conservative_flush,
[  --enable-conservative-flush  Perform conservative queue flushing (default is enabled)],
[case "${enableval}" in
   yes) conservative_flush=true ;;
   no)  conservative_flush=false ;;
   *)   AC_MSG_ERROR(cab value ${enableval} for --enable-conservative-flush) ;;
 esac],
[conservative_flush=true])
AS_IF([test "x$conservative_flush" = xtrue], [
  AC_DEFINE(CONSERVATIVE_FLUSH, 1, [define if conservative queue flushing is enabled])
])

dnl Enable experimental brute-force JEDEC flash autodetection?
AC_ARG_ENABLE(jedec-exp,
[  --enable-jedec-exp            Enable experimental JEDEC flash detection],
[case "${enableval}" in
   yes) jedecexp=true ;;
   no)  jedecexp=false ;;
   *)   AC_MSG_ERROR(bad value ${enableval} for --enable-jedec-exp) ;;
 esac],
[jedecexp=false])
AS_IF([test "x$jedecexp" = xtrue], [
  AM_CONDITIONAL(JEDEC_EXP, true)
  AC_DEFINE(JEDEC_EXP, 1, [define if experimental JEDEC flash detection is enabled])
],[
  AM_CONDITIONAL(JEDEC_EXP, false)
])

AC_OUTPUT

dnl
dnl Configuration summary
dnl
if test ${HAVELIBFTDI:-no} != no ; then
   FLAG_HAVELIBFTDI=yes
else
   FLAG_HAVELIBFTDI=no
fi
if test ${HAVELIBUSB:-no} != no ; then
   FLAG_HAVELIBUSB=yes
else
   FLAG_HAVELIBUSB=no
fi
if test ${HAVELIBFTD2XX:-no} != no ; then
   FLAG_HAVELIBFTD2XX=yes
else
   FLAG_HAVELIBFTD2XX=no
fi
if test ${svf:-false} != false ; then
   FLAG_SVF=yes
else
   FLAG_SVF=no
fi
if test ${bsdl:-false} != false ; then
   FLAG_BSDL=yes
else
   FLAG_BSDL=no
fi
AC_MSG_RESULT([
jtag is now configured for

  USB cable support    : $FLAG_HAVELIBUSB
  FTDI cable support
    via libftdi        : $FLAG_HAVELIBFTDI
    via libftd2xx      : $FLAG_HAVELIBFTD2XX
  SVF error locations  : $bison_locations
  Build SVF player     : $FLAG_SVF
  Build BSDL subsystem : $FLAG_BSDL
])
