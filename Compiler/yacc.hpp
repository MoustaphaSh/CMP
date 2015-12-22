/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LP = 258,
     _def_val_ = 259,
     T_REQUIRE_ONCE = 260,
     T_REQUIRE = 261,
     T_EVAL = 262,
     T_INCLUDE_ONCE = 263,
     T_INCLUDE = 264,
     T_LOGICAL_OR = 265,
     T_LOGICAL_XOR = 266,
     T_LOGICAL_AND = 267,
     T_PRINT = 268,
     T_YIELD = 269,
     T_DOUBLE_ARROW = 270,
     T_YIELD_FROM = 271,
     T_POW_EQUAL = 272,
     T_SR_EQUAL = 273,
     T_SL_EQUAL = 274,
     T_XOR_EQUAL = 275,
     T_OR_EQUAL = 276,
     T_AND_EQUAL = 277,
     T_MOD_EQUAL = 278,
     T_CONCAT_EQUAL = 279,
     T_DIV_EQUAL = 280,
     T_MUL_EQUAL = 281,
     T_MINUS_EQUAL = 282,
     T_PLUS_EQUAL = 283,
     T_COALESCE = 284,
     T_BOOLEAN_OR = 285,
     T_BOOLEAN_AND = 286,
     T_SPACESHIP = 287,
     T_IS_NOT_IDENTICAL = 288,
     T_IS_IDENTICAL = 289,
     T_IS_NOT_EQUAL = 290,
     T_IS_EQUAL = 291,
     T_IS_GREATER_OR_EQUAL = 292,
     T_IS_SMALLER_OR_EQUAL = 293,
     T_SR = 294,
     T_SL = 295,
     T_INSTANCEOF = 296,
     T_UNSET_CAST = 297,
     T_BOOL_CAST = 298,
     T_OBJECT_CAST = 299,
     T_ARRAY_CAST = 300,
     T_STRING_CAST = 301,
     T_DOUBLE_CAST = 302,
     T_INT_CAST = 303,
     T_DEC = 304,
     T_INC = 305,
     T_POW = 306,
     T_CLONE = 307,
     T_NEW = 308,
     T_EXIT = 309,
     T_IF = 310,
     T_ELSEIF = 311,
     T_ELSE = 312,
     T_ENDIF = 313,
     T_LNUMBER = 314,
     T_DNUMBER = 315,
     T_STRING = 316,
     T_STRING_VARNAME = 317,
     T_VARIABLE = 318,
     T_NUM_STRING = 319,
     T_INLINE_HTML = 320,
     T_CHARACTER = 321,
     T_BAD_CHARACTER = 322,
     T_ENCAPSED_AND_WHITESPACE = 323,
     T_CONSTANT_ENCAPSED_STRING = 324,
     T_ECHO = 325,
     T_DO = 326,
     T_WHILE = 327,
     T_ENDWHILE = 328,
     T_FOR = 329,
     T_ENDFOR = 330,
     T_FOREACH = 331,
     T_ENDFOREACH = 332,
     T_DECLARE = 333,
     T_ENDDECLARE = 334,
     T_AS = 335,
     T_SWITCH = 336,
     T_ENDSWITCH = 337,
     T_CASE = 338,
     T_DEFAULT = 339,
     T_BREAK = 340,
     T_CONTINUE = 341,
     T_GOTO = 342,
     T_FUNCTION = 343,
     T_CONST = 344,
     T_RETURN = 345,
     T_TRY = 346,
     T_CATCH = 347,
     T_FINALLY = 348,
     T_THROW = 349,
     T_USE = 350,
     T_INSTEADOF = 351,
     T_GLOBAL = 352,
     T_PUBLIC = 353,
     T_PROTECTED = 354,
     T_PRIVATE = 355,
     T_FINAL = 356,
     T_ABSTRACT = 357,
     T_STATIC = 358,
     T_VAR = 359,
     T_UNSET = 360,
     T_ISSET = 361,
     T_EMPTY = 362,
     T_HALT_COMPILER = 363,
     T_CLASS = 364,
     T_TRAIT = 365,
     T_INTERFACE = 366,
     T_EXTENDS = 367,
     T_IMPLEMENTS = 368,
     T_OBJECT_OPERATOR = 369,
     T_LIST = 370,
     T_ARRAY = 371,
     T_CALLABLE = 372,
     T_CLASS_C = 373,
     T_TRAIT_C = 374,
     T_METHOD_C = 375,
     T_FUNC_C = 376,
     T_LINE = 377,
     T_FILE = 378,
     T_COMMENT = 379,
     T_DOC_COMMENT = 380,
     T_OPEN_TAG = 381,
     T_OPEN_TAG_WITH_ECHO = 382,
     T_CLOSE_TAG = 383,
     T_WHITESPACE = 384,
     T_START_HEREDOC = 385,
     T_END_HEREDOC = 386,
     T_DOLLAR_OPEN_CURLY_BRACES = 387,
     T_CURLY_OPEN = 388,
     T_PAAMAYIM_NEKUDOTAYIM = 389,
     T_NAMESPACE = 390,
     T_NS_C = 391,
     T_DIR = 392,
     T_NS_SEPARATOR = 393,
     T_ELLIPSIS = 394,
     T_TYPE = 395,
     left_arc = 396,
     right_arc = 397
   };
