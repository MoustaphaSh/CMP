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
		int myColNo;
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
#define YYLAST   9498

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  169
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  143
/* YYNRULES -- Number of rules. */
#define YYNRULES  546
/* YYNRULES -- Number of states. */
#define YYNSTATES  1035

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
     411,   417,   419,   426,   430,   434,   437,   439,   440,   443,
     448,   454,   455,   458,   462,   464,   468,   469,   471,   472,
     474,   479,   487,   495,   502,   508,   510,   513,   516,   517,
     520,   521,   524,   525,   528,   530,   534,   536,   541,   543,
     548,   550,   555,   557,   561,   565,   569,   574,   579,   585,
     586,   589,   594,   598,   600,   602,   604,   609,   610,   613,
     617,   618,   621,   626,   627,   630,   631,   635,   637,   640,
     642,   646,   648,   650,   651,   653,   657,   662,   664,   668,
     675,   677,   682,   684,   686,   688,   689,   691,   692,   695,
     698,   702,   706,   708,   712,   714,   717,   720,   724,   726,
     728,   731,   736,   740,   742,   744,   748,   751,   752,   757,
     762,   765,   769,   771,   775,   776,   779,   784,   790,   795,
     800,   805,   809,   811,   813,   822,   824,   828,   830,   831,
     832,   834,   836,   839,   841,   843,   845,   847,   849,   851,
     853,   857,   859,   863,   867,   869,   870,   872,   874,   878,
     882,   887,   892,   894,   897,   901,   905,   909,   913,   917,
     921,   925,   929,   933,   937,   941,   944,   947,   950,   953,
     957,   961,   965,   969,   973,   977,   981,   985,   989,   993,
     997,  1001,  1005,  1009,  1013,  1017,  1021,  1024,  1027,  1030,
    1033,  1037,  1041,  1045,  1049,  1053,  1057,  1061,  1065,  1069,
    1073,  1075,  1079,  1085,  1090,  1094,  1099,  1104,  1107,  1110,
    1113,  1116,  1119,  1122,  1125,  1128,  1131,  1134,  1137,  1140,
    1143,  1146,  1148,  1150,  1152,  1156,  1159,  1161,  1164,  1169,
    1174,  1182,  1191,  1195,  1199,  1202,  1207,  1212,  1216,  1221,
    1226,  1231,  1236,  1241,  1246,  1250,  1253,  1254,  1259,  1261,
    1265,  1268,  1271,  1276,  1283,  1286,  1289,  1294,  1296,  1298,
    1300,  1303,  1307,  1309,  1311,  1313,  1315,  1317,  1319,  1323,
    1327,  1332,  1337,  1338,  1341,  1343,  1344,  1346,  1348,  1349,
    1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,
    1371,  1373,  1377,  1380,  1382,  1386,  1388,  1393,  1397,  1399,
    1403,  1407,  1411,  1415,  1419,  1423,  1427,  1431,  1435,  1439,
    1443,  1447,  1451,  1455,  1459,  1463,  1467,  1470,  1473,  1476,
    1479,  1483,  1487,  1491,  1495,  1499,  1503,  1507,  1511,  1517,
    1522,  1527,  1531,  1533,  1537,  1539,  1541,  1545,  1549,  1550,
    1553,  1554,  1556,  1560,  1562,  1566,  1568,  1570,  1572,  1574,
    1576,  1583,  1588,  1592,  1597,  1600,  1605,  1610,  1612,  1616,
    1618,  1621,  1623,  1625,  1630,  1632,  1636,  1643,  1648,  1653,
    1658,  1663,  1665,  1668,  1673,  1674,  1676,  1678,  1682,  1684,
    1689,  1693,  1695,  1697,  1699,  1700,  1701,  1704,  1708,  1710,
    1714,  1716,  1721,  1724,  1727,  1730,  1732,  1735,  1737,  1742,
    1746,  1750,  1754,  1761,  1765,  1767,  1769
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
      -1,   202,    -1,   204,    -1,   130,    -1,   157,   176,   163,
      -1,   157,   176,    18,   171,    19,    -1,   157,    18,   171,
      19,    -1,   117,   181,   163,    -1,   117,   178,   181,   163,
      -1,   179,   163,    -1,   111,   232,   186,   163,    -1,   110,
      -1,   111,    -1,   117,   178,   175,   160,    18,   180,    19,
      -1,   117,   178,   160,   175,   160,    18,   180,    19,    -1,
     117,   175,   160,    18,   182,    19,    -1,   117,   160,   175,
     160,    18,   182,    19,    -1,   180,    10,   183,    -1,   183,
      -1,   181,    10,   184,    -1,   184,    -1,   182,    10,   185,
      -1,   185,    -1,   176,    -1,   176,   102,    83,    -1,   183,
      -1,   160,   183,    -1,   183,    -1,   178,   183,    -1,   186,
      10,   187,    -1,   187,    -1,    83,    20,   284,    -1,   188,
      10,   189,    -1,   189,    -1,   174,    20,   284,    -1,   190,
     191,    -1,    -1,   192,    -1,   202,    -1,   204,    -1,   130,
      -1,   193,   190,    19,    -1,    77,   263,   192,   220,   224,
      -1,    77,   263,    34,   190,   222,   225,    80,   163,    -1,
      94,   263,   219,    -1,    93,   192,    94,   263,   163,    -1,
      96,   164,   259,   163,   259,   163,   259,   165,   210,    -1,
     103,   263,   215,    -1,   107,   163,    -1,   107,   260,   163,
      -1,   108,   163,    -1,   108,   260,   163,    -1,   112,   163,
      -1,   112,   260,   163,    -1,   264,   163,    -1,   119,   232,
     239,   163,    -1,   125,   232,   241,   163,    -1,    92,   258,
     163,    -1,    87,    -1,   260,   163,    -1,   127,   164,   199,
     165,   163,    -1,    98,   164,   260,   102,   226,   165,   211,
      -1,    98,   164,   260,   102,   292,    16,   226,   165,   211,
      -1,   100,   164,   213,   165,   212,    -1,   163,    -1,   113,
      18,   190,    19,   194,   197,    -1,   116,   260,   163,    -1,
     109,    83,   163,    -1,    83,    34,    -1,    18,    -1,    -1,
     194,   195,    -1,   196,    18,   190,    19,    -1,   114,   164,
     275,    85,   165,    -1,    -1,   115,   198,    -1,    18,   190,
      19,    -1,   292,    -1,   199,    10,   292,    -1,    -1,    40,
      -1,    -1,   161,    -1,   203,    18,   190,    19,    -1,   110,
     200,    83,   164,   227,   165,   235,    -1,   205,    83,   206,
     208,    18,   243,    19,    -1,   133,    83,   207,    18,   243,
      19,    -1,   132,    83,    18,   243,    19,    -1,   131,    -1,
     124,   131,    -1,   123,   131,    -1,    -1,   134,   275,    -1,
      -1,   134,   209,    -1,    -1,   135,   209,    -1,   275,    -1,
     209,    10,   275,    -1,   192,    -1,    34,   190,    97,   163,
      -1,   192,    -1,    34,   190,    99,   163,    -1,   192,    -1,
      34,   190,   101,   163,    -1,   214,    -1,   213,    10,   214,
      -1,    83,    20,   284,    -1,    18,   216,    19,    -1,    18,
     163,   216,    19,    -1,    34,   216,   104,   163,    -1,    34,
     163,   216,   104,   163,    -1,    -1,   216,   217,    -1,   105,
     260,   218,   190,    -1,   106,   218,   190,    -1,    34,    -1,
     163,    -1,   192,    -1,    34,   190,    95,   163,    -1,    -1,
     220,   221,    -1,    78,   263,   192,    -1,    -1,   222,   223,
      -1,    78,   263,    34,   190,    -1,    -1,    79,   192,    -1,
      -1,    79,    34,   190,    -1,   292,    -1,    40,   292,    -1,
     303,    -1,   228,    10,   230,    -1,   228,    -1,   230,    -1,
      -1,   229,    -1,   228,    10,   229,    -1,   234,   200,   201,
      85,    -1,   231,    -1,   230,    10,   231,    -1,   234,   200,
     201,    85,    20,   284,    -1,   275,    -1,   162,    72,   233,
      73,    -1,   139,    -1,   162,    -1,    81,    -1,    -1,   232,
      -1,    -1,    34,   232,    -1,   164,   165,    -1,   164,   237,
     165,    -1,   164,   264,   165,    -1,   238,    -1,   237,    10,
     238,    -1,   260,    -1,    40,   292,    -1,   161,   260,    -1,
     239,    10,   240,    -1,   240,    -1,    85,    -1,   166,   292,
      -1,   166,    18,   260,    19,    -1,   241,    10,   242,    -1,
     242,    -1,    85,    -1,    85,    20,   284,    -1,   243,   244,
      -1,    -1,   252,   232,   256,   163,    -1,   111,   232,   188,
     163,    -1,   250,   251,    -1,   117,   209,   245,    -1,   163,
      -1,    18,   246,    19,    -1,    -1,   246,   247,    -1,   248,
     118,   209,   163,    -1,   249,   102,   255,   174,   163,    -1,
     249,   102,   255,   163,    -1,   249,   102,    83,   163,    -1,
     249,   102,   172,   163,    -1,   275,   156,   174,    -1,   248,
      -1,   174,    -1,   253,   110,   200,   174,   164,   227,   165,
     235,    -1,   163,    -1,    18,   190,    19,    -1,   254,    -1,
      -1,    -1,   254,    -1,   255,    -1,   254,   255,    -1,   120,
      -1,   121,    -1,   122,    -1,   125,    -1,   124,    -1,   123,
      -1,   257,    -1,   256,    10,   257,    -1,    85,    -1,    85,
      20,   284,    -1,   258,    10,   260,    -1,   260,    -1,    -1,
     258,    -1,   292,    -1,   303,    20,   260,    -1,   292,    20,
     260,    -1,   292,    20,    40,   292,    -1,   292,    20,    40,
     269,    -1,   269,    -1,    74,   260,    -1,   292,    32,   260,
      -1,   292,    31,   260,    -1,   292,    30,   260,    -1,   292,
      29,   260,    -1,   292,    28,   260,    -1,   292,    27,   260,
      -1,   292,    26,   260,    -1,   292,    25,   260,    -1,   292,
      24,   260,    -1,   292,    22,   260,    -1,   292,    21,   260,
      -1,   292,    70,    -1,    70,   292,    -1,   292,    69,    -1,
      69,   292,    -1,   260,    36,   260,    -1,   260,    37,   260,
      -1,   260,    11,   260,    -1,   260,    13,   260,    -1,   260,
      12,   260,    -1,   260,    38,   260,    -1,   260,    40,   260,
      -1,   260,    39,   260,    -1,   260,    54,   260,    -1,   260,
      52,   260,    -1,   260,    53,   260,    -1,   260,    55,   260,
      -1,   260,    56,   260,    -1,   260,    57,   260,    -1,   260,
      51,   260,    -1,   260,    50,   260,    -1,   260,    71,   260,
      -1,    52,   260,    -1,    53,   260,    -1,    58,   260,    -1,
      60,   260,    -1,   260,    43,   260,    -1,   260,    42,   260,
      -1,   260,    45,   260,    -1,   260,    44,   260,    -1,   260,
      41,   260,    -1,   260,    46,   260,    -1,   260,    49,   260,
      -1,   260,    47,   260,    -1,   260,    48,   260,    -1,   260,
      59,   276,    -1,   263,    -1,   164,   269,   165,    -1,   260,
      33,   260,    34,   260,    -1,   260,    33,    34,   260,    -1,
     260,    35,   260,    -1,   128,   164,   199,   165,    -1,   129,
     164,   260,   165,    -1,     9,   260,    -1,     8,   260,    -1,
       7,   263,    -1,     6,   260,    -1,     5,   260,    -1,    68,
     260,    -1,    67,   260,    -1,    66,   260,    -1,    65,   260,
      -1,    64,   260,    -1,    63,   260,    -1,    62,   260,    -1,
      76,   280,    -1,    61,   260,    -1,   287,    -1,   265,    -1,
     266,    -1,   167,   281,   167,    -1,    14,   260,    -1,    15,
      -1,    17,   260,    -1,   261,    18,   190,    19,    -1,   262,
      18,   190,    19,    -1,   110,   200,   164,   227,   165,   270,
     235,    -1,   125,   110,   200,   164,   227,   165,   270,   235,
      -1,   164,   260,   165,    -1,   164,   264,   165,    -1,    15,
     260,    -1,    15,   260,    16,   260,    -1,   138,   164,   306,
     165,    -1,    72,   306,    73,    -1,   265,    72,   301,    73,
      -1,    91,    72,   301,    73,    -1,   286,    72,   301,    73,
      -1,   266,    72,   301,    73,    -1,   268,    18,   243,    19,
      -1,   131,   282,   206,   208,    -1,    75,   276,   282,    -1,
      75,   267,    -1,    -1,   117,   164,   271,   165,    -1,   272,
      -1,   271,    10,   272,    -1,   200,    85,    -1,   275,   236,
      -1,   278,   156,   174,   236,    -1,   278,   156,    18,   260,
      19,   236,    -1,   298,   236,    -1,   296,   236,    -1,   273,
      72,   301,    73,    -1,   125,    -1,   275,    -1,   175,    -1,
     160,   175,    -1,   157,   160,   175,    -1,   274,    -1,   277,
      -1,   279,    -1,   297,    -1,   274,    -1,   300,    -1,   297,
     136,   302,    -1,   279,   136,   302,    -1,   279,    72,   301,
      73,    -1,   279,    18,   260,    19,    -1,    -1,   164,   165,
      -1,   263,    -1,    -1,    90,    -1,   309,    -1,    -1,   236,
      -1,    81,    -1,    82,    -1,    91,    -1,   144,    -1,   145,
      -1,   159,    -1,   140,    -1,   141,    -1,   142,    -1,   143,
      -1,   158,    -1,   152,    90,   153,    -1,   152,   153,    -1,
     283,    -1,   274,   156,   174,    -1,   275,    -1,   138,   164,
     288,   165,    -1,    72,   288,    73,    -1,   285,    -1,   284,
      36,   284,    -1,   284,    37,   284,    -1,   284,    11,   284,
      -1,   284,    13,   284,    -1,   284,    12,   284,    -1,   284,
      38,   284,    -1,   284,    40,   284,    -1,   284,    39,   284,
      -1,   284,    54,   284,    -1,   284,    52,   284,    -1,   284,
      53,   284,    -1,   284,    55,   284,    -1,   284,    56,   284,
      -1,   284,    57,   284,    -1,   284,    51,   284,    -1,   284,
      50,   284,    -1,   284,    71,   284,    -1,    52,   284,    -1,
      53,   284,    -1,    58,   284,    -1,    60,   284,    -1,   284,
      43,   284,    -1,   284,    42,   284,    -1,   284,    45,   284,
      -1,   284,    44,   284,    -1,   284,    46,   284,    -1,   284,
      49,   284,    -1,   284,    47,   284,    -1,   284,    48,   284,
      -1,   284,    33,   284,    34,   284,    -1,   284,    33,    34,
     284,    -1,   284,    72,   284,    73,    -1,   164,   284,   165,
      -1,   275,    -1,   278,   156,   174,    -1,   283,    -1,   286,
      -1,   168,   309,   168,    -1,   152,   309,   153,    -1,    -1,
     290,   289,    -1,    -1,    10,    -1,   290,    10,   291,    -1,
     291,    -1,   284,    16,   284,    -1,   284,    -1,   294,    -1,
     297,    -1,   273,    -1,   293,    -1,   164,   269,   165,    72,
     301,    73,    -1,   293,    72,   301,    73,    -1,   295,   136,
     302,    -1,   295,   136,   302,   236,    -1,   294,   236,    -1,
     294,    72,   301,    73,    -1,   294,    18,   260,    19,    -1,
     292,    -1,   164,   269,   165,    -1,   300,    -1,   166,   296,
      -1,   296,    -1,   298,    -1,   278,   156,   166,   300,    -1,
     299,    -1,   278,   156,    85,    -1,   278,   156,   166,    18,
     260,    19,    -1,   299,    72,   301,    73,    -1,   299,    18,
     260,    19,    -1,   300,    72,   301,    73,    -1,   300,    18,
     260,    19,    -1,    85,    -1,   162,    85,    -1,   166,    18,
     260,    19,    -1,    -1,   260,    -1,    83,    -1,    18,   260,
      19,    -1,   296,    -1,   137,   164,   304,   165,    -1,   304,
      10,   305,    -1,   305,    -1,   292,    -1,   303,    -1,    -1,
      -1,   307,   289,    -1,   307,    10,   308,    -1,   308,    -1,
     260,    16,   260,    -1,   260,    -1,   260,    16,    40,   292,
      -1,    40,   292,    -1,   309,   310,    -1,   309,    90,    -1,
     310,    -1,    90,   310,    -1,    85,    -1,    85,    72,   311,
      73,    -1,    85,   136,    83,    -1,   154,   260,    19,    -1,
     154,    84,    19,    -1,   154,    84,    72,   260,    73,    19,
      -1,   155,   292,    19,    -1,    83,    -1,    86,    -1,    85,
      -1
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
     376,   378,   380,   382,   384,   386,   391,   397,   398,   403,
     408,   414,   415,   420,   424,   426,   432,   433,   439,   440,
     445,   450,   455,   457,   459,   464,   466,   468,   474,   475,
     481,   482,   488,   489,   494,   496,   501,   503,   508,   510,
     515,   517,   522,   524,   529,   534,   536,   538,   540,   546,
     547,   552,   554,   559,   561,   566,   568,   574,   575,   580,
     586,   587,   592,   597,   599,   605,   606,   611,   613,   615,
     620,   622,   624,   627,   631,   633,   638,   642,   644,   649,
     653,   655,   657,   659,   664,   667,   670,   676,   677,   682,
     684,   686,   691,   693,   698,   700,   702,   707,   709,   714,
     716,   718,   723,   725,   730,   732,   737,   740,   744,   746,
     748,   750,   755,   757,   763,   764,   769,   771,   773,   775,
     777,   782,   787,   789,   793,   798,   800,   805,   808,   813,
     814,   819,   821,   826,   828,   830,   832,   834,   836,   841,
     843,   848,   850,   855,   857,   863,   864,   869,   871,   873,
     875,   877,   879,   881,   883,   885,   887,   889,   891,   893,
     895,   897,   899,   901,   903,   905,   907,   909,   911,   913,
     915,   917,   919,   921,   923,   925,   927,   929,   931,   933,
     935,   937,   939,   941,   943,   945,   947,   949,   951,   953,
     955,   957,   959,   961,   963,   965,   967,   969,   971,   973,
     975,   978,   980,   982,   984,   986,   988,   990,   992,   994,
     996,   998,  1000,  1002,  1004,  1006,  1008,  1010,  1012,  1014,
    1016,  1018,  1020,  1022,  1024,  1026,  1028,  1030,  1032,  1034,
    1039,  1043,  1048,  1050,  1055,  1057,  1062,  1064,  1069,  1071,
    1073,  1075,  1081,  1086,  1091,  1093,  1099,  1100,  1105,  1107,
    1112,  1117,  1119,  1121,  1123,  1125,  1127,  1133,  1135,  1140,
    1142,  1144,  1149,  1151,  1156,  1158,  1163,  1165,  1170,  1172,
    1174,  1176,  1182,  1183,  1185,  1191,  1192,  1194,  1200,  1201,
    1206,  1208,  1210,  1212,  1214,  1216,  1218,  1220,  1222,  1224,
    1226,  1228,  1230,  1235,  1237,  1239,  1241,  1243,  1245,  1250,
    1252,  1254,  1256,  1258,  1260,  1262,  1264,  1266,  1268,  1270,
    1272,  1274,  1276,  1278,  1280,  1282,  1284,  1286,  1288,  1290,
    1292,  1294,  1296,  1298,  1300,  1302,  1304,  1306,  1308,  1310,
    1312,  1314,  1319,  1321,  1326,  1328,  1330,  1332,  1338,  1339,
    1345,  1346,  1351,  1353,  1358,  1360,  1365,  1367,  1369,  1371,
    1376,  1378,  1384,  1386,  1388,  1390,  1392,  1397,  1399,  1404,
    1406,  1411,  1413,  1418,  1420,  1425,  1427,  1429,  1431,  1436,
    1438,  1440,  1442,  1444,  1450,  1451,  1456,  1458,  1460,  1465,
    1470,  1472,  1477,  1479,  1482,  1487,  1488,  1493,  1495,  1500,
    1502,  1504,  1506,  1511,  1513,  1515,  1517,  1522,  1524,  1526,
    1528,  1530,  1532,  1534,  1539,  1541,  1543
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
  "inner_statement_list", "inner_statement", "statement",
  "inner_statement_list_start_scope", "catches", "catch", "catch_header",
  "optional_finally", "finally_body", "variables_list", "optional_ref",
  "optional_ellipsis", "function_declaration_statement", "function_header",
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
  "trait_method_reference", "method_header", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "property_declaration_list", "property_declaration",
  "expr_list", "for_expr", "expr", "non_static_expr_function_header",
  "static_expr_function_header", "parentheses_expr", "yield_expr",
  "array_expr", "scalar_dereference", "anonymous_class",
  "anonymous_class_header", "new_expr", "lexical_vars", "lexical_var_list",
  "lexical_var", "function_call", "class_name", "name",
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
     192,   192,   192,   192,   192,   192,   193,   194,   194,   195,
     196,   197,   197,   198,   199,   199,   200,   200,   201,   201,
     202,   203,   204,   204,   204,   205,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   215,   215,   215,   215,   216,
     216,   217,   217,   218,   218,   219,   219,   220,   220,   221,
     222,   222,   223,   224,   224,   225,   225,   226,   226,   226,
     227,   227,   227,   227,   228,   228,   229,   230,   230,   231,
     232,   232,   232,   232,   233,   233,   234,   235,   235,   236,
     236,   236,   237,   237,   238,   238,   238,   239,   239,   240,
     240,   240,   241,   241,   242,   242,   243,   243,   244,   244,
     244,   244,   245,   245,   246,   246,   247,   247,   247,   247,
     247,   248,   249,   249,   250,   251,   251,   252,   252,   253,
     253,   254,   254,   255,   255,   255,   255,   255,   255,   256,
     256,   257,   257,   258,   258,   259,   259,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     261,   262,   263,   263,   264,   264,   265,   265,   266,   266,
     266,   266,   267,   268,   269,   269,   270,   270,   271,   271,
     272,   273,   273,   273,   273,   273,   273,   274,   274,   275,
     275,   275,   276,   276,   277,   277,   278,   278,   279,   279,
     279,   279,   280,   280,   280,   281,   281,   281,   282,   282,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   284,   284,   284,   284,   284,   284,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   286,   286,   287,   287,   287,   287,   288,   288,
     289,   289,   290,   290,   291,   291,   292,   292,   292,   292,
     293,   293,   294,   294,   294,   294,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   299,   299,   300,
     300,   300,   300,   300,   301,   301,   302,   302,   302,   303,
     304,   304,   305,   305,   305,   306,   306,   307,   307,   308,
     308,   308,   308,   309,   309,   309,   309,   310,   310,   310,
     310,   310,   310,   310,   311,   311,   311
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
       5,     1,     6,     3,     3,     2,     1,     0,     2,     4,
       5,     0,     2,     3,     1,     3,     0,     1,     0,     1,
       4,     7,     7,     6,     5,     1,     2,     2,     0,     2,
       0,     2,     0,     2,     1,     3,     1,     4,     1,     4,
       1,     4,     1,     3,     3,     3,     4,     4,     5,     0,
       2,     4,     3,     1,     1,     1,     4,     0,     2,     3,
       0,     2,     4,     0,     2,     0,     3,     1,     2,     1,
       3,     1,     1,     0,     1,     3,     4,     1,     3,     6,
       1,     4,     1,     1,     1,     0,     1,     0,     2,     2,
       3,     3,     1,     3,     1,     2,     2,     3,     1,     1,
       2,     4,     3,     1,     1,     3,     2,     0,     4,     4,
       2,     3,     1,     3,     0,     2,     4,     5,     4,     4,
       4,     3,     1,     1,     8,     1,     3,     1,     0,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     3,     1,     0,     1,     1,     3,     3,
       4,     4,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     5,     4,     3,     4,     4,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     3,     2,     1,     2,     4,     4,
       7,     8,     3,     3,     2,     4,     4,     3,     4,     4,
       4,     4,     4,     4,     3,     2,     0,     4,     1,     3,
       2,     2,     4,     6,     2,     2,     4,     1,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     0,     2,     1,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     3,     1,     4,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     4,
       4,     3,     1,     3,     1,     1,     3,     3,     0,     2,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       6,     4,     3,     4,     2,     4,     4,     1,     3,     1,
       2,     1,     1,     4,     1,     3,     6,     4,     4,     4,
       4,     1,     2,     4,     0,     1,     1,     3,     1,     4,
       3,     1,     1,     1,     0,     0,     2,     3,     1,     3,
       1,     4,     2,     2,     2,     1,     2,     1,     4,     3,
       3,     3,     6,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     5,     5,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,   366,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     525,     0,     0,   412,     0,   420,   421,    74,   511,   135,
     422,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,     0,     0,     0,     0,
     397,     0,     0,     0,    80,   165,     0,     0,     0,     0,
     426,   427,   428,   429,   423,   424,     2,     0,     0,   430,
     425,     0,     0,   141,     0,     0,   415,     0,   399,     4,
       0,    77,   113,    78,     0,    79,     0,     0,     0,     0,
     340,     0,   362,   363,   292,   488,   406,   472,     0,   474,
     475,   361,   287,   489,   486,     0,   501,   487,   502,   504,
     499,     0,     3,   366,    74,   156,   397,     0,   351,   350,
       0,   349,   348,   347,   365,   374,   367,   326,   327,   328,
     329,   360,   358,   357,   356,   355,   354,   353,   352,   397,
       0,   398,     0,   308,   306,     0,   530,     0,   480,   528,
     293,   418,   385,     0,   402,   398,   418,   403,     0,   404,
     501,   405,   502,     0,   414,   359,     0,   145,   514,     0,
     284,     0,     0,   285,     0,     0,     0,   125,     0,   127,
       0,     0,   157,     0,   222,   223,     0,   220,   129,     0,
     113,     0,    88,    89,     0,    76,   100,     0,     0,   102,
      97,     0,   167,   166,   156,     0,     0,     0,     0,     0,
     170,   524,   525,   537,     0,   432,     0,     0,     0,   535,
       5,     0,    76,     0,   400,   512,     0,     0,   292,     0,
     500,   499,   416,     0,   417,     0,     0,     0,    86,     0,
     113,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,   113,   113,   131,   514,   514,   514,     0,   391,
       0,   514,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   307,   305,   514,     0,   514,   494,
       0,   395,   394,     0,   514,     0,   514,     0,     0,     0,
       0,     0,   532,     0,   377,   481,   526,   419,   168,   247,
     384,     0,     0,   514,     0,     0,   413,   113,   197,   515,
       0,     0,   134,     0,   113,   195,   121,   286,     0,     0,
       0,     0,   182,   189,   189,   124,   126,   128,   144,     0,
     213,   225,     0,     0,   107,   130,     0,   143,    76,   103,
       0,     0,     0,    76,     0,     0,    84,   239,     0,     0,
     238,     0,   244,     0,   243,     0,   154,     0,     0,   247,
       0,     0,   522,   523,     0,   521,     0,     0,     0,   431,
     536,     0,     0,   497,   534,   477,   533,     0,   401,     5,
      81,   372,   373,   341,     0,   364,   476,    75,   118,   117,
     112,   114,   115,   116,     0,     0,   172,   311,   313,   312,
       0,     0,   344,   309,   310,   314,   316,   315,   334,   331,
     330,   333,   332,   335,   337,   338,   336,   324,   323,   318,
     319,   317,   320,   321,   322,   339,   325,     0,     0,     0,
       0,     0,     0,     0,   229,     0,   232,   234,     0,    10,
       9,     8,     7,     6,    11,    12,    13,    49,    50,     0,
      14,    16,    15,    17,    18,    19,    20,    21,    72,   505,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    52,    53,    54,    55,    56,    44,    45,    46,    47,
      48,    33,    34,    35,    36,    37,    38,    39,    71,    70,
      69,    68,    67,    66,    40,    41,    42,    43,    64,    62,
      63,    59,    60,    51,    57,    58,    61,     0,    65,    73,
     473,     0,     0,   289,   304,   303,   302,   301,   300,   299,
     298,   297,   296,   295,   294,     0,     0,     0,     0,   516,
     518,   492,     0,     0,     0,     0,   288,   375,   498,     0,
       0,   529,   527,   172,   268,     0,     0,   409,   408,   200,
     203,   379,   283,     0,     0,   285,     0,     0,     0,     0,
     189,     0,   189,     0,   213,     0,   211,   214,   212,   217,
     226,   156,   224,     0,     0,     0,    87,   147,     0,     0,
     101,    76,     0,    85,     0,    96,     0,   240,     0,   132,
     213,     0,     0,   133,     0,     0,   345,   346,   268,   171,
     174,   247,   524,   519,   376,   544,   546,   545,     0,   539,
     541,     0,   540,   543,    83,     0,   514,   513,   160,   169,
       0,     0,   343,     0,   368,   369,   378,   381,   396,   235,
     236,     0,   230,   231,     0,     0,     0,   503,   392,   380,
     291,   290,   491,   496,   495,     0,   493,   508,   507,   510,
     509,   531,   383,   382,     0,     0,   273,   274,   275,   278,
     277,   276,   246,     0,     0,     0,   267,   271,   411,   410,
     205,     0,     0,   198,   119,   122,     0,     0,     0,     0,
     207,   209,     0,     0,     0,     0,   478,   422,     0,     0,
       0,     0,   435,   433,   184,   438,   183,   113,   180,   140,
       0,   185,     0,     0,   190,     0,     0,     0,   386,     0,
       0,   158,   221,   108,   106,   151,     0,     0,     0,   104,
      99,     0,     0,     0,   237,     0,   245,   242,   155,   137,
     164,     0,   268,   520,   538,     0,    82,     0,   173,   247,
     342,   233,     0,     0,   517,     0,     0,   113,   265,   250,
       0,   156,   272,     0,     0,   201,     0,     0,   204,   196,
     285,   208,     0,     0,   456,   457,   458,   459,   485,     0,
     480,   483,   478,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,     0,   193,   194,   113,     0,
     187,   227,     0,   227,   215,   210,   218,   156,   159,     0,
       0,     0,   148,     0,   142,     0,   105,     0,    92,     0,
       0,    95,   241,   386,   175,   163,     0,   490,   268,   393,
     506,     0,     0,   110,   254,   252,   251,     0,   281,     0,
     279,     0,     0,   113,     0,   199,     0,   113,   178,   138,
       0,   207,     0,   437,   481,   479,     0,   471,   434,   441,
     443,   442,     0,     0,   439,   440,   444,   446,   445,   461,
     460,   463,   462,   464,   466,   467,   465,   454,   453,   448,
     449,   447,   450,   451,   452,   455,     0,     0,   113,   192,
     188,     0,   161,   156,   370,   158,   216,     0,   113,   152,
     113,    93,    98,     0,     0,    90,   227,   542,   162,     0,
       0,   249,     0,   266,     0,     0,   248,     0,   113,   206,
     120,     0,     0,     0,   484,   482,   436,   469,     0,   470,
     181,   191,   228,     0,     0,   388,     0,     0,     0,     0,
       0,    91,    94,   371,   111,   109,   253,    74,    61,   263,
     255,   262,     0,     0,   282,   280,   213,   202,   113,   176,
     123,     0,   139,   468,   390,   156,   387,     0,   219,     0,
     153,   149,     0,     0,     0,     0,     0,   179,   389,   150,
       0,     0,     0,     0,   261,   227,     0,   256,   259,   260,
     258,     0,   264,   177,   257
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,   538,   539,   871,    88,   206,    89,   747,
      90,   860,   208,   748,   209,   210,   750,   363,   364,   872,
     873,   249,   420,   421,    92,   745,   852,   853,   854,   939,
     385,   973,   849,   422,    94,   423,    96,   426,   391,   651,
     629,  1000,   889,   729,   351,   352,   355,   591,   734,   838,
     346,   580,   703,   700,   785,   704,   786,   709,   595,   596,
     597,   598,   599,   600,   603,   601,   932,   289,   465,   466,
     379,   380,   383,   384,   574,   692,   876,   952,   990,   991,
     992,   693,   779,   694,   695,   696,   697,   879,   880,   347,
     348,    97,    98,    99,   100,   101,   102,   103,   162,   163,
     104,   843,   974,   975,   105,   106,   107,   166,   167,   108,
     169,   175,   243,   328,   109,   798,   725,   110,   111,   799,
     326,   800,   801,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   340,   561,   121,   394,   395,   157,   158,   159,
     228,   229,   638
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -805
static const short int yypact[] =
{
     -29,  -805,  -805,   103,  1584,  1748,  -805,  7160,  7160,   -47,
    7160,  7160,  7160,  7160,  7160,  -805,  7160,  7160,  7160,  7160,
    7160,  7160,  7160,  7160,  7160,  7160,  7160,  7160,   286,   286,
    5684,  7160,   384,    73,   -47,  -805,  -805,    80,  -805,  -805,
     134,  7160,  5192,   -47,   100,   114,   123,   -47,  5848,  6012,
      79,   187,   216,  6176,   214,  7160,    12,   216,   164,   170,
     473,   173,   180,   182,  -805,  -805,   171,   268,   190,   196,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,   203,    71,  -805,
    -805,   287,   295,  -805,  7324,    82,    28,   253,   227,  -805,
     225,  -805,  -805,  -805,   373,  -805,   313,  8099,   381,   382,
    -805,   254,   344,   350,  -805,   359,  -805,   -32,   250,  -805,
     360,  -805,   109,   365,    39,   303,   285,  -805,   285,   133,
      74,   443,  -805,  -805,  -805,   187,   343,   306,  9333,  9333,
    7324,  -805,  9333,  9333,  1471,  8696,  1471,   394,   394,    57,
     394,   394,   394,   394,   394,   394,   394,   394,   394,  -805,
     393,   285,   315,   368,   368,   286,  8745,   440,   507,  -805,
    -805,   285,  -805,   501,   369,  -805,   285,  -805,   371,    75,
    -805,   388,  -805,  6340,  -805,  -805,  4372,  -805,  7160,    34,
    9333,   434,  4536,  7160,  7160,   447,    92,  -805,  8148,  -805,
    8197,   370,  -805,     0,  -805,   467,   457,  -805,  -805,  8246,
    -805,  8295,  -805,  -805,   287,   383,   450,    25,    46,  -805,
    -805,     2,  -805,  -805,   187,   469,   286,   286,  7160,   537,
     426,   420,  5684,    83,   320,  -805,  6504,   286,   212,  -805,
    -805,   287,   227,    23,   227,  -805,   999,   398,   403,  7160,
    -805,   207,    21,   400,   433,    21,    81,   486,  -805,  2240,
    -805,   437,  7160,  7160,  7160,  6668,  7160,  7160,  7160,  7160,
    7160,  7160,  7160,  7160,  7160,  7160,  7160,  7160,  7160,  7160,
    7160,  7160,  7160,  7160,  7160,  7160,  7160,  7160,  7160,   466,
    7160,  -805,  -805,  -805,  -805,  7160,  7160,  7160,  5356,  -805,
    7430,  7160,  6832,  7160,  7160,  7160,  7160,  7160,  7160,  7160,
    7160,  7160,  7160,  7160,  -805,  -805,  7160,  7160,  7160,  -805,
      76,  -805,  -805,  7160,  7160,  7160,  7160,  7160,   409,  7160,
     413,  7430,   368,  6996,  -805,  5684,  -805,  -805,   437,  -805,
    -805,    14,  7160,  7160,    76,    76,  -805,  -805,  -805,  9333,
     506,  7160,  -805,   -47,  -805,  -805,  -805,   564,   418,  8438,
     569,    33,  -805,   427,   431,  -805,  -805,  -805,  -805,   442,
     216,   514,   588,    49,  -805,  -805,  2404,  -805,   449,  -805,
      87,   527,   287,   453,    51,    32,  -805,  -805,   276,    53,
    -805,   451,   596,    60,  -805,    36,   368,    37,  1293,  -805,
      24,   602,   368,  -805,    42,  -805,   456,   309,   542,  -805,
    -805,   220,  8794,   608,  -805,  -805,  -805,  1912,   227,  -805,
    -805,  -805,  -805,    86,  8843,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  2568,    24,   494,  9427,  1736,  1471,
    7160,  8892,  1897,  2387,  2715,  3040,  3368,  3530,  3695,  3695,
    3695,  3695,  3695,  4017,  4017,  4017,  4017,   213,   213,   593,
     593,   593,    57,    57,    57,  -805,   394,  2732,  2896,   563,
     567,   568,   286,  7160,  -805,    43,  -805,  9333,   472,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  7160,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,    84,  -805,  -805,
     285,   570,   264,  1471,  1471,  1471,  1471,  1471,  1471,  1471,
    1471,  1471,  1471,  1471,  1471,   572,  8941,   580,  7160,  -805,
    -805,   285,  8990,   581,  9039,   586,  1471,  9333,   590,   285,
     286,  9333,  -805,   494,   334,  9088,   592,  -805,  -805,  4208,
     197,  -805,  9333,   479,  3060,  7160,   215,  8303,   447,  4700,
    -805,    85,  -805,   402,   216,   503,   659,  -805,   660,  -805,
    -805,   187,  -805,   598,  8303,   457,  -805,  -805,    94,    38,
    -805,   512,   132,  -805,   287,  -805,  7160,   368,     2,  -805,
     216,  8303,   469,  -805,   286,   511,  -805,  -805,   632,   665,
    -805,  -805,   420,  -805,  -805,  -805,  -805,  -805,   604,  -805,
    -805,  7160,  -805,  -805,  -805,  2076,  7160,  -805,  -805,  -805,
      24,   661,  1897,  7160,  -805,  -805,  -805,  -805,  -805,   368,
    9333,  5520,  -805,  -805,  9137,  7160,   663,   207,  -805,  -805,
    -805,   368,  -805,  -805,  -805,  9186,  -805,  -805,  -805,  -805,
    -805,   368,  -805,  -805,   216,    24,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,    50,   216,   579,   594,  -805,  -805,  -805,
     226,   -47,  5192,  -805,  -805,  -805,   515,   519,   286,   525,
      68,  -805,  8303,  8303,  8303,  8303,  8303,  -805,   530,    67,
    8303,   540,   541,  -805,  8649,  -805,  -805,  -805,  -805,  -805,
      90,  -805,  7160,    54,  -805,   406,   535,   534,   583,   216,
     216,   544,  -805,  8649,  -805,    29,    38,   287,   146,  -805,
    -805,   135,   287,  9235,  -805,   545,  8649,  -805,   368,  -805,
    -805,    24,   831,  -805,  -805,  8506,  -805,   633,   665,  -805,
    1897,  -805,   285,  9284,  -805,  7835,    63,  -805,  -805,  -805,
     622,   187,  -805,   -47,   675,  -805,   641,  5192,  -805,  -805,
    7160,   368,  4864,   215,   258,   258,   258,   258,  8602,   640,
     717,  -805,  8303,   575,   270,  7835,  8303,  8303,  8303,  1029,
    8303,  8303,  8303,  8303,  8303,  8303,  8303,  8303,  8303,  8303,
    8303,  8303,  8303,  8303,  8303,  8303,  8303,  8303,  8303,  8303,
    8303,  8303,  8303,  3224,  -805,  1432,  -805,  -805,  -805,   566,
    -805,   697,   571,   697,  -805,   660,  -805,   187,  -805,   649,
     573,   721,  -805,   722,  -805,   237,  -805,    38,  -805,   287,
     242,  -805,  -805,   583,  -805,  -805,   725,  -805,   850,  -805,
    -805,   730,    65,  -805,  -805,  -805,  -805,  3388,   731,    66,
    -805,  7835,   724,  -805,   597,  -805,   599,  -805,  -805,  -805,
     605,   368,  8303,  -805,  8303,  -805,   606,  -805,  -805,  9381,
    1086,  1323,  8303,  8368,  2223,  2551,  2879,  3203,  1561,  3858,
    3858,  3858,  3858,  1335,  1335,  1335,  1335,   546,   546,   347,
     347,   347,   258,   258,   258,   258,  8555,   600,  -805,  4208,
    -805,   216,  -805,   187,  -805,   544,   739,    24,  -805,  -805,
    -805,  -805,  -805,   243,   287,  -805,   697,  -805,  -805,  8303,
    7835,  -805,  7700,  -805,  8303,   622,  -805,   609,  -805,  4208,
    -805,  5028,  3552,  4864,  8649,  -805,  -805,  2060,  8303,  -805,
    -805,  4208,  -805,   676,    45,  -805,   677,  8303,   683,  3716,
    3880,  -805,  -805,  -805,  8649,  -805,  -805,   667,   306,  -805,
    -805,   654,   673,   620,  8649,  -805,   216,  4208,  -805,  -805,
    -805,   645,  -805,  2060,  -805,   187,  -805,   739,  8649,   644,
    -805,  -805,    24,  7970,  7835,   646,  4044,  -805,  -805,  -805,
      70,   680,   681,  7565,  -805,   697,   682,  -805,  -805,  -805,
    -805,   685,  -805,  -805,  -805
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -805,  -805,    11,  -167,  -805,  -276,   -44,   771,  -805,   795,
    -805,    -7,   647,   107,  -199,   480,    -1,  -805,   252,  -805,
     -92,  -192,  -805,    18,  -805,  -805,  -805,  -805,  -805,  -805,
     642,   -40,   -75,    16,  -805,    22,  -805,   533,  -805,   290,
    -619,  -805,   -98,  -805,  -805,   279,  -805,  -319,  -805,    35,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,    89,  -569,  -805,
     129,   137,   131,   -50,  -805,   138,  -804,   -99,  -805,   211,
    -805,   255,  -805,   257,  -371,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -668,  -805,   -72,   836,
    -547,   978,  -805,  -805,    31,   -48,  -805,  -805,  -805,  -805,
     -78,    17,  -805,  -121,  -805,    10,   -28,   607,  -805,    69,
    -805,  -805,  -805,   719,  -330,   603,  -805,  -805,  -805,    88,
      93,  -805,    -6,   305,  -805,  -805,  -805,     1,   -16,    -2,
    -805,   -76,  -237,    78,  -218,  -805,   260,   672,  -805,   562,
     277,   292,  -805
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -499
static const short int yytable[] =
{
     151,   151,   196,   393,   165,   369,   238,   211,   366,   241,
     215,   193,   205,     5,   540,   309,   171,   311,   628,   312,
      93,    93,    91,    91,   197,   737,    95,    95,   782,   197,
     172,   768,   197,   170,   232,   593,   237,   234,   707,   934,
     131,   409,   164,   588,   341,   569,   624,   624,   459,   460,
     461,   755,   632,   661,   541,  1005,   375,   307,   424,   605,
     181,   375,   327,   618,   174,   176,   776,   327,   777,   555,
     622,   557,   320,   761,   182,   950,   955,   563,   186,   565,
     761,   874,   237,   359,   793,   318,   240,   377,   836,   230,
     457,   458,   315,   332,   558,   124,   576,   152,   152,   489,
     239,   168,   665,     6,   731,   609,   223,   124,   124,   834,
     353,   308,   746,   223,   177,   124,   279,   130,   242,     1,
       2,   124,   202,   203,  -398,   237,   354,   151,   280,   292,
     293,   294,   288,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   983,   850,   851,   579,   316,   333,   202,   203,
     752,   313,   584,   859,   124,   397,   857,   803,   646,   559,
     368,    38,   191,   373,   360,   858,   223,    38,   378,    38,
     417,   404,   204,   369,   381,   226,   227,   417,   304,   305,
     537,   127,   226,   227,    81,   372,   410,   408,   151,   151,
     732,   733,   614,   151,   338,   732,   733,   342,   589,   151,
     345,   625,   626,   288,  -497,   314,   178,   633,   662,   376,
    1006,   334,   606,   778,   613,   417,   619,   837,   417,   398,
     225,  1032,  -498,   623,   152,   315,   875,   192,   951,   956,
    -407,   231,   200,  1027,   241,   226,   227,   173,    82,   640,
     468,   407,    85,   886,    82,  -497,    82,   857,    85,   416,
     666,   165,   944,   944,   219,   708,   941,   723,   241,   241,
     762,   945,   981,   171,   183,   273,   274,   275,   276,   277,
     278,   730,   279,   735,   723,   701,   702,   172,   184,   316,
     170,   806,   807,   808,   280,   152,   152,   185,   223,   164,
     152,   723,   641,   224,   616,   212,   152,   223,   124,   124,
      38,   213,   404,   809,   783,   784,   810,   811,   812,   813,
     814,   560,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   611,   831,
     832,   232,   197,   153,   154,   560,   560,   216,   223,    32,
     149,   831,   832,   245,   217,  1023,   218,   124,   168,    38,
     151,   220,    68,   683,   221,   194,   225,   226,   227,   124,
     222,    38,   630,   244,   246,   405,   226,   227,   711,   124,
     124,    38,   127,   127,   583,    81,    81,    82,   195,   150,
     235,    85,   723,   723,   723,   723,   723,   247,   248,   149,
     723,   250,   635,  1020,   636,   637,   251,   649,   868,   282,
     283,   149,   828,   829,   830,   223,   290,   226,   227,   767,
     749,   149,   577,   578,   393,   369,   285,   284,   831,   832,
     645,   127,   286,    93,    81,    91,    82,  1015,   150,    95,
      85,   287,   291,   127,   151,   897,    81,   306,    82,   310,
     150,   668,    85,   127,  -269,   684,    81,   152,    82,   288,
     150,   685,    85,   214,   686,   687,   688,   689,   690,   691,
     322,   667,   676,   317,   670,   280,   231,   124,    32,    38,
     668,   321,   723,   399,   226,   227,   723,   723,   723,   723,
     723,   723,   723,   723,   723,   723,   723,   723,   723,   723,
     723,   723,   723,   723,   723,   723,   723,   723,   723,   723,
     723,   723,   723,   124,  -497,    38,   736,   732,   733,   149,
     839,   732,   733,   324,   151,   161,   400,   325,   223,   329,
     406,   386,   386,   404,   335,  -406,   392,   331,   343,   898,
     350,   152,   403,   358,   400,   833,   406,   400,   406,   361,
     362,   127,   151,   370,    81,   149,    82,   749,   856,   124,
      85,    38,   371,   861,   382,   389,   124,    68,   151,   722,
     390,   741,   723,   412,   723,   232,   197,   415,   413,   417,
     232,   425,   723,   360,   341,   711,   722,   127,   568,   581,
      81,   585,    82,   214,   150,   877,    85,   226,   227,   587,
     590,   149,   197,   722,   592,   602,   151,   721,   825,   826,
     827,   828,   829,   830,   151,   957,   594,   728,   604,   608,
     610,   152,   194,   612,   721,   620,   621,   831,   832,   723,
     631,   634,   630,   127,   723,   639,    81,   643,    82,   650,
     127,   721,    85,    81,   775,   195,   656,   663,   723,   152,
     657,   658,   705,   669,   780,   672,   929,   723,   276,   277,
     278,   760,   279,   674,   678,   152,   197,   630,   749,   680,
     861,    93,   646,    91,   280,   699,   197,    95,   738,   739,
     740,   742,   751,   869,   759,   761,   989,   764,   789,   769,
     151,   239,   790,   617,   722,   722,   722,   722,   722,   781,
     792,   959,   722,   152,   802,   962,   805,  -398,   840,   841,
     842,   152,   232,   232,  -270,   848,   867,   878,   232,   883,
     863,   197,   197,   893,   686,   687,   688,   689,   690,   691,
     788,   884,   721,   721,   721,   721,   721,   894,   399,   930,
     721,   931,   787,   864,   936,   933,   971,   937,  1024,   938,
     940,   881,  -269,   684,   947,   982,   979,  1031,   980,   685,
     949,   954,   686,   687,   688,   689,   690,   691,   958,   977,
     960,  1004,  1007,   970,   961,   151,   997,   659,  1009,   -72,
     963,   966,  1012,   996,   722,  1013,  1014,   152,   722,   722,
     722,   722,   722,   722,   722,   722,   722,   722,   722,   722,
     722,   722,   722,   722,   722,   722,   722,   722,   722,   722,
     722,   722,   722,   722,   722,   885,  1016,   935,  1017,  1019,
     888,  1025,   721,   232,   882,   232,   721,   721,   721,   721,
     721,   721,   721,   721,   721,   721,   721,   721,   721,   721,
     721,   721,   721,   721,   721,   721,   721,   721,   721,   721,
     721,   721,   721,  1028,  1029,  1033,  1022,   671,  1034,   233,
     865,   207,   943,   855,   374,   615,   942,   744,   985,   387,
     976,   573,   152,   682,   722,  1002,   722,   726,   844,   948,
     928,   846,   771,   754,   722,   681,   845,   179,   847,   757,
     946,   972,   890,   995,  1018,   330,   455,   572,   965,     0,
     896,   710,   763,   895,   396,     0,     0,     0,     0,     0,
     232,     0,   721,   197,   721,     0,     0,     0,     0,   978,
       0,     0,   721,     0,     0,     0,     0,     0,     0,     0,
       0,   722,     0,     0,   993,     0,   722,     0,     0,   758,
       0,     0,     0,     0,     0,     0,     0,   392,     0,     0,
     722,  -269,   684,     0,     0,     0,     0,     0,   685,   722,
       0,   686,   687,   688,   689,   690,   691,     0,     0,   721,
    -269,   684,     0,     0,   721,     0,     0,   685,   197,     0,
     686,   687,   688,   689,   690,   691,     0,     0,   721,   999,
       0,   888,     0,     0,   630,   128,   129,   721,   132,   133,
     134,   135,   136,     0,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,   156,   160,
     252,   253,   254,   791,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,   188,   190,     0,     0,
       0,   199,   255,   201,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,     0,
       0,     0,   236,   902,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   712,   713,     0,     0,     0,     0,   714,     0,   715,
       0,     0,     0,     0,     0,     0,     0,     0,   891,   808,
       0,   716,     0,     0,     0,     0,     0,     0,   236,     0,
      35,    36,   124,     0,     0,     0,     0,     0,     0,   809,
     717,     0,   810,   811,   812,   813,   814,     0,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,     0,     0,     0,     0,     0,     0,
       0,   236,     0,     0,   149,     0,   339,   831,   832,     0,
       0,   180,   349,     0,   411,     0,     0,   718,     0,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,   719,     0,     0,     0,     0,   127,    79,    80,    81,
     724,     0,     0,   720,     0,     0,   388,     0,     0,     0,
     156,     0,     0,     0,   402,     0,     0,   743,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   414,     0,     0,
       0,     0,     0,     0,   756,     0,     0,     0,     0,     0,
     427,   428,   429,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,     0,   456,     0,
       0,     0,     0,   339,   339,   339,   467,     0,     0,   339,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,     0,     0,   339,   556,   339,     0,     0,     0,
       0,   562,   339,   564,   339,   566,     0,   567,     0,     0,
       0,   571,     0,   156,   252,   253,   254,     0,     0,     0,
     575,   339,     0,     0,     0,   794,   795,   796,   797,   582,
       0,     0,     0,   804,     0,     0,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,     0,   809,     0,     0,   810,
     811,   812,   813,   814,   280,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,  -499,  -499,  -499,  -499,   823,   824,   825,   826,   827,
     828,   829,   830,     0,   831,   832,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   831,   832,   652,   899,
     900,   901,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   922,   923,   924,   925,   926,     0,     0,     0,     0,
       0,   660,     0,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   664,   627,     0,
       0,     0,     0,     0,     0,   255,   836,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,     0,     0,     0,   964,     0,     0,     0,     0,
       0,     0,     0,   280,   255,   967,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,     0,     0,     0,     0,     0,   675,     0,     0,     0,
       0,     0,   280,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   984,     0,     0,     0,     0,   994,     0,     0,
       0,     0,     0,   180,     0,     0,     0,     0,     0,     0,
       0,  1003,     0,     0,     0,     0,     0,     0,     0,     0,
    1008,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,    10,    11,   753,   837,     0,     0,    12,    13,
       0,    14,    15,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   765,
       0,     0,     0,     0,   339,     0,     0,     0,     0,     0,
       0,   770,   831,   832,     0,     0,    16,    17,     0,   467,
       0,     0,    18,   773,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,    56,     0,    57,     0,     0,     0,    58,    59,    60,
     835,    61,    62,    63,    64,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,    76,     0,    77,     0,     0,     0,
       0,    78,    79,    80,    81,     0,    82,    83,    84,   254,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,     0,   180,   255,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,   280,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,    51,    52,
      53,    54,     0,     0,    55,    56,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,    64,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,   122,     0,
      77,     0,     0,     0,     0,    78,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,   644,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,   280,     0,
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
      12,    13,     0,    14,    15,   766,   810,   811,   812,   813,
     814,     0,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,   831,   832,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,    51,    52,    53,    54,
       0,     0,    55,    56,     0,    57,     0,     0,     0,    58,
      59,    60,     0,    61,    62,    63,    64,    65,    66,    67,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,    78,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,   418,
     811,   812,   813,   814,     0,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,   831,   832,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,     0,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
      51,     0,    53,    54,     0,     0,    55,     0,     0,    57,
       0,     0,     0,    58,    59,    60,     0,    61,    62,    63,
     419,    65,    66,    67,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   127,    79,    80,
      81,     0,    82,    83,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,   607,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,   280,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,    51,     0,    53,    54,     0,     0,
      55,     0,     0,    57,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,   419,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   127,    79,    80,    81,     0,    82,    83,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,   648,     0,   812,
     813,   814,     0,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,   831,   832,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,    51,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,   419,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   127,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,   654,     0,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,   280,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,     0,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,    51,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,    58,    59,    60,     0,    61,
      62,    63,   419,    65,    66,    67,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   127,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,   655,     0,     0,   813,   814,
       0,   815,   816,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
     831,   832,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,    51,     0,    53,    54,
       0,     0,    55,     0,     0,    57,     0,     0,     0,    58,
      59,    60,     0,    61,    62,    63,   419,    65,    66,    67,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   127,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   280,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,   706,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
      51,     0,    53,    54,     0,     0,    55,     0,     0,    57,
       0,     0,     0,    58,    59,    60,     0,    61,    62,    63,
     419,    65,    66,    67,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   127,    79,    80,
      81,     0,    82,    83,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,   814,     0,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   831,   832,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,   927,     0,    47,     0,     0,
       0,    48,    49,    50,    51,     0,    53,    54,     0,     0,
      55,     0,     0,    57,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,   419,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   127,    79,    80,    81,     0,    82,    83,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,   953,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,    51,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,   419,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   127,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   280,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,  1001,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,    51,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,    58,    59,    60,     0,    61,
      62,    63,   419,    65,    66,    67,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   127,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,  1010,  -499,  -499,  -499,  -499,
    -499,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   280,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,    51,     0,    53,    54,
       0,     0,    55,     0,     0,    57,     0,     0,     0,    58,
      59,    60,     0,    61,    62,    63,   419,    65,    66,    67,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   127,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,  1011,
    -499,  -499,  -499,  -499,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   831,
     832,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,     0,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
      51,     0,    53,    54,     0,     0,    55,     0,     0,    57,
       0,     0,     0,    58,    59,    60,     0,    61,    62,    63,
     419,    65,    66,    67,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   127,    79,    80,
      81,     0,    82,    83,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,  -499,  -499,  -499,  -499,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,  1026,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,    51,     0,    53,    54,     0,     0,
      55,     0,     0,    57,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,   419,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   127,    79,    80,    81,     0,    82,    83,    84,     0,
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
       0,    47,     0,     0,     0,    48,    49,    50,    51,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,   419,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   127,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,     0,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,   125,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,     0,     0,    60,     0,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   127,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,     0,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,   125,     0,    53,    54,
       0,     0,    55,     0,     0,    57,     0,     0,     0,     0,
       0,    60,     0,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   127,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,     0,    38,     0,    39,     0,     0,
       0,    40,    41,    42,    43,     0,    44,     0,    45,     0,
      46,     0,     0,    47,     0,     0,     0,    48,    49,    50,
     125,     0,    53,    54,     0,     0,    55,     0,     0,    57,
       0,     0,     0,     0,     0,    60,     0,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   127,    79,    80,
      81,     0,    82,    83,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   887,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,     0,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,   125,     0,    53,    54,     0,     0,
      55,     0,     0,    57,     0,     0,     0,     0,     0,    60,
       0,    61,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   127,    79,    80,    81,     0,    82,    83,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   998,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,   125,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,     0,     0,    60,     0,    61,    62,    63,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   127,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,     0,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,   125,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,     0,     0,    60,     0,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   127,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   462,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,     0,     0,     0,     0,    35,    36,   124,
       0,    38,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   127,    79,    80,    81,   463,    82,     0,
      84,   464,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,   123,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     462,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,    35,    36,   124,     0,    38,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   127,    79,    80,
      81,   463,    82,     0,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,   123,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,     0,     0,     0,     0,    35,    36,   124,     0,    38,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   127,    79,    80,    81,     0,    82,     0,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,   123,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,     0,     0,     0,     0,    35,
      36,   124,     0,    38,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,    62,    63,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   127,    79,    80,    81,     0,
      82,   187,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,   123,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,     0,
       0,     0,     0,    35,    36,   124,     0,    38,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,     0,     0,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   127,
      79,    80,    81,     0,    82,   189,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,   123,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,     0,     0,     0,     0,    35,    36,   124,
       0,    38,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   127,    79,    80,    81,     0,    82,   198,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,    35,    36,   124,     0,    38,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   127,    79,    80,
      81,     0,    82,     0,    84,   336,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,   123,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,     0,     0,     0,     0,    35,    36,   124,   401,    38,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   127,    79,    80,    81,     0,    82,     0,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,   123,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   430,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,     0,     0,     0,     0,    35,
      36,   124,     0,    38,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,    62,    63,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   127,    79,    80,    81,     0,
      82,     0,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,   123,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   542,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,     0,
       0,     0,     0,    35,    36,   124,     0,    38,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,     0,     0,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   127,
      79,    80,    81,     0,    82,     0,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,   123,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   570,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,     0,     0,     0,     0,    35,    36,   124,
       0,    38,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   127,    79,    80,    81,     0,    82,     0,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,   123,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,    35,    36,   124,     0,    38,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   127,    79,    80,
      81,     0,    82,     0,    84,     0,    85,    86,    87,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,     0,     0,     0,     0,    35,    36,   124,     0,    38,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   469,   470,   471,   472,   473,
       0,   474,   475,   476,   477,   478,     0,     0,   479,   126,
       0,     0,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   127,    79,    80,    81,     0,    82,     0,    84,   480,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   481,   482,   483,   484,   485,   486,
     487,     0,     0,   488,     0,   489,     0,     0,     0,     0,
       0,     0,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,     0,   533,   534,   535,
     469,   470,   471,   472,   473,     0,   474,   475,   476,   477,
     478,     0,     0,     0,     0,     0,     0,   536,     0,     0,
       0,     0,     0,     0,     0,     0,   537,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   481,
     482,   483,   484,   485,   486,   487,     0,     0,   488,     0,
       0,     0,     0,     0,     0,     0,     0,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,     0,   533,   534,   535,   469,   470,   471,   472,   473,
       0,   474,   475,   476,   477,   478,     0,     0,     0,   986,
       0,     0,   536,     0,     0,     0,     0,     0,  1030,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   481,   482,   483,   484,   485,   486,
     487,     0,     0,   987,     0,     0,     0,     0,     0,     0,
       0,     0,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,     0,   533,   534,   535,
     469,   470,   471,   472,   473,     0,   474,   475,   476,   477,
     478,     0,     0,     0,     0,     0,     0,   988,     0,     0,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   481,
     482,   483,   484,   485,   486,   487,     0,     0,   488,     0,
       0,     0,     0,     0,     0,     0,     0,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,     0,   533,   534,   535,   469,   470,   471,   472,   473,
       0,   474,   475,   476,   477,   478,     0,     0,     0,     0,
       0,     0,   536,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   481,   482,   483,   484,   485,   486,
     487,     0,     0,  1021,     0,     0,     0,     0,     0,     0,
       0,     0,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     686,   687,   688,   689,   690,   691,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,     0,   533,   534,   535,
     252,   253,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   536,     0,     0,
       0,     0,   255,     0,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   252,
     253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   252,   253,
     254,     0,     0,     0,     0,     0,     0,     0,     0,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   252,   253,   254,
       0,     0,   281,     0,     0,     0,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   252,   253,   254,     0,
       0,   356,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   712,   713,     0,     0,     0,
     357,   714,     0,   715,     0,     0,   280,     0,     0,     0,
       0,     0,     0,     0,     0,   716,     0,     0,     0,   806,
     807,   808,     0,     0,    35,    36,   124,     0,     0,     0,
       0,     0,     0,     0,   717,     0,     0,     0,     0,     0,
       0,   809,   968,     0,   810,   811,   812,   813,   814,   365,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   831,
     832,   718,     0,    70,    71,    72,    73,    74,    75,   252,
     253,   254,     0,     0,     0,   719,     0,     0,   367,     0,
     127,    79,    80,    81,     0,     0,     0,   720,     0,     0,
       0,   255,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
       0,     0,     0,     0,     0,     0,     0,   252,   253,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
     586,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   806,   807,   808,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,   866,
       0,     0,     0,     0,     0,     0,     0,     0,   809,     0,
       0,   810,   811,   812,   813,   814,     0,   815,   816,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   806,   807,   808,     0,     0,   892,     0,
       0,     0,     0,     0,     0,     0,   831,   832,   969,     0,
       0,     0,     0,     0,     0,   809,     0,     0,   810,   811,
     812,   813,   814,     0,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     806,   807,   808,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   831,   832,     0,     0,     0,     0,     0,
       0,     0,   809,     0,     0,   810,   811,   812,   813,   814,
       0,   815,   816,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   252,   253,   254,
       0,     0,   319,     0,     0,     0,     0,     0,     0,     0,
     831,   832,     0,     0,     0,     0,     0,     0,     0,   255,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   252,   253,   254,     0,
       0,   323,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   252,   253,   254,     0,     0,
       0,     0,     0,   642,     0,     0,   280,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   252,   253,   254,     0,     0,     0,
       0,     0,   647,     0,     0,   280,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,   653,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,   252,   253,   254,     0,     0,     0,     0,     0,
     673,     0,     0,   280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,     0,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,   252,   253,   254,     0,     0,     0,     0,     0,   677,
       0,     0,   280,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     252,   253,   254,     0,     0,     0,     0,     0,   679,     0,
       0,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,     0,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   252,
     253,   254,     0,     0,     0,     0,     0,   698,     0,     0,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   252,   253,
     254,     0,     0,     0,     0,     0,   772,     0,     0,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   252,   253,   254,
       0,     0,     0,     0,     0,   774,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   252,   253,   254,     0,
       0,     0,     0,     0,   862,     0,     0,   280,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   252,   253,   254,     0,     0,
       0,     0,     0,   870,     0,     0,   280,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   252,   253,   254,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   807,   808,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   809,     0,     0,   810,   811,   812,
     813,   814,     0,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   253,
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   831,   832,     0,     0,     0,     0,     0,     0,
     255,     0,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   280
};

static const short int yycheck[] =
{
      28,    29,    52,   221,    32,   204,    84,    57,   200,    85,
      60,    51,    56,     2,   290,   114,    32,   116,   389,   118,
       4,     5,     4,     5,    52,   594,     4,     5,   696,    57,
      32,   650,    60,    32,    78,   354,    84,    81,   585,   843,
       9,    18,    32,    10,    10,   321,    10,    10,   285,   286,
     287,   620,    10,    10,   291,    10,    10,    18,   250,    10,
      42,    10,   161,    10,    33,    34,   685,   166,    18,   306,
      10,   308,   150,    10,    43,    10,    10,   314,    47,   316,
      10,    18,   130,    83,    16,   125,    85,    85,    34,    18,
     282,   283,    18,    18,    18,    83,   333,    28,    29,    85,
      18,    32,    18,     0,    19,    18,    85,    83,    83,    19,
      18,    72,    18,    85,    34,    83,    59,   164,    90,   148,
     149,    83,   110,   111,   156,   173,    34,   155,    71,    20,
      21,    22,   164,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   946,   114,   115,   337,    72,    72,   110,   111,
      18,    18,   344,    18,    83,    72,    10,    90,    72,    83,
     204,    85,    83,   207,   164,    19,    85,    85,   166,    85,
      83,    90,   160,   372,   214,   154,   155,    83,    69,    70,
     166,   157,   154,   155,   160,   160,   163,   231,   216,   217,
     105,   106,   160,   221,   176,   105,   106,   163,   165,   227,
     182,   165,   165,   164,   136,    72,    72,   165,   165,   163,
     165,   136,   163,   163,   163,    83,   163,   163,    83,   136,
     153,  1025,   136,   163,   155,    18,   163,    40,   163,   163,
     156,   160,    18,   163,   310,   154,   155,   164,   162,    19,
     288,   230,   166,   790,   162,   136,   162,    10,   166,   168,
     166,   279,    10,    10,    83,    40,    19,   587,   334,   335,
     631,    19,    19,   279,   164,    52,    53,    54,    55,    56,
      57,   590,    59,   592,   604,    78,    79,   279,   164,    72,
     279,    11,    12,    13,    71,   216,   217,   164,    85,   279,
     221,   621,    72,    90,    18,   131,   227,    85,    83,    83,
      85,   131,    90,    33,    78,    79,    36,    37,    38,    39,
      40,   310,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,   372,    71,
      72,   375,   360,    28,    29,   334,   335,   164,    85,    75,
     125,    71,    72,    90,   164,  1013,   164,    83,   279,    85,
     378,    83,   137,    19,   164,   139,   153,   154,   155,    83,
     164,    85,   390,    86,    87,   153,   154,   155,   586,    83,
      83,    85,   157,   157,   343,   160,   160,   162,   162,   164,
      85,   166,   712,   713,   714,   715,   716,   160,   163,   125,
     720,    18,    83,  1012,    85,    86,    83,   425,   769,    18,
      18,   125,    55,    56,    57,    85,   156,   154,   155,   646,
     609,   125,   334,   335,   632,   614,    72,   163,    71,    72,
     409,   157,    72,   407,   160,   407,   162,   996,   164,   407,
     166,    72,    72,   157,   462,   165,   160,    72,   162,   136,
     164,   540,   166,   157,   110,   111,   160,   378,   162,   164,
     164,   117,   166,   110,   120,   121,   122,   123,   124,   125,
     155,   537,   561,    20,   542,    71,   160,    83,    75,    85,
     569,   156,   802,   153,   154,   155,   806,   807,   808,   809,
     810,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,    83,   136,    85,   104,   105,   106,   125,
     104,   105,   106,    73,   542,   131,   224,    10,    85,    18,
     228,   216,   217,    90,   136,   156,   221,   156,    94,   805,
      83,   462,   227,   163,   242,   727,   244,   245,   246,    72,
      83,   157,   570,   160,   160,   125,   162,   746,   747,    83,
     166,    85,   102,   752,    85,    18,    83,   137,   586,   587,
     134,   601,   892,   165,   894,   609,   594,   167,   165,    83,
     614,   134,   902,   164,    10,   793,   604,   157,   165,    73,
     160,   163,   162,   110,   164,   777,   166,   154,   155,    20,
     163,   125,   620,   621,   163,    81,   624,   587,    52,    53,
      54,    55,    56,    57,   632,   881,   164,   589,    20,   160,
      83,   542,   139,   160,   604,   164,    20,    71,    72,   949,
      18,   165,   650,   157,   954,    83,   160,    19,   162,   135,
     157,   621,   166,   160,   684,   162,    73,   165,   968,   570,
      73,    73,   163,    73,   694,    73,   838,   977,    55,    56,
      57,    19,    59,    73,    73,   586,   684,   685,   857,    73,
     859,   645,    72,   645,    71,    73,   694,   645,   165,    10,
      10,    73,   160,   772,   163,    10,   952,    73,   163,    18,
     708,    18,   163,   378,   712,   713,   714,   715,   716,   110,
     165,   883,   720,   624,   164,   887,   156,   156,   163,   165,
     117,   632,   746,   747,   110,   161,    73,    85,   752,    34,
     165,   739,   740,    73,   120,   121,   122,   123,   124,   125,
     702,    80,   712,   713,   714,   715,   716,    10,   153,   163,
     720,    34,   701,   761,    85,   164,   928,   164,  1014,    18,
      18,   781,   110,   111,    19,   944,   938,  1023,   940,   117,
      20,    20,   120,   121,   122,   123,   124,   125,    34,    20,
     163,    85,    85,   163,   165,   793,   958,   462,    85,   102,
     165,   165,   118,   164,   802,   102,   156,   708,   806,   807,
     808,   809,   810,   811,   812,   813,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   787,   998,   847,   163,   165,
     792,   165,   802,   857,   783,   859,   806,   807,   808,   809,
     810,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   163,   163,   163,  1013,   542,   163,    78,
      19,    56,   859,   746,   207,   375,   857,   605,   950,   217,
     935,   328,   793,   573,   892,   963,   894,   588,   739,    19,
     835,   740,   661,   618,   902,   570,   739,    41,   740,   622,
     863,   931,   793,   955,  1005,   166,   279,   325,   894,    -1,
     802,   586,   632,   800,   222,    -1,    -1,    -1,    -1,    -1,
     944,    -1,   892,   931,   894,    -1,    -1,    -1,    -1,   937,
      -1,    -1,   902,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   949,    -1,    -1,   952,    -1,   954,    -1,    -1,   624,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   632,    -1,    -1,
     968,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,   977,
      -1,   120,   121,   122,   123,   124,   125,    -1,    -1,   949,
     110,   111,    -1,    -1,   954,    -1,    -1,   117,   996,    -1,
     120,   121,   122,   123,   124,   125,    -1,    -1,   968,   961,
      -1,   963,    -1,    -1,  1012,     7,     8,   977,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    30,    31,
      11,    12,    13,   708,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    33,    55,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    -1,
      -1,    -1,    84,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   793,    13,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      91,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,   125,    -1,   178,    71,    72,    -1,
      -1,   183,   184,    -1,   165,    -1,    -1,   138,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,
     587,    -1,    -1,   164,    -1,    -1,   218,    -1,    -1,    -1,
     222,    -1,    -1,    -1,   226,    -1,    -1,   604,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,
      -1,    -1,    -1,    -1,   621,    -1,    -1,    -1,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,    -1,   280,    -1,
      -1,    -1,    -1,   285,   286,   287,   288,    -1,    -1,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,    -1,    -1,   306,   307,   308,    -1,    -1,    -1,
      -1,   313,   314,   315,   316,   317,    -1,   319,    -1,    -1,
      -1,   323,    -1,   325,    11,    12,    13,    -1,    -1,    -1,
     332,   333,    -1,    -1,    -1,   712,   713,   714,   715,   341,
      -1,    -1,    -1,   720,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    -1,    -1,    -1,    33,    -1,    -1,    36,
      37,    38,    39,    40,    71,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,   430,   806,
     807,   808,   809,   810,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,    -1,    -1,    -1,    -1,
      -1,   463,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    -1,    -1,    -1,   892,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    33,   902,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,   558,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   949,    -1,    -1,    -1,    -1,   954,    -1,    -1,
      -1,    -1,    -1,   585,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   968,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     977,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,     8,     9,   616,   163,    -1,    -1,    14,    15,
      -1,    17,    18,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   641,
      -1,    -1,    -1,    -1,   646,    -1,    -1,    -1,    -1,    -1,
      -1,   653,    71,    72,    -1,    -1,    52,    53,    -1,   661,
      -1,    -1,    58,   665,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
     116,   117,    -1,   119,    -1,    -1,    -1,   123,   124,   125,
     732,   127,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    13,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    -1,   790,    33,
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
     142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,
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
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,   116,   117,    -1,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    18,    19,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    71,    72,    -1,    -1,    58,    -1,
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
      -1,    17,    18,    19,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    71,    -1,
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
      -1,    -1,    14,    15,    -1,    17,    18,    19,    -1,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    71,    72,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,
      -1,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      18,    19,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    71,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    18,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,    -1,    -1,   123,   124,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,   101,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    19,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,
      -1,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      18,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
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
      14,    15,    -1,    17,    18,    19,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    52,    53,
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
      -1,    17,    18,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,    -1,    -1,
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
      -1,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     164,   165,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     160,   161,   162,    -1,   164,    -1,   166,   167,   168,     5,
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
     158,   159,   160,    -1,   162,   163,   164,    -1,   166,   167,
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
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,   163,
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
     160,    -1,   162,    -1,   164,   165,   166,   167,   168,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
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
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     158,   159,   160,    -1,   162,    -1,   164,    -1,   166,   167,
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
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,    -1,
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
     160,    -1,   162,    -1,   164,    -1,   166,   167,   168,     5,
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
      -1,    -1,    -1,    -1,   110,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    18,   125,
      -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,    -1,   164,    59,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    11,    12,    13,
      -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    11,    12,    13,    -1,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    52,    53,    -1,    -1,    -1,
     163,    58,    -1,    60,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    36,    37,    38,    39,    40,   163,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,   138,    -1,   140,   141,   142,   143,   144,   145,    11,
      12,    13,    -1,    -1,    -1,   152,    -1,    -1,   163,    -1,
     157,   158,   159,   160,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
     102,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    11,    12,    13,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    11,    12,    13,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    11,    12,    13,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
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
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
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
     179,   192,   193,   202,   203,   204,   205,   260,   261,   262,
     263,   264,   265,   266,   269,   273,   274,   275,   278,   283,
     286,   287,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   303,   150,    15,    83,   110,   125,   157,   260,   260,
     164,   263,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   125,
     164,   275,   278,   292,   292,    40,   260,   306,   307,   308,
     260,   131,   267,   268,   274,   275,   276,   277,   278,   279,
     296,   297,   298,   164,   263,   280,   263,    34,    72,   258,
     260,   192,   263,   164,   164,   164,   263,   163,   260,   163,
     260,    83,    40,   200,   139,   162,   232,   275,   163,   260,
      18,   260,   110,   111,   160,   175,   176,   178,   181,   183,
     184,   232,   131,   131,   110,   232,   164,   164,   164,    83,
      83,   164,   164,    85,    90,   153,   154,   155,   309,   310,
      18,   160,   175,   176,   175,    85,   260,   264,   269,    18,
     296,   300,    90,   281,   309,    90,   309,   160,   163,   190,
      18,    83,    11,    12,    13,    33,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    59,
      71,   163,    18,    18,   163,    72,    72,    72,   164,   236,
     156,    72,    20,    21,    22,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    69,    70,    72,    18,    72,   236,
     136,   236,   236,    18,    72,    18,    72,    20,   200,    16,
     269,   156,   292,    16,    73,    10,   289,   236,   282,    18,
     282,   156,    18,    72,   136,   136,   165,    34,   192,   260,
     301,    10,   163,    94,    34,   192,   219,   258,   259,   260,
      83,   213,   214,    18,    34,   215,   163,   163,   163,    83,
     164,    72,    83,   186,   187,   163,   190,   163,   175,   183,
     160,   102,   160,   175,   181,    10,   163,    85,   166,   239,
     240,   200,    85,   241,   242,   199,   292,   199,   260,    18,
     134,   207,   292,   303,   304,   305,   306,    72,   136,   153,
     310,    84,   260,   292,    90,   153,   310,   171,   175,    18,
     163,   165,   165,   165,   260,   167,   168,    83,    19,   130,
     191,   192,   202,   204,   190,   134,   206,   260,   260,   260,
      34,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   276,   260,   190,   190,   301,
     301,   301,    40,   161,   165,   237,   238,   260,   264,     5,
       6,     7,     8,     9,    11,    12,    13,    14,    15,    18,
      59,    74,    75,    76,    77,    78,    79,    80,    83,    85,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   131,   132,
     133,   134,   135,   137,   138,   139,   157,   166,   172,   173,
     174,   301,    40,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   301,   260,   301,    18,    83,
     296,   302,   260,   301,   260,   301,   260,   260,   165,   174,
      40,   260,   308,   206,   243,   260,   301,   302,   302,   190,
     220,    73,   260,   263,   190,   163,   102,    20,    10,   165,
     163,   216,   163,   216,   164,   227,   228,   229,   230,   231,
     232,   234,    81,   233,    20,    10,   163,    19,   160,    18,
      83,   175,   160,   163,   160,   184,    18,   292,    10,   163,
     164,    20,    10,   163,    10,   165,   165,   165,   243,   209,
     275,    18,    10,   165,   165,    83,    85,    86,   311,    83,
      19,    72,    19,    19,    19,   171,    72,    19,    19,   275,
     135,   208,   260,    34,    19,    19,    73,    73,    73,   292,
     260,    10,   165,   165,   260,    18,   166,   300,   236,    73,
     269,   292,    73,    19,    73,   260,   236,    19,    73,    19,
      73,   292,   208,    19,   111,   117,   120,   121,   122,   123,
     124,   125,   244,   250,   252,   253,   254,   255,    19,    73,
     222,    78,    79,   221,   224,   163,    95,   259,    40,   226,
     292,   303,    52,    53,    58,    60,    72,    91,   138,   152,
     164,   274,   275,   283,   284,   285,   214,    34,   192,   212,
     216,    19,   105,   106,   217,   216,   104,   227,   165,    10,
      10,   200,    73,   284,   187,   194,    18,   178,   182,   183,
     185,   160,    18,   260,   240,   227,   284,   242,   292,   163,
      19,    10,   243,   305,    73,   260,    19,   301,   209,    18,
     260,   238,    19,   260,    19,   232,   209,    18,   163,   251,
     232,   110,   255,    78,    79,   223,   225,   263,   192,   163,
     163,   292,   165,    16,   284,   284,   284,   284,   284,   288,
     290,   291,   164,    90,   284,   156,    11,    12,    13,    33,
      36,    37,    38,    39,    40,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    71,    72,   190,    19,   260,    34,   163,   218,   104,
     163,   165,   117,   270,   229,   230,   231,   234,   161,   201,
     114,   115,   195,   196,   197,   182,   183,    10,    19,    18,
     180,   183,    19,   165,   275,    19,    73,    73,   243,   236,
      19,   174,   188,   189,    18,   163,   245,   190,    85,   256,
     257,   200,   263,    34,    80,   192,   259,    34,   192,   211,
     226,   292,    16,    73,    10,   289,   288,   165,   174,   284,
     284,   284,    34,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   101,   218,   190,
     163,    34,   235,   164,   235,   200,    85,   164,    18,   198,
      18,    19,   185,   180,    10,    19,   270,    19,    19,    20,
      10,   163,   246,    19,    20,    10,   163,   174,    34,   190,
     163,   165,   190,   165,   284,   291,   165,   284,    34,    73,
     163,   190,   232,   200,   271,   272,   201,    20,   275,   190,
     190,    19,   183,   235,   284,   189,    19,    83,   157,   174,
     247,   248,   249,   275,   284,   257,   164,   190,    34,   192,
     210,    99,   211,   284,    85,    10,   165,    85,   284,    85,
      19,    19,   118,   102,   156,   227,   190,   163,   272,   165,
     209,    83,   172,   255,   174,   165,    97,   163,   163,   163,
     163,   174,   235,   163,   163
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
    {cout<<"statement1\n"; p->finishscope();;}
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
    {cout<<"inner_statement_list_start_scope\n"; p->startscope();;}
    break;

  case 147:
#line 397 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"catches1\n";;}
    break;

  case 148:
#line 399 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"catches2\n";;}
    break;

  case 149:
#line 404 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"catch\n"; p->finishscope();;}
    break;

  case 150:
#line 409 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"catch_header\n"; p->startscope();;}
    break;

  case 151:
#line 414 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_finally1\n";;}
    break;

  case 152:
#line 416 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_finally2\n"; p->finishscope();;}
    break;

  case 153:
#line 421 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"finally_body\n"; p->startscope();;}
    break;

  case 154:
#line 425 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variables_list1\n";;}
    break;

  case 155:
#line 427 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variables_list2\n";;}
    break;

  case 156:
#line 432 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_ref1\n";;}
    break;

  case 157:
#line 434 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_ref2\n";;}
    break;

  case 158:
#line 439 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_ellipsis1\n";;}
    break;

  case 159:
#line 441 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_ellipsis2\n";;}
    break;

  case 160:
#line 446 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_declaration_statement"; p->finishscope();;}
    break;

  case 161:
#line 451 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_header"; p->addfunction((yyvsp[-4].r.srt), (yyvsp[-4].r.myLineNo), (yyvsp[-4].r.myColNo));;}
    break;

  case 162:
#line 456 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement1\n";;}
    break;

  case 163:
#line 458 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement2\n";;}
    break;

  case 164:
#line 460 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement3\n";;}
    break;

  case 165:
#line 465 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_entry_type1\n";;}
    break;

  case 166:
#line 467 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_entry_type2\n";;}
    break;

  case 167:
#line 469 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_entry_type3\n";;}
    break;

  case 168:
#line 474 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"extends_from1\n";;}
    break;

  case 169:
#line 476 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"extends_from2\n";;}
    break;

  case 170:
#line 481 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"interface_extends_list1\n";;}
    break;

  case 171:
#line 483 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"interface_extends_list2\n";;}
    break;

  case 172:
#line 488 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"implements_list1\n";;}
    break;

  case 173:
#line 490 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"implements_list2\n";;}
    break;

  case 174:
#line 495 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name_list1\n";;}
    break;

  case 175:
#line 497 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name_list2\n";;}
    break;

  case 176:
#line 502 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"for_statement1\n";;}
    break;

  case 177:
#line 504 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"for_statement2\n";;}
    break;

  case 178:
#line 509 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_statement1\n";;}
    break;

  case 179:
#line 511 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_statement2\n";;}
    break;

  case 180:
#line 516 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_statement1\n";;}
    break;

  case 181:
#line 518 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_statement2\n";;}
    break;

  case 182:
#line 523 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_list1\n";;}
    break;

  case 183:
#line 525 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_list2\n";;}
    break;

  case 184:
#line 530 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"declare_list_element\n";;}
    break;

  case 185:
#line 535 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"switch_case_list1\n";;}
    break;

  case 186:
#line 537 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"switch_case_list2\n";;}
    break;

  case 187:
#line 539 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"switch_case_list3\n";;}
    break;

  case 188:
#line 541 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"switch_case_list4\n";;}
    break;

  case 189:
#line 546 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case_list1\n";;}
    break;

  case 190:
#line 548 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case_list2\n";;}
    break;

  case 191:
#line 553 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case1\n";;}
    break;

  case 192:
#line 555 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case2\n";;}
    break;

  case 193:
#line 560 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case_separator1\n";;}
    break;

  case 194:
#line 562 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"case_separator2\n";;}
    break;

  case 195:
#line 567 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"while_statement1\n";;}
    break;

  case 196:
#line 569 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"while_statement2\n";;}
    break;

  case 197:
#line 574 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"elseif_list1\n";;}
    break;

  case 198:
#line 576 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"elseif_list2\n";;}
    break;

  case 199:
#line 581 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"elseif1\n";;}
    break;

  case 200:
#line 586 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_elseif_list1\n";;}
    break;

  case 201:
#line 588 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_elseif_list2\n";;}
    break;

  case 202:
#line 593 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_elseif\n";;}
    break;

  case 203:
#line 598 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"else_single1\n";;}
    break;

  case 204:
#line 600 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"else_single2\n";;}
    break;

  case 205:
#line 605 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_else_single1\n";;}
    break;

  case 206:
#line 607 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_else_single2\n";;}
    break;

  case 207:
#line 612 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_variable1\n";;}
    break;

  case 208:
#line 614 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_variable2\n";;}
    break;

  case 209:
#line 616 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"foreach_variable3\n";;}
    break;

  case 210:
#line 621 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_list1\n";;}
    break;

  case 211:
#line 623 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_list2\n";;}
    break;

  case 212:
#line 625 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_list3\n";;}
    break;

  case 213:
#line 627 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_list4\n";;}
    break;

  case 214:
#line 632 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_without_static_scalar_list1\n";;}
    break;

  case 215:
#line 634 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_without_static_scalar_list2\n";;}
    break;

  case 216:
#line 639 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_without_static_scalar\n"; p->addparameter((yyvsp[0].r.srt), (yyvsp[0].r.myLineNo), (yyvsp[0].r.myColNo));;}
    break;

  case 217:
#line 643 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_with_static_scalar_list1\n";;}
    break;

  case 218:
#line 645 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_with_static_scalar_list2\n";;}
    break;

  case 219:
#line 650 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parameter_with_static_scalar\n"; p->addparameter((yyvsp[-2].r.srt), (yyvsp[-2].r.myLineNo), (yyvsp[-2].r.myColNo));;}
    break;

  case 220:
#line 654 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"type1\n";;}
    break;

  case 221:
#line 656 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"type2\n";;}
    break;

  case 222:
#line 658 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"type3\n";;}
    break;

  case 223:
#line 660 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"type4\n";;}
    break;

  case 224:
#line 665 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_capacity1\n";;}
    break;

  case 225:
#line 667 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_capacity2";;}
    break;

  case 226:
#line 671 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"param_type\n";;}
    break;

  case 227:
#line 676 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_return_type1\n";;}
    break;

  case 228:
#line 678 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_return_type2\n";;}
    break;

  case 229:
#line 683 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument_list1\n";;}
    break;

  case 230:
#line 685 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument_list2\n";;}
    break;

  case 231:
#line 687 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument_list3\n";;}
    break;

  case 232:
#line 692 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_argument_list1\n";;}
    break;

  case 233:
#line 694 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_argument_list2\n";;}
    break;

  case 234:
#line 699 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument1\n";;}
    break;

  case 235:
#line 701 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument2\n";;}
    break;

  case 236:
#line 703 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"argument3\n";;}
    break;

  case 237:
#line 708 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var_list1\n";;}
    break;

  case 238:
#line 710 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var_list2\n";;}
    break;

  case 239:
#line 715 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var1\n";;}
    break;

  case 240:
#line 717 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var2\n";;}
    break;

  case 241:
#line 719 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"global_var3\n";;}
    break;

  case 242:
#line 724 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_var_list1\n";;}
    break;

  case 243:
#line 726 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_var_list2\n";;}
    break;

  case 244:
#line 731 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_var1\n";;}
    break;

  case 245:
#line 733 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_var2\n";;}
    break;

  case 246:
#line 738 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement_list1\n";;}
    break;

  case 247:
#line 740 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement_list2\n";;}
    break;

  case 248:
#line 745 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement1\n";;}
    break;

  case 249:
#line 747 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement2\n";;}
    break;

  case 250:
#line 749 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement3\n"; p->finishscope();;}
    break;

  case 251:
#line 751 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_statement4\n";;}
    break;

  case 252:
#line 756 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptations1\n";;}
    break;

  case 253:
#line 758 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptations2\n";;}
    break;

  case 254:
#line 763 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation_list1\n";;}
    break;

  case 255:
#line 765 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation_list2\n";;}
    break;

  case 256:
#line 770 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation1\n";;}
    break;

  case 257:
#line 772 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation2\n";;}
    break;

  case 258:
#line 774 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation3\n";;}
    break;

  case 259:
#line 776 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation4\n";;}
    break;

  case 260:
#line 778 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_adaptation5\n";;}
    break;

  case 261:
#line 783 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_method_reference_fully_qualified\n";;}
    break;

  case 262:
#line 788 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_method_reference1\n";;}
    break;

  case 263:
#line 790 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"trait_method_reference2\n";;}
    break;

  case 264:
#line 794 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_header\n"; p->addfunction((yyvsp[-4].r.srt), (yyvsp[-4].r.myLineNo), (yyvsp[-4].r.myColNo));;}
    break;

  case 265:
#line 799 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_body1\n";;}
    break;

  case 266:
#line 801 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_body2\n";;}
    break;

  case 267:
#line 806 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_modifiers1\n";;}
    break;

  case 268:
#line 808 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_modifiers2\n";;}
    break;

  case 269:
#line 813 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_modifiers1\n";;}
    break;

  case 270:
#line 815 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"method_modifiers2\n";;}
    break;

  case 271:
#line 820 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_member_modifiers1\n";;}
    break;

  case 272:
#line 822 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_member_modifiers2\n";;}
    break;

  case 273:
#line 827 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier1\n";;}
    break;

  case 274:
#line 829 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier2\n";;}
    break;

  case 275:
#line 831 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier3\n";;}
    break;

  case 276:
#line 833 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier4\n";;}
    break;

  case 277:
#line 835 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier5\n";;}
    break;

  case 278:
#line 837 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"member_modifier6\n";;}
    break;

  case 279:
#line 842 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"property_declaration_list1\n";;}
    break;

  case 280:
#line 844 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"property_declaration_list2\n";;}
    break;

  case 281:
#line 849 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"property_declaration1\n"; p->adddatamember((yyvsp[0].r.srt), (yyvsp[0].r.myLineNo), (yyvsp[0].r.myColNo));;}
    break;

  case 282:
#line 851 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"property_declaration2\n"; p->adddatamember((yyvsp[-2].r.srt), (yyvsp[-2].r.myLineNo), (yyvsp[-2].r.myColNo));;}
    break;

  case 283:
#line 856 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr_list1\n";;}
    break;

  case 284:
#line 858 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr_list2\n";;}
    break;

  case 285:
#line 863 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"for_expr1\n";;}
    break;

  case 286:
#line 865 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"for_expr2\n";;}
    break;

  case 287:
#line 870 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr1\n";;}
    break;

  case 288:
#line 872 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr2\n";;}
    break;

  case 289:
#line 874 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr3\n";;}
    break;

  case 290:
#line 876 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr4\n";;}
    break;

  case 291:
#line 878 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr5\n";;}
    break;

  case 292:
#line 880 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr6\n";;}
    break;

  case 293:
#line 882 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr7\n";;}
    break;

  case 294:
#line 884 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr8\n";;}
    break;

  case 295:
#line 886 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr9\n";;}
    break;

  case 296:
#line 888 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr10\n";;}
    break;

  case 297:
#line 890 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr11\n";;}
    break;

  case 298:
#line 892 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr12\n";;}
    break;

  case 299:
#line 894 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr13\n";;}
    break;

  case 300:
#line 896 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr14\n";;}
    break;

  case 301:
#line 898 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr15\n";;}
    break;

  case 302:
#line 900 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr16\n";;}
    break;

  case 303:
#line 902 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr17\n";;}
    break;

  case 304:
#line 904 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr18\n";;}
    break;

  case 305:
#line 906 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr19\n";;}
    break;

  case 306:
#line 908 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr20\n";;}
    break;

  case 307:
#line 910 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr21\n";;}
    break;

  case 308:
#line 912 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr22\n";;}
    break;

  case 309:
#line 914 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr23\n";;}
    break;

  case 310:
#line 916 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr24\n";;}
    break;

  case 311:
#line 918 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr25\n";;}
    break;

  case 312:
#line 920 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr26\n";;}
    break;

  case 313:
#line 922 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr27\n";;}
    break;

  case 314:
#line 924 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr28\n";;}
    break;

  case 315:
#line 926 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr29\n";;}
    break;

  case 316:
#line 928 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr30\n";;}
    break;

  case 317:
#line 930 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr31\n";;}
    break;

  case 318:
#line 932 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr32\n";;}
    break;

  case 319:
#line 934 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr33\n";;}
    break;

  case 320:
#line 936 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr34\n";;}
    break;

  case 321:
#line 938 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr35\n";;}
    break;

  case 322:
#line 940 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr36\n";;}
    break;

  case 323:
#line 942 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr37\n";;}
    break;

  case 324:
#line 944 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr38\n";;}
    break;

  case 325:
#line 946 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr39\n";;}
    break;

  case 326:
#line 948 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr30\n";;}
    break;

  case 327:
#line 950 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr41\n";;}
    break;

  case 328:
#line 952 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr42\n";;}
    break;

  case 329:
#line 954 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr43\n";;}
    break;

  case 330:
#line 956 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr44\n";;}
    break;

  case 331:
#line 958 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr45\n";;}
    break;

  case 332:
#line 960 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr46\n";;}
    break;

  case 333:
#line 962 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr47\n";;}
    break;

  case 334:
#line 964 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr48\n";;}
    break;

  case 335:
#line 966 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr49\n";;}
    break;

  case 336:
#line 968 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr50\n";;}
    break;

  case 337:
#line 970 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr51\n";;}
    break;

  case 338:
#line 972 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr52\n";;}
    break;

  case 339:
#line 974 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr53\n";;}
    break;

  case 340:
#line 976 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr54\n";;}
    break;

  case 341:
#line 979 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr55\n";;}
    break;

  case 342:
#line 981 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr56\n";;}
    break;

  case 343:
#line 983 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr57\n";;}
    break;

  case 344:
#line 985 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr58\n";;}
    break;

  case 345:
#line 987 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr59\n";;}
    break;

  case 346:
#line 989 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr60\n";;}
    break;

  case 347:
#line 991 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr61\n";;}
    break;

  case 348:
#line 993 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr62\n";;}
    break;

  case 349:
#line 995 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr63\n";;}
    break;

  case 350:
#line 997 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr64\n";;}
    break;

  case 351:
#line 999 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr65\n";;}
    break;

  case 352:
#line 1001 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr66\n";;}
    break;

  case 353:
#line 1003 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr67\n";;}
    break;

  case 354:
#line 1005 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr68\n";;}
    break;

  case 355:
#line 1007 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr69\n";;}
    break;

  case 356:
#line 1009 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr70\n";;}
    break;

  case 357:
#line 1011 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr71\n";;}
    break;

  case 358:
#line 1013 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr72\n";;}
    break;

  case 359:
#line 1015 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr73\n";;}
    break;

  case 360:
#line 1017 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr74\n";;}
    break;

  case 361:
#line 1019 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr75\n";;}
    break;

  case 362:
#line 1021 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr76\n";;}
    break;

  case 363:
#line 1023 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr77\n";;}
    break;

  case 364:
#line 1025 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr78\n";;}
    break;

  case 365:
#line 1027 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr79\n";;}
    break;

  case 366:
#line 1029 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr80\n";;}
    break;

  case 367:
#line 1031 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr81\n";;}
    break;

  case 368:
#line 1033 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr82\n";;}
    break;

  case 369:
#line 1035 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"expr83\n";;}
    break;

  case 370:
#line 1040 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_static_expr_function_header\n";;}
    break;

  case 371:
#line 1044 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_expr_function_header\n";;}
    break;

  case 372:
#line 1049 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parentheses_expr1\n";;}
    break;

  case 373:
#line 1051 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"parentheses_expr2\n";;}
    break;

  case 374:
#line 1056 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"yield_expr1\n";;}
    break;

  case 375:
#line 1058 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"yield_expr2\n";;}
    break;

  case 376:
#line 1063 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_expr1\n";;}
    break;

  case 377:
#line 1065 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_expr2\n";;}
    break;

  case 378:
#line 1070 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar_dereference1\n";;}
    break;

  case 379:
#line 1072 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar_dereference2\n";;}
    break;

  case 380:
#line 1074 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar_dereference3\n";;}
    break;

  case 381:
#line 1076 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar_dereference4\n";;}
    break;

  case 382:
#line 1082 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"anonymous_class\n"; p->finishscope();;}
    break;

  case 383:
#line 1087 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"anonymous_class\n"; p->($<>);;}
    break;

  case 384:
#line 1092 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_expr1\n";;}
    break;

  case 385:
#line 1094 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_expr2\n";;}
    break;

  case 386:
#line 1099 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_vars1\n";;}
    break;

  case 387:
#line 1101 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_vars2\n";;}
    break;

  case 388:
#line 1106 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_var_list1\n";;}
    break;

  case 389:
#line 1108 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_var_list2\n";;}
    break;

  case 390:
#line 1113 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"lexical_var\n";;}
    break;

  case 391:
#line 1118 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call1\n";;}
    break;

  case 392:
#line 1120 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call2\n";;}
    break;

  case 393:
#line 1122 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call3\n";;}
    break;

  case 394:
#line 1124 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call4\n";;}
    break;

  case 395:
#line 1126 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call5\n";;}
    break;

  case 396:
#line 1128 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"function_call6\n";;}
    break;

  case 397:
#line 1134 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name\n";;}
    break;

  case 398:
#line 1136 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name\n";;}
    break;

  case 399:
#line 1141 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name1\n";;}
    break;

  case 400:
#line 1143 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name2\n";;}
    break;

  case 401:
#line 1145 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"name3\n";;}
    break;

  case 402:
#line 1150 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name_reference1\n";;}
    break;

  case 403:
#line 1152 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name_reference2\n";;}
    break;

  case 404:
#line 1157 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"dynamic_class_name_reference1\n";;}
    break;

  case 405:
#line 1159 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"dynamic_class_name_reference2\n";;}
    break;

  case 406:
#line 1164 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name_or_var1\n";;}
    break;

  case 407:
#line 1166 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"class_name_or_var2\n";;}
    break;

  case 408:
#line 1171 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr1\n";;}
    break;

  case 409:
#line 1173 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr2\n";;}
    break;

  case 410:
#line 1175 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr3\n";;}
    break;

  case 411:
#line 1177 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr4\n";;}
    break;

  case 412:
#line 1182 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"exit_expr1\n";;}
    break;

  case 413:
#line 1184 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"exit_expr2\n";;}
    break;

  case 414:
#line 1186 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"exit_expr3\n";;}
    break;

  case 415:
#line 1191 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"backticks_expr1\n";;}
    break;

  case 416:
#line 1193 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"backticks_expr2\n";;}
    break;

  case 417:
#line 1195 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"backticks_expr3\n";;}
    break;

  case 418:
#line 1200 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"ctor_arguments1\n";;}
    break;

  case 419:
#line 1202 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"ctor_arguments2\n";;}
    break;

  case 420:
#line 1207 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar1\n";;}
    break;

  case 421:
#line 1209 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar2\n";;}
    break;

  case 422:
#line 1211 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar3\n";;}
    break;

  case 423:
#line 1213 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar4\n";;}
    break;

  case 424:
#line 1215 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar5\n";;}
    break;

  case 425:
#line 1217 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar6\n";;}
    break;

  case 426:
#line 1219 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar7\n";;}
    break;

  case 427:
#line 1221 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar8\n";;}
    break;

  case 428:
#line 1223 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar9\n";;}
    break;

  case 429:
#line 1225 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar10\n";;}
    break;

  case 430:
#line 1227 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar11\n";;}
    break;

  case 431:
#line 1229 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar12\n";;}
    break;

  case 432:
#line 1231 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"common_scalar13\n";;}
    break;

  case 433:
#line 1236 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar1\n";;}
    break;

  case 434:
#line 1238 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar2\n";;}
    break;

  case 435:
#line 1240 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar3\n";;}
    break;

  case 436:
#line 1242 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar4\n";;}
    break;

  case 437:
#line 1244 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar5\n";;}
    break;

  case 438:
#line 1246 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_scalar6\n";;}
    break;

  case 439:
#line 1251 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation1\n";;}
    break;

  case 440:
#line 1253 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation2\n";;}
    break;

  case 441:
#line 1255 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation3\n";;}
    break;

  case 442:
#line 1257 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation4\n";;}
    break;

  case 443:
#line 1259 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation5\n";;}
    break;

  case 444:
#line 1261 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation6\n";;}
    break;

  case 445:
#line 1263 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation7\n";;}
    break;

  case 446:
#line 1265 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation8\n";;}
    break;

  case 447:
#line 1267 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation9\n";;}
    break;

  case 448:
#line 1269 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation10\n";;}
    break;

  case 449:
#line 1271 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation11\n";;}
    break;

  case 450:
#line 1273 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation12\n";;}
    break;

  case 451:
#line 1275 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation13\n";;}
    break;

  case 452:
#line 1277 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation14\n";;}
    break;

  case 453:
#line 1279 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation15\n";;}
    break;

  case 454:
#line 1281 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation16\n";;}
    break;

  case 455:
#line 1283 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation17\n";;}
    break;

  case 456:
#line 1285 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation18\n";;}
    break;

  case 457:
#line 1287 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation19\n";;}
    break;

  case 458:
#line 1289 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation20\n";;}
    break;

  case 459:
#line 1291 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation21\n";;}
    break;

  case 460:
#line 1293 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation22\n";;}
    break;

  case 461:
#line 1295 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation23\n";;}
    break;

  case 462:
#line 1297 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation24\n";;}
    break;

  case 463:
#line 1299 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation25\n";;}
    break;

  case 464:
#line 1301 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation26\n";;}
    break;

  case 465:
#line 1303 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation27\n";;}
    break;

  case 466:
#line 1305 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation28\n";;}
    break;

  case 467:
#line 1307 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation29\n";;}
    break;

  case 468:
#line 1309 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation30\n";;}
    break;

  case 469:
#line 1311 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation31\n";;}
    break;

  case 470:
#line 1313 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation32\n";;}
    break;

  case 471:
#line 1315 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_operation33\n";;}
    break;

  case 472:
#line 1320 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"constant1\n";;}
    break;

  case 473:
#line 1322 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"constant2\n";;}
    break;

  case 474:
#line 1327 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar1\n";;}
    break;

  case 475:
#line 1329 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar2\n";;}
    break;

  case 476:
#line 1331 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar3\n";;}
    break;

  case 477:
#line 1333 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"scalar4\n";;}
    break;

  case 478:
#line 1338 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_array_pair_list1\n";;}
    break;

  case 479:
#line 1340 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_array_pair_list2\n";;}
    break;

  case 480:
#line 1345 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_comma1\n";;}
    break;

  case 481:
#line 1347 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"optional_comma2\n";;}
    break;

  case 482:
#line 1352 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_static_array_pair_list1\n";;}
    break;

  case 483:
#line 1354 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_static_array_pair_list2\n";;}
    break;

  case 484:
#line 1359 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_array_pair1\n";;}
    break;

  case 485:
#line 1361 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_array_pair2\n";;}
    break;

  case 486:
#line 1366 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable1\n";;}
    break;

  case 487:
#line 1368 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable2\n";;}
    break;

  case 488:
#line 1370 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable3\n";;}
    break;

  case 489:
#line 1372 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable4\n";;}
    break;

  case 490:
#line 1377 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_expr_array_deref1\n";;}
    break;

  case 491:
#line 1379 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"new_expr_array_deref2\n";;}
    break;

  case 492:
#line 1385 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access1\n";;}
    break;

  case 493:
#line 1387 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access2\n";;}
    break;

  case 494:
#line 1389 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access3\n";;}
    break;

  case 495:
#line 1391 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access4\n";;}
    break;

  case 496:
#line 1393 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_access5\n";;}
    break;

  case 497:
#line 1398 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_or_new_expr1\n";;}
    break;

  case 498:
#line 1400 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_or_new_expr2\n";;}
    break;

  case 499:
#line 1405 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_without_objects1\n";;}
    break;

  case 500:
#line 1407 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"variable_without_objects2\n";;}
    break;

  case 501:
#line 1412 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"base_variable1\n";;}
    break;

  case 502:
#line 1414 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"base_variable2\n";;}
    break;

  case 503:
#line 1419 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property1\n";;}
    break;

  case 504:
#line 1421 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property2\n";;}
    break;

  case 505:
#line 1426 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays1\n";;}
    break;

  case 506:
#line 1428 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays2\n";;}
    break;

  case 507:
#line 1430 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays3\n";;}
    break;

  case 508:
#line 1432 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays4\n";;}
    break;

  case 509:
#line 1437 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable1\n";;}
    break;

  case 510:
#line 1439 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable2\n";;}
    break;

  case 511:
#line 1441 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable3\n";;}
    break;

  case 512:
#line 1443 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable4\n"; p->addvariable((yyvsp[0].r.str), (yyvsp[0].r.myLineNo), (yyvsp[0].r.myColNo));;}
    break;

  case 513:
#line 1445 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"reference_variable5\n";;}
    break;

  case 514:
#line 1450 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"dim_offset1\n";;}
    break;

  case 515:
#line 1452 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"dim_offset2\n";;}
    break;

  case 516:
#line 1457 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_property1\n";;}
    break;

  case 517:
#line 1459 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_property2\n";;}
    break;

  case 518:
#line 1461 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"object_property3\n";;}
    break;

  case 519:
#line 1466 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr\n";;}
    break;

  case 520:
#line 1471 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_elements1\n";;}
    break;

  case 521:
#line 1473 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_elements2\n";;}
    break;

  case 522:
#line 1478 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_element1\n";;}
    break;

  case 523:
#line 1480 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_element2\n";;}
    break;

  case 524:
#line 1482 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"list_expr_element3\n";;}
    break;

  case 525:
#line 1487 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair_list1\n";;}
    break;

  case 526:
#line 1489 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair_list2\n";;}
    break;

  case 527:
#line 1494 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_array_pair_list1\n";;}
    break;

  case 528:
#line 1496 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"non_empty_array_pair_list2\n";;}
    break;

  case 529:
#line 1501 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair1\n";;}
    break;

  case 530:
#line 1503 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair2\n";;}
    break;

  case 531:
#line 1505 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair3\n";;}
    break;

  case 532:
#line 1507 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"array_pair4\n";;}
    break;

  case 533:
#line 1512 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_list1\n";;}
    break;

  case 534:
#line 1514 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_list2\n";;}
    break;

  case 535:
#line 1516 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_list3\n";;}
    break;

  case 536:
#line 1518 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_list4\n";;}
    break;

  case 537:
#line 1523 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var1\n";;}
    break;

  case 538:
#line 1525 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var2\n";;}
    break;

  case 539:
#line 1527 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var3\n";;}
    break;

  case 540:
#line 1529 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var4\n";;}
    break;

  case 541:
#line 1531 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var5\n";;}
    break;

  case 542:
#line 1533 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var6\n";;}
    break;

  case 543:
#line 1535 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var7\n";;}
    break;

  case 544:
#line 1540 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset1\n";;}
    break;

  case 545:
#line 1542 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset2\n";;}
    break;

  case 546:
#line 1544 "D:\\Compiler\\CMP\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset3\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 6519 "yacc.cpp"

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


#line 1547 "D:\\Compiler\\CMP\\Compiler\\yacc.y"




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
