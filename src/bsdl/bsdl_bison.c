/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse bsdlparse
#define yylex   bsdllex
#define yyerror bsdlerror
#define yylval  bsdllval
#define yychar  bsdlchar
#define yydebug bsdldebug
#define yynerrs bsdlnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENTITY = 258,
     PORT = 259,
     GENERIC = 260,
     USE = 261,
     ATTRIBUTE = 262,
     IS = 263,
     OF = 264,
     CONSTANT = 265,
     STRING = 266,
     END = 267,
     ALL = 268,
     PIN_MAP = 269,
     PHYSICAL_PIN_MAP = 270,
     PIN_MAP_STRING = 271,
     TRUE = 272,
     FALSE = 273,
     SIGNAL = 274,
     TAP_SCAN_IN = 275,
     TAP_SCAN_OUT = 276,
     TAP_SCAN_MODE = 277,
     TAP_SCAN_RESET = 278,
     TAP_SCAN_CLOCK = 279,
     LOW = 280,
     BOTH = 281,
     IN = 282,
     OUT = 283,
     INOUT = 284,
     BUFFER = 285,
     LINKAGE = 286,
     BIT = 287,
     BIT_VECTOR = 288,
     TO = 289,
     DOWNTO = 290,
     PACKAGE = 291,
     BODY = 292,
     TYPE = 293,
     SUBTYPE = 294,
     RECORD = 295,
     ARRAY = 296,
     POSITIVE = 297,
     RANGE = 298,
     CELL_INFO = 299,
     INSTRUCTION_LENGTH = 300,
     INSTRUCTION_OPCODE = 301,
     INSTRUCTION_CAPTURE = 302,
     INSTRUCTION_DISABLE = 303,
     INSTRUCTION_GUARD = 304,
     INSTRUCTION_PRIVATE = 305,
     INSTRUCTION_USAGE = 306,
     INSTRUCTION_SEQUENCE = 307,
     REGISTER_ACCESS = 308,
     BOUNDARY_CELLS = 309,
     BOUNDARY_LENGTH = 310,
     BOUNDARY_REGISTER = 311,
     IDCODE_REGISTER = 312,
     USERCODE_REGISTER = 313,
     DESIGN_WARNING = 314,
     BOUNDARY = 315,
     BYPASS = 316,
     HIGHZ = 317,
     IDCODE = 318,
     DEVICE_ID = 319,
     USERCODE = 320,
     INPUT = 321,
     OUTPUT2 = 322,
     OUTPUT3 = 323,
     CONTROL = 324,
     CONTROLR = 325,
     INTERNAL = 326,
     CLOCK = 327,
     BIDIR = 328,
     BIDIR_IN = 329,
     BIDIR_OUT = 330,
     EXTEST = 331,
     SAMPLE = 332,
     INTEST = 333,
     RUNBIST = 334,
     PI = 335,
     PO = 336,
     UPD = 337,
     CAP = 338,
     X = 339,
     ZERO = 340,
     ONE = 341,
     Z = 342,
     WEAK0 = 343,
     WEAK1 = 344,
     IDENTIFIER = 345,
     PULL0 = 346,
     PULL1 = 347,
     KEEPER = 348,
     SINGLE_QUOTE = 349,
     QUOTED_STRING = 350,
     DECIMAL_NUMBER = 351,
     BINARY_PATTERN = 352,
     BIN_X_PATTERN = 353,
     REAL_NUMBER = 354,
     CONCATENATE = 355,
     SEMICOLON = 356,
     COMMA = 357,
     LPAREN = 358,
     RPAREN = 359,
     LBRACKET = 360,
     RBRACKET = 361,
     COLON = 362,
     ASTERISK = 363,
     BOX = 364,
     COLON_EQUAL = 365,
     PERIOD = 366,
     ILLEGAL = 367,
     COMPONENT_CONFORMANCE = 368,
     PORT_GROUPING = 369,
     RUNBIST_EXECUTION = 370,
     INTEST_EXECUTION = 371,
     BSDL_EXTENSION = 372,
     COMPLIANCE_PATTERNS = 373,
     OBSERVE_ONLY = 374
   };
#endif
/* Tokens.  */
#define ENTITY 258
#define PORT 259
#define GENERIC 260
#define USE 261
#define ATTRIBUTE 262
#define IS 263
#define OF 264
#define CONSTANT 265
#define STRING 266
#define END 267
#define ALL 268
#define PIN_MAP 269
#define PHYSICAL_PIN_MAP 270
#define PIN_MAP_STRING 271
#define TRUE 272
#define FALSE 273
#define SIGNAL 274
#define TAP_SCAN_IN 275
#define TAP_SCAN_OUT 276
#define TAP_SCAN_MODE 277
#define TAP_SCAN_RESET 278
#define TAP_SCAN_CLOCK 279
#define LOW 280
#define BOTH 281
#define IN 282
#define OUT 283
#define INOUT 284
#define BUFFER 285
#define LINKAGE 286
#define BIT 287
#define BIT_VECTOR 288
#define TO 289
#define DOWNTO 290
#define PACKAGE 291
#define BODY 292
#define TYPE 293
#define SUBTYPE 294
#define RECORD 295
#define ARRAY 296
#define POSITIVE 297
#define RANGE 298
#define CELL_INFO 299
#define INSTRUCTION_LENGTH 300
#define INSTRUCTION_OPCODE 301
#define INSTRUCTION_CAPTURE 302
#define INSTRUCTION_DISABLE 303
#define INSTRUCTION_GUARD 304
#define INSTRUCTION_PRIVATE 305
#define INSTRUCTION_USAGE 306
#define INSTRUCTION_SEQUENCE 307
#define REGISTER_ACCESS 308
#define BOUNDARY_CELLS 309
#define BOUNDARY_LENGTH 310
#define BOUNDARY_REGISTER 311
#define IDCODE_REGISTER 312
#define USERCODE_REGISTER 313
#define DESIGN_WARNING 314
#define BOUNDARY 315
#define BYPASS 316
#define HIGHZ 317
#define IDCODE 318
#define DEVICE_ID 319
#define USERCODE 320
#define INPUT 321
#define OUTPUT2 322
#define OUTPUT3 323
#define CONTROL 324
#define CONTROLR 325
#define INTERNAL 326
#define CLOCK 327
#define BIDIR 328
#define BIDIR_IN 329
#define BIDIR_OUT 330
#define EXTEST 331
#define SAMPLE 332
#define INTEST 333
#define RUNBIST 334
#define PI 335
#define PO 336
#define UPD 337
#define CAP 338
#define X 339
#define ZERO 340
#define ONE 341
#define Z 342
#define WEAK0 343
#define WEAK1 344
#define IDENTIFIER 345
#define PULL0 346
#define PULL1 347
#define KEEPER 348
#define SINGLE_QUOTE 349
#define QUOTED_STRING 350
#define DECIMAL_NUMBER 351
#define BINARY_PATTERN 352
#define BIN_X_PATTERN 353
#define REAL_NUMBER 354
#define CONCATENATE 355
#define SEMICOLON 356
#define COMMA 357
#define LPAREN 358
#define RPAREN 359
#define LBRACKET 360
#define RBRACKET 361
#define COLON 362
#define ASTERISK 363
#define BOX 364
#define COLON_EQUAL 365
#define PERIOD 366
#define ILLEGAL 367
#define COMPONENT_CONFORMANCE 368
#define PORT_GROUPING 369
#define RUNBIST_EXECUTION 370
#define INTEST_EXECUTION 371
#define BSDL_EXTENSION 372
#define COMPLIANCE_PATTERNS 373
#define OBSERVE_ONLY 374




/* Copy the first part of user declarations.  */
#line 125 "bsdl_bison.y"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include "bsdl_sysdep.h"

/* interface to flex */
#include "bsdl_bison.h"
#include "bsdl.h"

#define YYLEX_PARAM priv_data->scanner
int yylex (YYSTYPE *, void *);

#if 1
#define ERROR_LIMIT 15
#define BUMP_ERROR if (bsdl_flex_postinc_compile_errors(priv_data->scanner)>ERROR_LIMIT) \
                          {Give_Up_And_Quit(priv_data);YYABORT;}
#else
#define BUMP_ERROR {Give_Up_And_Quit(priv_data);YYABORT;}
#endif

static void Init_Text(parser_priv_t *);
static void Store_Text(parser_priv_t *, char *);
static void Print_Error(parser_priv_t *, const char *);
static void Print_Warning(parser_priv_t *, const char *);
static void Give_Up_And_Quit(parser_priv_t *);

