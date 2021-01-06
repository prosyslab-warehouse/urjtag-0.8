/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 157 "bsdl_bison.y"
{
    int   integer;
    char *str;
}
/* Line 1489 of yacc.c.  */
#line 292 "bsdl_bison.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



