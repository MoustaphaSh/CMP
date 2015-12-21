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

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 2 "D:\\Compiler\\CMP\\Compiler\\yacc.y"

	#include <iostream>
	#include <ostream>
	#include <istream>
	using namespace std;
	#include <FlexLexer.h>
	
	/*#include "Compiler/MyParser.h"*/

	int yylex(void);
	int yyparse();
	void yyerror(char *);
	
	FlexLexer* lexer = new yyFlexLexer();
	
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 143 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int myLineNo;
		int myColno;
	}r;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 406 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 418 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9387

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  169
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  135
/* YYNRULES -- Number of rules. */
#define YYNRULES  538
/* YYNRULES -- Number of states. */
#define YYNSTATES  1027

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,   168,     2,   166,    57,    40,     2,
       2,     2,    55,    52,    10,    53,    54,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,   163,
      46,    20,    47,    33,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    39,     2,   167,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,    38,    19,    60,     2,     2,     2,
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
       5,     6,     7,     8,     9,    11,    12,    13,    14,    15,
      16,    17,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    35,    36,    37,    41,    42,    43,
      44,    45,    48,    49,    50,    51,    59,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   164,   165
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     7,    11,    14,    15,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    49,    51,    53,    55,    57,    59,    61,
      63,    65,    67,    69,    71,    73,    75,    77,    79,    81,
      83,    85,    87,    89,    91,    93,    95,    97,    99,   101,
     103,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     123,   125,   127,   129,   131,   133,   135,   137,   139,   141,
     143,   145,   147,   149,   151,   153,   157,   159,   161,   163,
     165,   167,   171,   177,   182,   186,   191,   194,   199,   201,
     203,   211,   220,   227,   235,   239,   241,   245,   247,   251,
     253,   255,   259,   261,   264,   266,   269,   273,   275,   279,
     283,   285,   289,   292,   293,   295,   297,   299,   301,   305,
     311,   320,   324,   330,   340,   344,   347,   351,   354,   358,
     361,   365,   368,   373,   378,   382,   384,   387,   393,   401,
     411,   417,   419,   426,   430,   434,   437,   438,   441,   450,
     451,   456,   458,   462,   463,   465,   466,   468,   479,   487,
     494,   500,   502,   505,   508,   509,   512,   513,   516,   517,
     520,   522,   526,   528,   533,   535,   540,   542,   547,   549,
     553,   557,   561,   566,   571,   577,   578,   581,   586,   590,
     592,   594,   596,   601,   602,   605,   609,   610,   613,   618,
     619,   622,   623,   627,   629,   632,   634,   638,   640,   642,
     643,   645,   649,   654,   656,   660,   667,   669,   674,   676,
     678,   680,   681,   683,   684,   687,   690,   694,   698,   700,
     704,   706,   709,   712,   716,   718,   720,   723,   728,   732,
     734,   736,   740,   743,   744,   749,   754,   764,   768,   770,
     774,   775,   778,   783,   789,   794,   799,   804,   808,   810,
     812,   814,   818,   820,   821,   822,   824,   826,   829,   831,
     833,   835,   837,   839,   841,   843,   847,   849,   853,   857,
     859,   860,   862,   864,   868,   872,   877,   882,   884,   887,
     891,   895,   899,   903,   907,   911,   915,   919,   923,   927,
     931,   934,   937,   940,   943,   947,   951,   955,   959,   963,
     967,   971,   975,   979,   983,   987,   991,   995,   999,  1003,
    1007,  1011,  1014,  1017,  1020,  1023,  1027,  1031,  1035,  1039,
    1043,  1047,  1051,  1055,  1059,  1063,  1065,  1069,  1075,  1080,
    1084,  1089,  1094,  1097,  1100,  1103,  1106,  1109,  1112,  1115,
    1118,  1121,  1124,  1127,  1130,  1133,  1136,  1138,  1140,  1142,
    1146,  1149,  1151,  1154,  1165,  1177,  1181,  1185,  1188,  1193,
    1198,  1202,  1207,  1212,  1217,  1222,  1230,  1234,  1237,  1238,
    1243,  1245,  1249,  1252,  1255,  1260,  1267,  1270,  1273,  1278,
    1280,  1282,  1284,  1287,  1291,  1293,  1295,  1297,  1299,  1301,
    1303,  1307,  1311,  1316,  1321,  1322,  1325,  1327,  1328,  1330,
    1332,  1333,  1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,
    1351,  1353,  1355,  1357,  1361,  1364,  1366,  1370,  1372,  1377,
    1381,  1383,  1387,  1391,  1395,  1399,  1403,  1407,  1411,  1415,
    1419,  1423,  1427,  1431,  1435,  1439,  1443,  1447,  1451,  1454,
    1457,  1460,  1463,  1467,  1471,  1475,  1479,  1483,  1487,  1491,
    1495,  1501,  1506,  1511,  1515,  1517,  1521,  1523,  1525,  1529,
    1533,  1534,  1537,  1538,  1540,  1544,  1546,  1550,  1552,  1554,
    1556,  1558,  1560,  1567,  1572,  1576,  1581,  1584,  1589,  1594,
    1596,  1600,  1602,  1605,  1607,  1609,  1614,  1616,  1620,  1627,
    1632,  1637,  1642,  1647,  1649,  1652,  1657,  1658,  1660,  1662,
    1666,  1668,  1673,  1677,  1679,  1681,  1683,  1684,  1685,  1688,
    1692,  1694,  1698,  1700,  1705,  1708,  1711,  1714,  1716,  1719,
    1721,  1726,  1730,  1734,  1738,  1745,  1749,  1751,  1753
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     170,     0,    -1,   148,   171,   150,    -1,   149,   171,   150,
      -1,   171,   177,    -1,    -1,     9,    -1,     8,    -1,     7,
      -1,     6,    -1,     5,    -1,    11,    -1,    12,    -1,    13,
      -1,    59,    -1,    75,    -1,    74,    -1,    76,    -1,    77,
      -1,    78,    -1,    79,    -1,    80,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   126,    -1,   127,    -1,   128,    -1,   129,
      -1,   108,    -1,   109,    -1,   110,    -1,   111,    -1,   112,
      -1,    14,    -1,    15,    -1,   137,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   138,    -1,   139,
      -1,   134,    -1,   135,    -1,   157,    -1,   132,    -1,   133,
      -1,   131,    -1,   172,    -1,   125,    -1,   124,    -1,   123,
      -1,   122,    -1,   121,    -1,   120,    -1,    83,    -1,   173,
      -1,    83,    -1,   175,   160,    83,    -1,   175,    -1,   192,
      -1,   199,    -1,   200,    -1,   130,    -1,   157,   176,   163,
      -1,   157,   176,    18,   171,    19,    -1,   157,    18,   171,
      19,    -1,   117,   181,   163,    -1,   117,   178,   181,   163,
      -1,   179,   163,    -1,   111,   228,   186,   163,    -1,   110,
      -1,   111,    -1,   117,   178,   175,   160,    18,   180,    19,
      -1,   117,   178,   160,   175,   160,    18,   180,    19,    -1,
     117,   175,   160,    18,   182,    19,    -1,   117,   160,   175,
     160,    18,   182,    19,    -1,   180,    10,   183,    -1,   183,
      -1,   181,    10,   184,    -1,   184,    -1,   182,    10,   185,
      -1,   185,    -1,   176,    -1,   176,   102,    83,    -1,   183,
      -1,   160,   183,    -1,   183,    -1,   178,   183,    -1,   186,
      10,   187,    -1,   187,    -1,    83,    20,   276,    -1,   188,
      10,   189,    -1,   189,    -1,   174,    20,   276,    -1,   190,
     191,    -1,    -1,   192,    -1,   199,    -1,   200,    -1,   130,
      -1,    18,   190,    19,    -1,    77,   256,   192,   216,   220,
      -1,    77,   256,    34,   190,   218,   221,    80,   163,    -1,
      94,   256,   215,    -1,    93,   192,    94,   256,   163,    -1,
      96,   164,   254,   163,   254,   163,   254,   165,   206,    -1,
     103,   256,   211,    -1,   107,   163,    -1,   107,   255,   163,
      -1,   108,   163,    -1,   108,   255,   163,    -1,   112,   163,
      -1,   112,   255,   163,    -1,   257,   163,    -1,   119,   228,
     235,   163,    -1,   125,   228,   237,   163,    -1,    92,   253,
     163,    -1,    87,    -1,   255,   163,    -1,   127,   164,   196,
     165,   163,    -1,    98,   164,   255,   102,   222,   165,   207,
      -1,    98,   164,   255,   102,   284,    16,   222,   165,   207,
      -1,   100,   164,   209,   165,   208,    -1,   163,    -1,   113,
      18,   190,    19,   193,   195,    -1,   116,   255,   163,    -1,
     109,    83,   163,    -1,    83,    34,    -1,    -1,   193,   194,
      -1,   114,   164,   267,    85,   165,    18,   190,    19,    -1,
      -1,   115,    18,   190,    19,    -1,   284,    -1,   196,    10,
     284,    -1,    -1,    40,    -1,    -1,   161,    -1,   110,   197,
      83,   164,   223,   165,   231,    18,   190,    19,    -1,   201,
      83,   202,   204,    18,   239,    19,    -1,   133,    83,   203,
      18,   239,    19,    -1,   132,    83,    18,   239,    19,    -1,
     131,    -1,   124,   131,    -1,   123,   131,    -1,    -1,   134,
     267,    -1,    -1,   134,   205,    -1,    -1,   135,   205,    -1,
     267,    -1,   205,    10,   267,    -1,   192,    -1,    34,   190,
      97,   163,    -1,   192,    -1,    34,   190,    99,   163,    -1,
     192,    -1,    34,   190,   101,   163,    -1,   210,    -1,   209,
      10,   210,    -1,    83,    20,   276,    -1,    18,   212,    19,
      -1,    18,   163,   212,    19,    -1,    34,   212,   104,   163,
      -1,    34,   163,   212,   104,   163,    -1,    -1,   212,   213,
      -1,   105,   255,   214,   190,    -1,   106,   214,   190,    -1,
      34,    -1,   163,    -1,   192,    -1,    34,   190,    95,   163,
      -1,    -1,   216,   217,    -1,    78,   256,   192,    -1,    -1,
     218,   219,    -1,    78,   256,    34,   190,    -1,    -1,    79,
     192,    -1,    -1,    79,    34,   190,    -1,   284,    -1,    40,
     284,    -1,   295,    -1,   224,    10,   226,    -1,   224,    -1,
     226,    -1,    -1,   225,    -1,   224,    10,   225,    -1,   230,
     197,   198,    85,    -1,   227,    -1,   226,    10,   227,    -1,
     230,   197,   198,    85,    20,   276,    -1,   267,    -1,   162,
      72,   229,    73,    -1,   139,    -1,   162,    -1,    81,    -1,
      -1,   228,    -1,    -1,    34,   228,    -1,   164,   165,    -1,
     164,   233,   165,    -1,   164,   257,   165,    -1,   234,    -1,
     233,    10,   234,    -1,   255,    -1,    40,   284,    -1,   161,
     255,    -1,   235,    10,   236,    -1,   236,    -1,    85,    -1,
     166,   284,    -1,   166,    18,   255,    19,    -1,   237,    10,
     238,    -1,   238,    -1,    85,    -1,    85,    20,   276,    -1,
     239,   240,    -1,    -1,   247,   228,   251,   163,    -1,   111,
     228,   188,   163,    -1,   248,   110,   197,   174,   164,   223,
     165,   231,   246,    -1,   117,   205,   241,    -1,   163,    -1,
      18,   242,    19,    -1,    -1,   242,   243,    -1,   244,   118,
     205,   163,    -1,   245,   102,   250,   174,   163,    -1,   245,
     102,   250,   163,    -1,   245,   102,    83,   163,    -1,   245,
     102,   172,   163,    -1,   267,   156,   174,    -1,   244,    -1,
     174,    -1,   163,    -1,    18,   190,    19,    -1,   249,    -1,
      -1,    -1,   249,    -1,   250,    -1,   249,   250,    -1,   120,
      -1,   121,    -1,   122,    -1,   125,    -1,   124,    -1,   123,
      -1,   252,    -1,   251,    10,   252,    -1,    85,    -1,    85,
      20,   276,    -1,   253,    10,   255,    -1,   255,    -1,    -1,
     253,    -1,   284,    -1,   295,    20,   255,    -1,   284,    20,
     255,    -1,   284,    20,    40,   284,    -1,   284,    20,    40,
     261,    -1,   261,    -1,    74,   255,    -1,   284,    32,   255,
      -1,   284,    31,   255,    -1,   284,    30,   255,    -1,   284,
      29,   255,    -1,   284,    28,   255,    -1,   284,    27,   255,
      -1,   284,    26,   255,    -1,   284,    25,   255,    -1,   284,
      24,   255,    -1,   284,    22,   255,    -1,   284,    21,   255,
      -1,   284,    70,    -1,    70,   284,    -1,   284,    69,    -1,
      69,   284,    -1,   255,    36,   255,    -1,   255,    37,   255,
      -1,   255,    11,   255,    -1,   255,    13,   255,    -1,   255,
      12,   255,    -1,   255,    38,   255,    -1,   255,    40,   255,
      -1,   255,    39,   255,    -1,   255,    54,   255,    -1,   255,
      52,   255,    -1,   255,    53,   255,    -1,   255,    55,   255,
      -1,   255,    56,   255,    -1,   255,    57,   255,    -1,   255,
      51,   255,    -1,   255,    50,   255,    -1,   255,    71,   255,
      -1,    52,   255,    -1,    53,   255,    -1,    58,   255,    -1,
      60,   255,    -1,   255,    43,   255,    -1,   255,    42,   255,
      -1,   255,    45,   255,    -1,   255,    44,   255,    -1,   255,
      41,   255,    -1,   255,    46,   255,    -1,   255,    49,   255,
      -1,   255,    47,   255,    -1,   255,    48,   255,    -1,   255,
      59,   268,    -1,   256,    -1,   164,   261,   165,    -1,   255,
      33,   255,    34,   255,    -1,   255,    33,    34,   255,    -1,
     255,    35,   255,    -1,   128,   164,   196,   165,    -1,   129,
     164,   255,   165,    -1,     9,   255,    -1,     8,   255,    -1,
       7,   256,    -1,     6,   255,    -1,     5,   255,    -1,    68,
     255,    -1,    67,   255,    -1,    66,   255,    -1,    65,   255,
      -1,    64,   255,    -1,    63,   255,    -1,    62,   255,    -1,
      76,   272,    -1,    61,   255,    -1,   279,    -1,   258,    -1,
     259,    -1,   167,   273,   167,    -1,    14,   255,    -1,    15,
      -1,    17,   255,    -1,   110,   197,   164,   223,   165,   262,
     231,    18,   190,    19,    -1,   125,   110,   197,   164,   223,
     165,   262,   231,    18,   190,    19,    -1,   164,   255,   165,
      -1,   164,   257,   165,    -1,    15,   255,    -1,    15,   255,
      16,   255,    -1,   138,   164,   298,   165,    -1,    72,   298,
      73,    -1,   258,    72,   293,    73,    -1,    91,    72,   293,
      73,    -1,   278,    72,   293,    73,    -1,   259,    72,   293,
      73,    -1,   131,   274,   202,   204,    18,   239,    19,    -1,
      75,   268,   274,    -1,    75,   260,    -1,    -1,   117,   164,
     263,   165,    -1,   264,    -1,   263,    10,   264,    -1,   197,
      85,    -1,   267,   232,    -1,   270,   156,   174,   232,    -1,
     270,   156,    18,   255,    19,   232,    -1,   290,   232,    -1,
     288,   232,    -1,   265,    72,   293,    73,    -1,   125,    -1,
     267,    -1,   175,    -1,   160,   175,    -1,   157,   160,   175,
      -1,   266,    -1,   269,    -1,   271,    -1,   289,    -1,   266,
      -1,   292,    -1,   289,   136,   294,    -1,   271,   136,   294,
      -1,   271,    72,   293,    73,    -1,   271,    18,   255,    19,
      -1,    -1,   164,   165,    -1,   256,    -1,    -1,    90,    -1,
     301,    -1,    -1,   232,    -1,    81,    -1,    82,    -1,    91,
      -1,   144,    -1,   145,    -1,   159,    -1,   140,    -1,   141,
      -1,   142,    -1,   143,    -1,   158,    -1,   152,    90,   153,
      -1,   152,   153,    -1,   275,    -1,   266,   156,   174,    -1,
     267,    -1,   138,   164,   280,   165,    -1,    72,   280,    73,
      -1,   277,    -1,   276,    36,   276,    -1,   276,    37,   276,
      -1,   276,    11,   276,    -1,   276,    13,   276,    -1,   276,
      12,   276,    -1,   276,    38,   276,    -1,   276,    40,   276,
      -1,   276,    39,   276,    -1,   276,    54,   276,    -1,   276,
      52,   276,    -1,   276,    53,   276,    -1,   276,    55,   276,
      -1,   276,    56,   276,    -1,   276,    57,   276,    -1,   276,
      51,   276,    -1,   276,    50,   276,    -1,   276,    71,   276,
      -1,    52,   276,    -1,    53,   276,    -1,    58,   276,    -1,
      60,   276,    -1,   276,    43,   276,    -1,   276,    42,   276,
      -1,   276,    45,   276,    -1,   276,    44,   276,    -1,   276,
      46,   276,    -1,   276,    49,   276,    -1,   276,    47,   276,
      -1,   276,    48,   276,    -1,   276,    33,   276,    34,   276,
      -1,   276,    33,    34,   276,    -1,   276,    72,   276,    73,
      -1,   164,   276,   165,    -1,   267,    -1,   270,   156,   174,
      -1,   275,    -1,   278,    -1,   168,   301,   168,    -1,   152,
     301,   153,    -1,    -1,   282,   281,    -1,    -1,    10,    -1,
     282,    10,   283,    -1,   283,    -1,   276,    16,   276,    -1,
     276,    -1,   286,    -1,   289,    -1,   265,    -1,   285,    -1,
     164,   261,   165,    72,   293,    73,    -1,   285,    72,   293,
      73,    -1,   287,   136,   294,    -1,   287,   136,   294,   232,
      -1,   286,   232,    -1,   286,    72,   293,    73,    -1,   286,
      18,   255,    19,    -1,   284,    -1,   164,   261,   165,    -1,
     292,    -1,   166,   288,    -1,   288,    -1,   290,    -1,   270,
     156,   166,   292,    -1,   291,    -1,   270,   156,    85,    -1,
     270,   156,   166,    18,   255,    19,    -1,   291,    72,   293,
      73,    -1,   291,    18,   255,    19,    -1,   292,    72,   293,
      73,    -1,   292,    18,   255,    19,    -1,    85,    -1,   162,
      85,    -1,   166,    18,   255,    19,    -1,    -1,   255,    -1,
      83,    -1,    18,   255,    19,    -1,   288,    -1,   137,   164,
     296,   165,    -1,   296,    10,   297,    -1,   297,    -1,   284,
      -1,   295,    -1,    -1,    -1,   299,   281,    -1,   299,    10,
     300,    -1,   300,    -1,   255,    16,   255,    -1,   255,    -1,
     255,    16,    40,   284,    -1,    40,   284,    -1,   301,   302,
      -1,   301,    90,    -1,   302,    -1,    90,   302,    -1,    85,
      -1,    85,    72,   303,    73,    -1,    85,   136,    83,    -1,
     154,   255,    19,    -1,   154,    84,    19,    -1,   154,    84,
      72,   255,    73,    19,    -1,   155,   284,    19,    -1,    83,
      -1,    86,    -1,    85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   157,   157,   159,   164,   167,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   180,   181,   181,   181,   181,
     181,   181,   185,   187,   192,   194,   199,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   229,   231,
     237,   239,   241,   243,   248,   250,   255,   257,   262,   264,
     269,   271,   276,   278,   283,   285,   290,   292,   297,   302,
     304,   309,   314,   317,   321,   323,   325,   327,   332,   334,
     336,   338,   340,   342,   344,   346,   348,   350,   352,   354,
     356,   358,   360,   362,   364,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   386,   392,   393,   398,   404,
     405,   410,   412,   418,   419,   425,   426,   431,   436,   438,
     440,   445,   447,   449,   455,   456,   462,   463,   469,   470,
     475,   477,   482,   484,   489,   491,   496,   498,   503,   505,
     510,   515,   517,   519,   521,   527,   528,   533,   535,   540,
     542,   547,   549,   555,   556,   561,   567,   568,   573,   578,
     580,   586,   587,   592,   594,   596,   601,   603,   605,   608,
     612,   614,   619,   623,   625,   630,   634,   636,   638,   640,
     645,   648,   651,   657,   658,   663,   665,   667,   672,   674,
     679,   681,   683,   688,   690,   695,   697,   699,   704,   706,
     711,   713,   718,   721,   725,   727,   729,   731,   736,   738,
     744,   745,   750,   752,   754,   756,   758,   763,   768,   770,
     775,   777,   782,   785,   790,   791,   796,   798,   803,   805,
     807,   809,   811,   813,   818,   820,   825,   827,   832,   834,
     840,   841,   846,   848,   850,   852,   854,   856,   858,   860,
     862,   864,   866,   868,   870,   872,   874,   876,   878,   880,
     882,   884,   886,   888,   890,   892,   894,   896,   898,   900,
     902,   904,   906,   908,   910,   912,   914,   916,   918,   920,
     922,   924,   926,   928,   930,   932,   934,   936,   938,   940,
     942,   944,   946,   948,   950,   952,   955,   957,   959,   961,
     963,   965,   967,   969,   971,   973,   975,   977,   979,   981,
     983,   985,   987,   989,   991,   993,   995,   997,   999,  1001,
    1003,  1005,  1007,  1009,  1011,  1016,  1018,  1023,  1025,  1030,
    1032,  1037,  1039,  1041,  1043,  1049,  1054,  1056,  1062,  1063,
    1068,  1070,  1075,  1080,  1082,  1084,  1086,  1088,  1090,  1096,
    1098,  1103,  1105,  1107,  1112,  1114,  1119,  1121,  1126,  1128,
    1133,  1135,  1137,  1139,  1145,  1146,  1148,  1154,  1155,  1157,
    1163,  1164,  1169,  1171,  1173,  1175,  1177,  1179,  1181,  1183,
    1185,  1187,  1189,  1191,  1193,  1198,  1200,  1202,  1204,  1206,
    1208,  1213,  1215,  1217,  1219,  1221,  1223,  1225,  1227,  1229,
    1231,  1233,  1235,  1237,  1239,  1241,  1243,  1245,  1247,  1249,
    1251,  1253,  1255,  1257,  1259,  1261,  1263,  1265,  1267,  1269,
    1271,  1273,  1275,  1277,  1282,  1284,  1289,  1291,  1293,  1295,
    1301,  1302,  1308,  1309,  1314,  1316,  1321,  1323,  1328,  1330,
    1332,  1334,  1339,  1341,  1347,  1349,  1351,  1353,  1355,  1360,
    1362,  1367,  1369,  1374,  1376,  1381,  1383,  1388,  1390,  1392,
    1394,  1399,  1401,  1403,  1405,  1407,  1413,  1414,  1419,  1421,
    1423,  1428,  1433,  1435,  1440,  1442,  1445,  1450,  1451,  1456,
    1458,  1463,  1465,  1467,  1469,  1474,  1476,  1478,  1480,  1485,
    1487,  1489,  1491,  1493,  1495,  1497,  1502,  1504,  1506
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LP", "_def_val_", "T_REQUIRE_ONCE",
  "T_REQUIRE", "T_EVAL", "T_INCLUDE_ONCE", "T_INCLUDE", "','",
  "T_LOGICAL_OR", "T_LOGICAL_XOR", "T_LOGICAL_AND", "T_PRINT", "T_YIELD",
  "T_DOUBLE_ARROW", "T_YIELD_FROM", "'{'", "'}'", "'='", "T_POW_EQUAL",
  "T_SR_EQUAL", "T_SL_EQUAL", "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL",
  "T_MOD_EQUAL", "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL",
  "T_MINUS_EQUAL", "T_PLUS_EQUAL", "'?'", "':'", "T_COALESCE",
  "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'", "'^'", "'&'", "T_SPACESHIP",
  "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL", "T_IS_EQUAL",
  "'<'", "'>'", "T_IS_GREATER_OR_EQUAL", "T_IS_SMALLER_OR_EQUAL", "T_SR",
  "T_SL", "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'", "T_INSTANCEOF",
  "'~'", "'@'", "T_UNSET_CAST", "T_BOOL_CAST", "T_OBJECT_CAST",
  "T_ARRAY_CAST", "T_STRING_CAST", "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC",
  "T_INC", "T_POW", "'['", "']'", "T_CLONE", "T_NEW", "T_EXIT", "T_IF",
  "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER", "T_DNUMBER", "T_STRING",
  "T_STRING_VARNAME", "T_VARIABLE", "T_NUM_STRING", "T_INLINE_HTML",
  "T_CHARACTER", "T_BAD_CHARACTER", "T_ENCAPSED_AND_WHITESPACE",
  "T_CONSTANT_ENCAPSED_STRING", "T_ECHO", "T_DO", "T_WHILE", "T_ENDWHILE",
  "T_FOR", "T_ENDFOR", "T_FOREACH", "T_ENDFOREACH", "T_DECLARE",
  "T_ENDDECLARE", "T_AS", "T_SWITCH", "T_ENDSWITCH", "T_CASE", "T_DEFAULT",
  "T_BREAK", "T_CONTINUE", "T_GOTO", "T_FUNCTION", "T_CONST", "T_RETURN",
  "T_TRY", "T_CATCH", "T_FINALLY", "T_THROW", "T_USE", "T_INSTEADOF",
  "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_TRAIT", "T_INTERFACE", "T_EXTENDS",
  "T_IMPLEMENTS", "T_OBJECT_OPERATOR", "T_LIST", "T_ARRAY", "T_CALLABLE",
  "T_CLASS_C", "T_TRAIT_C", "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE",
  "T_COMMENT", "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO",
  "T_CLOSE_TAG", "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR", "T_ELLIPSIS",
  "T_TYPE", "';'", "left_arc", "right_arc", "'$'", "'`'", "'\"'",
  "$accept", "start", "top_statement_list", "reserved_non_modifiers",
  "semi_reserved", "identifier", "namespace_name_parts", "namespace_name",
  "top_statement", "use_type", "group_use_declaration",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declarations", "unprefixed_use_declaration",
  "use_declaration", "inline_use_declaration", "constant_declaration_list",
  "constant_declaration", "class_const_list", "class_const",
  "inner_statement_list", "inner_statement", "statement", "catches",
  "catch", "optional_finally", "variables_list", "optional_ref",
  "optional_ellipsis", "function_declaration_statement",
  "class_declaration_statement", "class_entry_type", "extends_from",
  "interface_extends_list", "implements_list", "name_list",
  "for_statement", "foreach_statement", "declare_statement",
  "declare_list", "declare_list_element", "switch_case_list", "case_list",
  "case", "case_separator", "while_statement", "elseif_list", "elseif",
  "new_elseif_list", "new_elseif", "else_single", "new_else_single",
  "foreach_variable", "parameter_list",
  "parameter_without_static_scalar_list",
  "parameter_without_static_scalar", "parameter_with_static_scalar_list",
  "parameter_with_static_scalar", "type", "optional_capacity",
  "param_type", "optional_return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "trait_adaptations", "trait_adaptation_list",
  "trait_adaptation", "trait_method_reference_fully_qualified",
  "trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_declaration_list", "property_declaration", "expr_list",
  "for_expr", "expr", "parentheses_expr", "yield_expr", "array_expr",
  "scalar_dereference", "anonymous_class", "new_expr", "lexical_vars",
  "lexical_var_list", "lexical_var", "function_call", "class_name", "name",
  "class_name_reference", "dynamic_class_name_reference",
  "class_name_or_var", "object_access_for_dcnr", "exit_expr",
  "backticks_expr", "ctor_arguments", "common_scalar", "static_scalar",
  "static_operation", "constant", "scalar", "static_array_pair_list",
  "optional_comma", "non_empty_static_array_pair_list",
  "static_array_pair", "variable", "new_expr_array_deref", "object_access",
  "variable_or_new_expr", "variable_without_objects", "base_variable",
  "static_property", "static_property_with_arrays", "reference_variable",
  "dim_offset", "object_property", "list_expr", "list_expr_elements",
  "list_expr_element", "array_pair_list", "non_empty_array_pair_list",
  "array_pair", "encaps_list", "encaps_var", "encaps_var_offset", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      44,   265,   266,   267,   268,   269,   270,   271,   123,   125,
      61,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,    63,    58,   284,   285,   286,   124,    94,
      38,   287,   288,   289,   290,   291,    60,    62,   292,   293,
     294,   295,    43,    45,    46,    42,    47,    37,    33,   296,
     126,    64,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    91,    93,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,    59,   396,   397,    36,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   169,   170,   170,   171,   171,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   174,   174,   175,   175,   176,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     179,   179,   179,   179,   180,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   188,
     188,   189,   190,   190,   191,   191,   191,   191,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   193,   193,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   199,   200,   200,
     200,   201,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   211,   211,   211,   211,   212,   212,   213,   213,   214,
     214,   215,   215,   216,   216,   217,   218,   218,   219,   220,
     220,   221,   221,   222,   222,   222,   223,   223,   223,   223,
     224,   224,   225,   226,   226,   227,   228,   228,   228,   228,
     229,   229,   230,   231,   231,   232,   232,   232,   233,   233,
     234,   234,   234,   235,   235,   236,   236,   236,   237,   237,
     238,   238,   239,   239,   240,   240,   240,   240,   241,   241,
     242,   242,   243,   243,   243,   243,   243,   244,   245,   245,
     246,   246,   247,   247,   248,   248,   249,   249,   250,   250,
     250,   250,   250,   250,   251,   251,   252,   252,   253,   253,
     254,   254,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   256,   256,   257,   257,   258,
     258,   259,   259,   259,   259,   260,   261,   261,   262,   262,
     263,   263,   264,   265,   265,   265,   265,   265,   265,   266,
     266,   267,   267,   267,   268,   268,   269,   269,   270,   270,
     271,   271,   271,   271,   272,   272,   272,   273,   273,   273,
     274,   274,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   276,   276,   276,   276,   276,
     276,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   278,   278,   279,   279,   279,   279,
     280,   280,   281,   281,   282,   282,   283,   283,   284,   284,
     284,   284,   285,   285,   286,   286,   286,   286,   286,   287,
     287,   288,   288,   289,   289,   290,   290,   291,   291,   291,
     291,   292,   292,   292,   292,   292,   293,   293,   294,   294,
     294,   295,   296,   296,   297,   297,   297,   298,   298,   299,
     299,   300,   300,   300,   300,   301,   301,   301,   301,   302,
     302,   302,   302,   302,   302,   302,   303,   303,   303
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     3,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     3,     5,     4,     3,     4,     2,     4,     1,     1,
       7,     8,     6,     7,     3,     1,     3,     1,     3,     1,
       1,     3,     1,     2,     1,     2,     3,     1,     3,     3,
       1,     3,     2,     0,     1,     1,     1,     1,     3,     5,
       8,     3,     5,     9,     3,     2,     3,     2,     3,     2,
       3,     2,     4,     4,     3,     1,     2,     5,     7,     9,
       5,     1,     6,     3,     3,     2,     0,     2,     8,     0,
       4,     1,     3,     0,     1,     0,     1,    10,     7,     6,
       5,     1,     2,     2,     0,     2,     0,     2,     0,     2,
       1,     3,     1,     4,     1,     4,     1,     4,     1,     3,
       3,     3,     4,     4,     5,     0,     2,     4,     3,     1,
       1,     1,     4,     0,     2,     3,     0,     2,     4,     0,
       2,     0,     3,     1,     2,     1,     3,     1,     1,     0,
       1,     3,     4,     1,     3,     6,     1,     4,     1,     1,
       1,     0,     1,     0,     2,     2,     3,     3,     1,     3,
       1,     2,     2,     3,     1,     1,     2,     4,     3,     1,
       1,     3,     2,     0,     4,     4,     9,     3,     1,     3,
       0,     2,     4,     5,     4,     4,     4,     3,     1,     1,
       1,     3,     1,     0,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     3,     1,
       0,     1,     1,     3,     3,     4,     4,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     5,     4,     3,
       4,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     3,
       2,     1,     2,    10,    11,     3,     3,     2,     4,     4,
       3,     4,     4,     4,     4,     7,     3,     2,     0,     4,
       1,     3,     2,     2,     4,     6,     2,     2,     4,     1,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       3,     3,     4,     4,     0,     2,     1,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     3,     1,     4,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     4,     4,     3,     1,     3,     1,     1,     3,     3,
       0,     2,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     6,     4,     3,     4,     2,     4,     4,     1,
       3,     1,     2,     1,     1,     4,     1,     3,     6,     4,
       4,     4,     4,     1,     2,     4,     0,     1,     1,     3,
       1,     4,     3,     1,     1,     1,     0,     0,     2,     3,
       1,     3,     1,     4,     2,     2,     2,     1,     2,     1,
       4,     3,     3,     3,     6,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     5,     5,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,   361,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     517,     0,     0,   404,     0,   412,   413,    74,   503,   135,
     414,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,     0,     0,     0,     0,     0,     0,     0,
     389,     0,     0,     0,    80,   161,     0,     0,     0,     0,
     418,   419,   420,   421,   415,   416,     2,     0,     0,   422,
     417,     0,     0,   141,     0,     0,   407,     0,   391,     4,
       0,    77,    78,    79,     0,     0,   335,     0,   357,   358,
     287,   480,   398,   464,     0,   466,   467,   356,   282,   481,
     478,     0,   493,   479,   494,   496,   491,     0,     3,   361,
      74,   153,   389,     0,   346,   345,     0,   344,   343,   342,
     360,   367,   362,     0,   321,   322,   323,   324,   355,   353,
     352,   351,   350,   349,   348,   347,   389,     0,   390,     0,
     303,   301,     0,   522,     0,   472,   520,   288,   410,   377,
     394,   390,   410,   395,     0,   396,   493,   397,   494,     0,
     406,   354,     0,   145,   506,     0,   279,     0,     0,   280,
       0,     0,     0,   125,     0,   127,     0,     0,   154,     0,
     218,   219,     0,   216,   129,     0,   113,     0,    88,    89,
       0,    76,   100,     0,     0,   102,    97,     0,   163,   162,
     153,     0,     0,     0,     0,     0,   166,   516,   517,   529,
       0,   424,     0,     0,     0,   527,     5,     0,    76,     0,
     392,   504,     0,     0,   287,     0,   492,   491,   408,     0,
     409,     0,     0,     0,    86,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,   131,   506,   506,   506,
       0,   383,     0,   506,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   302,   300,   506,     0,
     506,   486,     0,   387,   386,     0,   506,     0,   506,     0,
       0,     0,   118,   117,   112,   114,   115,   116,     0,     0,
     524,     0,   370,   473,   518,   411,   164,   376,     0,     0,
     506,     0,     0,   405,   113,   193,   507,     0,     0,   134,
       0,   113,   191,   121,   281,     0,     0,     0,     0,   178,
     185,   185,   124,   126,   128,   144,     0,   209,   221,     0,
       0,   107,   130,     0,   143,    76,   103,     0,     0,     0,
      76,     0,     0,    84,   235,     0,     0,   234,     0,   240,
       0,   239,     0,   151,     0,     0,   243,     0,     0,   514,
     515,     0,   513,     0,     0,     0,   423,   528,     0,     0,
     489,   526,   469,   525,     0,   393,     5,    81,   365,   366,
     336,     0,   359,   468,    75,     0,   168,   306,   308,   307,
       0,     0,   339,   304,   305,   309,   311,   310,   329,   326,
     325,   328,   327,   330,   332,   333,   331,   319,   318,   313,
     314,   312,   315,   316,   317,   334,   320,     0,     0,     0,
       0,     0,   225,     0,   228,   230,     0,    10,     9,     8,
       7,     6,    11,    12,    13,    49,    50,     0,    14,    16,
      15,    17,    18,    19,    20,    21,    72,   497,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    52,
      53,    54,    55,    56,    44,    45,    46,    47,    48,    33,
      34,    35,    36,    37,    38,    39,    71,    70,    69,    68,
      67,    66,    40,    41,    42,    43,    64,    62,    63,    59,
      60,    51,    57,    58,    61,     0,    65,    73,   465,     0,
       0,   284,   299,   298,   297,   296,   295,   294,   293,   292,
     291,   290,   289,     0,     0,     0,     0,   508,   510,   484,
       0,     0,     0,     0,   283,   368,   490,     0,     0,   521,
     519,   168,     0,     0,   401,   400,   196,   199,   372,   278,
       0,     0,   280,     0,     0,     0,     0,   185,     0,   185,
       0,   209,     0,   207,   210,   208,   213,   222,   153,   220,
       0,     0,     0,    87,   146,     0,     0,   101,    76,     0,
      85,     0,    96,     0,   236,     0,   132,   209,     0,     0,
     133,     0,     0,   340,   341,   263,   167,   170,   243,   516,
     511,   369,   536,   538,   537,     0,   531,   533,     0,   532,
     535,    83,     0,   506,   505,   165,     0,     0,   338,     0,
     371,   374,   388,   231,   232,     0,   226,   227,     0,     0,
       0,   495,   384,   373,   286,   285,   483,   488,   487,     0,
     485,   500,   499,   502,   501,   523,     0,   403,   402,   201,
       0,     0,   194,   119,   122,     0,     0,     0,     0,   203,
     205,     0,     0,     0,     0,   470,   414,     0,     0,     0,
       0,   427,   425,   180,   430,   179,   113,   176,   140,     0,
     181,     0,     0,   186,     0,     0,     0,   378,     0,     0,
     155,   217,   108,   106,   149,     0,     0,     0,   104,    99,
       0,     0,     0,   233,     0,   241,   238,   152,   137,   160,
       0,     0,   268,   269,   270,   273,   272,   271,   242,     0,
       0,   262,   266,     0,   263,   512,   530,     0,    82,     0,
     169,   243,   337,   229,     0,     0,   509,   243,     0,     0,
     197,     0,     0,   200,   192,   280,   204,     0,     0,   448,
     449,   450,   451,   477,     0,   472,   475,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
       0,   189,   190,   113,     0,   183,   223,     0,   223,   211,
     206,   214,   153,   156,     0,     0,     0,   147,   142,     0,
     105,     0,    92,     0,     0,    95,   237,   378,     0,     0,
       0,   153,   267,   171,   159,     0,   482,   263,   385,   498,
     263,     0,   113,     0,   195,     0,   113,   174,   138,     0,
     203,     0,   429,   473,   471,     0,   463,   426,   433,   435,
     434,     0,     0,   431,   432,   436,   438,   437,   453,   452,
     455,   454,   456,   458,   459,   457,   446,   445,   440,   441,
     439,   442,   443,   444,   447,     0,     0,   113,   188,   184,
       0,     0,   153,     0,   155,   212,     0,   113,    93,    98,
       0,     0,    90,   223,     0,     0,   110,   250,   248,   247,
     276,     0,   274,     0,   534,   158,   375,   113,   202,   120,
       0,     0,     0,   476,   474,   428,   461,     0,   462,   177,
     187,   224,   113,     0,     0,   380,   113,     0,     0,     0,
       0,    91,    94,     0,     0,     0,   245,     0,     0,     0,
     244,     0,   198,   113,   172,   123,     0,   139,   460,     0,
     382,   153,   379,     0,     0,   215,     0,   150,   113,   111,
     109,   249,    74,    61,   259,   251,   258,     0,     0,   277,
     275,   209,     0,   175,   157,   381,   363,     0,     0,     0,
       0,     0,     0,     0,   113,   364,     0,     0,     0,     0,
     257,   223,   173,     0,   252,   255,   256,   254,     0,     0,
     148,   253,   113,   260,   246,     0,   261
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,   526,   527,   914,    88,   202,    89,   716,
      90,   834,   204,   717,   205,   206,   719,   360,   361,   915,
     916,   133,   314,   315,   714,   827,   828,   382,   943,   824,
     316,   317,    94,   416,   388,   637,   616,   965,   858,   698,
     348,   349,   352,   578,   703,   813,   343,   567,   672,   669,
     760,   673,   761,   678,   582,   583,   584,   585,   586,   587,
     590,   588,   901,   281,   453,   454,   376,   377,   380,   381,
     615,   738,   919,   957,   985,   986,   987,  1024,   739,   740,
     741,   742,   921,   922,   344,   345,    95,    96,    97,    98,
      99,   159,   100,   818,   944,   945,   101,   102,   103,   162,
     163,   104,   165,   171,   239,   326,   105,   773,   694,   106,
     107,   774,   324,   775,   776,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   337,   549,   117,   391,   392,   154,
     155,   156,   224,   225,   625
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -784
static const short int yypact[] =
{
     201,  -784,  -784,    88,  1640,  1804,  -784,  7052,  7052,   -79,
    7052,  7052,  7052,  7052,  7052,  -784,  7052,  7052,  7052,  7052,
    7052,  7052,  7052,  7052,  7052,  7052,  7052,  7052,   236,   236,
    1046,  7052,   761,   -67,   -79,  -784,  -784,    68,  -784,  -784,
     102,  7052,  5248,   -79,   -57,   -42,   -39,   -79,  5740,  5904,
      44,   148,   298,  6068,   193,  7052,   185,   298,   119,   147,
     309,    83,   124,   134,  -784,  -784,   224,   232,   153,   160,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,   350,    43,  -784,
    -784,   243,   247,  -784,  7216,    95,   295,   431,    73,  -784,
     171,  -784,  -784,  -784,   253,  8040,  -784,   179,   272,   274,
    -784,   280,  -784,   126,   211,  -784,   282,  -784,   830,   297,
      60,   235,   209,  -784,   209,   203,   103,   359,  -784,  -784,
    -784,   148,   287,   241,  9222,  9222,  7216,  -784,  9222,  9222,
    1956,  8585,  1956,  2296,   332,   332,    23,   332,   332,   332,
     332,   332,   332,   332,   332,   332,  -784,   337,   209,   285,
     293,   293,   236,  8634,   365,   441,  -784,  -784,   209,  -784,
     300,  -784,   209,  -784,   351,    86,  -784,   372,  -784,  6232,
    -784,  -784,  4428,  -784,  7052,    39,  9222,   417,  4592,  7052,
    7052,   427,    74,  -784,  8089,  -784,  8138,   364,  -784,    32,
    -784,   459,   450,  -784,  -784,  8187,  -784,  8236,  -784,  -784,
     243,   374,   439,    18,    50,  -784,  -784,     4,  -784,  -784,
     148,   457,   236,   236,  7052,   525,   413,   206,  1046,    51,
     150,  -784,  6396,   236,   416,  -784,  -784,   243,    73,    56,
      73,  -784,    98,   383,   384,  7052,  -784,   246,   116,   388,
     438,   116,     8,   467,  -784,   424,  7052,  7052,  7052,  6560,
    7052,  7052,  7052,  7052,  7052,  7052,  7052,  7052,  7052,  7052,
    7052,  7052,  7052,  7052,  7052,  7052,  7052,  7052,  7052,  7052,
    7052,  7052,  7052,   191,  7052,  -784,  -784,  7052,  7052,  7052,
    5412,  -784,  7322,  7052,  6724,  7052,  7052,  7052,  7052,  7052,
    7052,  7052,  7052,  7052,  7052,  7052,  -784,  -784,  7052,  7052,
    7052,  -784,    94,  -784,  -784,  7052,  7052,  7052,  7052,  7052,
     395,  7052,  -784,  -784,  -784,  -784,  -784,  -784,   396,  7322,
     293,  6888,  -784,  1046,  -784,  -784,   424,  -784,     5,  7052,
    7052,    94,    94,  -784,  -784,  -784,  9222,   495,  7052,  -784,
     -79,  -784,  -784,  -784,   563,   411,  8323,   555,    35,  -784,
     421,   426,  -784,  -784,  -784,  -784,   412,   298,   497,   568,
      52,  -784,  -784,  2460,  -784,   430,  -784,    77,   512,   243,
     444,    54,    37,  -784,  -784,    82,    55,  -784,   442,   585,
      57,  -784,    40,   293,    41,  1297,  -784,    34,   589,   293,
    -784,    45,  -784,   445,   305,   528,  -784,  -784,   258,  8683,
     593,  -784,  -784,  -784,  1968,    73,  -784,  -784,  -784,  -784,
     118,  8732,  -784,  -784,  -784,    34,   478,  9316,  1792,  1956,
    7052,  8781,  2117,  2443,  2935,  3263,  3424,  3586,  3751,  3751,
    3751,  3751,  3751,   888,   888,   888,   888,   851,   851,   458,
     458,   458,    23,    23,    23,  -784,   332,   553,   554,   556,
     236,  7052,  -784,    47,  -784,  9222,   463,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  7052,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,    96,  -784,  -784,   209,   558,
     437,  1956,  1956,  1956,  1956,  1956,  1956,  1956,  1956,  1956,
    1956,  1956,  1956,   566,  8830,   567,  7052,  -784,  -784,   209,
    8879,   571,  8928,   572,  1956,  9222,   574,   209,   236,  9222,
    -784,   478,  8977,   577,  -784,  -784,  4264,   261,  -784,  9222,
     496,  2624,  7052,   198,  1313,   427,  4756,  -784,    87,  -784,
     312,   298,   508,   650,  -784,   654,  -784,  -784,   148,  -784,
     601,  1313,   450,  -784,  -784,    78,   273,  -784,   515,    81,
    -784,   243,  -784,  7052,   293,     4,  -784,   298,  1313,   457,
    -784,   236,   513,  -784,  -784,   189,   668,  -784,  -784,   206,
    -784,  -784,  -784,  -784,  -784,   606,  -784,  -784,  7052,  -784,
    -784,  -784,  2132,  7052,  -784,  -784,    34,   669,  2117,  7052,
    -784,  -784,  -784,   293,  9222,  5576,  -784,  -784,  9026,  7052,
     671,   246,  -784,  -784,  -784,   293,  -784,  -784,  -784,  9075,
    -784,  -784,  -784,  -784,  -784,   293,   672,  -784,  -784,   316,
     -79,  5248,  -784,  -784,  -784,   530,   531,   236,   523,    63,
    -784,  1313,  1313,  1313,  1313,  1313,  -784,   532,   133,  1313,
     539,   542,  -784,  8538,  -784,  -784,  -784,  -784,  -784,   167,
    -784,  7052,    46,  -784,   357,   536,   535,   584,   298,   298,
     543,  -784,  8538,  -784,   291,   273,   243,   109,  -784,  -784,
      85,   243,  9124,  -784,   545,  8538,  -784,   293,  -784,  -784,
     298,    34,  -784,  -784,  -784,  -784,  -784,  -784,  -784,   298,
     602,   499,  -784,    34,   303,  -784,  -784,  8395,  -784,   655,
     668,  -784,  2117,  -784,   209,  9173,  -784,  -784,   -79,   695,
    -784,   651,  5248,  -784,  -784,  7052,   293,  4920,   198,   338,
     338,   338,   338,  8444,   659,   723,  -784,  1313,   581,  1378,
    7727,  1313,  1313,  1313,  8260,  1313,  1313,  1313,  1313,  1313,
    1313,  1313,  1313,  1313,  1313,  1313,  1313,  1313,  1313,  1313,
    1313,  1313,  1313,  1313,  1313,  1313,  1313,  1313,  2788,  -784,
    7991,  -784,  -784,  -784,   573,  -784,   701,   575,   701,  -784,
     654,  -784,   148,  -784,   652,   579,   726,  -784,  -784,   233,
    -784,   273,  -784,   243,   275,  -784,  -784,   584,  7727,    53,
     660,   148,  -784,  -784,  -784,   727,  -784,   322,  -784,  -784,
     415,   713,  -784,   587,  -784,   583,  -784,  -784,  -784,   615,
     293,  1313,  -784,  1313,  -784,   616,  -784,  -784,  9270,  7454,
    2607,  1313,  8491,  1507,  2771,  3099,  1098,  3914,  4078,  4078,
    4078,  4078,   670,   670,   670,   670,   613,   613,   510,   510,
     510,   338,   338,   338,   338,  1562,   620,  -784,  4264,  -784,
     298,   734,   148,   766,   543,   770,    34,  -784,  -784,  -784,
     283,   243,  -784,   701,   771,    62,  -784,  -784,  -784,  -784,
     772,    66,  -784,  7727,  -784,  -784,  -784,  -784,  4264,  -784,
    5084,  2952,  4920,  8538,  -784,  -784,  2280,  1313,  -784,  -784,
    4264,  -784,  -784,   709,    49,  -784,  -784,   710,  1313,   711,
    3116,  -784,  -784,   768,  1313,  7727,  -784,  7592,  1313,   660,
    -784,   633,  4264,  -784,  -784,  -784,   635,  -784,  2280,  3280,
    -784,   148,  -784,  3444,   770,  8538,   637,  -784,  -784,  8538,
    -784,  -784,   730,   241,  -784,  -784,   685,   732,   680,  8538,
    -784,   298,  3608,  -784,  -784,  -784,  -784,   819,  3772,    34,
    7862,  7727,   674,   677,  -784,  -784,    67,   678,   682,  7457,
    -784,   701,  -784,  3936,  -784,  -784,  -784,  -784,   684,    69,
    -784,  -784,  -784,  -784,  -784,  4100,  -784
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -784,  -784,    15,  -152,  -784,  -271,   -44,   785,  -784,   793,
    -784,    31,   662,   151,  -197,   498,    38,  -784,   276,  -784,
     -84,   -14,  -784,    26,  -784,  -784,  -784,   661,   -37,   -31,
       3,    11,  -784,   550,  -784,   318,  -613,  -784,   -55,  -784,
    -784,   306,  -784,  -326,  -784,    70,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,   114,  -560,  -784,   176,   180,   181,   -47,
    -784,   182,  -783,   -92,  -784,   244,  -784,   289,  -784,   288,
    -502,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -708,  -784,   -63,   857,  -531,   993,    -7,   -40,  -784,
    -784,  -784,   -78,    64,  -784,   -69,  -784,    24,   -28,   638,
    -784,    14,  -784,  -784,  -784,   750,  -307,   716,  -784,  -784,
    -784,   137,   140,  -784,    61,   425,  -784,  -784,  -784,     6,
      -4,     7,  -784,   -66,  -225,   136,  -208,  -784,   314,   698,
    -784,   594,   386,   376,  -784
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -491
static const short int yytable[] =
{
     148,   148,   127,   366,   161,   192,   234,    92,    92,   390,
     207,   528,   201,   211,   189,    93,    93,     5,   301,   237,
     303,   706,   304,   750,   193,   580,   170,   172,   167,   193,
      91,    91,   193,   842,   228,   903,   178,   230,   166,   168,
     182,   676,   149,   149,   233,   575,   164,   724,   557,   338,
     611,   611,   447,   448,   449,   619,   160,   645,   529,   971,
     372,   226,   592,   743,   372,   605,   325,   609,   177,   318,
     325,   917,   955,   543,   406,   545,   959,   743,   299,   768,
     811,   551,   273,   553,   310,   126,   233,  1022,     6,   374,
     477,   236,   350,   219,   274,   596,   715,   169,   401,   721,
     603,   120,   173,   833,   329,   563,   700,   179,   351,   246,
     247,   248,   546,   235,   649,   356,   744,   120,   839,   831,
     120,   307,   180,   394,   148,   181,   120,   187,   832,   233,
     953,   249,   300,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   365,   273,   330,   370,
     414,   414,   222,   223,   414,   120,   149,    38,   414,   274,
     375,   525,   366,   378,   174,   308,   413,   547,   369,    38,
      38,    38,   363,   405,   148,   148,   809,   395,   188,   148,
     633,   123,   701,   702,    81,   148,   357,   601,   335,  -489,
     576,   219,   339,   227,   342,   612,   613,   146,   729,   812,
     620,   196,   646,   373,   972,   593,   918,   600,   606,   407,
     610,   305,   331,   778,   280,   956,   149,   149,  1019,   960,
    1014,   149,  1023,   243,   855,   219,   237,   149,   677,   123,
     456,   404,    81,   831,    82,   161,   147,   212,    85,   847,
     208,   699,   908,   704,  -490,   850,    82,    82,    82,  -399,
      85,    85,   650,   408,   307,   237,   237,   692,   120,   167,
     222,   223,   701,   702,   120,   306,    38,   627,   209,   166,
     168,   120,  -390,    38,   692,   911,   221,   164,   213,   120,
     280,    38,  1009,   911,   912,   198,   199,   160,   214,  -264,
     730,   692,   951,   396,   222,   223,   731,   215,   548,   732,
     733,   734,   735,   736,   737,   216,   146,   217,   308,   120,
     566,    38,   844,   146,   218,   598,   120,   571,   228,   193,
     628,   146,   231,   570,   244,    68,   245,   548,   548,   670,
     671,   925,   276,    68,   277,   200,   278,   148,   123,     1,
       2,    81,   279,    82,   283,   123,   120,    85,    81,   617,
      82,   146,   147,   123,    85,   680,    81,   282,    82,   298,
     147,   302,    85,   280,   692,   692,   692,   692,   692,   309,
     219,   120,   692,   198,   199,   238,  1006,   635,   622,   149,
     623,   624,   120,   123,   758,   759,    81,   210,    82,   718,
     147,   227,    85,   274,   366,   825,   826,    92,   749,   806,
     807,   390,    32,  -264,   730,    93,   705,   701,   702,   210,
     731,   632,   148,   732,   733,   734,   735,   736,   737,  -489,
      91,  1002,  -264,   730,   926,   219,   652,   190,   322,   731,
     220,   319,   732,   733,   734,   735,   736,   737,   190,   222,
     223,   323,   654,   150,   151,   123,  -398,   660,    81,   651,
     191,   814,   701,   702,   149,   652,   123,   564,   565,    81,
     692,   191,   240,   242,   692,   692,   692,   692,   692,   692,
     692,   692,   692,   692,   692,   692,   692,   692,   692,   692,
     692,   692,   692,   692,   692,   692,   692,   692,   692,   692,
     692,   219,   148,   221,   222,   223,   401,   328,   332,   867,
     347,   340,    32,   270,   271,   272,   219,   273,   718,   830,
     120,   241,    38,   219,   835,  -264,   730,   355,   401,   274,
     148,   358,   731,   359,   367,   732,   733,   734,   735,   736,
     737,   368,   379,   386,   149,   148,   691,   387,   409,   410,
     414,   710,   228,   193,   692,   412,   692,   228,   415,   357,
     680,   556,   146,   691,   692,   803,   804,   805,   568,   402,
     222,   223,   149,   338,   572,   574,   581,   320,   589,   193,
     691,   806,   807,   148,   577,   222,   223,   149,   591,   579,
     595,   148,   222,   223,   123,   597,   397,    81,   690,    82,
     403,   147,   697,    85,   599,   608,   607,   618,   617,  -265,
     621,   626,   630,   636,   397,   690,   403,   397,   403,   732,
     733,   734,   735,   736,   737,   149,   640,   641,   647,   642,
     692,   653,   690,   149,   718,    92,   835,   383,   383,   656,
     658,   692,   389,    93,   662,   664,   633,   692,   400,   148,
     668,   692,   961,   691,   691,   691,   691,   691,    91,   674,
     708,   691,   848,   762,   709,   800,   801,   802,   803,   804,
     805,   228,   228,   707,   711,   720,   728,   228,   743,   746,
     193,   193,   808,   838,   806,   807,   984,   751,   767,   235,
     757,   149,   840,   764,   765,   780,   777,   763,  -390,   815,
     816,   817,   193,   617,   823,   690,   690,   690,   690,   690,
     837,   193,   841,   690,   952,   843,  -491,  -491,  -491,  -491,
     798,   799,   800,   801,   802,   803,   804,   805,   846,   852,
    1010,   853,   862,   863,   396,   900,   899,   905,  1018,   902,
     148,   806,   807,   906,   907,   920,   924,   927,   930,   691,
     929,   851,   942,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     932,   935,   149,   939,   946,   904,   978,   228,   854,   228,
     948,   954,   958,   857,   970,   974,   976,   991,   993,   898,
     604,   690,   997,   999,   923,   690,   690,   690,   690,   690,
     690,   690,   690,   690,   690,   690,   690,   690,   690,   690,
     690,   690,   690,   690,   690,   690,   690,   690,   690,   690,
     690,   690,   -72,   691,  1000,   691,  1001,  1004,   928,  1011,
    1012,  1015,   931,   691,   120,  1016,    38,  1021,  1008,   203,
     284,   285,   286,   941,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   229,   910,   371,   829,   228,   713,   909,
     602,   980,   193,   947,   384,   643,   561,   967,   949,   666,
     897,   695,   859,   940,   819,   690,   146,   690,   820,   753,
     821,   822,   158,   950,   723,   690,   990,   726,   175,   296,
     297,   913,   995,   267,   268,   269,   270,   271,   272,   691,
     273,   445,   327,   962,   865,   864,   393,   560,   123,     0,
     691,    81,   274,    82,   934,     0,   691,    85,   969,   988,
     691,     0,   973,   745,  -491,  -491,  -491,  -491,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,     0,   992,
       0,     0,     0,     0,     0,   655,   964,     0,   857,   274,
       0,   690,     0,   193,   998,     0,  -489,     0,     0,     0,
       0,   617,   690,     0,     0,     0,     0,     0,   690,     0,
       0,     0,   690,   665,     0,     0,     0,     0,     0,     0,
    1013,     0,     0,     0,     0,     0,     0,     0,   679,     0,
     124,   125,     0,   128,   129,   130,   131,   132,  1025,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,     0,     0,   153,   157,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,     0,   727,     0,     0,     0,
       0,   184,   186,     0,   389,     0,   195,     0,   197,     0,
       0,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,   119,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,   766,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,   232,
      31,    32,    33,     0,     0,     0,     0,    35,    36,   120,
       0,    38,     0,     0,     0,     0,     0,    40,   789,     0,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   805,   121,     0,     0,     0,
       0,     0,   232,     0,     0,     0,     0,   336,     0,   806,
     807,   122,   176,   346,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,   860,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,   385,    82,     0,
      84,   153,    85,    86,    87,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   411,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   417,
     418,   419,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,     0,   446,     0,     0,
     336,   336,   336,   455,     0,     0,   336,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,     0,
     693,   336,   544,   336,     0,     0,     0,     0,   550,   336,
     552,   336,   554,     0,   555,     0,     0,   712,   246,   247,
     248,     0,     0,     0,   559,     0,   153,     0,     0,     0,
       0,     0,   562,   336,   725,     0,     0,     0,     0,     0,
     249,   569,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,   273,     0,     0,     0,
       0,     0,     0,     0,     0,   681,   682,     0,   274,     0,
       0,   683,     0,   684,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   685,     0,     0,     0,   781,
     782,   783,     0,     0,    35,    36,   120,   769,   770,   771,
     772,     0,     0,     0,   686,   779,     0,     0,     0,     0,
       0,   784,     0,   638,   785,   786,   787,   788,   789,     0,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   805,     0,     0,   146,     0,
       0,     0,     0,     0,   644,     0,     0,     0,     0,   806,
     807,   687,     0,    70,    71,    72,    73,    74,    75,     0,
     648,     0,   614,     0,     0,   688,     0,     0,     0,     0,
     123,    79,    80,    81,     0,     0,     0,   689,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   868,   869,   870,
     872,   873,   874,   875,   876,   877,   878,   879,   880,   881,
     882,   883,   884,   885,   886,   887,   888,   889,   890,   891,
     892,   893,   894,   895,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   659,
       0,     0,     0,   866,   786,   787,   788,   789,     0,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,   805,   176,     0,     0,     0,     0,
       0,     0,     0,   781,   782,   783,     0,   933,   806,   807,
       0,     0,     0,     0,     0,     0,     0,   936,     0,     0,
       0,     0,     0,     0,     0,   784,   722,     0,   785,   786,
     787,   788,   789,     0,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
       0,   747,     0,     0,     0,     0,   336,     0,     0,     0,
       0,     0,   752,   806,   807,   938,     0,     0,   455,     0,
       0,     0,   755,     0,     0,     7,     8,     9,    10,    11,
       0,     0,     0,   968,    12,    13,     0,    14,    15,     0,
       0,     0,     0,     0,   975,     0,     0,     0,     0,     0,
     979,     0,     0,     0,   989,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,   810,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,     0,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
      51,    52,    53,    54,     0,     0,    55,    56,   176,    57,
       0,     0,     0,    58,    59,    60,     0,    61,    62,    63,
      64,    65,    66,    67,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
      76,     0,    77,     0,     0,     0,     0,    78,    79,    80,
      81,     0,    82,    83,    84,   248,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,     0,     0,   249,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,   274,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,    56,     0,    57,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,   118,     0,    77,     0,     0,     0,
       0,    78,    79,    80,    81,     0,    82,    83,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,   631,     0,   249,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,   274,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,    51,    52,
      53,    54,     0,     0,    55,    56,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,    78,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,   748,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,   273,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,   274,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,     0,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,    51,    52,    53,    54,     0,     0,    55,    56,
       0,    57,     0,     0,     0,    58,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,    78,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,   312,   785,   786,   787,   788,
     789,     0,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,   806,   807,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,    51,     0,    53,    54,
       0,     0,    55,     0,     0,    57,     0,     0,     0,    58,
      59,    60,     0,    61,    62,    63,   313,    65,    66,    67,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,   594,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,   274,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,     0,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
      51,     0,    53,    54,     0,     0,    55,     0,     0,    57,
       0,     0,     0,    58,    59,    60,     0,    61,    62,    63,
     313,    65,    66,    67,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   123,    79,    80,
      81,     0,    82,    83,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
     784,    14,    15,   785,   786,   787,   788,   789,     0,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,   805,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,   806,   807,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,   675,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,    51,     0,    53,    54,     0,     0,
      55,     0,     0,    57,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,   313,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   123,    79,    80,    81,     0,    82,    83,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,     0,     0,   787,
     788,   789,     0,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,   806,   807,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,   896,
       0,    47,     0,     0,     0,    48,    49,    50,    51,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,   313,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,     0,     0,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,   274,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,   966,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,    51,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,    58,    59,    60,     0,    61,
      62,    63,   313,    65,    66,    67,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   123,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,   977,     0,     0,   788,   789,
       0,   790,   791,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   803,   804,   805,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
     806,   807,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,    51,     0,    53,    54,
       0,     0,    55,     0,     0,    57,     0,     0,     0,    58,
      59,    60,     0,    61,    62,    63,   313,    65,    66,    67,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,   994,
       0,     0,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,   274,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,     0,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
      51,     0,    53,    54,     0,     0,    55,     0,     0,    57,
       0,     0,     0,    58,    59,    60,     0,    61,    62,    63,
     313,    65,    66,    67,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   123,    79,    80,
      81,     0,    82,    83,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,   996,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,    51,     0,    53,    54,     0,     0,
      55,     0,     0,    57,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,   313,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   123,    79,    80,    81,     0,    82,    83,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,  1003,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,    51,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,   313,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,  1005,  -491,  -491,  -491,  -491,  -491,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,     0,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,    51,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,    58,    59,    60,     0,    61,
      62,    63,   313,    65,    66,    67,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   123,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,  1020,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   806,   807,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,    51,     0,    53,    54,
       0,     0,    55,     0,     0,    57,     0,     0,     0,    58,
      59,    60,     0,    61,    62,    63,   313,    65,    66,    67,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,  1026,
    -491,  -491,  -491,  -491,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   805,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   806,
     807,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,     0,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
      51,     0,    53,    54,     0,     0,    55,     0,     0,    57,
       0,     0,     0,    58,    59,    60,     0,    61,    62,    63,
     313,    65,    66,    67,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   123,    79,    80,
      81,     0,    82,    83,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,    51,     0,    53,    54,     0,     0,
      55,     0,     0,    57,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,   313,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   123,    79,    80,    81,     0,    82,    83,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,   121,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,     0,     0,    60,     0,    61,    62,    63,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,     0,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,   121,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,     0,     0,    60,     0,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   123,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     696,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,   121,     0,    53,    54,
       0,     0,    55,     0,     0,    57,     0,     0,     0,     0,
       0,    60,     0,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   856,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,     0,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
     121,     0,    53,    54,     0,     0,    55,     0,     0,    57,
       0,     0,     0,     0,     0,    60,     0,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   123,    79,    80,
      81,     0,    82,    83,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   963,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,   121,     0,    53,    54,     0,     0,
      55,     0,     0,    57,     0,     0,     0,     0,     0,    60,
       0,    61,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   123,    79,    80,    81,     0,    82,    83,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,   121,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,     0,     0,    60,     0,    61,    62,    63,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   450,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,     0,
       0,     0,     0,    35,    36,   120,     0,    38,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   123,
      79,    80,    81,   451,    82,     0,    84,   452,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,   119,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   450,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,     0,     0,     0,     0,    35,    36,   120,
       0,    38,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,   451,    82,     0,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,   119,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,    35,    36,   120,     0,    38,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   123,    79,    80,
      81,     0,    82,   183,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,   119,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,     0,     0,     0,     0,    35,    36,   120,     0,    38,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   123,    79,    80,    81,     0,    82,   185,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,   119,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,     0,     0,     0,     0,    35,
      36,   120,     0,    38,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    62,    63,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,   194,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,     0,
       0,     0,     0,    35,    36,   120,     0,    38,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   123,
      79,    80,    81,     0,    82,     0,    84,   333,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,   119,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,     0,     0,     0,     0,    35,    36,   120,
     398,    38,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,     0,    82,     0,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,   119,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   420,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,    35,    36,   120,     0,    38,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   123,    79,    80,
      81,     0,    82,     0,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,   119,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   530,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,     0,     0,     0,     0,    35,    36,   120,     0,    38,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   123,    79,    80,    81,     0,    82,     0,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,   119,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   558,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,     0,     0,     0,     0,    35,
      36,   120,     0,    38,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    62,    63,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,     0,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,   119,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,     0,
       0,     0,     0,    35,    36,   120,     0,    38,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   123,
      79,    80,    81,     0,    82,     0,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,     0,     0,     0,     0,    35,    36,   120,
       0,    38,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   457,   458,   459,
     460,   461,     0,   462,   463,   464,   465,   466,     0,     0,
     467,   122,     0,     0,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,     0,    82,     0,
      84,   468,    85,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,   470,   471,   472,
     473,   474,   475,     0,     0,   476,     0,   477,     0,     0,
       0,     0,     0,     0,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,     0,   516,   517,   518,   519,   520,     0,   521,
     522,   523,   457,   458,   459,   460,   461,   783,   462,   463,
     464,   465,   466,     0,     0,     0,     0,     0,     0,   524,
       0,     0,     0,     0,     0,     0,     0,   784,   525,     0,
     785,   786,   787,   788,   789,     0,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,     0,     0,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,     0,   806,   807,     0,     0,     0,
       0,   469,   470,   471,   472,   473,   474,   475,     0,     0,
     476,     0,     0,     0,     0,     0,     0,     0,     0,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,     0,   516,   517,
     518,   519,   520,     0,   521,   522,   523,   457,   458,   459,
     460,   461,     0,   462,   463,   464,   465,   466,     0,     0,
       0,   981,     0,     0,   524,     0,     0,     0,     0,     0,
    1017,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   468,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,   470,   471,   472,
     473,   474,   475,     0,     0,   982,     0,     0,     0,     0,
       0,     0,     0,     0,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,     0,   516,   517,   518,   519,   520,     0,   521,
     522,   523,   457,   458,   459,   460,   461,     0,   462,   463,
     464,   465,   466,     0,     0,     0,     0,     0,     0,   983,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   469,   470,   471,   472,   473,   474,   475,     0,     0,
     476,     0,     0,     0,     0,     0,     0,     0,     0,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,     0,   516,   517,
     518,   519,   520,     0,   521,   522,   523,   457,   458,   459,
     460,   461,     0,   462,   463,   464,   465,   466,     0,     0,
       0,     0,     0,     0,   524,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   468,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,   470,   471,   472,
     473,   474,   475,     0,     0,  1007,     0,     0,     0,     0,
       0,     0,     0,     0,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   732,   733,   734,   735,   736,   737,   512,   513,
     514,   515,     0,   516,   517,   518,   519,   520,     0,   521,
     522,   523,   246,   247,   248,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   524,
       0,     0,     0,     0,   249,   811,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,   246,   247,   248,     0,     0,     0,     0,     0,     0,
       0,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
     246,   247,   248,     0,     0,     0,     0,     0,     0,     0,
       0,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,   246,
     247,   248,     0,     0,   812,     0,     0,     0,     0,     0,
     274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,   246,   247,
     248,     0,     0,   275,     0,     0,     0,     0,     0,   274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,   273,   246,   247,   248,
       0,     0,   353,     0,     0,     0,     0,     0,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   871,   273,     0,     0,     0,     0,
       0,   354,     0,     0,     0,     0,     0,   274,     0,     0,
       0,     0,   681,   682,     0,     0,     0,     0,   683,     0,
     684,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   685,     0,   246,   247,   248,     0,     0,     0,
       0,    35,    36,   120,     0,     0,     0,     0,     0,     0,
     362,   686,     0,     0,     0,     0,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,   274,     0,     0,     0,   687,   364,
      70,    71,    72,    73,    74,    75,   246,   247,   248,     0,
       0,     0,   688,     0,     0,     0,     0,   123,    79,    80,
      81,     0,     0,     0,   689,   573,     0,     0,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   781,   782,   783,     0,     0,
     861,     0,     0,     0,     0,     0,   274,     0,   845,     0,
       0,     0,     0,     0,     0,     0,     0,   784,     0,     0,
     785,   786,   787,   788,   789,     0,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,   781,   782,   783,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   806,   807,     0,     0,     0,
       0,     0,     0,     0,   784,   937,     0,   785,   786,   787,
     788,   789,     0,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,   781,
     782,   783,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   806,   807,     0,     0,     0,     0,     0,     0,
       0,   784,     0,     0,   785,   786,   787,   788,   789,     0,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   805,   246,   247,   248,     0,
       0,   311,     0,     0,     0,     0,     0,     0,     0,   806,
     807,     0,     0,     0,     0,     0,     0,     0,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   246,   247,   248,     0,     0,
     321,     0,     0,     0,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,   246,   247,   248,     0,     0,     0,
       0,     0,   629,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,   246,   247,   248,     0,     0,     0,     0,
       0,   634,     0,     0,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,   246,   247,   248,     0,     0,     0,     0,     0,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,   639,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,   246,   247,   248,     0,     0,     0,     0,     0,   657,
       0,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
     246,   247,   248,     0,     0,     0,     0,     0,   661,     0,
       0,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,   246,
     247,   248,     0,     0,     0,     0,     0,   663,     0,     0,
     274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,   246,   247,
     248,     0,     0,     0,     0,     0,   667,     0,     0,   274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,   273,   246,   247,   248,
       0,     0,     0,     0,     0,   754,     0,     0,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,   246,   247,   248,     0,
       0,     0,     0,     0,   756,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   246,   247,   248,     0,     0,
       0,     0,     0,   836,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,   246,   247,   248,     0,     0,     0,
       0,     0,   849,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,   246,   247,   248,     0,     0,     0,     0,
       0,     0,     0,     0,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,   782,   783,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   784,     0,     0,   785,   786,   787,   788,
     789,     0,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,   247,   248,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   806,   807,     0,     0,     0,     0,     0,     0,   249,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274
};

static const short int yycheck[] =
{
      28,    29,     9,   200,    32,    52,    84,     4,     5,   217,
      57,   282,    56,    60,    51,     4,     5,     2,   110,    85,
     112,   581,   114,   636,    52,   351,    33,    34,    32,    57,
       4,     5,    60,   741,    78,   818,    43,    81,    32,    32,
      47,   572,    28,    29,    84,    10,    32,   607,   319,    10,
      10,    10,   277,   278,   279,    10,    32,    10,   283,    10,
      10,    18,    10,    10,    10,    10,   158,    10,    42,   147,
     162,    18,    10,   298,    18,   300,    10,    10,    18,    16,
      34,   306,    59,   308,   121,   164,   126,    18,     0,    85,
      85,    85,    18,    85,    71,    18,    18,   164,    90,    18,
      18,    83,    34,    18,    18,   330,    19,   164,    34,    11,
      12,    13,    18,    18,    18,    83,   618,    83,   731,    10,
      83,    18,   164,    72,   152,   164,    83,    83,    19,   169,
     913,    33,    72,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,   200,    59,    72,   203,
      83,    83,   154,   155,    83,    83,   152,    85,    83,    71,
     166,   166,   369,   210,    72,    72,   168,    83,   160,    85,
      85,    85,   196,   227,   212,   213,    19,   136,    40,   217,
      72,   157,   105,   106,   160,   223,   164,   160,   172,   136,
     165,    85,   163,   160,   178,   165,   165,   125,    19,   163,
     165,    18,   165,   163,   165,   163,   163,   163,   163,   163,
     163,    18,   136,    90,   164,   163,   212,   213,  1011,   163,
     163,   217,   163,   160,   765,    85,   302,   223,    40,   157,
     280,   226,   160,    10,   162,   273,   164,   164,   166,   751,
     131,   577,    19,   579,   136,   757,   162,   162,   162,   156,
     166,   166,   166,   165,    18,   331,   332,   574,    83,   273,
     154,   155,   105,   106,    83,    72,    85,    19,   131,   273,
     273,    83,   156,    85,   591,    10,   153,   273,   164,    83,
     164,    85,  1000,    10,    19,   110,   111,   273,   164,   110,
     111,   608,    19,   153,   154,   155,   117,    83,   302,   120,
     121,   122,   123,   124,   125,    83,   125,   164,    72,    83,
     334,    85,    19,   125,   164,   369,    83,   341,   372,   357,
      72,   125,    85,   340,   163,   137,    83,   331,   332,    78,
      79,    19,   163,   137,    72,   160,    72,   375,   157,   148,
     149,   160,    72,   162,    72,   157,    83,   166,   160,   387,
     162,   125,   164,   157,   166,   573,   160,   156,   162,    72,
     164,   136,   166,   164,   681,   682,   683,   684,   685,    20,
      85,    83,   689,   110,   111,    90,   999,   415,    83,   375,
      85,    86,    83,   157,    78,    79,   160,   110,   162,   596,
     164,   160,   166,    71,   601,   114,   115,   404,   633,    71,
      72,   619,    75,   110,   111,   404,   104,   105,   106,   110,
     117,   406,   450,   120,   121,   122,   123,   124,   125,   136,
     404,   991,   110,   111,    19,    85,   528,   139,    73,   117,
      90,   156,   120,   121,   122,   123,   124,   125,   139,   154,
     155,    10,   530,    28,    29,   157,   156,   549,   160,   525,
     162,   104,   105,   106,   450,   557,   157,   331,   332,   160,
     777,   162,    86,    87,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,   806,
     807,    85,   530,   153,   154,   155,    90,   156,   136,   780,
      83,    94,    75,    55,    56,    57,    85,    59,   715,   716,
      83,    90,    85,    85,   721,   110,   111,   163,    90,    71,
     558,    72,   117,    83,   160,   120,   121,   122,   123,   124,
     125,   102,    85,    18,   530,   573,   574,   134,   165,   165,
      83,   588,   596,   581,   861,   167,   863,   601,   134,   164,
     768,   165,   125,   591,   871,    55,    56,    57,    73,   153,
     154,   155,   558,    10,   163,    20,   164,   152,    81,   607,
     608,    71,    72,   611,   163,   154,   155,   573,    20,   163,
     160,   619,   154,   155,   157,    83,   220,   160,   574,   162,
     224,   164,   576,   166,   160,    20,   164,    18,   636,   110,
     165,    83,    19,   135,   238,   591,   240,   241,   242,   120,
     121,   122,   123,   124,   125,   611,    73,    73,   165,    73,
     937,    73,   608,   619,   831,   632,   833,   212,   213,    73,
      73,   948,   217,   632,    73,    73,    72,   954,   223,   677,
      73,   958,   923,   681,   682,   683,   684,   685,   632,   163,
      10,   689,   754,   670,    10,    52,    53,    54,    55,    56,
      57,   715,   716,   165,    73,   160,   163,   721,    10,    73,
     708,   709,   696,   730,    71,    72,   957,    18,   165,    18,
      18,   677,   739,   163,   163,   156,   164,   671,   156,   163,
     165,   117,   730,   731,   161,   681,   682,   683,   684,   685,
     165,   739,   110,   689,   911,   743,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    73,    34,
    1001,    80,    73,    10,   153,    34,   163,    85,  1009,   164,
     768,    71,    72,   164,    18,    85,    19,    34,   165,   777,
     163,   758,    18,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,   806,   807,
     165,   165,   768,   163,    18,   822,    18,   831,   762,   833,
      20,    20,    20,   767,    85,    85,    85,   164,   163,   813,
     375,   777,   165,   118,   841,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
     806,   807,   102,   861,   102,   863,   156,    18,   852,   165,
     163,   163,   856,   871,    83,   163,    85,   163,  1000,    56,
      20,    21,    22,   900,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    78,   833,   203,   715,   911,   592,   831,
     372,   955,   900,   904,   213,   450,   326,   932,   906,   561,
     810,   575,   768,   897,   708,   861,   125,   863,   708,   645,
     709,   709,   131,   907,   605,   871,   959,   609,    41,    69,
      70,   837,   971,    52,    53,    54,    55,    56,    57,   937,
      59,   273,   162,   927,   777,   775,   218,   323,   157,    -1,
     948,   160,    71,   162,   863,    -1,   954,   166,   942,   957,
     958,    -1,   946,   619,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    -1,   963,
      -1,    -1,    -1,    -1,    -1,   530,   930,    -1,   932,    71,
      -1,   937,    -1,   991,   978,    -1,   136,    -1,    -1,    -1,
      -1,   999,   948,    -1,    -1,    -1,    -1,    -1,   954,    -1,
      -1,    -1,   958,   558,    -1,    -1,    -1,    -1,    -1,    -1,
    1004,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   573,    -1,
       7,     8,    -1,    10,    11,    12,    13,    14,  1022,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,   611,    -1,    -1,    -1,
      -1,    48,    49,    -1,   619,    -1,    53,    -1,    55,    -1,
      -1,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,   677,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,   126,
      74,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,   110,    -1,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,    -1,   174,    -1,    71,
      72,   125,   179,   180,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,   768,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,   214,   162,    -1,
     164,   218,   166,   167,   168,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,   274,    -1,    -1,
     277,   278,   279,   280,    -1,    -1,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,    -1,
     574,   298,   299,   300,    -1,    -1,    -1,    -1,   305,   306,
     307,   308,   309,    -1,   311,    -1,    -1,   591,    11,    12,
      13,    -1,    -1,    -1,   321,    -1,   323,    -1,    -1,    -1,
      -1,    -1,   329,   330,   608,    -1,    -1,    -1,    -1,    -1,
      33,   338,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    71,    -1,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    81,    82,    83,   681,   682,   683,
     684,    -1,    -1,    -1,    91,   689,    -1,    -1,    -1,    -1,
      -1,    33,    -1,   420,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,   451,    -1,    -1,    -1,    -1,    71,
      72,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     467,    -1,   165,    -1,    -1,   152,    -1,    -1,    -1,    -1,
     157,   158,   159,   160,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,   806,   807,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   546,
      -1,    -1,    -1,   165,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,   572,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,   861,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   871,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,   603,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,   628,    -1,    -1,    -1,    -1,   633,    -1,    -1,    -1,
      -1,    -1,   639,    71,    72,    73,    -1,    -1,   645,    -1,
      -1,    -1,   649,    -1,    -1,     5,     6,     7,     8,     9,
      -1,    -1,    -1,   937,    14,    15,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,   948,    -1,    -1,    -1,    -1,    -1,
     954,    -1,    -1,    -1,   958,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,   701,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,   116,   117,   765,   119,
      -1,    -1,    -1,   123,   124,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
     150,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,   163,   164,    13,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,    71,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
     116,   117,    -1,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    19,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    71,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,   116,   117,    -1,   119,    -1,    -1,
      -1,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      18,    19,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    71,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,   116,   117,
      -1,   119,    -1,    -1,    -1,   123,   124,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,    -1,   162,   163,   164,    -1,   166,   167,
     168,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    18,    19,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    71,    72,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    18,    19,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    71,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,    -1,    -1,   123,   124,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      33,    17,    18,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    71,    72,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    -1,    -1,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    71,    72,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,   101,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,
      -1,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      18,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    71,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    96,    -1,
      98,    99,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,    -1,    -1,   123,   124,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,    -1,   162,   163,   164,    -1,   166,   167,
     168,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    18,    19,    -1,    -1,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      71,    72,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    18,    19,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    71,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,    -1,    -1,   123,   124,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    19,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    96,    97,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,
      -1,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      18,    19,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    52,    53,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,    -1,    -1,   123,   124,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,    -1,   162,   163,   164,    -1,   166,   167,
     168,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    18,    19,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    52,    53,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    18,    19,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,    -1,    -1,   123,   124,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,   125,    -1,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,   125,    -1,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,    -1,   162,   163,   164,    -1,   166,   167,
     168,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,   125,    -1,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,   125,    -1,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,   125,
      -1,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,   125,    -1,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,   161,   162,    -1,
     164,    -1,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,    -1,   162,    -1,   164,   165,   166,   167,
     168,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,    -1,
     164,    -1,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,    -1,   164,    -1,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,    -1,   164,    -1,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,    -1,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,    -1,   162,    -1,   164,    -1,   166,   167,
     168,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    -1,    -1,
      18,   125,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,    -1,
     164,    59,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    -1,   131,   132,   133,   134,   135,    -1,   137,
     138,   139,     5,     6,     7,     8,     9,    13,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,   166,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,
     163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    -1,   131,   132,   133,   134,   135,    -1,   137,
     138,   139,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    -1,   131,   132,   133,   134,   135,    -1,   137,
     138,   139,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    11,
      12,    13,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    11,    12,
      13,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    11,    12,    13,
      -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    34,    59,    -1,    -1,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
     163,    91,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,   138,   163,
     140,   141,   142,   143,   144,   145,    11,    12,    13,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,    -1,    -1,   164,   102,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    11,    12,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    11,    12,    13,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    11,    12,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   148,   149,   170,   171,   171,     0,     5,     6,     7,
       8,     9,    14,    15,    17,    18,    52,    53,    58,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      72,    74,    75,    76,    77,    81,    82,    83,    85,    87,
      91,    92,    93,    94,    96,    98,   100,   103,   107,   108,
     109,   110,   111,   112,   113,   116,   117,   119,   123,   124,
     125,   127,   128,   129,   130,   131,   132,   133,   137,   138,
     140,   141,   142,   143,   144,   145,   150,   152,   157,   158,
     159,   160,   162,   163,   164,   166,   167,   168,   175,   177,
     179,   192,   199,   200,   201,   255,   256,   257,   258,   259,
     261,   265,   266,   267,   270,   275,   278,   279,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   295,   150,    15,
      83,   110,   125,   157,   255,   255,   164,   256,   255,   255,
     255,   255,   255,   190,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   125,   164,   267,   270,
     284,   284,    40,   255,   298,   299,   300,   255,   131,   260,
     266,   267,   268,   269,   270,   271,   288,   289,   290,   164,
     256,   272,   256,    34,    72,   253,   255,   192,   256,   164,
     164,   164,   256,   163,   255,   163,   255,    83,    40,   197,
     139,   162,   228,   267,   163,   255,    18,   255,   110,   111,
     160,   175,   176,   178,   181,   183,   184,   228,   131,   131,
     110,   228,   164,   164,   164,    83,    83,   164,   164,    85,
      90,   153,   154,   155,   301,   302,    18,   160,   175,   176,
     175,    85,   255,   257,   261,    18,   288,   292,    90,   273,
     301,    90,   301,   160,   163,    83,    11,    12,    13,    33,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    59,    71,   163,   163,    72,    72,    72,
     164,   232,   156,    72,    20,    21,    22,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    69,    70,    72,    18,
      72,   232,   136,   232,   232,    18,    72,    18,    72,    20,
     197,    16,    19,   130,   191,   192,   199,   200,   261,   156,
     284,    16,    73,    10,   281,   232,   274,   274,   156,    18,
      72,   136,   136,   165,    34,   192,   255,   293,    10,   163,
      94,    34,   192,   215,   253,   254,   255,    83,   209,   210,
      18,    34,   211,   163,   163,   163,    83,   164,    72,    83,
     186,   187,   163,   190,   163,   175,   183,   160,   102,   160,
     175,   181,    10,   163,    85,   166,   235,   236,   197,    85,
     237,   238,   196,   284,   196,   255,    18,   134,   203,   284,
     295,   296,   297,   298,    72,   136,   153,   302,    84,   255,
     284,    90,   153,   302,   171,   175,    18,   163,   165,   165,
     165,   255,   167,   168,    83,   134,   202,   255,   255,   255,
      34,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   268,   255,   293,   293,   293,
      40,   161,   165,   233,   234,   255,   257,     5,     6,     7,
       8,     9,    11,    12,    13,    14,    15,    18,    59,    74,
      75,    76,    77,    78,    79,    80,    83,    85,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   131,   132,   133,   134,
     135,   137,   138,   139,   157,   166,   172,   173,   174,   293,
      40,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   293,   255,   293,    18,    83,   288,   294,
     255,   293,   255,   293,   255,   255,   165,   174,    40,   255,
     300,   202,   255,   293,   294,   294,   190,   216,    73,   255,
     256,   190,   163,   102,    20,    10,   165,   163,   212,   163,
     212,   164,   223,   224,   225,   226,   227,   228,   230,    81,
     229,    20,    10,   163,    19,   160,    18,    83,   175,   160,
     163,   160,   184,    18,   284,    10,   163,   164,    20,    10,
     163,    10,   165,   165,   165,   239,   205,   267,    18,    10,
     165,   165,    83,    85,    86,   303,    83,    19,    72,    19,
      19,    19,   171,    72,    19,   267,   135,   204,   255,    34,
      73,    73,    73,   284,   255,    10,   165,   165,   255,    18,
     166,   292,   232,    73,   261,   284,    73,    19,    73,   255,
     232,    19,    73,    19,    73,   284,   204,    19,    73,   218,
      78,    79,   217,   220,   163,    95,   254,    40,   222,   284,
     295,    52,    53,    58,    60,    72,    91,   138,   152,   164,
     266,   267,   275,   276,   277,   210,    34,   192,   208,   212,
      19,   105,   106,   213,   212,   104,   223,   165,    10,    10,
     197,    73,   276,   187,   193,    18,   178,   182,   183,   185,
     160,    18,   255,   236,   223,   276,   238,   284,   163,    19,
     111,   117,   120,   121,   122,   123,   124,   125,   240,   247,
     248,   249,   250,    10,   239,   297,    73,   255,    19,   293,
     205,    18,   255,   234,    19,   255,    19,    18,    78,    79,
     219,   221,   256,   192,   163,   163,   284,   165,    16,   276,
     276,   276,   276,   276,   280,   282,   283,   164,    90,   276,
     156,    11,    12,    13,    33,    36,    37,    38,    39,    40,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    71,    72,   190,    19,
     255,    34,   163,   214,   104,   163,   165,   117,   262,   225,
     226,   227,   230,   161,   198,   114,   115,   194,   195,   182,
     183,    10,    19,    18,   180,   183,    19,   165,   228,   205,
     228,   110,   250,   267,    19,    73,    73,   239,   232,    19,
     239,   256,    34,    80,   192,   254,    34,   192,   207,   222,
     284,    16,    73,    10,   281,   280,   165,   174,   276,   276,
     276,    34,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   101,   214,   190,   163,
      34,   231,   164,   231,   197,    85,   164,    18,    19,   185,
     180,    10,    19,   262,   174,   188,   189,    18,   163,   241,
      85,   251,   252,   197,    19,    19,    19,    34,   190,   163,
     165,   190,   165,   276,   283,   165,   276,    34,    73,   163,
     190,   228,    18,   197,   263,   264,    18,   198,    20,   267,
     190,    19,   183,   231,    20,    10,   163,   242,    20,    10,
     163,   174,   190,    34,   192,   206,    99,   207,   276,   190,
      85,    10,   165,   190,    85,   276,    85,    19,    18,   276,
     189,    19,    83,   157,   174,   243,   244,   245,   267,   276,
     252,   164,   190,   163,    19,   264,    19,   165,   190,   118,
     102,   156,   223,    97,    18,    19,   205,    83,   172,   250,
     174,   165,   163,   190,   163,   163,   163,   163,   174,   231,
      19,   163,    18,   163,   246,   190,    19
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 2:
#line 158 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"start1";;}
    break;

  case 3:
#line 160 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"start2";;}
    break;

  case 4:
#line 165 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement_list1\n";;}
    break;

  case 5:
#line 167 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement_list2\n";;}
    break;

  case 72:
#line 186 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"identifier1\n";;}
    break;

  case 73:
#line 188 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"identifier2\n";;}
    break;

  case 74:
#line 193 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"namespace_name_parts1\n";;}
    break;

  case 75:
#line 195 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"namespace_name_parts2\n";;}
    break;

  case 76:
#line 200 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {	cout<<"namespace_name\n";;}
    break;

  case 77:
#line 205 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement1\n";;}
    break;

  case 78:
#line 207 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement2\n";;}
    break;

  case 79:
#line 209 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement3\n";;}
    break;

  case 80:
#line 211 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement4\n";;}
    break;

  case 81:
#line 213 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement5\n";;}
    break;

  case 82:
#line 215 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement6\n";;}
    break;

  case 83:
#line 217 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement7\n";;}
    break;

  case 84:
#line 219 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement8\n";;}
    break;

  case 85:
#line 221 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement9\n";;}
    break;

  case 86:
#line 223 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement10\n";;}
    break;

  case 87:
#line 225 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"top_statement11\n";;}
    break;

  case 88:
#line 230 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"use_type1\n";;}
    break;

  case 89:
#line 232 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"use_type2\n";;}
    break;

  case 90:
#line 238 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"group_use_declaration1\n";;}
    break;

  case 91:
#line 240 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"group_use_declaration2\n";;}
    break;

  case 92:
#line 242 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"group_use_declaration3\n";;}
    break;

  case 93:
#line 244 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"group_use_declaration4\n";;}
    break;

  case 94:
#line 249 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"unprefixed_use_declarations1\n";;}
    break;

  case 95:
#line 251 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"unprefixed_use_declarations2\n";;}
    break;

  case 96:
#line 256 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"use_declarations1\n";;}
    break;

  case 97:
#line 258 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"use_declarations2\n";;}
    break;

  case 98:
#line 263 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inline_use_declarations1\n";;}
    break;

  case 99:
#line 265 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inline_use_declarations2\n";;}
    break;

  case 100:
#line 270 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"unprefixed_use_declaration1\n";;}
    break;

  case 101:
#line 272 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"unprefixed_use_declaration2\n";;}
    break;

  case 102:
#line 277 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"use_declaration1\n";;}
    break;

  case 103:
#line 279 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"use_declaration2\n";;}
    break;

  case 104:
#line 284 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inline_use_declaration1\n";;}
    break;

  case 105:
#line 286 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inline_use_declaration2\n";;}
    break;

  case 106:
#line 291 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"constant_declaration_list1\n";;}
    break;

  case 107:
#line 293 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"constant_declaration_list2\n";;}
    break;

  case 108:
#line 298 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"constant_declaration\n";;}
    break;

  case 109:
#line 303 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_const_list1\n";;}
    break;

  case 110:
#line 305 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_const_list2\n";;}
    break;

  case 111:
#line 310 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_const\n";;}
    break;

  case 112:
#line 315 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inner_statement_list1\n";;}
    break;

  case 113:
#line 317 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inner_statement_list2\n";;}
    break;

  case 114:
#line 322 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inner_statement1\n";;}
    break;

  case 115:
#line 324 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inner_statement2\n";;}
    break;

  case 116:
#line 326 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inner_statement3\n";;}
    break;

  case 117:
#line 328 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"inner_statement4\n";;}
    break;

  case 118:
#line 333 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement1\n";;}
    break;

  case 119:
#line 335 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement2\n";;}
    break;

  case 120:
#line 337 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement3\n";;}
    break;

  case 121:
#line 339 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement4\n";;}
    break;

  case 122:
#line 341 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement5\n";;}
    break;

  case 123:
#line 343 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement6\n";;}
    break;

  case 124:
#line 345 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement7\n";;}
    break;

  case 125:
#line 347 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement8\n";;}
    break;

  case 126:
#line 349 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement9\n";;}
    break;

  case 127:
#line 351 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement10\n";;}
    break;

  case 128:
#line 353 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement11\n";;}
    break;

  case 129:
#line 355 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement12\n";;}
    break;

  case 130:
#line 357 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement13\n";;}
    break;

  case 131:
#line 359 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement14\n";;}
    break;

  case 132:
#line 361 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement15\n";;}
    break;

  case 133:
#line 363 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement16\n";;}
    break;

  case 134:
#line 365 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement17\n";;}
    break;

  case 135:
#line 367 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement18\n";;}
    break;

  case 136:
#line 369 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement19\n";;}
    break;

  case 137:
#line 371 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement20\n";;}
    break;

  case 138:
#line 373 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement21\n";;}
    break;

  case 139:
#line 375 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement22\n";;}
    break;

  case 140:
#line 377 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement23\n";;}
    break;

  case 141:
#line 379 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement24\n";;}
    break;

  case 142:
#line 381 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement25\n";;}
    break;

  case 143:
#line 383 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement26\n";;}
    break;

  case 144:
#line 385 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement27\n";;}
    break;

  case 145:
#line 387 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"statement28\n";;}
    break;

  case 146:
#line 392 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"catches1\n";;}
    break;

  case 147:
#line 394 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"catches2\n";;}
    break;

  case 148:
#line 399 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"catch\n";;}
    break;

  case 149:
#line 404 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_finally1\n";;}
    break;

  case 150:
#line 406 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_finally2\n";;}
    break;

  case 151:
#line 411 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variables_list1\n";;}
    break;

  case 152:
#line 413 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variables_list2\n";;}
    break;

  case 153:
#line 418 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_ref1\n";;}
    break;

  case 154:
#line 420 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_ref2\n";;}
    break;

  case 155:
#line 425 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_ellipsis1\n";;}
    break;

  case 156:
#line 427 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_ellipsis2\n";;}
    break;

  case 157:
#line 432 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_declaration_statement "<<(yyvsp[-9].r.str)<<" "<<(yyvsp[-7].r.str)<<"\n";;}
    break;

  case 158:
#line 437 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement1\n";;}
    break;

  case 159:
#line 439 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement2\n";;}
    break;

  case 160:
#line 441 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement3\n";;}
    break;

  case 161:
#line 446 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_entry_type1\n";;}
    break;

  case 162:
#line 448 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_entry_type2\n";;}
    break;

  case 163:
#line 450 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_entry_type3\n";;}
    break;

  case 164:
#line 455 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"extends_from1\n";;}
    break;

  case 165:
#line 457 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"extends_from2\n";;}
    break;

  case 166:
#line 462 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"interface_extends_list1\n";;}
    break;

  case 167:
#line 464 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"interface_extends_list2\n";;}
    break;

  case 168:
#line 469 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"implements_list1\n";;}
    break;

  case 169:
#line 471 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"implements_list2\n";;}
    break;

  case 170:
#line 476 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name_list1\n";;}
    break;

  case 171:
#line 478 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name_list2\n";;}
    break;

  case 172:
#line 483 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"for_statement1\n";;}
    break;

  case 173:
#line 485 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"for_statement2\n";;}
    break;

  case 174:
#line 490 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_statement1\n";;}
    break;

  case 175:
#line 492 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_statement2\n";;}
    break;

  case 176:
#line 497 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_statement1\n";;}
    break;

  case 177:
#line 499 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_statement2\n";;}
    break;

  case 178:
#line 504 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_list1\n";;}
    break;

  case 179:
#line 506 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_list2\n";;}
    break;

  case 180:
#line 511 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_list_element\n";;}
    break;

  case 181:
#line 516 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"switch_case_list1\n";;}
    break;

  case 182:
#line 518 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"switch_case_list2\n";;}
    break;

  case 183:
#line 520 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"switch_case_list3\n";;}
    break;

  case 184:
#line 522 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"switch_case_list4\n";;}
    break;

  case 185:
#line 527 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case_list1\n";;}
    break;

  case 186:
#line 529 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case_list2\n";;}
    break;

  case 187:
#line 534 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case1\n";;}
    break;

  case 188:
#line 536 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case2\n";;}
    break;

  case 189:
#line 541 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case_separator1\n";;}
    break;

  case 190:
#line 543 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case_separator2\n";;}
    break;

  case 191:
#line 548 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"while_statement1\n";;}
    break;

  case 192:
#line 550 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"while_statement2\n";;}
    break;

  case 193:
#line 555 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"elseif_list1\n";;}
    break;

  case 194:
#line 557 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"elseif_list2\n";;}
    break;

  case 195:
#line 562 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"elseif1\n";;}
    break;

  case 196:
#line 567 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_elseif_list1\n";;}
    break;

  case 197:
#line 569 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_elseif_list2\n";;}
    break;

  case 198:
#line 574 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_elseif\n";;}
    break;

  case 199:
#line 579 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"else_single1\n";;}
    break;

  case 200:
#line 581 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"else_single2\n";;}
    break;

  case 201:
#line 586 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_else_single1\n";;}
    break;

  case 202:
#line 588 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_else_single2\n";;}
    break;

  case 203:
#line 593 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_variable1\n";;}
    break;

  case 204:
#line 595 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_variable2\n";;}
    break;

  case 205:
#line 597 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_variable3\n";;}
    break;

  case 206:
#line 602 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_list1\n";;}
    break;

  case 207:
#line 604 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_list2\n";;}
    break;

  case 208:
#line 606 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_list3\n";;}
    break;

  case 209:
#line 608 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_list4\n";;}
    break;

  case 210:
#line 613 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_without_static_scalar_list1\n";;}
    break;

  case 211:
#line 615 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_without_static_scalar_list2\n";;}
    break;

  case 212:
#line 620 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_without_static_scalar\n";;}
    break;

  case 213:
#line 624 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_with_static_scalar_list1\n";;}
    break;

  case 214:
#line 626 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_with_static_scalar_list2\n";;}
    break;

  case 215:
#line 631 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_with_static_scalar\n";;}
    break;

  case 216:
#line 635 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"type1\n";;}
    break;

  case 217:
#line 637 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"type2\n";;}
    break;

  case 218:
#line 639 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"type3\n";;}
    break;

  case 219:
#line 641 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"type4\n";;}
    break;

  case 220:
#line 646 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_capacity1\n";;}
    break;

  case 221:
#line 648 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_capacity2";;}
    break;

  case 222:
#line 652 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"param_type\n";;}
    break;

  case 223:
#line 657 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_return_type1\n";;}
    break;

  case 224:
#line 659 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_return_type2\n";;}
    break;

  case 225:
#line 664 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument_list1\n";;}
    break;

  case 226:
#line 666 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument_list2\n";;}
    break;

  case 227:
#line 668 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument_list3\n";;}
    break;

  case 228:
#line 673 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_argument_list1\n";;}
    break;

  case 229:
#line 675 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_argument_list2\n";;}
    break;

  case 230:
#line 680 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument1\n";;}
    break;

  case 231:
#line 682 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument2\n";;}
    break;

  case 232:
#line 684 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument3\n";;}
    break;

  case 233:
#line 689 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var_list1\n";;}
    break;

  case 234:
#line 691 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var_list2\n";;}
    break;

  case 235:
#line 696 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var1\n";;}
    break;

  case 236:
#line 698 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var2\n";;}
    break;

  case 237:
#line 700 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var3\n";;}
    break;

  case 238:
#line 705 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_var_list1\n";;}
    break;

  case 239:
#line 707 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_var_list2\n";;}
    break;

  case 240:
#line 712 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_var1\n";;}
    break;

  case 241:
#line 714 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_var2\n";;}
    break;

  case 242:
#line 719 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement_list1\n";;}
    break;

  case 243:
#line 721 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement_list2\n";;}
    break;

  case 244:
#line 726 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement1\n";;}
    break;

  case 245:
#line 728 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement2\n";;}
    break;

  case 246:
#line 730 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement3\n";;}
    break;

  case 247:
#line 732 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement4\n";;}
    break;

  case 248:
#line 737 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptations1\n";;}
    break;

  case 249:
#line 739 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptations2\n";;}
    break;

  case 250:
#line 744 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation_list1\n";;}
    break;

  case 251:
#line 746 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation_list2\n";;}
    break;

  case 252:
#line 751 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation1\n";;}
    break;

  case 253:
#line 753 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation2\n";;}
    break;

  case 254:
#line 755 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation3\n";;}
    break;

  case 255:
#line 757 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation4\n";;}
    break;

  case 256:
#line 759 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation5\n";;}
    break;

  case 257:
#line 764 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_method_reference_fully_qualified\n";;}
    break;

  case 258:
#line 769 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_method_reference1\n";;}
    break;

  case 259:
#line 771 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_method_reference2\n";;}
    break;

  case 260:
#line 776 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_body1\n";;}
    break;

  case 261:
#line 778 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_body2\n";;}
    break;

  case 262:
#line 783 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_modifiers1\n";;}
    break;

  case 263:
#line 785 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_modifiers2\n";;}
    break;

  case 264:
#line 790 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_modifiers1\n";;}
    break;

  case 265:
#line 792 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_modifiers2\n";;}
    break;

  case 266:
#line 797 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_member_modifiers1\n";;}
    break;

  case 267:
#line 799 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_member_modifiers2\n";;}
    break;

  case 268:
#line 804 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier1\n";;}
    break;

  case 269:
#line 806 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier2\n";;}
    break;

  case 270:
#line 808 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier3\n";;}
    break;

  case 271:
#line 810 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier4\n";;}
    break;

  case 272:
#line 812 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier5\n";;}
    break;

  case 273:
#line 814 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier6\n";;}
    break;

  case 274:
#line 819 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"property_declaration_list1\n";;}
    break;

  case 275:
#line 821 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"property_declaration_list2\n";;}
    break;

  case 276:
#line 826 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"property_declaration1\n";;}
    break;

  case 277:
#line 828 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"property_declaration2\n";;}
    break;

  case 278:
#line 833 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr_list1\n";;}
    break;

  case 279:
#line 835 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr_list2\n";;}
    break;

  case 280:
#line 840 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"for_expr1\n";;}
    break;

  case 281:
#line 842 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"for_expr2\n";;}
    break;

  case 282:
#line 847 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr1\n";;}
    break;

  case 283:
#line 849 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr2\n";;}
    break;

  case 284:
#line 851 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr3\n";;}
    break;

  case 285:
#line 853 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr4\n";;}
    break;

  case 286:
#line 855 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr5\n";;}
    break;

  case 287:
#line 857 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr6\n";;}
    break;

  case 288:
#line 859 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr7\n";;}
    break;

  case 289:
#line 861 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr8\n";;}
    break;

  case 290:
#line 863 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr9\n";;}
    break;

  case 291:
#line 865 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr10\n";;}
    break;

  case 292:
#line 867 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr11\n";;}
    break;

  case 293:
#line 869 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr12\n";;}
    break;

  case 294:
#line 871 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr13\n";;}
    break;

  case 295:
#line 873 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr14\n";;}
    break;

  case 296:
#line 875 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr15\n";;}
    break;

  case 297:
#line 877 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr16\n";;}
    break;

  case 298:
#line 879 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr17\n";;}
    break;

  case 299:
#line 881 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr18\n";;}
    break;

  case 300:
#line 883 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr19\n";;}
    break;

  case 301:
#line 885 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr20\n";;}
    break;

  case 302:
#line 887 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr21\n";;}
    break;

  case 303:
#line 889 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr22\n";;}
    break;

  case 304:
#line 891 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr23\n";;}
    break;

  case 305:
#line 893 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr24\n";;}
    break;

  case 306:
#line 895 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr25\n";;}
    break;

  case 307:
#line 897 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr26\n";;}
    break;

  case 308:
#line 899 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr27\n";;}
    break;

  case 309:
#line 901 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr28\n";;}
    break;

  case 310:
#line 903 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr29\n";;}
    break;

  case 311:
#line 905 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr30\n";;}
    break;

  case 312:
#line 907 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr31\n";;}
    break;

  case 313:
#line 909 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr32\n";;}
    break;

  case 314:
#line 911 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr33\n";;}
    break;

  case 315:
#line 913 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr34\n";;}
    break;

  case 316:
#line 915 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr35\n";;}
    break;

  case 317:
#line 917 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr36\n";;}
    break;

  case 318:
#line 919 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr37\n";;}
    break;

  case 319:
#line 921 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr38\n";;}
    break;

  case 320:
#line 923 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr39\n";;}
    break;

  case 321:
#line 925 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr30\n";;}
    break;

  case 322:
#line 927 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr41\n";;}
    break;

  case 323:
#line 929 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr42\n";;}
    break;

  case 324:
#line 931 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr43\n";;}
    break;

  case 325:
#line 933 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr44\n";;}
    break;

  case 326:
#line 935 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr45\n";;}
    break;

  case 327:
#line 937 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr46\n";;}
    break;

  case 328:
#line 939 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr47\n";;}
    break;

  case 329:
#line 941 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr48\n";;}
    break;

  case 330:
#line 943 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr49\n";;}
    break;

  case 331:
#line 945 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr50\n";;}
    break;

  case 332:
#line 947 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr51\n";;}
    break;

  case 333:
#line 949 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr52\n";;}
    break;

  case 334:
#line 951 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr53\n";;}
    break;

  case 335:
#line 953 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr54\n";;}
    break;

  case 336:
#line 956 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr55\n";;}
    break;

  case 337:
#line 958 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr56\n";;}
    break;

  case 338:
#line 960 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr57\n";;}
    break;

  case 339:
#line 962 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr58\n";;}
    break;

  case 340:
#line 964 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr59\n";;}
    break;

  case 341:
#line 966 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr60\n";;}
    break;

  case 342:
#line 968 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr61\n";;}
    break;

  case 343:
#line 970 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr62\n";;}
    break;

  case 344:
#line 972 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr63\n";;}
    break;

  case 345:
#line 974 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr64\n";;}
    break;

  case 346:
#line 976 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr65\n";;}
    break;

  case 347:
#line 978 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr66\n";;}
    break;

  case 348:
#line 980 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr67\n";;}
    break;

  case 349:
#line 982 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr68\n";;}
    break;

  case 350:
#line 984 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr69\n";;}
    break;

  case 351:
#line 986 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr70\n";;}
    break;

  case 352:
#line 988 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr71\n";;}
    break;

  case 353:
#line 990 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr72\n";;}
    break;

  case 354:
#line 992 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr73\n";;}
    break;

  case 355:
#line 994 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr74\n";;}
    break;

  case 356:
#line 996 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr75\n";;}
    break;

  case 357:
#line 998 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr76\n";;}
    break;

  case 358:
#line 1000 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr77\n";;}
    break;

  case 359:
#line 1002 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr78\n";;}
    break;

  case 360:
#line 1004 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr79\n";;}
    break;

  case 361:
#line 1006 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr80\n";;}
    break;

  case 362:
#line 1008 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr81\n";;}
    break;

  case 363:
#line 1010 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr82\n";;}
    break;

  case 364:
#line 1012 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr83\n";;}
    break;

  case 365:
#line 1017 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parentheses_expr1\n";;}
    break;

  case 366:
#line 1019 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parentheses_expr2\n";;}
    break;

  case 367:
#line 1024 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"yield_expr1\n";;}
    break;

  case 368:
#line 1026 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"yield_expr2\n";;}
    break;

  case 369:
#line 1031 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_expr1\n";;}
    break;

  case 370:
#line 1033 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_expr2\n";;}
    break;

  case 371:
#line 1038 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar_dereference1\n";;}
    break;

  case 372:
#line 1040 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar_dereference2\n";;}
    break;

  case 373:
#line 1042 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar_dereference3\n";;}
    break;

  case 374:
#line 1044 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar_dereference4\n";;}
    break;

  case 375:
#line 1050 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"anonymous_class\n";;}
    break;

  case 376:
#line 1055 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_expr1\n";;}
    break;

  case 377:
#line 1057 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_expr2\n";;}
    break;

  case 378:
#line 1062 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_vars1\n";;}
    break;

  case 379:
#line 1064 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_vars2\n";;}
    break;

  case 380:
#line 1069 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_var_list1\n";;}
    break;

  case 381:
#line 1071 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_var_list2\n";;}
    break;

  case 382:
#line 1076 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_var\n";;}
    break;

  case 383:
#line 1081 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call1\n";;}
    break;

  case 384:
#line 1083 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call2\n";;}
    break;

  case 385:
#line 1085 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call3\n";;}
    break;

  case 386:
#line 1087 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call4\n";;}
    break;

  case 387:
#line 1089 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call5\n";;}
    break;

  case 388:
#line 1091 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call6\n";;}
    break;

  case 389:
#line 1097 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name\n";;}
    break;

  case 390:
#line 1099 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name\n";;}
    break;

  case 391:
#line 1104 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name1\n";;}
    break;

  case 392:
#line 1106 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name2\n";;}
    break;

  case 393:
#line 1108 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name3\n";;}
    break;

  case 394:
#line 1113 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name_reference1\n";;}
    break;

  case 395:
#line 1115 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name_reference2\n";;}
    break;

  case 396:
#line 1120 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"dynamic_class_name_reference1\n";;}
    break;

  case 397:
#line 1122 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"dynamic_class_name_reference2\n";;}
    break;

  case 398:
#line 1127 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name_or_var1\n";;}
    break;

  case 399:
#line 1129 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name_or_var2\n";;}
    break;

  case 400:
#line 1134 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr1\n";;}
    break;

  case 401:
#line 1136 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr2\n";;}
    break;

  case 402:
#line 1138 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr3\n";;}
    break;

  case 403:
#line 1140 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr4\n";;}
    break;

  case 404:
#line 1145 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"exit_expr1\n";;}
    break;

  case 405:
#line 1147 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"exit_expr2\n";;}
    break;

  case 406:
#line 1149 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"exit_expr3\n";;}
    break;

  case 407:
#line 1154 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"backticks_expr1\n";;}
    break;

  case 408:
#line 1156 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"backticks_expr2\n";;}
    break;

  case 409:
#line 1158 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"backticks_expr3\n";;}
    break;

  case 410:
#line 1163 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"ctor_arguments1\n";;}
    break;

  case 411:
#line 1165 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"ctor_arguments2\n";;}
    break;

  case 412:
#line 1170 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar1\n";;}
    break;

  case 413:
#line 1172 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar2\n";;}
    break;

  case 414:
#line 1174 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar3\n";;}
    break;

  case 415:
#line 1176 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar4\n";;}
    break;

  case 416:
#line 1178 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar5\n";;}
    break;

  case 417:
#line 1180 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar6\n";;}
    break;

  case 418:
#line 1182 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar7\n";;}
    break;

  case 419:
#line 1184 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar8\n";;}
    break;

  case 420:
#line 1186 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar9\n";;}
    break;

  case 421:
#line 1188 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar10\n";;}
    break;

  case 422:
#line 1190 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar11\n";;}
    break;

  case 423:
#line 1192 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar12\n";;}
    break;

  case 424:
#line 1194 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar13\n";;}
    break;

  case 425:
#line 1199 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar1\n";;}
    break;

  case 426:
#line 1201 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar2\n";;}
    break;

  case 427:
#line 1203 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar3\n";;}
    break;

  case 428:
#line 1205 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar4\n";;}
    break;

  case 429:
#line 1207 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar5\n";;}
    break;

  case 430:
#line 1209 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar6\n";;}
    break;

  case 431:
#line 1214 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation1\n";;}
    break;

  case 432:
#line 1216 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation2\n";;}
    break;

  case 433:
#line 1218 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation3\n";;}
    break;

  case 434:
#line 1220 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation4\n";;}
    break;

  case 435:
#line 1222 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation5\n";;}
    break;

  case 436:
#line 1224 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation6\n";;}
    break;

  case 437:
#line 1226 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation7\n";;}
    break;

  case 438:
#line 1228 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation8\n";;}
    break;

  case 439:
#line 1230 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation9\n";;}
    break;

  case 440:
#line 1232 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation10\n";;}
    break;

  case 441:
#line 1234 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation11\n";;}
    break;

  case 442:
#line 1236 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation12\n";;}
    break;

  case 443:
#line 1238 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation13\n";;}
    break;

  case 444:
#line 1240 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation14\n";;}
    break;

  case 445:
#line 1242 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation15\n";;}
    break;

  case 446:
#line 1244 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation16\n";;}
    break;

  case 447:
#line 1246 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation17\n";;}
    break;

  case 448:
#line 1248 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation18\n";;}
    break;

  case 449:
#line 1250 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation19\n";;}
    break;

  case 450:
#line 1252 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation20\n";;}
    break;

  case 451:
#line 1254 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation21\n";;}
    break;

  case 452:
#line 1256 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation22\n";;}
    break;

  case 453:
#line 1258 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation23\n";;}
    break;

  case 454:
#line 1260 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation24\n";;}
    break;

  case 455:
#line 1262 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation25\n";;}
    break;

  case 456:
#line 1264 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation26\n";;}
    break;

  case 457:
#line 1266 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation27\n";;}
    break;

  case 458:
#line 1268 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation28\n";;}
    break;

  case 459:
#line 1270 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation29\n";;}
    break;

  case 460:
#line 1272 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation30\n";;}
    break;

  case 461:
#line 1274 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation31\n";;}
    break;

  case 462:
#line 1276 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation32\n";;}
    break;

  case 463:
#line 1278 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation33\n";;}
    break;

  case 464:
#line 1283 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"constant1\n";;}
    break;

  case 465:
#line 1285 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"constant2\n";;}
    break;

  case 466:
#line 1290 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar1\n";;}
    break;

  case 467:
#line 1292 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar2\n";;}
    break;

  case 468:
#line 1294 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar3\n";;}
    break;

  case 469:
#line 1296 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar4\n";;}
    break;

  case 470:
#line 1301 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_array_pair_list1\n";;}
    break;

  case 471:
#line 1303 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_array_pair_list2\n";;}
    break;

  case 472:
#line 1308 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_comma1\n";;}
    break;

  case 473:
#line 1310 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_comma2\n";;}
    break;

  case 474:
#line 1315 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_static_array_pair_list1\n";;}
    break;

  case 475:
#line 1317 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_static_array_pair_list2\n";;}
    break;

  case 476:
#line 1322 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_array_pair1\n";;}
    break;

  case 477:
#line 1324 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_array_pair2\n";;}
    break;

  case 478:
#line 1329 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable1\n";;}
    break;

  case 479:
#line 1331 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable2\n";;}
    break;

  case 480:
#line 1333 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable3\n";;}
    break;

  case 481:
#line 1335 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable4\n";;}
    break;

  case 482:
#line 1340 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_expr_array_deref1\n";;}
    break;

  case 483:
#line 1342 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_expr_array_deref2\n";;}
    break;

  case 484:
#line 1348 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access1\n";;}
    break;

  case 485:
#line 1350 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access2\n";;}
    break;

  case 486:
#line 1352 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access3\n";;}
    break;

  case 487:
#line 1354 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access4\n";;}
    break;

  case 488:
#line 1356 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access5\n";;}
    break;

  case 489:
#line 1361 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_or_new_expr1\n";;}
    break;

  case 490:
#line 1363 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_or_new_expr2\n";;}
    break;

  case 491:
#line 1368 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_without_objects1\n";;}
    break;

  case 492:
#line 1370 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_without_objects2\n";;}
    break;

  case 493:
#line 1375 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"base_variable1\n";;}
    break;

  case 494:
#line 1377 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"base_variable2\n";;}
    break;

  case 495:
#line 1382 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property1\n";;}
    break;

  case 496:
#line 1384 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property2\n";;}
    break;

  case 497:
#line 1389 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays1\n";;}
    break;

  case 498:
#line 1391 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays2\n";;}
    break;

  case 499:
#line 1393 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays3\n";;}
    break;

  case 500:
#line 1395 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays4\n";;}
    break;

  case 501:
#line 1400 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable1\n";;}
    break;

  case 502:
#line 1402 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable2\n";;}
    break;

  case 503:
#line 1404 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable3\n";;}
    break;

  case 504:
#line 1406 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable4\n";;}
    break;

  case 505:
#line 1408 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable5\n";;}
    break;

  case 506:
#line 1413 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"dim_offset1\n";;}
    break;

  case 507:
#line 1415 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"dim_offset2\n";;}
    break;

  case 508:
#line 1420 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_property1\n";;}
    break;

  case 509:
#line 1422 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_property2\n";;}
    break;

  case 510:
#line 1424 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_property3\n";;}
    break;

  case 511:
#line 1429 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr\n";;}
    break;

  case 512:
#line 1434 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_elements1\n";;}
    break;

  case 513:
#line 1436 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_elements2\n";;}
    break;

  case 514:
#line 1441 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_element1\n";;}
    break;

  case 515:
#line 1443 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_element2\n";;}
    break;

  case 516:
#line 1445 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_element3\n";;}
    break;

  case 517:
#line 1450 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair_list1\n";;}
    break;

  case 518:
#line 1452 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair_list2\n";;}
    break;

  case 519:
#line 1457 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_array_pair_list1\n";;}
    break;

  case 520:
#line 1459 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_array_pair_list2\n";;}
    break;

  case 521:
#line 1464 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair1\n";;}
    break;

  case 522:
#line 1466 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair2\n";;}
    break;

  case 523:
#line 1468 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair3\n";;}
    break;

  case 524:
#line 1470 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair4\n";;}
    break;

  case 525:
#line 1475 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_list1\n";;}
    break;

  case 526:
#line 1477 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_list2\n";;}
    break;

  case 527:
#line 1479 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_list3\n";;}
    break;

  case 528:
#line 1481 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_list4\n";;}
    break;

  case 529:
#line 1486 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var1\n";;}
    break;

  case 530:
#line 1488 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var2\n";;}
    break;

  case 531:
#line 1490 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var3\n";;}
    break;

  case 532:
#line 1492 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var4\n";;}
    break;

  case 533:
#line 1494 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var5\n";;}
    break;

  case 534:
#line 1496 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var6\n";;}
    break;

  case 535:
#line 1498 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var7\n";;}
    break;

  case 536:
#line 1503 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset1\n";;}
    break;

  case 537:
#line 1505 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset2\n";;}
    break;

  case 538:
#line 1507 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset3\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 6443 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1510 "D:\\Compiler\\CMP\\Compiler\\yacc.y"




void yyerror(char *s) 
{
	;
}

int yylex()
{
	return lexer->yylex();
}
void main(void)
{
	freopen("D:\\Compiler\\CMP\\Compiler\\Compiler\\in.txt","r",stdin);
	freopen("D:\\Compiler\\CMP\\Compiler\\Compiler\\out.txt","w",stdout);
	Parser* p = new Parser();
	p->parse();
	
}