void yyerror(parser_priv_t *, const char *);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 157 "bsdl_bison.y"
{
    int   integer;
    char *str;
}
/* Line 187 of yacc.c.  */
#line 379 "bsdl_bison.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 392 "bsdl_bison.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   675

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  120
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  286
/* YYNRULES -- Number of states.  */
#define YYNSTATES  679

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   374

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    14,    21,    27,    29,    37,
      44,    46,    51,    53,    54,    66,    72,    74,    76,    80,
      85,    87,    91,    93,    95,    97,    99,   101,   103,   108,
     112,   116,   118,   121,   123,   124,   125,   134,   145,   147,
     149,   152,   158,   164,   177,   183,   189,   191,   193,   195,
     197,   199,   201,   203,   205,   207,   209,   211,   213,   215,
     217,   219,   221,   223,   225,   227,   229,   231,   233,   235,
     237,   239,   241,   243,   245,   247,   249,   251,   253,   257,
     261,   267,   276,   285,   290,   292,   294,   298,   300,   304,
     308,   310,   312,   315,   320,   322,   324,   327,   330,   335,
     337,   339,   342,   343,   353,   355,   357,   360,   370,   372,
     374,   378,   386,   388,   390,   392,   394,   396,   398,   400,
     402,   404,   406,   408,   410,   412,   414,   416,   418,   420,
     422,   424,   426,   428,   430,   432,   434,   436,   437,   438,
     447,   456,   458,   468,   470,   472,   475,   478,   479,   488,
     490,   492,   496,   500,   502,   506,   508,   512,   514,   519,
     521,   523,   526,   528,   530,   532,   534,   536,   546,   556,
     566,   576,   590,   592,   594,   596,   598,   608,   609,   621,
     623,   627,   629,   634,   636,   640,   642,   644,   647,   649,
     651,   653,   655,   657,   659,   661,   663,   665,   666,   678,
     679,   691,   692,   704,   705,   717,   719,   723,   725,   727,
     737,   747,   748,   760,   761,   773,   774,   786,   788,   792,
     797,   799,   804,   806,   808,   810,   812,   814,   816,   820,
     822,   824,   826,   828,   830,   832,   834,   836,   839,   841,
     843,   844,   856,   858,   862,   864,   874,   875,   887,   889,
     893,   895,   900,   902,   906,   914,   916,   921,   923,   925,
     927,   929,   931,   933,   935,   937,   939,   941,   943,   945,
     951,   953,   955,   957,   959,   961,   963,   964,   974,   984,
     985,   997,   998,  1006,  1008,  1012,  1014
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     121,     0,    -1,   122,   123,   124,   125,    -1,     3,    90,
       8,    -1,     1,    -1,   126,   128,   135,   239,   167,   168,
      -1,   126,   128,   135,   167,   168,    -1,     1,    -1,   177,
     240,   186,   187,   193,   220,   227,    -1,   177,   186,   187,
     193,   220,   227,    -1,     1,    -1,   238,    12,    90,   101,
      -1,     1,    -1,    -1,     5,   103,    15,   107,    11,   110,
     245,   104,   101,   127,    90,    -1,     4,   103,   129,   104,
     101,    -1,     1,    -1,   130,    -1,   129,   101,   130,    -1,
     131,   107,   132,   133,    -1,    90,    -1,   131,   102,    90,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,
      -1,    32,    -1,    33,   103,   134,   104,    -1,    96,    34,
      96,    -1,    96,    35,    96,    -1,   136,    -1,   136,   153,
      -1,     1,    -1,    -1,    -1,     6,    90,   137,   111,    13,
     101,   138,   139,    -1,    36,    90,     8,   140,   150,   140,
      12,    90,   101,   154,    -1,     1,    -1,   141,    -1,   140,
     141,    -1,     7,   142,   107,   143,   101,    -1,    38,    90,
       8,   144,   101,    -1,    38,    44,     8,    41,   103,    42,
      43,   109,   104,     9,    90,   101,    -1,    39,    16,     8,
      11,   101,    -1,    39,   117,     8,    11,   101,    -1,     1,
      -1,    14,    -1,    20,    -1,    21,    -1,    24,    -1,    22,
      -1,    23,    -1,   113,    -1,   114,    -1,   115,    -1,   116,
      -1,   118,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    57,
      -1,    58,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    59,    -1,     1,    -1,    90,    -1,    11,    -1,    96,
      -1,     1,    -1,   103,   145,   104,    -1,   103,   146,   104,
      -1,   103,    25,   102,    26,   104,    -1,    41,   103,    96,
      34,    96,   104,     9,    90,    -1,    41,   103,    96,    35,
      96,   104,     9,    90,    -1,    40,   148,    12,    40,    -1,
       1,    -1,   147,    -1,   145,   102,   147,    -1,    90,    -1,
     146,   102,    90,    -1,    94,    98,    94,    -1,     1,    -1,
     149,    -1,   148,   149,    -1,    90,   107,    90,   101,    -1,
       1,    -1,   151,    -1,   150,   151,    -1,    10,   152,    -1,
      90,   107,    44,   101,    -1,     1,    -1,   163,    -1,   153,
     163,    -1,    -1,    36,    37,    90,     8,   156,    12,    90,
     155,   101,    -1,     1,    -1,   157,    -1,   156,   157,    -1,
      10,    90,   107,    44,   110,   103,   158,   104,   101,    -1,
       1,    -1,   159,    -1,   158,   102,   159,    -1,   103,   160,
     102,   161,   102,   162,   104,    -1,     1,    -1,    66,    -1,
      67,    -1,    68,    -1,    71,    -1,    69,    -1,    70,    -1,
      72,    -1,    74,    -1,    75,    -1,   119,    -1,     1,    -1,
      76,    -1,    77,    -1,    78,    -1,    79,    -1,     1,    -1,
      80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,
      85,    -1,    86,    -1,     1,    -1,    -1,    -1,     6,    90,
     164,   111,    13,   101,   165,   166,    -1,    36,    90,     8,
     150,    12,    90,   101,   154,    -1,     1,    -1,     7,    14,
       9,    90,   107,     3,     8,    15,   101,    -1,     1,    -1,
     169,    -1,   168,   169,    -1,    10,   170,    -1,    -1,    90,
     107,    16,   110,   245,   101,   171,   172,    -1,     1,    -1,
     173,    -1,   172,   102,   173,    -1,    90,   107,   174,    -1,
     176,    -1,   103,   175,   104,    -1,   176,    -1,   175,   102,
     176,    -1,    90,    -1,    90,   103,    96,   104,    -1,    96,
      -1,   178,    -1,   177,   178,    -1,   179,    -1,   180,    -1,
     183,    -1,   181,    -1,   182,    -1,     7,    20,     9,    90,
     107,    19,     8,   185,   101,    -1,     7,    21,     9,    90,
     107,    19,     8,   185,   101,    -1,     7,    22,     9,    90,
     107,    19,     8,   185,   101,    -1,     7,    23,     9,    90,
     107,    19,     8,   185,   101,    -1,     7,    24,     9,    90,
     107,    19,     8,   103,    99,   102,   184,   104,   101,    -1,
      25,    -1,    26,    -1,    17,    -1,    18,    -1,     7,    45,
       9,    90,   107,     3,     8,    96,   101,    -1,    -1,     7,
      46,     9,    90,   107,     3,     8,   245,   101,   188,   189,
      -1,   190,    -1,   189,   102,   190,    -1,     1,    -1,    90,
     103,   191,   104,    -1,   192,    -1,   191,   102,   192,    -1,
      97,    -1,   194,    -1,   193,   194,    -1,   195,    -1,   197,
      -1,   199,    -1,   201,    -1,   211,    -1,   205,    -1,   206,
      -1,   207,    -1,   209,    -1,    -1,     7,    47,     9,    90,
     107,     3,     8,   245,   101,   196,    98,    -1,    -1,     7,
      48,     9,    90,   107,     3,     8,   245,   101,   198,    90,
      -1,    -1,     7,    49,     9,    90,   107,     3,     8,   245,
     101,   200,    90,    -1,    -1,     7,    50,     9,    90,   107,
       3,     8,   245,   101,   202,   203,    -1,   204,    -1,   203,
     102,   204,    -1,     1,    -1,    90,    -1,     7,    51,     9,
      90,   107,     3,     8,   245,   101,    -1,     7,    52,     9,
      90,   107,     3,     8,   245,   101,    -1,    -1,     7,    57,
       9,    90,   107,     3,     8,   245,   101,   208,    98,    -1,
      -1,     7,    58,     9,    90,   107,     3,     8,   245,   101,
     210,    98,    -1,    -1,     7,    53,     9,    90,   107,     3,
       8,   245,   101,   212,   213,    -1,   214,    -1,   213,   102,
     214,    -1,   215,   103,   217,   104,    -1,   216,    -1,    90,
     105,    96,   106,    -1,    60,    -1,    61,    -1,    63,    -1,
      65,    -1,    64,    -1,   219,    -1,   217,   102,   219,    -1,
      60,    -1,    61,    -1,    62,    -1,    63,    -1,    65,    -1,
      90,    -1,   218,    -1,   221,    -1,   220,   221,    -1,   222,
      -1,   226,    -1,    -1,     7,    54,     9,    90,   107,     3,
       8,   245,   101,   223,   224,    -1,   225,    -1,   224,   102,
     225,    -1,    90,    -1,     7,    55,     9,    90,   107,     3,
       8,    96,   101,    -1,    -1,     7,    56,     9,    90,   107,
       3,     8,   245,   101,   228,   229,    -1,   230,    -1,   229,
     102,   230,    -1,     1,    -1,    96,   103,   231,   104,    -1,
     232,    -1,   232,   102,   236,    -1,    90,   102,   233,   102,
     234,   102,   235,    -1,    90,    -1,    90,   103,    96,   104,
      -1,   108,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,   119,
      -1,    90,    -1,    96,    -1,    96,   102,    96,   102,   237,
      -1,    87,    -1,    88,    -1,    89,    -1,    91,    -1,    92,
      -1,    93,    -1,    -1,     7,    59,     9,    90,   107,     3,
       8,   245,   101,    -1,     7,   113,     9,    90,   107,     3,
       8,   245,   101,    -1,    -1,     7,   118,     9,    90,   107,
       3,     8,   245,   101,   241,   242,    -1,    -1,   103,   175,
     104,   243,   103,   244,   104,    -1,    98,    -1,   244,   102,
      98,    -1,    95,    -1,   245,   100,    95,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   207,   207,   209,   211,   217,   223,   228,   232,   239,
     245,   249,   251,   257,   255,   264,   265,   269,   270,   272,
     277,   279,   284,   284,   284,   284,   284,   286,   288,   290,
     292,   295,   296,   297,   302,   307,   301,   317,   320,   324,
     325,   327,   328,   330,   333,   334,   335,   339,   339,   339,
     340,   340,   340,   341,   341,   341,   342,   342,   343,   343,
     344,   344,   345,   345,   346,   346,   347,   347,   348,   348,
     349,   349,   350,   351,   355,   357,   358,   359,   363,   364,
     365,   366,   369,   372,   373,   377,   378,   380,   382,   385,
     387,   391,   392,   394,   396,   400,   401,   403,   405,   407,
     411,   412,   415,   414,   417,   421,   422,   424,   427,   431,
     432,   434,   436,   440,   440,   440,   440,   440,   441,   441,
     441,   441,   442,   443,   447,   447,   447,   447,   448,   452,
     452,   452,   452,   452,   452,   452,   453,   458,   463,   457,
     473,   476,   480,   483,   487,   488,   490,   494,   492,   500,
     504,   505,   507,   510,   511,   513,   514,   516,   518,   520,
     522,   523,   525,   526,   527,   528,   529,   531,   535,   539,
     543,   547,   551,   551,   553,   553,   555,   564,   562,   571,
     572,   573,   579,   582,   584,   592,   595,   596,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   610,   608,   619,
     617,   628,   626,   637,   635,   644,   645,   646,   651,   654,
     659,   666,   664,   678,   676,   690,   688,   697,   698,   700,
     703,   705,   708,   710,   712,   714,   716,   719,   720,   722,
     724,   726,   728,   730,   733,   735,   738,   739,   741,   742,
     746,   744,   753,   754,   756,   759,   768,   766,   775,   776,
     777,   781,   784,   786,   788,   795,   800,   805,   811,   813,
     815,   817,   819,   821,   823,   825,   827,   830,   832,   841,
     844,   846,   848,   850,   852,   854,   857,   858,   862,   868,
     866,   876,   875,   879,   881,   884,   888
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTITY", "PORT", "GENERIC", "USE",
  "ATTRIBUTE", "IS", "OF", "CONSTANT", "STRING", "END", "ALL", "PIN_MAP",
  "PHYSICAL_PIN_MAP", "PIN_MAP_STRING", "TRUE", "FALSE", "SIGNAL",
  "TAP_SCAN_IN", "TAP_SCAN_OUT", "TAP_SCAN_MODE", "TAP_SCAN_RESET",
  "TAP_SCAN_CLOCK", "LOW", "BOTH", "IN", "OUT", "INOUT", "BUFFER",
  "LINKAGE", "BIT", "BIT_VECTOR", "TO", "DOWNTO", "PACKAGE", "BODY",
  "TYPE", "SUBTYPE", "RECORD", "ARRAY", "POSITIVE", "RANGE", "CELL_INFO",
  "INSTRUCTION_LENGTH", "INSTRUCTION_OPCODE", "INSTRUCTION_CAPTURE",
  "INSTRUCTION_DISABLE", "INSTRUCTION_GUARD", "INSTRUCTION_PRIVATE",
  "INSTRUCTION_USAGE", "INSTRUCTION_SEQUENCE", "REGISTER_ACCESS",
  "BOUNDARY_CELLS", "BOUNDARY_LENGTH", "BOUNDARY_REGISTER",
  "IDCODE_REGISTER", "USERCODE_REGISTER", "DESIGN_WARNING", "BOUNDARY",
  "BYPASS", "HIGHZ", "IDCODE", "DEVICE_ID", "USERCODE", "INPUT", "OUTPUT2",
  "OUTPUT3", "CONTROL", "CONTROLR", "INTERNAL", "CLOCK", "BIDIR",
  "BIDIR_IN", "BIDIR_OUT", "EXTEST", "SAMPLE", "INTEST", "RUNBIST", "PI",
  "PO", "UPD", "CAP", "X", "ZERO", "ONE", "Z", "WEAK0", "WEAK1",
  "IDENTIFIER", "PULL0", "PULL1", "KEEPER", "SINGLE_QUOTE",
  "QUOTED_STRING", "DECIMAL_NUMBER", "BINARY_PATTERN", "BIN_X_PATTERN",
  "REAL_NUMBER", "CONCATENATE", "SEMICOLON", "COMMA", "LPAREN", "RPAREN",
  "LBRACKET", "RBRACKET", "COLON", "ASTERISK", "BOX", "COLON_EQUAL",
  "PERIOD", "ILLEGAL", "COMPONENT_CONFORMANCE", "PORT_GROUPING",
  "RUNBIST_EXECUTION", "INTEST_EXECUTION", "BSDL_EXTENSION",
  "COMPLIANCE_PATTERNS", "OBSERVE_ONLY", "$accept", "BSDL_Program",
  "Begin_BSDL", "Part_1", "Part_2", "End_BSDL", "VHDL_Generic", "@1",
  "VHDL_Port", "Port_Specifier_List", "Port_Specifier", "Port_List",
  "Function", "Scaler_Or_Vector", "Vector_Range", "VHDL_Use_Part",
  "Standard_Use", "@2", "@3", "Standard_Package", "Standard_Decls",
  "Standard_Decl", "Standard_Attributes", "Attribute_Type", "Type_Body",
  "ID_Bits", "ID_List", "ID_Bit", "Record_Body", "Record_Element",
  "Defered_Constants", "Defered_Constant", "Constant_Body",
  "VHDL_Use_List", "Package_Body", "@4", "Constant_List", "Cell_Constant",
  "Triples_List", "Triple", "Triple_Function", "Triple_Inst", "CAP_Data",
  "VHDL_Use", "@5", "@6", "User_Package", "VHDL_Pin_Map",
  "VHDL_Constant_List", "VHDL_Constant", "VHDL_Constant_Part", "@7",
  "BSDL_Map_String", "Pin_Mapping", "Physical_Pin_Desc",
  "Physical_Pin_List", "Physical_Pin", "VHDL_Tap_Signals",
  "VHDL_Tap_Signal", "VHDL_Tap_Scan_In", "VHDL_Tap_Scan_Out",
  "VHDL_Tap_Scan_Mode", "VHDL_Tap_Scan_Reset", "VHDL_Tap_Scan_Clock",
  "Stop", "Boolean", "VHDL_Inst_Length", "VHDL_Inst_Opcode", "@8",
  "BSDL_Opcode_Table", "Opcode_Desc", "Binary_Pattern_List",
  "Binary_Pattern", "VHDL_Inst_Details", "VHDL_Inst_Detail",
  "VHDL_Inst_Capture", "@9", "VHDL_Inst_Disable", "@10", "VHDL_Inst_Guard",
  "@11", "VHDL_Inst_Private", "@12", "Private_Opcode_List",
  "Private_Opcode", "VHDL_Inst_Usage", "VHDL_Inst_Sequence",
  "VHDL_Idcode_Register", "@13", "VHDL_Usercode_Register", "@14",
  "VHDL_Register_Access", "@15", "Register_String", "Register_Assoc",
  "Register_Decl", "Standard_Reg", "Reg_Opcode_List", "Standard_Inst",
  "Reg_Opcode", "VHDL_Boundary_Details", "VHDL_Boundary_Detail",
  "VHDL_Boundary_Cells", "@16", "BSDL_Cell_List", "BCell_Identifier",
  "VHDL_Boundary_Length", "VHDL_Boundary_Register", "@17",
  "BSDL_Cell_Table", "Cell_Entry", "Cell_Info", "Cell_Spec", "Port_Name",
  "Cell_Function", "Safe_Value", "Disable_Spec", "Disable_Value",
  "VHDL_Design_Warning", "VHDL_Component_Conformance",
  "VHDL_Compliance_Patterns", "@18", "BSDL_Compliance_Pattern", "@19",
  "Bin_X_Pattern_List", "Quoted_String", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   120,   121,   122,   122,   123,   123,   123,   124,   124,
     124,   125,   125,   127,   126,   128,   128,   129,   129,   130,
     131,   131,   132,   132,   132,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   137,   138,   136,   139,   139,   140,
     140,   141,   141,   141,   141,   141,   141,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   151,   152,   152,
     153,   153,   155,   154,   154,   156,   156,   157,   157,   158,
     158,   159,   159,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   161,   161,   161,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   164,   165,   163,
     166,   166,   167,   167,   168,   168,   169,   171,   170,   170,
     172,   172,   173,   174,   174,   175,   175,   176,   176,   176,
     177,   177,   178,   178,   178,   178,   178,   179,   180,   181,
     182,   183,   184,   184,   185,   185,   186,   188,   187,   189,
     189,   189,   190,   191,   191,   192,   193,   193,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   196,   195,   198,
     197,   200,   199,   202,   201,   203,   203,   203,   204,   205,
     206,   208,   207,   210,   209,   212,   211,   213,   213,   214,
     215,   215,   216,   216,   216,   216,   216,   217,   217,   218,
     218,   218,   218,   218,   219,   219,   220,   220,   221,   221,
     223,   222,   224,   224,   225,   226,   228,   227,   229,   229,
     229,   230,   231,   231,   232,   233,   233,   233,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   235,   235,   236,
     237,   237,   237,   237,   237,   237,   238,   238,   239,   241,
     240,   243,   242,   244,   244,   245,   245
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     1,     6,     5,     1,     7,     6,
       1,     4,     1,     0,    11,     5,     1,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     1,     2,     1,     0,     0,     8,    10,     1,     1,
       2,     5,     5,    12,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       5,     8,     8,     4,     1,     1,     3,     1,     3,     3,
       1,     1,     2,     4,     1,     1,     2,     2,     4,     1,
       1,     2,     0,     9,     1,     1,     2,     9,     1,     1,
       3,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,     8,
       8,     1,     9,     1,     1,     2,     2,     0,     8,     1,
       1,     3,     3,     1,     3,     1,     3,     1,     4,     1,
       1,     2,     1,     1,     1,     1,     1,     9,     9,     9,
       9,    13,     1,     1,     1,     1,     9,     0,    11,     1,
       3,     1,     4,     1,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,    11,     0,
      11,     0,    11,     0,    11,     1,     3,     1,     1,     9,
       9,     0,    11,     0,    11,     0,    11,     1,     3,     4,
       1,     4,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       0,    11,     1,     3,     1,     9,     0,    11,     1,     3,
       1,     4,     1,     3,     7,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     1,     1,     1,     1,     1,     0,     9,     9,     0,
      11,     0,     7,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     4,     0,     0,     0,     0,     1,     7,     0,     0,
       0,     3,     0,    10,     0,     0,     0,   160,   162,   163,
     165,   166,   164,    16,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     2,     0,     0,   161,     0,     0,
       0,    33,     0,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,    17,     0,    34,   143,     0,     0,     0,     0,    32,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,   188,   189,   190,   191,   193,
     194,   195,   196,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,   144,     0,     0,   137,   101,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     187,     0,   236,   238,   239,     0,    18,    15,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,   149,     0,
     146,   145,     5,     0,   285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     9,     0,
      27,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,    35,     0,     0,     0,     0,   286,    13,
     174,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
       0,   167,   168,   169,   170,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    38,     0,    36,     0,     0,
       0,     0,    14,     0,   277,   176,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,     0,   147,   141,     0,   139,   172,
     173,     0,     0,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   142,   278,     0,
       0,     0,     0,   280,     0,   197,   199,   201,   203,   209,
     210,   215,   211,   213,     0,     0,     0,    46,     0,     0,
       0,     0,    39,     0,   148,   150,     0,   171,   157,   159,
       0,   155,   181,     0,   178,   179,     0,     0,     0,     0,
       0,     0,     0,   240,   245,     0,    73,    47,    48,    49,
      51,    52,    50,    58,    59,    60,    61,    62,    63,    64,
      65,    68,    69,    70,    71,    66,    67,    72,    53,    54,
      55,    56,    57,     0,     0,     0,     0,     0,     0,    40,
       0,    95,     0,     0,     0,     0,     0,   281,     0,     0,
     198,   200,   202,   207,   208,   204,   205,   222,   223,   224,
     226,   225,     0,   216,   217,     0,   220,   212,   214,     0,
     246,     0,     0,     0,     0,     0,    99,     0,    97,     0,
      96,     0,   152,   153,   151,     0,     0,   156,     0,   185,
       0,   183,   180,     0,     0,     0,     0,   244,   241,   242,
       0,    77,    75,    74,    76,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,   182,   206,     0,   218,   229,   230,   231,   232,   233,
     234,     0,   235,   227,     0,   250,     0,   247,   248,    41,
       0,    94,     0,     0,    91,     0,    90,     0,    87,     0,
       0,     0,    85,    42,    44,    45,     0,     0,   154,     0,
     283,     0,   184,   221,     0,   219,   243,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,    78,     0,    79,
      98,     0,   104,     0,   140,     0,   282,   228,     0,     0,
     252,   249,     0,     0,    83,     0,     0,     0,    89,    86,
      88,    37,     0,   284,     0,   251,     0,     0,    93,     0,
       0,    80,     0,   255,   257,     0,     0,   253,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,   105,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,     0,     0,     0,    81,    82,     0,     0,   106,
     256,     0,     0,    43,     0,   102,   267,   268,   254,   270,
     271,   272,   273,   274,   275,   269,     0,     0,     0,   103,
       0,   112,     0,     0,   109,   123,   113,   114,   115,   117,
     118,   116,   119,   120,   121,   122,     0,     0,     0,     0,
     110,   107,   128,   124,   125,   126,   127,     0,     0,   136,
     129,   130,   131,   132,   133,   134,   135,     0,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     9,    15,    34,    10,   250,    25,    60,
      61,    62,   144,   182,   244,    43,    44,    99,   245,   277,
     351,   352,   403,   475,   481,   520,   521,   522,   513,   514,
     410,   411,   448,    69,   554,   637,   600,   601,   643,   644,
     656,   667,   677,    70,   153,   281,   308,    66,   103,   104,
     150,   329,   354,   355,   452,   360,   361,    16,    17,    18,
      19,    20,    21,    22,   311,   222,    38,    56,   334,   364,
     365,   460,   461,    83,    84,    85,   366,    86,   367,    87,
     368,    88,   369,   425,   426,    89,    90,    91,   371,    92,
     372,    93,   370,   433,   434,   435,   436,   501,   502,   503,
     131,   132,   133,   439,   468,   469,   134,   178,   470,   507,
     508,   559,   560,   585,   612,   628,   587,   635,    35,    67,
      39,   312,   333,   458,   531,   155
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -348
static const yytype_int16 yypact[] =
{
     182,  -348,   -67,    51,    49,   103,  -348,  -348,    15,   163,
      30,  -348,   106,  -348,   225,   179,   127,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,    60,    29,    40,   206,   218,   231,
     235,   246,  -348,   143,  -348,   248,    -8,  -348,   268,   312,
     230,  -348,   232,   177,   315,   313,   233,   236,   237,   238,
     239,   316,   240,   322,   323,   287,   327,   290,   268,  -348,
     131,  -348,    93,  -348,  -348,    -7,   326,   180,   250,   315,
    -348,   227,   234,   241,   242,   243,   244,   252,   251,   253,
     254,   329,   171,   332,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,   327,   230,   255,   256,   223,   257,
     336,   338,     9,   326,  -348,   339,   326,  -348,  -348,   259,
     340,   341,   342,   343,   344,   258,  -348,   260,   263,   265,
     348,   349,   355,   357,   360,   362,   363,   364,   365,   159,
    -348,   368,  -348,  -348,  -348,   332,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,   245,   366,   286,   288,  -348,   270,
    -348,  -348,   326,   269,  -348,    99,   373,   374,   375,   376,
     377,   383,   384,   385,   282,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   390,   391,    77,  -348,  -348,   368,
    -348,   298,  -348,   309,   295,   296,   388,   392,   311,   310,
     262,   262,   262,   262,   314,   399,   400,   401,   409,   317,
     318,   319,   320,   321,   324,   325,   328,   330,   331,   333,
     404,  -348,   334,  -348,   411,   412,   335,   337,  -348,  -348,
    -348,  -348,   345,   346,   347,   350,   351,   259,   353,   259,
     408,   415,   416,   417,   419,   426,   430,   431,   433,   436,
     352,   354,   367,   247,   356,    17,   432,   434,   259,  -348,
     372,  -348,  -348,  -348,  -348,   361,   183,   369,   185,   259,
     435,   444,   445,   446,   447,   448,   450,   456,   457,   438,
     441,   359,   371,   378,  -348,  -348,   379,  -348,   453,   259,
     187,   119,  -348,   264,  -348,  -348,  -348,   191,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   463,   464,   470,
    -348,  -348,   467,   380,   193,  -348,  -348,   386,  -348,  -348,
    -348,   381,   387,  -348,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   259,   382,   469,   158,  -348,  -348,   389,
     472,   393,    70,  -348,    24,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,   213,   394,   259,  -348,    35,    64,
     -10,   151,  -348,   395,   396,  -348,   473,  -348,   397,  -348,
     129,  -348,  -348,   398,   402,  -348,   405,   403,   406,    25,
     108,   407,   410,  -348,  -348,   215,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,   413,   474,   476,   478,   479,    26,  -348,
     151,  -348,   -57,   389,   249,   414,    70,  -348,   418,   421,
    -348,  -348,  -348,  -348,  -348,   420,  -348,  -348,  -348,  -348,
    -348,  -348,   422,   423,  -348,   425,  -348,  -348,  -348,   424,
    -348,     8,   451,     0,   477,   480,  -348,   427,  -348,   155,
    -348,    70,  -348,  -348,  -348,   428,   429,  -348,   437,  -348,
     160,  -348,  -348,   439,   440,   108,   114,  -348,   442,  -348,
      16,  -348,  -348,  -348,  -348,   449,   443,  -348,    27,   452,
      19,   455,   458,   459,   462,   461,   161,   460,  -348,   454,
     418,  -348,  -348,   465,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,   164,  -348,  -348,   424,  -348,   466,   468,  -348,  -348,
     471,  -348,   475,    10,  -348,   481,  -348,   482,  -348,   483,
     165,   168,  -348,  -348,  -348,  -348,   484,   485,  -348,   121,
    -348,   169,  -348,  -348,   114,  -348,  -348,   486,   487,   488,
     489,   490,  -348,   283,   491,   493,     7,  -348,   498,  -348,
    -348,   121,  -348,   495,  -348,   492,  -348,  -348,   494,   496,
     497,  -348,   499,   500,  -348,   501,   502,   503,  -348,  -348,
    -348,  -348,   504,  -348,   -66,  -348,   506,   505,  -348,   507,
     508,  -348,   511,   510,  -348,   512,   513,  -348,   514,   515,
     517,    37,   509,    73,   520,   516,   527,   528,  -348,   529,
     224,  -348,   518,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,   519,   521,   523,  -348,  -348,   522,   530,  -348,
    -348,    92,   150,  -348,   524,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,   525,   526,   531,  -348,
       2,  -348,     4,   172,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,   534,     2,   532,    59,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,   535,    44,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,   536,  -348
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
     533,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
      79,  -347,  -348,  -348,  -348,  -348,  -348,   -49,  -348,   -14,
     153,  -209,  -348,  -348,   -44,  -348,  -348,   -88,  -348,  -141,
    -348,  -348,  -348,   541,  -348,  -348,  -348,   537,   538,   -55,
    -348,  -348,  -348,   122,  -348,    86,  -186,  -348,   542,  -348,
    -348,  -348,  -348,  -348,  -348,    65,   539,   545,  -348,  -348,
     102,  -348,    48,   544,   -40,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,    76,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,    78,  -348,  -348,  -348,  -348,    11,
     540,  -102,  -348,  -348,  -348,    38,  -348,   370,  -348,  -348,
       3,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -227
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -277
static const yytype_int16 yytable[] =
{
     256,   477,   258,   641,   409,   645,   406,   100,   516,   471,
     148,   511,    27,    28,    29,    30,    31,   505,   275,   472,
     516,   280,   541,     5,   583,   362,   423,   446,   511,   177,
      41,    23,   287,   358,    24,    42,   376,    53,   598,   359,
     478,   479,   584,   130,   517,   669,   451,   599,   151,   377,
       7,     6,   304,   276,     8,   378,   379,   380,   381,   382,
     662,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     646,   647,   648,   649,   650,   651,   652,   177,   653,   654,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   130,   344,   151,   473,   149,
     512,   519,   409,   480,   474,   642,   101,   407,   404,   518,
      54,    11,   506,   519,   363,   424,   447,   512,    12,   375,
     306,    26,   552,   655,   670,   671,   672,   673,   674,   675,
     676,   174,   175,   210,    36,   663,   664,   665,   666,   603,
     604,   605,   606,   607,   608,   609,   610,    45,   398,   399,
     400,   401,   347,   402,   405,   307,   347,   553,   348,   347,
     358,   408,   348,    40,    13,   348,   359,   485,   427,   428,
      14,   429,   430,   431,   495,   496,   497,   498,    64,   499,
      32,    64,   626,     1,    65,     2,    33,   105,   627,   349,
     350,  -276,   611,   349,   350,    97,   349,   350,   432,   188,
      98,   450,    51,   189,   500,   450,   120,   121,   122,   123,
     124,   125,   126,   174,   175,    46,   127,   128,   120,   121,
     122,   123,   124,   125,   126,   598,   453,    47,   127,   128,
     457,   416,    95,   417,   599,    96,   618,   629,   630,   631,
      48,   632,   633,   634,    49,    27,    28,    29,    30,    31,
     139,   140,   141,   142,   143,    50,   223,   224,   225,   408,
      52,   455,   490,   416,   491,   528,   534,   546,   535,   547,
     548,   555,   549,   556,   657,    55,   658,   180,   181,   220,
     221,   272,   273,   188,   284,   188,   286,   188,   305,   309,
     310,   188,   313,   188,   328,   188,   335,   188,   336,   188,
     337,   188,   338,   188,   339,   188,   340,   188,   341,   188,
     342,   188,   343,   188,   373,   188,   440,   565,   566,    57,
      59,    68,    63,    72,    71,    77,    73,    74,    75,    76,
      78,    79,    80,    81,    82,    53,   102,   109,   119,   129,
     107,   110,   115,   117,   118,   146,   138,   147,   111,   112,
     113,   114,   116,   100,   154,   164,   137,   165,   166,   156,
     157,   158,   159,   160,   167,   161,   168,   162,   145,   169,
     163,   170,   171,   172,   173,   176,   184,   186,   185,   183,
     187,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   212,   214,   215,   216,   217,   218,   227,   228,   229,
     213,   219,   230,   242,   246,   247,   259,   226,   260,   261,
     262,   240,   263,   241,   231,   232,   233,   234,   235,   264,
     243,   236,   237,   265,   266,   238,   267,   239,   249,   268,
     278,   297,   279,   288,   298,   248,   251,   252,   253,   257,
     255,   254,   289,   290,   291,   292,   293,   271,   294,   269,
     274,   270,   282,   283,   295,   296,   299,   300,   303,   302,
     285,   323,   324,   325,   301,   326,   330,   346,   345,   353,
     356,   327,   442,   408,   443,   331,   444,   445,   482,   449,
     332,   483,   476,   421,   357,   374,   422,   569,   413,   542,
     415,   418,   412,   420,   419,   437,   526,   571,   438,   414,
     456,   363,   619,   539,   467,   459,   660,   567,   487,   591,
     441,   462,   463,   595,   596,   465,   597,   464,   466,   424,
     564,   562,   572,   488,   484,   454,   493,   486,   532,   492,
     489,   561,   536,   494,   504,   557,   510,     0,     0,   211,
     509,   527,   530,     0,     0,   515,   523,     0,    37,   524,
     525,   529,     0,     0,     0,     0,     0,     0,   636,   537,
     538,   533,     0,     0,     0,     0,   558,   543,    58,   563,
       0,   545,   540,   506,   544,   550,   551,   568,   570,     0,
     573,     0,     0,     0,   582,     0,   574,   579,   580,   576,
     575,   578,   586,    94,   106,   602,   614,   581,   577,   588,
     108,   589,   590,   592,   593,   594,   613,   615,   616,   617,
     625,   621,   620,   622,   623,     0,     0,   639,   136,   624,
       0,     0,     0,   661,   640,   638,   659,   668,   135,     0,
     678,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179
};

static const yytype_int16 yycheck[] =
{
     227,     1,   229,     1,   351,     1,    16,    14,     1,     1,
       1,     1,    20,    21,    22,    23,    24,     1,     1,    11,
       1,   248,    12,    90,    90,     1,     1,     1,     1,   131,
       1,     1,   259,    90,     4,     6,     1,    45,     1,    96,
      40,    41,   108,    83,    25,     1,   103,    10,   103,    14,
       1,     0,   279,    36,     5,    20,    21,    22,    23,    24,
       1,   288,   289,   290,   291,   292,   293,   294,   295,   296,
      66,    67,    68,    69,    70,    71,    72,   179,    74,    75,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,   135,   323,   152,    90,    90,
      90,    94,   449,   103,    96,   103,   113,   117,    44,    90,
     118,     8,    96,    94,    90,    90,    90,    90,   103,   346,
       1,    15,     1,   119,    80,    81,    82,    83,    84,    85,
      86,    54,    55,    56,     7,    76,    77,    78,    79,    66,
      67,    68,    69,    70,    71,    72,    73,   107,   113,   114,
     115,   116,     1,   118,    90,    36,     1,    36,     7,     1,
      90,    10,     7,   103,     1,     7,    96,    12,    60,    61,
       7,    63,    64,    65,    60,    61,    62,    63,     1,    65,
       1,     1,    90,     1,     7,     3,     7,     7,    96,    38,
      39,    12,   119,    38,    39,   102,    38,    39,    90,   100,
     107,   410,    59,   104,    90,   414,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     9,    57,    58,    47,    48,
      49,    50,    51,    52,    53,     1,   412,     9,    57,    58,
     416,   102,   101,   104,    10,   104,    12,    87,    88,    89,
       9,    91,    92,    93,     9,    20,    21,    22,    23,    24,
      27,    28,    29,    30,    31,     9,   191,   192,   193,    10,
      12,    12,   102,   102,   104,   104,   102,   102,   104,   104,
     102,   102,   104,   104,   102,     7,   104,    32,    33,    17,
      18,    34,    35,   100,   101,   100,   101,   100,   101,    25,
      26,   100,   101,   100,   101,   100,   101,   100,   101,   100,
     101,   100,   101,   100,   101,   100,   101,   100,   101,   100,
     101,   100,   101,   100,   101,   100,   101,    34,    35,     7,
      90,     6,    90,    90,    11,     9,    90,    90,    90,    90,
      90,     9,     9,    46,     7,    45,    10,   110,     9,     7,
      90,   107,    90,    90,    90,     9,    90,     9,   107,   107,
     107,   107,   101,    14,    95,    90,   101,     9,     9,    19,
      19,    19,    19,    19,     9,   107,     9,   107,   111,     9,
     107,     9,     9,     9,     9,     7,    90,   107,    90,    13,
     111,     8,     8,     8,     8,     8,     3,     3,     3,   107,
      90,    90,    90,    90,    90,    90,    90,    90,    90,     9,
       9,   103,   107,   107,    16,    13,    95,     8,     8,     8,
     101,   101,     3,     9,     3,     3,     8,   103,     3,     3,
       3,    90,     3,    90,   107,   107,   107,   107,   107,     3,
      96,   107,   107,     3,     3,   107,     3,   107,   101,     3,
       8,     3,     8,     8,     3,   110,   101,   101,   101,    96,
      99,   101,     8,     8,     8,     8,     8,    90,     8,   107,
     104,   107,    90,   102,     8,     8,   107,    96,    15,    90,
     101,     8,     8,     3,    96,     8,    90,     8,    96,    90,
       8,   101,     8,    10,     8,   104,     8,     8,    11,   410,
     103,    11,    41,    90,   101,   101,    90,   546,   102,   513,
     103,   103,   107,    98,   102,    98,    44,   551,    98,   356,
      96,    90,   600,    42,    90,    97,   657,    26,    90,     8,
     107,   419,   102,     9,     9,   102,     9,   105,   103,    90,
      40,    43,    37,   104,   107,   413,    96,   451,   490,   463,
     103,   538,   504,   465,   102,   534,   103,    -1,    -1,   179,
     101,    90,    98,    -1,    -1,   103,   101,    -1,    16,   101,
     101,   101,    -1,    -1,    -1,    -1,    -1,    -1,    44,   103,
     102,   106,    -1,    -1,    -1,    -1,    90,    96,    39,    90,
      -1,    98,   107,    96,   102,   101,   101,    94,    90,    -1,
      98,    -1,    -1,    -1,    90,    -1,   102,    96,    96,   102,
     104,   101,    96,    58,    67,    96,    90,   104,   109,   104,
      69,   104,   104,   103,   102,   102,    96,    90,    90,    90,
      90,   102,   104,   102,   101,    -1,    -1,   101,    95,   107,
      -1,    -1,    -1,   101,   103,   110,   102,   102,    94,    -1,
     104,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,   121,   122,    90,     0,     1,     5,   123,
     126,     8,   103,     1,     7,   124,   177,   178,   179,   180,
     181,   182,   183,     1,     4,   128,    15,    20,    21,    22,
      23,    24,     1,     7,   125,   238,     7,   178,   186,   240,
     103,     1,     6,   135,   136,   107,     9,     9,     9,     9,
       9,    59,    12,    45,   118,     7,   187,     7,   186,    90,
     129,   130,   131,    90,     1,     7,   167,   239,     6,   153,
     163,    11,    90,    90,    90,    90,    90,     9,    90,     9,
       9,    46,     7,   193,   194,   195,   197,   199,   201,   205,
     206,   207,   209,   211,   187,   101,   104,   102,   107,   137,
      14,   113,    10,   168,   169,     7,   167,    90,   163,   110,
     107,   107,   107,   107,   107,    90,   101,    90,    90,     9,
      47,    48,    49,    50,    51,    52,    53,    57,    58,     7,
     194,   220,   221,   222,   226,   193,   130,   101,    90,    27,
      28,    29,    30,    31,   132,   111,     9,     9,     1,    90,
     170,   169,   168,   164,    95,   245,    19,    19,    19,    19,
      19,   107,   107,   107,    90,     9,     9,     9,     9,     9,
       9,     9,     9,     9,    54,    55,     7,   221,   227,   220,
      32,    33,   133,    13,    90,    90,   107,   111,   100,   104,
       8,     8,     8,     8,     8,     3,     3,     3,   107,    90,
      90,    90,    90,    90,    90,    90,    90,    90,     9,     9,
      56,   227,   103,   101,   107,   107,    16,    13,    95,   101,
      17,    18,   185,   185,   185,   185,   103,     8,     8,     8,
       3,   107,   107,   107,   107,   107,   107,   107,   107,   107,
      90,    90,     9,    96,   134,   138,     3,     3,   110,   101,
     127,   101,   101,   101,   101,    99,   245,    96,   245,     8,
       3,     3,     3,     3,     3,     3,     3,     3,     3,   107,
     107,    90,    34,    35,   104,     1,    36,   139,     8,     8,
     245,   165,    90,   102,   101,   101,   101,   245,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     3,     3,   107,
      96,    96,    90,    15,   245,   101,     1,    36,   166,    25,
      26,   184,   241,   101,   245,   245,   245,   245,   245,   245,
     245,   245,   245,     8,     8,     3,     8,   101,   101,   171,
      90,   104,   103,   242,   188,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   245,    96,     8,     1,     7,    38,
      39,   140,   141,    90,   172,   173,     8,   101,    90,    96,
     175,   176,     1,    90,   189,   190,   196,   198,   200,   202,
     212,   208,   210,   101,   101,   245,     1,    14,    20,    21,
      22,    23,    24,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   113,   114,
     115,   116,   118,   142,    44,    90,    16,   117,    10,   141,
     150,   151,   107,   102,   150,   103,   102,   104,   103,   102,
      98,    90,    90,     1,    90,   203,   204,    60,    61,    63,
      64,    65,    90,   213,   214,   215,   216,    98,    98,   223,
     101,   107,     8,     8,     8,     8,     1,    90,   152,   140,
     151,   103,   174,   176,   173,    12,    96,   176,   243,    97,
     191,   192,   190,   102,   105,   102,   103,    90,   224,   225,
     228,     1,    11,    90,    96,   143,    41,     1,    40,    41,
     103,   144,    11,    11,   107,    12,   175,    90,   104,   103,
     102,   104,   204,    96,   214,    60,    61,    62,    63,    65,
      90,   217,   218,   219,   102,     1,    96,   229,   230,   101,
     103,     1,    90,   148,   149,   103,     1,    25,    90,    94,
     145,   146,   147,   101,   101,   101,    44,    90,   104,   101,
      98,   244,   192,   106,   102,   104,   225,   103,   102,    42,
     107,    12,   149,    96,   102,    98,   102,   104,   102,   104,
     101,   101,     1,    36,   154,   102,   104,   219,    90,   231,
     232,   230,    43,    90,    40,    34,    35,    26,    94,   147,
      90,   154,    37,    98,   102,   104,   102,   109,   101,    96,
      96,   104,    90,    90,   108,   233,    96,   236,   104,   104,
     104,     8,   103,   102,   102,     9,     9,     9,     1,    10,
     156,   157,    96,    66,    67,    68,    69,    70,    71,    72,
      73,   119,   234,    96,    90,    90,    90,    90,    12,   157,
     104,   102,   102,   101,   107,    90,    90,    96,   235,    87,
      88,    89,    91,    92,    93,   237,    44,   155,   110,   101,
     103,     1,   103,   158,   159,     1,    66,    67,    68,    69,
      70,    71,    72,    74,    75,   119,   160,   102,   104,   102,
     159,   101,     1,    76,    77,    78,    79,   161,   102,     1,
      80,    81,    82,    83,    84,    85,    86,   162,   104
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (priv_data, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, priv_data); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_priv_t *priv_data)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, priv_data)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    parser_priv_t *priv_data;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (priv_data);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_priv_t *priv_data)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, priv_data)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    parser_priv_t *priv_data;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, priv_data);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, parser_priv_t *priv_data)
#else
static void
yy_reduce_print (yyvsp, yyrule, priv_data)
    YYSTYPE *yyvsp;
    int yyrule;
    parser_priv_t *priv_data;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , priv_data);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, priv_data); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_priv_t *priv_data)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, priv_data)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    parser_priv_t *priv_data;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (priv_data);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (parser_priv_t *priv_data);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (parser_priv_t *priv_data)