#endif
/* Tokens.  */
#define LP 258
#define _def_val_ 259
#define T_REQUIRE_ONCE 260
#define T_REQUIRE 261
#define T_EVAL 262
#define T_INCLUDE_ONCE 263
#define T_INCLUDE 264
#define T_LOGICAL_OR 265
#define T_LOGICAL_XOR 266
#define T_LOGICAL_AND 267
#define T_PRINT 268
#define T_YIELD 269
#define T_DOUBLE_ARROW 270
#define T_YIELD_FROM 271
#define T_POW_EQUAL 272
#define T_SR_EQUAL 273
#define T_SL_EQUAL 274
#define T_XOR_EQUAL 275
#define T_OR_EQUAL 276
#define T_AND_EQUAL 277
#define T_MOD_EQUAL 278
#define T_CONCAT_EQUAL 279
#define T_DIV_EQUAL 280
#define T_MUL_EQUAL 281
#define T_MINUS_EQUAL 282
#define T_PLUS_EQUAL 283
#define T_COALESCE 284
#define T_BOOLEAN_OR 285
#define T_BOOLEAN_AND 286
#define T_SPACESHIP 287
#define T_IS_NOT_IDENTICAL 288
#define T_IS_IDENTICAL 289
#define T_IS_NOT_EQUAL 290
#define T_IS_EQUAL 291
#define T_IS_GREATER_OR_EQUAL 292
#define T_IS_SMALLER_OR_EQUAL 293
#define T_SR 294
#define T_SL 295
#define T_INSTANCEOF 296
#define T_UNSET_CAST 297
#define T_BOOL_CAST 298
#define T_OBJECT_CAST 299
#define T_ARRAY_CAST 300
#define T_STRING_CAST 301
#define T_DOUBLE_CAST 302
#define T_INT_CAST 303
#define T_DEC 304
#define T_INC 305
#define T_POW 306
#define T_CLONE 307
#define T_NEW 308
#define T_EXIT 309
#define T_IF 310
#define T_ELSEIF 311
#define T_ELSE 312
#define T_ENDIF 313
#define T_LNUMBER 314
#define T_DNUMBER 315
#define T_STRING 316
#define T_STRING_VARNAME 317
#define T_VARIABLE 318
#define T_NUM_STRING 319
#define T_INLINE_HTML 320
#define T_CHARACTER 321
#define T_BAD_CHARACTER 322
#define T_ENCAPSED_AND_WHITESPACE 323
#define T_CONSTANT_ENCAPSED_STRING 324
#define T_ECHO 325
#define T_DO 326
#define T_WHILE 327
#define T_ENDWHILE 328
#define T_FOR 329
#define T_ENDFOR 330
#define T_FOREACH 331
#define T_ENDFOREACH 332
#define T_DECLARE 333
#define T_ENDDECLARE 334
#define T_AS 335
#define T_SWITCH 336
#define T_ENDSWITCH 337
#define T_CASE 338
#define T_DEFAULT 339
#define T_BREAK 340
#define T_CONTINUE 341
#define T_GOTO 342
#define T_FUNCTION 343
#define T_CONST 344
#define T_RETURN 345
#define T_TRY 346
#define T_CATCH 347
#define T_FINALLY 348
#define T_THROW 349
#define T_USE 350
#define T_INSTEADOF 351
#define T_GLOBAL 352
#define T_PUBLIC 353
#define T_PROTECTED 354
#define T_PRIVATE 355
#define T_FINAL 356
#define T_ABSTRACT 357
#define T_STATIC 358
#define T_VAR 359
#define T_UNSET 360
#define T_ISSET 361
#define T_EMPTY 362
#define T_HALT_COMPILER 363
#define T_CLASS 364
#define T_TRAIT 365
#define T_INTERFACE 366
#define T_EXTENDS 367
#define T_IMPLEMENTS 368
#define T_OBJECT_OPERATOR 369
#define T_LIST 370
#define T_ARRAY 371
#define T_CALLABLE 372
#define T_CLASS_C 373
#define T_TRAIT_C 374
#define T_METHOD_C 375
#define T_FUNC_C 376
#define T_LINE 377
#define T_FILE 378
#define T_COMMENT 379
#define T_DOC_COMMENT 380
#define T_OPEN_TAG 381
#define T_OPEN_TAG_WITH_ECHO 382
#define T_CLOSE_TAG 383
#define T_WHITESPACE 384
#define T_START_HEREDOC 385
#define T_END_HEREDOC 386
#define T_DOLLAR_OPEN_CURLY_BRACES 387
#define T_CURLY_OPEN 388
#define T_PAAMAYIM_NEKUDOTAYIM 389
#define T_NAMESPACE 390
#define T_NS_C 391
#define T_DIR 392
#define T_NS_SEPARATOR 393
#define T_ELLIPSIS 394
#define T_TYPE 395
#define left_arc 396
#define right_arc 397




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 143 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int myLineNo;
		int myColNo;
	}r;
} YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 333 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