#else
int
yyparse (priv_data)
    parser_priv_t *priv_data;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 210 "bsdl_bison.y"
    { bsdl_set_entity(priv_data, (yyvsp[(2) - (3)].str)); }
    break;

  case 4:
#line 212 "bsdl_bison.y"
    {Print_Error(priv_data, _("Improper Entity declaration"));
                    Print_Error(priv_data, _("Check if source file is BSDL"));
                    BUMP_ERROR; YYABORT; /* Probably not a BSDL source file */
                   }
    break;

  case 7:
#line 229 "bsdl_bison.y"
    {Print_Error(priv_data, _("Syntax Error"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 10:
#line 246 "bsdl_bison.y"
    {Print_Error(priv_data, _("Syntax Error"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 11:
#line 250 "bsdl_bison.y"
    { free((yyvsp[(3) - (4)].str)); }
    break;

  case 12:
#line 252 "bsdl_bison.y"
    {Print_Error(priv_data, _("Syntax Error"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 13:
#line 257 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 14:
#line 262 "bsdl_bison.y"
    { free((yyvsp[(11) - (11)].str)); }
    break;

  case 16:
#line 266 "bsdl_bison.y"
    {Print_Error(priv_data, _("Improper Port declaration"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 19:
#line 273 "bsdl_bison.y"
    {
                     bsdl_prt_apply_port(priv_data);
                   }
    break;

  case 20:
#line 278 "bsdl_bison.y"
    { bsdl_prt_add_name(priv_data, (yyvsp[(1) - (1)].str)); }
    break;

  case 21:
#line 280 "bsdl_bison.y"
    {
                     bsdl_prt_add_name(priv_data, (yyvsp[(3) - (3)].str));
                   }
    break;

  case 27:
#line 287 "bsdl_bison.y"
    { bsdl_prt_add_bit(priv_data); }
    break;

  case 29:
#line 291 "bsdl_bison.y"
    { bsdl_prt_add_range(priv_data, (yyvsp[(1) - (3)].integer), (yyvsp[(3) - (3)].integer)); }
    break;

  case 30:
#line 293 "bsdl_bison.y"
    { bsdl_prt_add_range(priv_data, (yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].integer)); }
    break;

  case 33:
#line 298 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Package declaration(s)"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 34:
#line 302 "bsdl_bison.y"
    {/* Parse Standard 1149.1 Package */
                    strcpy(priv_data->Package_File_Name, (yyvsp[(2) - (2)].str));
                    free((yyvsp[(2) - (2)].str));
                   }
    break;

  case 35:
#line 307 "bsdl_bison.y"
    {
                     priv_data->Reading_Package = 1;
                     bsdl_flex_switch_file(priv_data->scanner,
                                           priv_data->Package_File_Name);
                   }
    break;

  case 36:
#line 313 "bsdl_bison.y"
    {
                     priv_data->Reading_Package = 0;
                   }
    break;

  case 37:
#line 319 "bsdl_bison.y"
    { free((yyvsp[(2) - (10)].str)); free((yyvsp[(8) - (10)].str)); }
    break;

  case 38:
#line 321 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Standard Package"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 42:
#line 329 "bsdl_bison.y"
    { free((yyvsp[(2) - (5)].str)); }
    break;

  case 43:
#line 332 "bsdl_bison.y"
    { free((yyvsp[(11) - (12)].str)); }
    break;

  case 46:
#line 336 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Standard Declarations"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 73:
#line 352 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Attribute identifier"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 74:
#line 356 "bsdl_bison.y"
    { free((yyvsp[(1) - (1)].str)); }
    break;

  case 77:
#line 360 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Attribute type identification"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 81:
#line 368 "bsdl_bison.y"
    { free((yyvsp[(8) - (8)].str)); }
    break;

  case 82:
#line 371 "bsdl_bison.y"
    { free((yyvsp[(8) - (8)].str)); }
    break;

  case 84:
#line 374 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Type definition"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 87:
#line 381 "bsdl_bison.y"
    { free((yyvsp[(1) - (1)].str)); }
    break;

  case 88:
#line 383 "bsdl_bison.y"
    { free((yyvsp[(3) - (3)].str)); }
    break;

  case 89:
#line 386 "bsdl_bison.y"
    { free((yyvsp[(2) - (3)].str)); }
    break;

  case 90:
#line 388 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Bit definition"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 93:
#line 395 "bsdl_bison.y"
    { free((yyvsp[(1) - (4)].str)); free((yyvsp[(3) - (4)].str)); }
    break;

  case 94:
#line 397 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Record Definition"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 98:
#line 406 "bsdl_bison.y"
    { free((yyvsp[(1) - (4)].str)); }
    break;

  case 99:
#line 408 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in defered constant"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 102:
#line 415 "bsdl_bison.y"
    { free((yyvsp[(3) - (7)].str)); free((yyvsp[(7) - (7)].str)); }
    break;

  case 104:
#line 418 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Package Body definition"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 107:
#line 426 "bsdl_bison.y"
    { free((yyvsp[(2) - (9)].str)); }
    break;

  case 108:
#line 428 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Cell Constant definition"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 112:
#line 437 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Cell Data Record"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 123:
#line 444 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Cell_Type Function field"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 128:
#line 449 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in BScan_Inst Instruction field"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 136:
#line 454 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Constant CAP data source field"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 137:
#line 458 "bsdl_bison.y"
    {/* Parse Standard 1149.1 Package */
                    strcpy(priv_data->Package_File_Name, (yyvsp[(2) - (2)].str));
                    free((yyvsp[(2) - (2)].str));
                   }
    break;

  case 138:
#line 463 "bsdl_bison.y"
    {
                     priv_data->Reading_Package = 1;
                     bsdl_flex_switch_file(priv_data->scanner,
                                           priv_data->Package_File_Name);
                   }
    break;

  case 139:
#line 469 "bsdl_bison.y"
    {
                     priv_data->Reading_Package = 0;
                   }
    break;

  case 140:
#line 475 "bsdl_bison.y"
    { free((yyvsp[(2) - (8)].str)); free((yyvsp[(6) - (8)].str)); }
    break;

  case 141:
#line 477 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in User-Defined Package declarations"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 142:
#line 482 "bsdl_bison.y"
    { free((yyvsp[(4) - (9)].str)); }
    break;

  case 143:
#line 484 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Pin_Map Attribute"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 147:
#line 494 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 148:
#line 499 "bsdl_bison.y"
    { free((yyvsp[(1) - (8)].str)); }
    break;

  case 149:
#line 501 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Pin_Map_String constant declaration"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 152:
#line 508 "bsdl_bison.y"
    { free((yyvsp[(1) - (3)].str)); }
    break;

  case 157:
#line 517 "bsdl_bison.y"
    { free((yyvsp[(1) - (1)].str)); }
    break;

  case 158:
#line 519 "bsdl_bison.y"
    { free((yyvsp[(1) - (4)].str)); }
    break;

  case 167:
#line 533 "bsdl_bison.y"
    { free((yyvsp[(4) - (9)].str)); }
    break;

  case 168:
#line 537 "bsdl_bison.y"
    { free((yyvsp[(4) - (9)].str)); }
    break;

  case 169:
#line 541 "bsdl_bison.y"
    { free((yyvsp[(4) - (9)].str)); }
    break;

  case 170:
#line 545 "bsdl_bison.y"
    { free((yyvsp[(4) - (9)].str)); }
    break;

  case 171:
#line 549 "bsdl_bison.y"
    { free((yyvsp[(4) - (13)].str)); free((yyvsp[(9) - (13)].str)); }
    break;

  case 176:
#line 557 "bsdl_bison.y"
    {
                     bsdl_set_instruction_length(priv_data, (yyvsp[(8) - (9)].integer));
                     free((yyvsp[(4) - (9)].str));
                   }
    break;

  case 177:
#line 564 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 178:
#line 569 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); }
    break;

  case 181:
#line 574 "bsdl_bison.y"
    {Print_Error(priv_data,
                      _("Error in Instruction_Opcode attribute statement"));
                    BUMP_ERROR;
                    YYABORT; }
    break;

  case 182:
#line 580 "bsdl_bison.y"
    { bsdl_add_instruction(priv_data, (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].str)); }
    break;

  case 183:
#line 583 "bsdl_bison.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 184:
#line 585 "bsdl_bison.y"
    {
                     Print_Warning(priv_data,
                       _("Multiple opcode patterns are not supported, first pattern will be used"));
                     (yyval.str) = (yyvsp[(1) - (3)].str);
                     free((yyvsp[(3) - (3)].str));
                   }
    break;

  case 185:
#line 593 "bsdl_bison.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 197:
#line 610 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 198:
#line 615 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); free((yyvsp[(11) - (11)].str)); }
    break;

  case 199:
#line 619 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 200:
#line 624 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); free((yyvsp[(11) - (11)].str)); }
    break;

  case 201:
#line 628 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 202:
#line 633 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); free((yyvsp[(11) - (11)].str)); }
    break;

  case 203:
#line 637 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 204:
#line 642 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); }
    break;

  case 207:
#line 647 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Opcode List"));
                    BUMP_ERROR;
                    YYABORT; }
    break;

  case 208:
#line 652 "bsdl_bison.y"
    { free((yyvsp[(1) - (1)].str)); }
    break;

  case 209:
#line 656 "bsdl_bison.y"
    {/* Syntax of string content to be changed in future */
                    free((yyvsp[(4) - (9)].str)); }
    break;

  case 210:
#line 661 "bsdl_bison.y"
    {/* Syntax of string content to be determined in future */
                    free((yyvsp[(4) - (9)].str)); }
    break;

  case 211:
#line 666 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 212:
#line 671 "bsdl_bison.y"
    {
                     bsdl_set_idcode(priv_data, (yyvsp[(11) - (11)].str));
                     free((yyvsp[(4) - (11)].str));
                   }
    break;

  case 213:
#line 678 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 214:
#line 683 "bsdl_bison.y"
    {
		     bsdl_set_usercode(priv_data, (yyvsp[(11) - (11)].str));
		     free((yyvsp[(4) - (11)].str));
		   }
    break;

  case 215:
#line 690 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 216:
#line 695 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); }
    break;

  case 219:
#line 701 "bsdl_bison.y"
    { bsdl_ac_apply_assoc(priv_data); }
    break;

  case 220:
#line 704 "bsdl_bison.y"
    { bsdl_ac_set_register(priv_data, (yyvsp[(1) - (1)].str), 0); }
    break;

  case 221:
#line 706 "bsdl_bison.y"
    { bsdl_ac_set_register(priv_data, (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].integer)); }
    break;

  case 222:
#line 709 "bsdl_bison.y"
    { (yyval.str) = strdup("BOUNDARY"); }
    break;

  case 223:
#line 711 "bsdl_bison.y"
    { (yyval.str) = strdup("BYPASS"); }
    break;

  case 224:
#line 713 "bsdl_bison.y"
    { (yyval.str) = strdup("IDCODE"); }
    break;

  case 225:
#line 715 "bsdl_bison.y"
    { (yyval.str) = strdup("USERCODE"); }
    break;

  case 226:
#line 717 "bsdl_bison.y"
    { (yyval.str) = strdup("DEVICE_ID"); }
    break;

  case 229:
#line 723 "bsdl_bison.y"
    { (yyval.str) = strdup("BOUNDARY"); }
    break;

  case 230:
#line 725 "bsdl_bison.y"
    { (yyval.str) = strdup("BYPASS"); }
    break;

  case 231:
#line 727 "bsdl_bison.y"
    { (yyval.str) = strdup("HIGHZ"); }
    break;

  case 232:
#line 729 "bsdl_bison.y"
    { (yyval.str) = strdup("IDCODE"); }
    break;

  case 233:
#line 731 "bsdl_bison.y"
    { (yyval.str) = strdup("USERCODE"); }
    break;

  case 234:
#line 734 "bsdl_bison.y"
    { bsdl_ac_add_instruction(priv_data, (yyvsp[(1) - (1)].str)); }
    break;

  case 235:
#line 736 "bsdl_bison.y"
    { bsdl_ac_add_instruction(priv_data, (yyvsp[(1) - (1)].str)); }
    break;

  case 240:
#line 746 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 241:
#line 751 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); }
    break;

  case 244:
#line 757 "bsdl_bison.y"
    { free((yyvsp[(1) - (1)].str)); }
    break;

  case 245:
#line 761 "bsdl_bison.y"
    {
                     bsdl_set_bsr_length(priv_data, (yyvsp[(8) - (9)].integer));
                     free((yyvsp[(4) - (9)].str));
                   }
    break;

  case 246:
#line 768 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 247:
#line 773 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); }
    break;

  case 250:
#line 778 "bsdl_bison.y"
    {Print_Error(priv_data, _("Error in Boundary Cell description"));
                    BUMP_ERROR; YYABORT; }
    break;

  case 251:
#line 782 "bsdl_bison.y"
    { bsdl_ci_apply_cell_info(priv_data, (yyvsp[(1) - (4)].integer)); }
    break;

  case 252:
#line 785 "bsdl_bison.y"
    { bsdl_ci_no_disable(priv_data); }
    break;

  case 254:
#line 790 "bsdl_bison.y"
    {
                     free((yyvsp[(1) - (7)].str));
                     bsdl_ci_set_cell_spec(priv_data, (yyvsp[(5) - (7)].integer), (yyvsp[(7) - (7)].str));
                   }
    break;

  case 255:
#line 796 "bsdl_bison.y"
    {
                     bsdl_prt_add_name(priv_data, (yyvsp[(1) - (1)].str));
                     bsdl_prt_add_bit(priv_data);
                   }
    break;

  case 256:
#line 801 "bsdl_bison.y"
    {
                     bsdl_prt_add_name(priv_data, (yyvsp[(1) - (4)].str));
                     bsdl_prt_add_range(priv_data, (yyvsp[(3) - (4)].integer), (yyvsp[(3) - (4)].integer));
                   }
    break;

  case 257:
#line 806 "bsdl_bison.y"
    {
                     bsdl_prt_add_name(priv_data, strdup("*"));
                     bsdl_prt_add_bit(priv_data);
                   }
    break;

  case 258:
#line 812 "bsdl_bison.y"
    { (yyval.integer) = INPUT; }
    break;

  case 259:
#line 814 "bsdl_bison.y"
    { (yyval.integer) = OUTPUT2; }
    break;

  case 260:
#line 816 "bsdl_bison.y"
    { (yyval.integer) = OUTPUT3; }
    break;

  case 261:
#line 818 "bsdl_bison.y"
    { (yyval.integer) = CONTROL; }
    break;

  case 262:
#line 820 "bsdl_bison.y"
    { (yyval.integer) = CONTROLR; }
    break;

  case 263:
#line 822 "bsdl_bison.y"
    { (yyval.integer) = INTERNAL; }
    break;

  case 264:
#line 824 "bsdl_bison.y"
    { (yyval.integer) = CLOCK; }
    break;

  case 265:
#line 826 "bsdl_bison.y"
    { (yyval.integer) = BIDIR; }
    break;

  case 266:
#line 828 "bsdl_bison.y"
    { (yyval.integer) = OBSERVE_ONLY; }
    break;

  case 267:
#line 831 "bsdl_bison.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 268:
#line 833 "bsdl_bison.y"
    {
                     char *tmp;
                     tmp = (char *)malloc(2);
                     snprintf(tmp, 2, "%i", (yyvsp[(1) - (1)].integer));
		     tmp[1] = '\0';
                     (yyval.str) = tmp;
                   }
    break;

  case 269:
#line 842 "bsdl_bison.y"
    { bsdl_ci_set_cell_spec_disable(priv_data, (yyvsp[(1) - (5)].integer), (yyvsp[(3) - (5)].integer), (yyvsp[(5) - (5)].integer)); }
    break;

  case 270:
#line 845 "bsdl_bison.y"
    { (yyval.integer) = Z; }
    break;

  case 271:
#line 847 "bsdl_bison.y"
    { (yyval.integer) = WEAK0; }
    break;

  case 272:
#line 849 "bsdl_bison.y"
    { (yyval.integer) = WEAK1; }
    break;

  case 273:
#line 851 "bsdl_bison.y"
    { (yyval.integer) = PULL0; }
    break;

  case 274:
#line 853 "bsdl_bison.y"
    { (yyval.integer) = PULL1; }
    break;

  case 275:
#line 855 "bsdl_bison.y"
    { (yyval.integer) = KEEPER; }
    break;

  case 277:
#line 860 "bsdl_bison.y"
    { free((yyvsp[(4) - (9)].str)); }
    break;

  case 278:
#line 864 "bsdl_bison.y"
    { free((yyvsp[(4) - (9)].str)); }
    break;

  case 279:
#line 868 "bsdl_bison.y"
    {
                     bsdl_flex_switch_buffer(priv_data->scanner,
                                             priv_data->buffer_for_switch);
                   }
    break;

  case 280:
#line 873 "bsdl_bison.y"
    { free((yyvsp[(4) - (11)].str)); }
    break;

  case 281:
#line 876 "bsdl_bison.y"
    {bsdl_flex_set_bin_x(priv_data->scanner);}
    break;

  case 283:
#line 880 "bsdl_bison.y"
    { free((yyvsp[(1) - (1)].str)); }
    break;

  case 284:
#line 882 "bsdl_bison.y"
    { free((yyvsp[(3) - (3)].str)); }
    break;

  case 285:
#line 885 "bsdl_bison.y"
    {Init_Text(priv_data);
                    Store_Text(priv_data, (yyvsp[(1) - (1)].str));
                    free((yyvsp[(1) - (1)].str)); }
    break;

  case 286:
#line 889 "bsdl_bison.y"
    {Store_Text(priv_data, (yyvsp[(3) - (3)].str));
                    free((yyvsp[(3) - (3)].str)); }
    break;


/* Line 1267 of yacc.c.  */
#line 3082 "bsdl_bison.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (priv_data, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (priv_data, yymsg);
	  }
	else
	  {
	    yyerror (priv_data, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, priv_data);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, priv_data);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (priv_data, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, priv_data);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, priv_data);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 892 "bsdl_bison.y"
  /* End rules, begin programs  */
/*----------------------------------------------------------------------*/
static void Init_Text(parser_priv_t *priv_data)
{
  if (priv_data->len_buffer_for_switch == 0) {
    priv_data->buffer_for_switch = (char *)malloc(160);
    priv_data->len_buffer_for_switch = 160;
  }
  priv_data->buffer_for_switch[0] = '\0';
}
/*----------------------------------------------------------------------*/
static void Store_Text(parser_priv_t *priv_data, char *Source)
{ /* Save characters from VHDL string in local string buffer.           */
  size_t req_len;
  char   *SourceEnd;

  SourceEnd = ++Source;   /* skip leading '"' */
  while (*SourceEnd && (*SourceEnd != '"') && (*SourceEnd != '\n'))
    SourceEnd++;
  /* terminate Source string with NUL character */
  *SourceEnd = '\0';

  req_len = strlen(priv_data->buffer_for_switch) + strlen(Source) + 1;
  if (req_len > priv_data->len_buffer_for_switch) {
    priv_data->buffer_for_switch = (char *)realloc(priv_data->buffer_for_switch,
                                                   req_len);
    priv_data->len_buffer_for_switch = req_len;
  }
  strcat(priv_data->buffer_for_switch, Source);
}
/*----------------------------------------------------------------------*/
static void Print_Error(parser_priv_t *priv_data, const char *Errmess)
{
  if (priv_data->Reading_Package)
    bsdl_msg(BSDL_MSG_ERR, _("In Package %s, Line %d, %s.\n"),
             priv_data->Package_File_Name,
             bsdl_flex_get_lineno(priv_data->scanner),
             Errmess);
  else
    if (priv_data->jtag_ctrl.debug || (priv_data->jtag_ctrl.mode >= 0))
      bsdl_msg(BSDL_MSG_ERR, _("Line %d, %s.\n"),
               bsdl_flex_get_lineno(priv_data->scanner),
               Errmess);
}
/*----------------------------------------------------------------------*/
static void Print_Warning(parser_priv_t *priv_data, const char *Warnmess)
{
  if (priv_data->Reading_Package)
    bsdl_msg(BSDL_MSG_WARN, _("In Package %s, Line %d, %s.\n"),
             priv_data->Package_File_Name,
             bsdl_flex_get_lineno(priv_data->scanner),
             Warnmess);
  else
    if (priv_data->jtag_ctrl.debug || (priv_data->jtag_ctrl.mode >= 0))
      bsdl_msg(BSDL_MSG_WARN, _("Line %d, %s.\n"),
               bsdl_flex_get_lineno(priv_data->scanner),
               Warnmess);
}
/*----------------------------------------------------------------------*/
static void Give_Up_And_Quit(parser_priv_t *priv_data)
{
  Print_Error(priv_data, "Too many errors");
}
/*----------------------------------------------------------------------*/
void yyerror(parser_priv_t *priv_data, const char *error_string)
{
}
/*----------------------------------------------------------------------*/
parser_priv_t *bsdl_parser_init(FILE *f)
{
  parser_priv_t *new_priv;

  if (!(new_priv = (parser_priv_t *)malloc(sizeof(parser_priv_t)))) {
    bsdl_msg(BSDL_MSG_ERR, _("Out of memory, %s line %i\n"), __FILE__, __LINE__);
    return NULL;
  }

  new_priv->Reading_Package = 0;
  new_priv->buffer_for_switch = NULL;
  new_priv->len_buffer_for_switch = 0;

  if (!(new_priv->scanner = bsdl_flex_init(f))) {
    free(new_priv);
    new_priv = NULL;
  }

  bsdl_sem_init(new_priv);

  return new_priv;
}
/*----------------------------------------------------------------------*/
void bsdl_parser_deinit(parser_priv_t *priv_data)
{
  bsdl_sem_deinit(priv_data);
  bsdl_flex_deinit(priv_data->scanner);
  free(priv_data);
}

