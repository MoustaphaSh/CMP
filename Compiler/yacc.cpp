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
#line 2 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"

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
#line 143 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
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
#define YYLAST   9419

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  169
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  133
/* YYNRULES -- Number of rules. */
#define YYNRULES  534
/* YYNRULES -- Number of states. */
#define YYNSTATES  1018

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
     619,   622,   623,   627,   629,   632,   634,   636,   637,   639,
     643,   648,   655,   657,   662,   664,   666,   668,   669,   671,
     672,   675,   678,   682,   686,   688,   692,   694,   697,   700,
     704,   706,   708,   711,   716,   720,   722,   724,   728,   731,
     732,   737,   742,   752,   756,   758,   762,   763,   766,   771,
     777,   782,   787,   792,   796,   798,   800,   802,   806,   808,
     809,   810,   812,   814,   817,   819,   821,   823,   825,   827,
     829,   831,   835,   837,   841,   845,   847,   848,   850,   852,
     856,   860,   865,   870,   872,   875,   879,   883,   887,   891,
     895,   899,   903,   907,   911,   915,   919,   922,   925,   928,
     931,   935,   939,   943,   947,   951,   955,   959,   963,   967,
     971,   975,   979,   983,   987,   991,   995,   999,  1002,  1005,
    1008,  1011,  1015,  1019,  1023,  1027,  1031,  1035,  1039,  1043,
    1047,  1051,  1053,  1057,  1063,  1068,  1072,  1077,  1082,  1085,
    1088,  1091,  1094,  1097,  1100,  1103,  1106,  1109,  1112,  1115,
    1118,  1121,  1124,  1126,  1128,  1130,  1134,  1137,  1139,  1142,
    1153,  1165,  1169,  1173,  1176,  1181,  1186,  1190,  1195,  1200,
    1205,  1210,  1218,  1222,  1225,  1226,  1231,  1233,  1237,  1240,
    1243,  1248,  1255,  1258,  1261,  1266,  1268,  1270,  1272,  1275,
    1279,  1281,  1283,  1285,  1287,  1289,  1291,  1295,  1299,  1304,
    1309,  1310,  1313,  1315,  1316,  1318,  1320,  1321,  1323,  1325,
    1327,  1329,  1331,  1333,  1335,  1337,  1339,  1341,  1343,  1345,
    1349,  1352,  1354,  1358,  1360,  1365,  1369,  1371,  1375,  1379,
    1383,  1387,  1391,  1395,  1399,  1403,  1407,  1411,  1415,  1419,
    1423,  1427,  1431,  1435,  1439,  1442,  1445,  1448,  1451,  1455,
    1459,  1463,  1467,  1471,  1475,  1479,  1483,  1489,  1494,  1499,
    1503,  1505,  1509,  1511,  1513,  1517,  1521,  1522,  1525,  1526,
    1528,  1532,  1534,  1538,  1540,  1542,  1544,  1546,  1548,  1555,
    1560,  1564,  1569,  1572,  1577,  1582,  1584,  1588,  1590,  1593,
    1595,  1597,  1602,  1604,  1608,  1615,  1620,  1625,  1630,  1635,
    1637,  1640,  1645,  1646,  1648,  1650,  1654,  1656,  1661,  1665,
    1667,  1669,  1671,  1672,  1673,  1676,  1680,  1682,  1686,  1688,
    1693,  1696,  1699,  1702,  1704,  1707,  1709,  1714,  1718,  1722,
    1726,  1733,  1737,  1739,  1741
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
      -1,   179,   163,    -1,   111,   226,   186,   163,    -1,   110,
      -1,   111,    -1,   117,   178,   175,   160,    18,   180,    19,
      -1,   117,   178,   160,   175,   160,    18,   180,    19,    -1,
     117,   175,   160,    18,   182,    19,    -1,   117,   160,   175,
     160,    18,   182,    19,    -1,   180,    10,   183,    -1,   183,
      -1,   181,    10,   184,    -1,   184,    -1,   182,    10,   185,
      -1,   185,    -1,   176,    -1,   176,   102,    83,    -1,   183,
      -1,   160,   183,    -1,   183,    -1,   178,   183,    -1,   186,
      10,   187,    -1,   187,    -1,    83,    20,   274,    -1,   188,
      10,   189,    -1,   189,    -1,   174,    20,   274,    -1,   190,
     191,    -1,    -1,   192,    -1,   199,    -1,   200,    -1,   130,
      -1,    18,   190,    19,    -1,    77,   254,   192,   216,   220,
      -1,    77,   254,    34,   190,   218,   221,    80,   163,    -1,
      94,   254,   215,    -1,    93,   192,    94,   254,   163,    -1,
      96,   164,   252,   163,   252,   163,   252,   165,   206,    -1,
     103,   254,   211,    -1,   107,   163,    -1,   107,   253,   163,
      -1,   108,   163,    -1,   108,   253,   163,    -1,   112,   163,
      -1,   112,   253,   163,    -1,   255,   163,    -1,   119,   226,
     233,   163,    -1,   125,   226,   235,   163,    -1,    92,   251,
     163,    -1,    87,    -1,   253,   163,    -1,   127,   164,   196,
     165,   163,    -1,    98,   164,   253,   102,   222,   165,   207,
      -1,    98,   164,   253,   102,   282,    16,   222,   165,   207,
      -1,   100,   164,   209,   165,   208,    -1,   163,    -1,   113,
      18,   190,    19,   193,   195,    -1,   116,   253,   163,    -1,
     109,    83,   163,    -1,    83,    34,    -1,    -1,   193,   194,
      -1,   114,   164,   265,    85,   165,    18,   190,    19,    -1,
      -1,   115,    18,   190,    19,    -1,   282,    -1,   196,    10,
     282,    -1,    -1,    40,    -1,    -1,   161,    -1,   110,   197,
      83,   164,   223,   165,   229,    18,   190,    19,    -1,   201,
      83,   202,   204,    18,   237,    19,    -1,   133,    83,   203,
      18,   237,    19,    -1,   132,    83,    18,   237,    19,    -1,
     131,    -1,   124,   131,    -1,   123,   131,    -1,    -1,   134,
     265,    -1,    -1,   134,   205,    -1,    -1,   135,   205,    -1,
     265,    -1,   205,    10,   265,    -1,   192,    -1,    34,   190,
      97,   163,    -1,   192,    -1,    34,   190,    99,   163,    -1,
     192,    -1,    34,   190,   101,   163,    -1,   210,    -1,   209,
      10,   210,    -1,    83,    20,   274,    -1,    18,   212,    19,
      -1,    18,   163,   212,    19,    -1,    34,   212,   104,   163,
      -1,    34,   163,   212,   104,   163,    -1,    -1,   212,   213,
      -1,   105,   253,   214,   190,    -1,   106,   214,   190,    -1,
      34,    -1,   163,    -1,   192,    -1,    34,   190,    95,   163,
      -1,    -1,   216,   217,    -1,    78,   254,   192,    -1,    -1,
     218,   219,    -1,    78,   254,    34,   190,    -1,    -1,    79,
     192,    -1,    -1,    79,    34,   190,    -1,   282,    -1,    40,
     282,    -1,   293,    -1,   224,    -1,    -1,   225,    -1,   224,
      10,   225,    -1,   228,   197,   198,    85,    -1,   228,   197,
     198,    85,    20,   274,    -1,   265,    -1,   162,    72,   227,
      73,    -1,   139,    -1,   162,    -1,    81,    -1,    -1,   226,
      -1,    -1,    34,   226,    -1,   164,   165,    -1,   164,   231,
     165,    -1,   164,   255,   165,    -1,   232,    -1,   231,    10,
     232,    -1,   253,    -1,    40,   282,    -1,   161,   253,    -1,
     233,    10,   234,    -1,   234,    -1,    85,    -1,   166,   282,
      -1,   166,    18,   253,    19,    -1,   235,    10,   236,    -1,
     236,    -1,    85,    -1,    85,    20,   274,    -1,   237,   238,
      -1,    -1,   245,   226,   249,   163,    -1,   111,   226,   188,
     163,    -1,   246,   110,   197,   174,   164,   223,   165,   229,
     244,    -1,   117,   205,   239,    -1,   163,    -1,    18,   240,
      19,    -1,    -1,   240,   241,    -1,   242,   118,   205,   163,
      -1,   243,   102,   248,   174,   163,    -1,   243,   102,   248,
     163,    -1,   243,   102,    83,   163,    -1,   243,   102,   172,
     163,    -1,   265,   156,   174,    -1,   242,    -1,   174,    -1,
     163,    -1,    18,   190,    19,    -1,   247,    -1,    -1,    -1,
     247,    -1,   248,    -1,   247,   248,    -1,   120,    -1,   121,
      -1,   122,    -1,   125,    -1,   124,    -1,   123,    -1,   250,
      -1,   249,    10,   250,    -1,    85,    -1,    85,    20,   274,
      -1,   251,    10,   253,    -1,   253,    -1,    -1,   251,    -1,
     282,    -1,   293,    20,   253,    -1,   282,    20,   253,    -1,
     282,    20,    40,   282,    -1,   282,    20,    40,   259,    -1,
     259,    -1,    74,   253,    -1,   282,    32,   253,    -1,   282,
      31,   253,    -1,   282,    30,   253,    -1,   282,    29,   253,
      -1,   282,    28,   253,    -1,   282,    27,   253,    -1,   282,
      26,   253,    -1,   282,    25,   253,    -1,   282,    24,   253,
      -1,   282,    22,   253,    -1,   282,    21,   253,    -1,   282,
      70,    -1,    70,   282,    -1,   282,    69,    -1,    69,   282,
      -1,   253,    36,   253,    -1,   253,    37,   253,    -1,   253,
      11,   253,    -1,   253,    13,   253,    -1,   253,    12,   253,
      -1,   253,    38,   253,    -1,   253,    40,   253,    -1,   253,
      39,   253,    -1,   253,    54,   253,    -1,   253,    52,   253,
      -1,   253,    53,   253,    -1,   253,    55,   253,    -1,   253,
      56,   253,    -1,   253,    57,   253,    -1,   253,    51,   253,
      -1,   253,    50,   253,    -1,   253,    71,   253,    -1,    52,
     253,    -1,    53,   253,    -1,    58,   253,    -1,    60,   253,
      -1,   253,    43,   253,    -1,   253,    42,   253,    -1,   253,
      45,   253,    -1,   253,    44,   253,    -1,   253,    41,   253,
      -1,   253,    46,   253,    -1,   253,    49,   253,    -1,   253,
      47,   253,    -1,   253,    48,   253,    -1,   253,    59,   266,
      -1,   254,    -1,   164,   259,   165,    -1,   253,    33,   253,
      34,   253,    -1,   253,    33,    34,   253,    -1,   253,    35,
     253,    -1,   128,   164,   196,   165,    -1,   129,   164,   253,
     165,    -1,     9,   253,    -1,     8,   253,    -1,     7,   254,
      -1,     6,   253,    -1,     5,   253,    -1,    68,   253,    -1,
      67,   253,    -1,    66,   253,    -1,    65,   253,    -1,    64,
     253,    -1,    63,   253,    -1,    62,   253,    -1,    76,   270,
      -1,    61,   253,    -1,   277,    -1,   256,    -1,   257,    -1,
     167,   271,   167,    -1,    14,   253,    -1,    15,    -1,    17,
     253,    -1,   110,   197,   164,   223,   165,   260,   229,    18,
     190,    19,    -1,   125,   110,   197,   164,   223,   165,   260,
     229,    18,   190,    19,    -1,   164,   253,   165,    -1,   164,
     255,   165,    -1,    15,   253,    -1,    15,   253,    16,   253,
      -1,   138,   164,   296,   165,    -1,    72,   296,    73,    -1,
     256,    72,   291,    73,    -1,    91,    72,   291,    73,    -1,
     276,    72,   291,    73,    -1,   257,    72,   291,    73,    -1,
     131,   272,   202,   204,    18,   237,    19,    -1,    75,   266,
     272,    -1,    75,   258,    -1,    -1,   117,   164,   261,   165,
      -1,   262,    -1,   261,    10,   262,    -1,   197,    85,    -1,
     265,   230,    -1,   268,   156,   174,   230,    -1,   268,   156,
      18,   253,    19,   230,    -1,   288,   230,    -1,   286,   230,
      -1,   263,    72,   291,    73,    -1,   125,    -1,   265,    -1,
     175,    -1,   160,   175,    -1,   157,   160,   175,    -1,   264,
      -1,   267,    -1,   269,    -1,   287,    -1,   264,    -1,   290,
      -1,   287,   136,   292,    -1,   269,   136,   292,    -1,   269,
      72,   291,    73,    -1,   269,    18,   253,    19,    -1,    -1,
     164,   165,    -1,   254,    -1,    -1,    90,    -1,   299,    -1,
      -1,   230,    -1,    81,    -1,    82,    -1,    91,    -1,   144,
      -1,   145,    -1,   159,    -1,   140,    -1,   141,    -1,   142,
      -1,   143,    -1,   158,    -1,   152,    90,   153,    -1,   152,
     153,    -1,   273,    -1,   264,   156,   174,    -1,   265,    -1,
     138,   164,   278,   165,    -1,    72,   278,    73,    -1,   275,
      -1,   274,    36,   274,    -1,   274,    37,   274,    -1,   274,
      11,   274,    -1,   274,    13,   274,    -1,   274,    12,   274,
      -1,   274,    38,   274,    -1,   274,    40,   274,    -1,   274,
      39,   274,    -1,   274,    54,   274,    -1,   274,    52,   274,
      -1,   274,    53,   274,    -1,   274,    55,   274,    -1,   274,
      56,   274,    -1,   274,    57,   274,    -1,   274,    51,   274,
      -1,   274,    50,   274,    -1,   274,    71,   274,    -1,    52,
     274,    -1,    53,   274,    -1,    58,   274,    -1,    60,   274,
      -1,   274,    43,   274,    -1,   274,    42,   274,    -1,   274,
      45,   274,    -1,   274,    44,   274,    -1,   274,    46,   274,
      -1,   274,    49,   274,    -1,   274,    47,   274,    -1,   274,
      48,   274,    -1,   274,    33,   274,    34,   274,    -1,   274,
      33,    34,   274,    -1,   274,    72,   274,    73,    -1,   164,
     274,   165,    -1,   265,    -1,   268,   156,   174,    -1,   273,
      -1,   276,    -1,   168,   299,   168,    -1,   152,   299,   153,
      -1,    -1,   280,   279,    -1,    -1,    10,    -1,   280,    10,
     281,    -1,   281,    -1,   274,    16,   274,    -1,   274,    -1,
     284,    -1,   287,    -1,   263,    -1,   283,    -1,   164,   259,
     165,    72,   291,    73,    -1,   283,    72,   291,    73,    -1,
     285,   136,   292,    -1,   285,   136,   292,   230,    -1,   284,
     230,    -1,   284,    72,   291,    73,    -1,   284,    18,   253,
      19,    -1,   282,    -1,   164,   259,   165,    -1,   290,    -1,
     166,   286,    -1,   286,    -1,   288,    -1,   268,   156,   166,
     290,    -1,   289,    -1,   268,   156,    85,    -1,   268,   156,
     166,    18,   253,    19,    -1,   289,    72,   291,    73,    -1,
     289,    18,   253,    19,    -1,   290,    72,   291,    73,    -1,
     290,    18,   253,    19,    -1,    85,    -1,   162,    85,    -1,
     166,    18,   253,    19,    -1,    -1,   253,    -1,    83,    -1,
      18,   253,    19,    -1,   286,    -1,   137,   164,   294,   165,
      -1,   294,    10,   295,    -1,   295,    -1,   282,    -1,   293,
      -1,    -1,    -1,   297,   279,    -1,   297,    10,   298,    -1,
     298,    -1,   253,    16,   253,    -1,   253,    -1,   253,    16,
      40,   282,    -1,    40,   282,    -1,   299,   300,    -1,   299,
      90,    -1,   300,    -1,    90,   300,    -1,    85,    -1,    85,
      72,   301,    73,    -1,    85,   136,    83,    -1,   154,   253,
      19,    -1,   154,    84,    19,    -1,   154,    84,    72,   253,
      73,    19,    -1,   155,   282,    19,    -1,    83,    -1,    86,
      -1,    85,    -1
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
     580,   586,   587,   592,   594,   596,   601,   604,   608,   610,
     615,   617,   623,   625,   627,   629,   634,   637,   640,   646,
     647,   652,   654,   656,   661,   663,   668,   670,   672,   677,
     679,   684,   686,   688,   693,   695,   700,   702,   707,   710,
     714,   716,   718,   720,   725,   727,   733,   734,   739,   741,
     743,   745,   747,   752,   757,   759,   764,   766,   771,   774,
     779,   780,   785,   787,   792,   794,   796,   798,   800,   802,
     807,   809,   814,   816,   821,   823,   829,   830,   835,   837,
     839,   841,   843,   845,   847,   849,   851,   853,   855,   857,
     859,   861,   863,   865,   867,   869,   871,   873,   875,   877,
     879,   881,   883,   885,   887,   889,   891,   893,   895,   897,
     899,   901,   903,   905,   907,   909,   911,   913,   915,   917,
     919,   921,   923,   925,   927,   929,   931,   933,   935,   937,
     939,   941,   944,   946,   948,   950,   952,   954,   956,   958,
     960,   962,   964,   966,   968,   970,   972,   974,   976,   978,
     980,   982,   984,   986,   988,   990,   992,   994,   996,   998,
    1000,  1005,  1007,  1012,  1014,  1019,  1021,  1026,  1028,  1030,
    1032,  1038,  1043,  1045,  1051,  1052,  1057,  1059,  1064,  1069,
    1071,  1073,  1075,  1077,  1079,  1085,  1087,  1092,  1094,  1096,
    1101,  1103,  1108,  1110,  1115,  1117,  1122,  1124,  1126,  1128,
    1134,  1135,  1137,  1143,  1144,  1146,  1152,  1153,  1158,  1160,
    1162,  1164,  1166,  1168,  1170,  1172,  1174,  1176,  1178,  1180,
    1182,  1187,  1189,  1191,  1193,  1195,  1197,  1202,  1204,  1206,
    1208,  1210,  1212,  1214,  1216,  1218,  1220,  1222,  1224,  1226,
    1228,  1230,  1232,  1234,  1236,  1238,  1240,  1242,  1244,  1246,
    1248,  1250,  1252,  1254,  1256,  1258,  1260,  1262,  1264,  1266,
    1271,  1273,  1278,  1280,  1282,  1284,  1290,  1291,  1297,  1298,
    1303,  1305,  1310,  1312,  1317,  1319,  1321,  1323,  1328,  1330,
    1336,  1338,  1340,  1342,  1344,  1349,  1351,  1356,  1358,  1363,
    1365,  1370,  1372,  1377,  1379,  1381,  1383,  1388,  1390,  1392,
    1394,  1396,  1402,  1403,  1408,  1410,  1412,  1417,  1422,  1424,
    1429,  1431,  1434,  1439,  1440,  1445,  1447,  1452,  1454,  1456,
    1458,  1463,  1465,  1467,  1469,  1474,  1476,  1478,  1480,  1482,
    1484,  1486,  1491,  1493,  1495
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
  "foreach_variable", "parameter_list", "non_empty_parameter_list",
  "parameter", "type", "optional_capacity", "param_type",
  "optional_return_type", "argument_list", "non_empty_argument_list",
  "argument", "global_var_list", "global_var", "static_var_list",
  "static_var", "class_statement_list", "class_statement",
  "trait_adaptations", "trait_adaptation_list", "trait_adaptation",
  "trait_method_reference_fully_qualified", "trait_method_reference",
  "method_body", "variable_modifiers", "method_modifiers",
  "non_empty_member_modifiers", "member_modifier",
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
     220,   221,   221,   222,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   226,   226,   227,   227,   228,   229,
     229,   230,   230,   230,   231,   231,   232,   232,   232,   233,
     233,   234,   234,   234,   235,   235,   236,   236,   237,   237,
     238,   238,   238,   238,   239,   239,   240,   240,   241,   241,
     241,   241,   241,   242,   243,   243,   244,   244,   245,   245,
     246,   246,   247,   247,   248,   248,   248,   248,   248,   248,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   254,   254,   255,   255,   256,   256,   257,   257,   257,
     257,   258,   259,   259,   260,   260,   261,   261,   262,   263,
     263,   263,   263,   263,   263,   264,   264,   265,   265,   265,
     266,   266,   267,   267,   268,   268,   269,   269,   269,   269,
     270,   270,   270,   271,   271,   271,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   274,   274,   274,   274,   274,   274,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     276,   276,   277,   277,   277,   277,   278,   278,   279,   279,
     280,   280,   281,   281,   282,   282,   282,   282,   283,   283,
     284,   284,   284,   284,   284,   285,   285,   286,   286,   287,
     287,   288,   288,   289,   289,   289,   289,   290,   290,   290,
     290,   290,   291,   291,   292,   292,   292,   293,   294,   294,
     295,   295,   295,   296,   296,   297,   297,   298,   298,   298,
     298,   299,   299,   299,   299,   300,   300,   300,   300,   300,
     300,   300,   301,   301,   301
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
       2,     0,     3,     1,     2,     1,     1,     0,     1,     3,
       4,     6,     1,     4,     1,     1,     1,     0,     1,     0,
       2,     2,     3,     3,     1,     3,     1,     2,     2,     3,
       1,     1,     2,     4,     3,     1,     1,     3,     2,     0,
       4,     4,     9,     3,     1,     3,     0,     2,     4,     5,
       4,     4,     4,     3,     1,     1,     1,     3,     1,     0,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     3,     1,     0,     1,     1,     3,
       3,     4,     4,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     5,     4,     3,     4,     4,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     3,     2,     1,     2,    10,
      11,     3,     3,     2,     4,     4,     3,     4,     4,     4,
       4,     7,     3,     2,     0,     4,     1,     3,     2,     2,
       4,     6,     2,     2,     4,     1,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     4,
       0,     2,     1,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     3,     1,     4,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     4,     4,     3,
       1,     3,     1,     1,     3,     3,     0,     2,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     6,     4,
       3,     4,     2,     4,     4,     1,     3,     1,     2,     1,
       1,     4,     1,     3,     6,     4,     4,     4,     4,     1,
       2,     4,     0,     1,     1,     3,     1,     4,     3,     1,
       1,     1,     0,     0,     2,     3,     1,     3,     1,     4,
       2,     2,     2,     1,     2,     1,     4,     3,     3,     3,
       6,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     5,     5,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,   357,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     513,     0,     0,   400,     0,   408,   409,    74,   499,   135,
     410,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,     0,     0,     0,     0,     0,     0,     0,
     385,     0,     0,     0,    80,   161,     0,     0,     0,     0,
     414,   415,   416,   417,   411,   412,     2,     0,     0,   418,
     413,     0,     0,   141,     0,     0,   403,     0,   387,     4,
       0,    77,    78,    79,     0,     0,   331,     0,   353,   354,
     283,   476,   394,   460,     0,   462,   463,   352,   278,   477,
     474,     0,   489,   475,   490,   492,   487,     0,     3,   357,
      74,   153,   385,     0,   342,   341,     0,   340,   339,   338,
     356,   363,   358,     0,   317,   318,   319,   320,   351,   349,
     348,   347,   346,   345,   344,   343,   385,     0,   386,     0,
     299,   297,     0,   518,     0,   468,   516,   284,   406,   373,
     390,   386,   406,   391,     0,   392,   489,   393,   490,     0,
     402,   350,     0,   145,   502,     0,   275,     0,     0,   276,
       0,     0,     0,   125,     0,   127,     0,     0,   154,     0,
     214,   215,     0,   212,   129,     0,   113,     0,    88,    89,
       0,    76,   100,     0,     0,   102,    97,     0,   163,   162,
     153,     0,     0,     0,     0,     0,   166,   512,   513,   525,
       0,   420,     0,     0,     0,   523,     5,     0,    76,     0,
     388,   500,     0,     0,   283,     0,   488,   487,   404,     0,
     405,     0,     0,     0,    86,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,   131,   502,   502,   502,
       0,   379,     0,   502,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   298,   296,   502,     0,
     502,   482,     0,   383,   382,     0,   502,     0,   502,     0,
       0,     0,   118,   117,   112,   114,   115,   116,     0,     0,
     520,     0,   366,   469,   514,   407,   164,   372,     0,     0,
     502,     0,     0,   401,   113,   193,   503,     0,     0,   134,
       0,   113,   191,   121,   277,     0,     0,     0,     0,   178,
     185,   185,   124,   126,   128,   144,     0,   207,   217,     0,
       0,   107,   130,     0,   143,    76,   103,     0,     0,     0,
      76,     0,     0,    84,   231,     0,     0,   230,     0,   236,
       0,   235,     0,   151,     0,     0,   239,     0,     0,   510,
     511,     0,   509,     0,     0,     0,   419,   524,     0,     0,
     485,   522,   465,   521,     0,   389,     5,    81,   361,   362,
     332,     0,   355,   464,    75,     0,   168,   302,   304,   303,
       0,     0,   335,   300,   301,   305,   307,   306,   325,   322,
     321,   324,   323,   326,   328,   329,   327,   315,   314,   309,
     310,   308,   311,   312,   313,   330,   316,     0,     0,     0,
       0,     0,   221,     0,   224,   226,     0,    10,     9,     8,
       7,     6,    11,    12,    13,    49,    50,     0,    14,    16,
      15,    17,    18,    19,    20,    21,    72,   493,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    52,
      53,    54,    55,    56,    44,    45,    46,    47,    48,    33,
      34,    35,    36,    37,    38,    39,    71,    70,    69,    68,
      67,    66,    40,    41,    42,    43,    64,    62,    63,    59,
      60,    51,    57,    58,    61,     0,    65,    73,   461,     0,
       0,   280,   295,   294,   293,   292,   291,   290,   289,   288,
     287,   286,   285,     0,     0,     0,     0,   504,   506,   480,
       0,     0,     0,     0,   279,   364,   486,     0,     0,   517,
     515,   168,     0,     0,   397,   396,   196,   199,   368,   274,
       0,     0,   276,     0,     0,     0,     0,   185,     0,   185,
       0,   207,     0,   206,   208,   218,   153,   216,     0,     0,
       0,    87,   146,     0,     0,   101,    76,     0,    85,     0,
      96,     0,   232,     0,   132,   207,     0,     0,   133,     0,
       0,   336,   337,   259,   167,   170,   239,   512,   507,   365,
     532,   534,   533,     0,   527,   529,     0,   528,   531,    83,
       0,   502,   501,   165,     0,     0,   334,     0,   367,   370,
     384,   227,   228,     0,   222,   223,     0,     0,     0,   491,
     380,   369,   282,   281,   479,   484,   483,     0,   481,   496,
     495,   498,   497,   519,     0,   399,   398,   201,     0,     0,
     194,   119,   122,     0,     0,     0,     0,   203,   205,     0,
       0,     0,     0,   466,   410,     0,     0,     0,     0,   423,
     421,   180,   426,   179,   113,   176,   140,     0,   181,     0,
       0,   186,     0,     0,     0,   374,     0,   155,   213,   108,
     106,   149,     0,     0,     0,   104,    99,     0,     0,     0,
     229,     0,   237,   234,   152,   137,   160,     0,     0,   264,
     265,   266,   269,   268,   267,   238,     0,     0,   258,   262,
       0,   259,   508,   526,     0,    82,     0,   169,   239,   333,
     225,     0,     0,   505,   239,     0,     0,   197,     0,     0,
     200,   192,   276,   204,     0,     0,   444,   445,   446,   447,
     473,     0,   468,   471,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   182,     0,   189,   190,
     113,     0,   183,   219,     0,   219,   209,   156,     0,     0,
       0,   147,   142,     0,   105,     0,    92,     0,     0,    95,
     233,   374,     0,     0,     0,   153,   263,   171,   159,     0,
     478,   259,   381,   494,   259,     0,   113,     0,   195,     0,
     113,   174,   138,     0,   203,     0,   425,   469,   467,     0,
     459,   422,   429,   431,   430,     0,     0,   427,   428,   432,
     434,   433,   449,   448,   451,   450,   452,   454,   455,   453,
     442,   441,   436,   437,   435,   438,   439,   440,   443,     0,
       0,   113,   188,   184,     0,     0,   153,     0,   210,     0,
     113,    93,    98,     0,     0,    90,   219,     0,     0,   110,
     246,   244,   243,   272,     0,   270,     0,   530,   158,   371,
     113,   202,   120,     0,     0,     0,   472,   470,   424,   457,
       0,   458,   177,   187,   220,   113,     0,     0,   376,   113,
       0,     0,     0,    91,    94,     0,     0,     0,   241,     0,
       0,     0,   240,     0,   198,   113,   172,   123,     0,   139,
     456,     0,   378,   153,   375,     0,   211,     0,   150,   113,
     111,   109,   245,    74,    61,   255,   247,   254,     0,     0,
     273,   271,   207,     0,   175,   157,   377,   359,     0,     0,
       0,     0,     0,     0,     0,   113,   360,     0,     0,     0,
       0,   253,   219,   173,     0,   248,   251,   252,   250,     0,
       0,   148,   249,   113,   256,   242,     0,   257
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,   526,   527,   907,    88,   202,    89,   713,
      90,   828,   204,   714,   205,   206,   716,   360,   361,   908,
     909,   133,   314,   315,   711,   821,   822,   382,   936,   818,
     316,   317,    94,   416,   388,   635,   614,   957,   852,   696,
     348,   349,   352,   578,   701,   810,   343,   567,   670,   667,
     757,   671,   758,   676,   582,   583,   584,   585,   588,   586,
     895,   281,   453,   454,   376,   377,   380,   381,   613,   735,
     912,   949,   976,   977,   978,  1015,   736,   737,   738,   739,
     914,   915,   344,   345,    95,    96,    97,    98,    99,   159,
     100,   815,   937,   938,   101,   102,   103,   162,   163,   104,
     165,   171,   239,   326,   105,   770,   692,   106,   107,   771,
     324,   772,   773,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   337,   549,   117,   391,   392,   154,   155,   156,
     224,   225,   623
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -780
static const short int yypact[] =
{
     161,  -780,  -780,   119,  1704,  1868,  -780,  7116,  7116,    -2,
    7116,  7116,  7116,  7116,  7116,  -780,  7116,  7116,  7116,  7116,
    7116,  7116,  7116,  7116,  7116,  7116,  7116,  7116,   507,   507,
    1054,  7116,   321,    61,    -2,  -780,  -780,   175,  -780,  -780,
     156,  7116,  5312,    -2,   101,   124,   132,    -2,  5804,  5968,
     189,   235,   129,  6132,   284,  7116,   201,   129,   182,   209,
     137,   181,   213,   232,  -780,  -780,   245,   270,   237,   239,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,   177,    97,  -780,
    -780,   309,   325,  -780,  7280,    80,   254,   264,   255,  -780,
     266,  -780,  -780,  -780,   342,  8055,  -780,   273,   355,   372,
    -780,   390,  -780,   121,   307,  -780,   392,  -780,   354,   393,
      33,   332,   315,  -780,   315,   183,    92,   456,  -780,  -780,
    -780,   235,   370,   322,  9254,  9254,  7280,  -780,  9254,  9254,
    2020,  8617,  2020,  2360,   413,   413,    40,   413,   413,   413,
     413,   413,   413,   413,   413,   413,  -780,   414,   315,   345,
     352,   352,   507,  8666,   421,   493,  -780,  -780,   315,  -780,
     349,  -780,   315,  -780,   351,    83,  -780,   378,  -780,  6296,
    -780,  -780,  4492,  -780,  7116,    43,  9254,   422,  4656,  7116,
    7116,   432,    86,  -780,  8104,  -780,  8153,   358,  -780,     3,
    -780,   451,   439,  -780,  -780,  8202,  -780,  8251,  -780,  -780,
     309,   369,   429,    13,    48,  -780,  -780,     2,  -780,  -780,
     235,   449,   507,   507,  7116,   518,   405,   795,  1054,    85,
     164,  -780,  6460,   507,   197,  -780,  -780,   309,   255,    45,
     255,  -780,    95,   379,   389,  7116,  -780,   218,   171,   373,
     280,   171,   125,   458,  -780,   409,  7116,  7116,  7116,  6624,
    7116,  7116,  7116,  7116,  7116,  7116,  7116,  7116,  7116,  7116,
    7116,  7116,  7116,  7116,  7116,  7116,  7116,  7116,  7116,  7116,
    7116,  7116,  7116,   450,  7116,  -780,  -780,  7116,  7116,  7116,
    5476,  -780,  7386,  7116,  6788,  7116,  7116,  7116,  7116,  7116,
    7116,  7116,  7116,  7116,  7116,  7116,  -780,  -780,  7116,  7116,
    7116,  -780,    75,  -780,  -780,  7116,  7116,  7116,  7116,  7116,
     400,  7116,  -780,  -780,  -780,  -780,  -780,  -780,   397,  7386,
     352,  6952,  -780,  1054,  -780,  -780,   409,  -780,     5,  7116,
    7116,    75,    75,  -780,  -780,  -780,  9254,   492,  7116,  -780,
      -2,  -780,  -780,  -780,   559,   407,  8300,   552,    23,  -780,
     410,   411,  -780,  -780,  -780,  -780,   412,   129,   499,   562,
      54,  -780,  -780,  2524,  -780,   419,  -780,    94,   501,   309,
     426,    55,    14,  -780,  -780,   141,    64,  -780,   423,   571,
      66,  -780,    25,   352,    34,  1305,  -780,    -4,   583,   352,
    -780,    35,  -780,   438,    31,   521,  -780,  -780,   106,  8715,
     586,  -780,  -780,  -780,  2032,   255,  -780,  -780,  -780,  -780,
     142,  8764,  -780,  -780,  -780,    -4,   476,  9348,  1856,  2020,
    7116,  8813,  1569,  2507,  2999,  3327,  3488,  3650,  3815,  3815,
    3815,  3815,  3815,   836,   836,   836,   836,   677,   677,   398,
     398,   398,    40,    40,    40,  -780,   413,   540,   544,   551,
     507,  7116,  -780,    38,  -780,  9254,   460,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  7116,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,   158,  -780,  -780,   315,   553,
     231,  2020,  2020,  2020,  2020,  2020,  2020,  2020,  2020,  2020,
    2020,  2020,  2020,   554,  8862,   555,  7116,  -780,  -780,   315,
    8911,   556,  8960,   557,  2020,  9254,   563,   315,   507,  9254,
    -780,   476,  9009,   565,  -780,  -780,  4328,    24,  -780,  9254,
     477,  2688,  7116,   198,   368,   432,  4820,  -780,    76,  -780,
     262,   129,   480,   631,  -780,  -780,   235,  -780,   573,   368,
     439,  -780,  -780,   100,    11,  -780,   482,   108,  -780,   309,
    -780,  7116,   352,     2,  -780,   129,   368,   449,  -780,   507,
     485,  -780,  -780,   350,   647,  -780,  -780,   795,  -780,  -780,
    -780,  -780,  -780,   588,  -780,  -780,  7116,  -780,  -780,  -780,
    2196,  7116,  -780,  -780,    -4,   645,  1569,  7116,  -780,  -780,
    -780,   352,  9254,  5640,  -780,  -780,  9058,  7116,   652,   218,
    -780,  -780,  -780,   352,  -780,  -780,  -780,  9107,  -780,  -780,
    -780,  -780,  -780,   352,   654,  -780,  -780,   294,    -2,  5312,
    -780,  -780,  -780,   502,   511,   507,   510,    69,  -780,   368,
     368,   368,   368,   368,  -780,   513,    10,   368,   527,   528,
    -780,  8570,  -780,  -780,  -780,  -780,  -780,   168,  -780,  7116,
      50,  -780,   337,   522,   523,   579,   129,   536,  -780,  8570,
    -780,   228,    11,   309,   285,  -780,  -780,   111,   309,  9156,
    -780,   533,  8570,  -780,   352,  -780,  -780,   129,    -4,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,   129,   591,   473,  -780,
      -4,   375,  -780,  -780,  8380,  -780,   630,   647,  -780,  1569,
    -780,   315,  9205,  -780,  -780,    -2,   670,  -780,   625,  5312,
    -780,  -780,  7116,   352,  4984,   198,   367,   367,   367,   367,
    8476,   633,   697,  -780,   368,   558,  1362,  7791,   368,   368,
     368,  1391,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,  2852,  -780,  1630,  -780,  -780,
    -780,   550,  -780,   680,   560,   680,  -780,  -780,   632,   561,
     702,  -780,  -780,   317,  -780,    11,  -780,   309,   327,  -780,
    -780,   579,  7791,    39,   636,   235,  -780,  -780,  -780,   696,
    -780,   498,  -780,  -780,   569,   688,  -780,   572,  -780,   580,
    -780,  -780,  -780,   612,   352,   368,  -780,   368,  -780,   613,
    -780,  -780,  9302,  7518,  2671,   368,  8523,  2343,  2835,  3163,
    1106,  3978,  4142,  4142,  4142,  4142,   761,   761,   761,   761,
     495,   495,   376,   376,   376,   367,   367,   367,   367,  8429,
     575,  -780,  4328,  -780,   129,   705,   235,   708,   724,    -4,
    -780,  -780,  -780,   338,   309,  -780,   680,   759,    67,  -780,
    -780,  -780,  -780,   760,    68,  -780,  7791,  -780,  -780,  -780,
    -780,  4328,  -780,  5148,  3016,  4984,  8570,  -780,  -780,  2180,
     368,  -780,  -780,  4328,  -780,  -780,   643,    42,  -780,  -780,
     368,   698,  3180,  -780,  -780,   763,   368,  7791,  -780,  7656,
     368,   636,  -780,   618,  4328,  -780,  -780,  -780,   624,  -780,
    2180,  3344,  -780,   235,  -780,  3508,  8570,   623,  -780,  -780,
    8570,  -780,  -780,   687,   322,  -780,  -780,   673,   691,   639,
    8570,  -780,   129,  3672,  -780,  -780,  -780,  -780,   779,  3836,
      -4,  7926,  7791,   634,   635,  -780,  -780,    72,   637,   638,
    7521,  -780,   680,  -780,  4000,  -780,  -780,  -780,  -780,   640,
      70,  -780,  -780,  -780,  -780,  -780,  4164,  -780
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -780,  -780,     6,  -189,  -780,  -273,   -31,   726,  -780,   749,
    -780,    -8,   619,   109,  -194,   453,     1,  -780,   233,  -780,
    -119,   -26,  -780,    26,  -780,  -780,  -780,   617,   -49,  -780,
       7,     9,  -780,   505,  -780,   274,  -619,  -780,   -89,  -780,
    -780,   292,  -780,  -308,  -780,    62,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,   103,  -565,  -780,   166,   -18,  -780,  -780,
    -779,   -91,  -780,   227,  -780,   272,  -780,   289,  -562,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -721,
    -780,   -72,   840,  -546,  1001,    -6,   -46,  -780,  -780,  -780,
     -74,    46,  -780,   -66,  -780,    60,   -28,   626,  -780,    27,
    -780,  -780,  -780,   736,   709,   797,  -780,  -780,  -780,   126,
     131,  -780,    44,    41,  -780,  -780,  -780,   -10,   -14,   -12,
    -780,   -80,  -217,    58,  -210,  -780,   287,   690,  -780,   582,
     312,   318,  -780
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -487
static const short int yytable[] =
{
     148,   148,   189,   127,   161,   237,   366,   390,     5,   528,
     234,    92,    92,    93,    93,   747,   704,   836,   167,   301,
     168,   303,   166,   304,   193,   201,   674,   170,   172,   193,
      91,    91,   193,   575,   192,   609,   897,   178,   233,   207,
     721,   182,   211,   580,   609,   617,   557,   228,   643,   740,
     230,   299,   963,   338,   741,   149,   149,   910,   372,   164,
     447,   448,   449,   406,   590,   372,   529,   325,   177,   150,
     151,   325,   310,   318,   603,   236,   607,   947,   951,   120,
     233,   543,   740,   545,   808,   765,   356,   374,  1013,   551,
     477,   553,   160,   546,   120,   698,   120,   120,   235,   273,
     775,   329,   668,   669,   350,   300,   246,   247,   248,   833,
     307,   274,   594,   563,   620,   226,   621,   622,   712,     6,
     351,   198,   199,   233,   148,   625,   718,   945,   249,   827,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   123,   273,   330,    81,   394,   547,   601,
      38,   378,   126,   221,   308,    38,   274,   357,   375,   365,
     363,   525,   370,   369,   599,   366,   647,   414,   626,   149,
     120,   699,   700,   414,   148,   148,   841,   806,   576,   148,
     610,   414,   844,   320,   414,   148,   405,   280,   335,   611,
     618,   305,   911,   644,   342,  -485,   339,   964,   407,   173,
     219,   373,   120,   809,   631,   401,   849,   591,   598,   331,
     120,   395,   237,  1010,   120,   169,    38,   604,   174,   608,
     948,   952,   404,  1014,   456,  1005,   307,    82,   675,   149,
     149,    85,    82,    38,   149,   161,    85,   210,  -395,   219,
     149,   237,   237,   383,   383,   306,   219,   227,   389,   167,
     408,   168,   219,   166,   400,   179,   146,   220,   190,   697,
    1000,   702,   187,   699,   700,   188,   190,  -386,  -486,   222,
     223,   120,   219,    38,   120,   280,   123,   401,   180,    81,
     308,   191,   548,   413,   123,   825,   181,    81,   123,   191,
     164,    81,   196,    82,   826,   147,    32,    85,   566,     1,
       2,   198,   199,   208,   120,   571,    38,   396,   222,   223,
      82,   548,   548,   146,   648,   222,   223,   825,   215,   193,
     221,   222,   223,   160,   570,    68,   901,   904,   596,   219,
     209,   228,   819,   820,   238,   212,   905,   148,   904,   219,
     402,   222,   223,   216,   241,   123,   146,   943,    81,   615,
      82,   200,   147,   678,    85,   219,   703,   699,   700,   726,
     401,   997,   755,   756,   284,   285,   286,   213,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   633,   123,   564,
     565,    81,   120,    82,   838,   147,   214,    85,   240,   242,
     715,   217,   149,   218,   120,   366,    38,   390,   222,   223,
     231,    92,   630,    93,   746,   243,   602,   993,   222,   223,
     679,   680,   148,   296,   297,   245,   681,   277,   682,   244,
      91,   800,   801,   802,   222,   223,   276,   650,   803,   804,
     683,   811,   699,   700,   278,   649,   146,   803,   804,    35,
      36,   120,   158,   270,   271,   272,   652,   273,   658,   684,
    -260,   727,   279,   282,   283,   298,   650,   728,   302,   274,
     729,   730,   731,   732,   733,   734,   309,   149,   123,   280,
     210,    81,   227,    82,   274,  -260,   727,    85,  -485,    32,
    -485,   641,   728,   146,   322,   729,   730,   731,   732,   733,
     734,   319,   148,   323,   861,  -394,   685,   328,    70,    71,
      72,    73,    74,    75,   332,   347,   340,   918,   715,   824,
     686,   355,   359,   358,   829,   123,    79,    80,    81,   367,
     148,   368,   687,   120,   379,    38,   386,   707,   397,   387,
     412,   414,   403,   415,   409,   148,   689,   797,   798,   799,
     800,   801,   802,   193,   410,   678,   397,   149,   403,   397,
     403,   689,   556,   228,   357,   568,   803,   804,   228,   338,
     572,   653,   574,   577,   579,   146,   581,   193,   689,   593,
     587,   148,   589,  -261,   595,   149,   597,   605,   919,   148,
     120,   606,    38,   729,   730,   731,   732,   733,   734,   663,
     149,   616,   695,   619,   624,   628,   615,   123,  -260,   727,
      81,   634,    82,   638,   677,   728,    85,   639,   729,   730,
     731,   732,   733,   734,   640,   645,   651,   654,   656,   660,
     662,   715,   146,   829,   688,   631,   149,    92,   666,    93,
     672,   706,   717,   953,   149,   705,   708,   148,   725,   688,
     724,   689,   689,   689,   689,   689,    91,   740,   389,   689,
     842,   743,   759,   748,   123,   761,   688,    81,   805,    82,
     235,   147,   754,    85,   762,   764,   975,   774,   193,  -260,
     727,   228,   228,   777,  -386,   812,   728,   228,   813,   729,
     730,   731,   732,   733,   734,   760,   814,   817,   831,   193,
     615,   835,   149,   840,   846,   847,   856,   857,   193,   832,
     944,   396,   837,   893,   894,   917,   763,   898,   834,  1001,
     900,   913,   920,   935,   896,   899,   939,  1009,   962,   267,
     268,   269,   270,   271,   272,   922,   273,   148,   932,   688,
     688,   688,   688,   688,   940,   923,   689,   688,   274,   845,
     689,   689,   689,   689,   689,   689,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689,   689,   925,   928,   946,
     950,   969,   982,   967,   892,   848,   916,   984,   988,   -72,
     851,   990,   149,   991,   228,   992,   228,   995,  1003,  1002,
    1006,  1007,   999,  1012,   229,   203,   854,  -487,  -487,  -487,
    -487,   795,   796,   797,   798,   799,   800,   801,   802,   903,
     921,   823,   371,   710,   924,   600,   902,   689,   971,   689,
     384,   561,   803,   804,   688,   664,   959,   689,   688,   688,
     688,   688,   688,   688,   688,   688,   688,   688,   688,   688,
     688,   688,   688,   688,   688,   688,   688,   688,   688,   688,
     688,   688,   688,   688,   688,   933,   193,   693,   853,   891,
     750,   941,   816,   228,   942,   720,   934,   906,   120,   981,
      38,   175,  -487,  -487,  -487,  -487,   265,   266,   267,   268,
     269,   270,   271,   272,   954,   273,   723,   986,   327,   445,
     859,   927,   689,   858,   742,   560,     0,   274,   393,   961,
       0,     0,   689,   965,     0,   688,     0,   688,   689,     0,
     146,   979,   689,     0,     0,   688,     0,     0,     0,   983,
       0,     0,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,   956,
       0,   851,   123,     0,   193,    81,     0,    82,     0,   147,
       0,    85,   615,     0,     0,     0,     0,     0,     0,  1004,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1016,     0,     0,
     688,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     688,     0,     0,     0,     0,     0,   688,     0,   124,   125,
     688,   128,   129,   130,   131,   132,     0,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,     0,
       0,   153,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,     0,     0,     0,     0,     0,     0,   184,
     186,     0,     0,     0,   195,     0,   197,     0,     0,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,   119,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,     0,     0,     0,     0,
       0,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,   232,    31,    32,
      33,     0,     0,     0,     0,    35,    36,   120,     0,    38,
       0,     0,     0,     0,     0,    40,   786,     0,   787,   788,
     789,   790,   791,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   121,     0,     0,     0,     0,     0,
     232,     0,     0,     0,     0,   336,     0,   803,   804,   122,
     176,   346,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,   123,    79,    80,    81,   385,    82,     0,    84,   153,
      85,    86,    87,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   411,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   417,   418,   419,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,     0,   446,     0,     0,   336,   336,
     336,   455,     0,   690,   336,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,     0,   690,   336,
     544,   336,     0,     0,     0,     0,   550,   336,   552,   336,
     554,     0,   555,     0,     0,   690,   246,   247,   248,     0,
       0,     0,   559,     0,   153,     0,     0,     0,     0,     0,
     562,   336,     0,     0,     0,     0,     0,     0,   249,   569,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,     0,     0,     0,     0,     0,
       0,   691,     0,   778,   779,   780,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   709,     0,   690,   690,
     690,   690,   690,     0,     0,   781,   690,     0,   782,   783,
     784,   785,   786,   722,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
       0,   636,     0,     0,     0,   865,     0,     0,     0,     0,
       0,     0,     0,   803,   804,     0,     0,     0,     0,     0,
       0,     0,     0,   679,   680,     0,     0,     0,     0,   681,
       0,   682,   642,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   683,     0,     0,     0,     0,   646,     0,
     612,     0,    35,    36,   120,     0,   766,   767,   768,   769,
       0,     0,   684,   690,   776,     0,     0,   690,   690,   690,
     690,   690,   690,   690,   690,   690,   690,   690,   690,   690,
     690,   690,   690,   690,   690,   690,   690,   690,   690,   690,
     690,   690,   690,   690,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   860,     0,   685,
       0,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,     0,     0,   686,     0,     0,     0,   657,   123,    79,
      80,    81,     0,     0,     0,   687,     0,     0,     0,     0,
       0,     0,     0,     0,   690,     0,   690,     0,     0,     0,
       0,     0,     0,   176,   690,   862,   863,   864,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   886,   887,
     888,   889,   719,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   744,   273,     0,
       0,     0,   336,     0,     0,     0,     0,     0,   749,   690,
     274,   246,   247,   248,   455,     0,     0,     0,   752,   690,
       0,     0,   926,     0,     0,   690,     0,     0,     0,   690,
       0,     0,   929,   249,   808,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     807,   274,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
       0,    14,    15,     0,     0,     0,     0,   960,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   966,     0,     0,
       0,     0,     0,   970,     0,     0,     0,   980,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,    18,   176,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,     0,    38,
       0,    39,     0,   809,     0,    40,    41,    42,    43,     0,
      44,     0,    45,     0,    46,     0,     0,    47,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,    56,     0,    57,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,     0,     0,
       0,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,    76,     0,    77,     0,     0,     0,
       0,    78,    79,    80,    81,     0,    82,    83,    84,   248,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,    14,    15,     0,     0,   249,
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
      72,    73,    74,    75,     0,     0,     0,     0,   118,     0,
      77,     0,     0,     0,     0,    78,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,   629,     0,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      18,   274,    19,    20,    21,    22,    23,    24,    25,    26,
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
      12,    13,     0,    14,    15,   745,   782,   783,   784,   785,
     786,     0,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,   803,   804,     0,    18,     0,    19,    20,    21,    22,
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
       0,     0,     0,     0,    12,    13,     0,    14,    15,   312,
     783,   784,   785,   786,     0,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,   803,   804,     0,     0,    18,     0,
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
       0,    14,    15,   592,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,   274,     0,
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
       0,     0,    12,    13,   781,    14,    15,   782,   783,   784,
     785,   786,     0,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,   803,   804,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,   673,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,    51,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,   313,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,     0,     0,   784,   785,   786,     0,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,   803,   804,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,     0,
      45,     0,    46,   890,     0,    47,     0,     0,     0,    48,
      49,    50,    51,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,    58,    59,    60,     0,    61,
      62,    63,   313,    65,    66,    67,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   123,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,     0,     0,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
     274,     0,     0,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,     0,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,     0,    44,     0,    45,   958,    46,     0,     0,    47,
       0,     0,     0,    48,    49,    50,    51,     0,    53,    54,
       0,     0,    55,     0,     0,    57,     0,     0,     0,    58,
      59,    60,     0,    61,    62,    63,   313,    65,    66,    67,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,    15,   968,
       0,     0,   785,   786,     0,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,   803,   804,     0,     0,    18,     0,
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
       0,    14,    15,   985,     0,     0,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,   274,     0,
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
       0,     0,    12,    13,     0,    14,    15,   987,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,    51,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,   313,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   274,     0,     0,    16,    17,     0,     0,     0,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,     0,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,     0,    38,     0,    39,
       0,     0,     0,    40,    41,    42,    43,     0,    44,   994,
      45,     0,    46,     0,     0,    47,     0,     0,     0,    48,
      49,    50,    51,     0,    53,    54,     0,     0,    55,     0,
       0,    57,     0,     0,     0,    58,    59,    60,     0,    61,
      62,    63,   313,    65,    66,    67,     0,     0,     0,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,   123,
      79,    80,    81,     0,    82,    83,    84,     0,    85,    86,
      87,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,    14,    15,   996,  -487,  -487,  -487,  -487,
    -487,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   274,     0,    16,    17,
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
       0,     0,     0,     0,    12,    13,     0,    14,    15,  1011,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   803,
     804,     0,    16,    17,     0,     0,     0,     0,    18,     0,
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
       0,    14,    15,  1017,  -487,  -487,  -487,  -487,   791,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   803,   804,     0,    16,    17,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,     0,    38,     0,    39,     0,     0,     0,    40,
      41,    42,    43,     0,    44,     0,    45,     0,    46,     0,
       0,    47,     0,     0,     0,    48,    49,    50,    51,     0,
      53,    54,     0,     0,    55,     0,     0,    57,     0,     0,
       0,    58,    59,    60,     0,    61,    62,    63,   313,    65,
      66,    67,     0,     0,     0,    68,    69,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   123,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,     7,     8,     9,
      10,    11,     0,     0,     0,     0,    12,    13,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   334,     0,     0,     0,
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
     341,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   694,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   850,     0,
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
       0,     0,   955,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      12,    13,     0,    14,     0,     0,     0,     0,     0,     0,
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
      84,   452,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,   119,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     450,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      81,   451,    82,     0,    84,     0,    85,    86,    87,     7,
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
       0,   123,    79,    80,    81,     0,    82,   183,    84,     0,
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
      82,   185,    84,     0,    85,    86,    87,     7,     8,     9,
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
      79,    80,    81,     0,    82,   194,    84,     0,    85,    86,
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
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    62,    63,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,   123,    79,    80,    81,     0,    82,     0,
      84,   333,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,   119,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,    35,    36,   120,   398,    38,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   420,     0,
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
       0,   123,    79,    80,    81,     0,    82,     0,    84,     0,
      85,    86,    87,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,   119,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   530,     0,
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
       0,     0,   558,     0,     0,     0,     0,     0,     0,     0,
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
      12,   119,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   123,    79,    80,    81,     0,    82,     0,
      84,     0,    85,    86,    87,     7,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,     0,    31,    32,    33,     0,     0,     0,
       0,    35,    36,   120,     0,    38,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   457,   458,   459,   460,   461,     0,   462,   463,   464,
     465,   466,     0,     0,   467,   122,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,   123,    79,    80,
      81,     0,    82,     0,    84,   468,    85,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     469,   470,   471,   472,   473,   474,   475,     0,     0,   476,
       0,   477,     0,     0,     0,     0,     0,     0,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,     0,   516,   517,   518,
     519,   520,     0,   521,   522,   523,   457,   458,   459,   460,
     461,   780,   462,   463,   464,   465,   466,     0,     0,     0,
       0,     0,     0,   524,     0,     0,     0,     0,     0,     0,
       0,   781,   525,     0,   782,   783,   784,   785,   786,     0,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,     0,     0,     0,     0,
     468,     0,     0,     0,     0,     0,     0,     0,     0,   803,
     804,     0,     0,     0,     0,   469,   470,   471,   472,   473,
     474,   475,     0,     0,   476,     0,     0,     0,     0,     0,
       0,     0,     0,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,     0,   516,   517,   518,   519,   520,     0,   521,   522,
     523,   457,   458,   459,   460,   461,     0,   462,   463,   464,
     465,   466,     0,     0,     0,   972,     0,     0,   524,     0,
       0,     0,     0,     0,  1008,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   468,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     469,   470,   471,   472,   473,   474,   475,     0,     0,   973,
       0,     0,     0,     0,     0,     0,     0,     0,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,     0,   516,   517,   518,
     519,   520,     0,   521,   522,   523,   457,   458,   459,   460,
     461,     0,   462,   463,   464,   465,   466,     0,     0,     0,
       0,     0,     0,   974,     0,     0,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     468,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,   470,   471,   472,   473,
     474,   475,     0,     0,   476,     0,     0,     0,     0,     0,
       0,     0,     0,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,     0,   516,   517,   518,   519,   520,     0,   521,   522,
     523,   457,   458,   459,   460,   461,     0,   462,   463,   464,
     465,   466,     0,     0,     0,     0,     0,     0,   524,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   468,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     469,   470,   471,   472,   473,   474,   475,     0,     0,   998,
       0,     0,     0,     0,     0,     0,     0,     0,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   729,   730,   731,   732,
     733,   734,   512,   513,   514,   515,     0,   516,   517,   518,
     519,   520,     0,   521,   522,   523,   246,   247,   248,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   524,     0,     0,     0,     0,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   246,   247,   248,     0,     0,
       0,     0,     0,     0,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,   246,   247,   248,     0,     0,     0,
       0,     0,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,   246,   247,   248,     0,     0,   275,     0,
       0,     0,     0,     0,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,   246,   247,   248,     0,     0,   353,     0,     0,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,   246,   247,   248,     0,     0,   354,     0,     0,     0,
       0,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
       0,     0,     0,     0,     0,   362,     0,     0,     0,     0,
       0,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,     0,     0,     0,     0,     0,     0,
       0,     0,   573,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,   364,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
     778,   779,   780,     0,     0,     0,     0,     0,     0,     0,
       0,   274,     0,   839,     0,     0,     0,     0,     0,     0,
       0,     0,   781,     0,     0,   782,   783,   784,   785,   786,
       0,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   778,   779,   780,
       0,     0,   855,     0,     0,     0,     0,     0,     0,     0,
     803,   804,   931,     0,     0,     0,     0,     0,     0,   781,
       0,     0,   782,   783,   784,   785,   786,     0,   787,   788,
     789,   790,   791,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   778,   779,   780,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   803,   804,     0,
       0,     0,     0,     0,     0,     0,   781,   930,     0,   782,
     783,   784,   785,   786,     0,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   778,   779,   780,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   803,   804,     0,     0,     0,     0,
       0,     0,     0,   781,     0,     0,   782,   783,   784,   785,
     786,     0,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   246,   247,
     248,     0,     0,   311,     0,     0,     0,     0,     0,     0,
       0,   803,   804,     0,     0,     0,     0,     0,     0,     0,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,   273,   246,   247,   248,
       0,     0,   321,     0,     0,     0,     0,     0,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,   246,   247,   248,     0,
       0,     0,     0,     0,   627,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   246,   247,   248,     0,     0,
       0,     0,     0,   632,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,   246,   247,   248,     0,     0,     0,
       0,     0,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,   637,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,   246,   247,   248,     0,     0,     0,     0,
       0,   655,     0,     0,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,   246,   247,   248,     0,     0,     0,     0,     0,
     659,     0,     0,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,   246,   247,   248,     0,     0,     0,     0,     0,   661,
       0,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
     246,   247,   248,     0,     0,     0,     0,     0,   665,     0,
       0,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,   246,
     247,   248,     0,     0,     0,     0,     0,   751,     0,     0,
     274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,   246,   247,
     248,     0,     0,     0,     0,     0,   753,     0,     0,   274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,   273,   246,   247,   248,
       0,     0,     0,     0,     0,   830,     0,     0,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,   246,   247,   248,     0,
       0,     0,     0,     0,   843,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   246,   247,   248,     0,     0,
       0,     0,     0,     0,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,   779,   780,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   781,     0,     0,   782,   783,
     784,   785,   786,     0,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
     247,   248,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   803,   804,     0,     0,     0,     0,     0,
       0,   249,     0,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274
};

static const short int yycheck[] =
{
      28,    29,    51,     9,    32,    85,   200,   217,     2,   282,
      84,     4,     5,     4,     5,   634,   581,   738,    32,   110,
      32,   112,    32,   114,    52,    56,   572,    33,    34,    57,
       4,     5,    60,    10,    52,    10,   815,    43,    84,    57,
     605,    47,    60,   351,    10,    10,   319,    78,    10,    10,
      81,    18,    10,    10,   616,    28,    29,    18,    10,    32,
     277,   278,   279,    18,    10,    10,   283,   158,    42,    28,
      29,   162,   121,   147,    10,    85,    10,    10,    10,    83,
     126,   298,    10,   300,    34,    16,    83,    85,    18,   306,
      85,   308,    32,    18,    83,    19,    83,    83,    18,    59,
      90,    18,    78,    79,    18,    72,    11,    12,    13,   728,
      18,    71,    18,   330,    83,    18,    85,    86,    18,     0,
      34,   110,   111,   169,   152,    19,    18,   906,    33,    18,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   157,    59,    72,   160,    72,    83,    18,
      85,   210,   164,   153,    72,    85,    71,   164,   166,   200,
     196,   166,   203,   160,   160,   369,    18,    83,    72,   152,
      83,   105,   106,    83,   212,   213,   748,    19,   165,   217,
     165,    83,   754,   152,    83,   223,   227,   164,   172,   165,
     165,    18,   163,   165,   178,   136,   163,   165,   163,    34,
      85,   163,    83,   163,    72,    90,   762,   163,   163,   136,
      83,   136,   302,  1002,    83,   164,    85,   163,    72,   163,
     163,   163,   226,   163,   280,   163,    18,   162,    40,   212,
     213,   166,   162,    85,   217,   273,   166,   110,   156,    85,
     223,   331,   332,   212,   213,    72,    85,   160,   217,   273,
     165,   273,    85,   273,   223,   164,   125,    90,   139,   577,
     991,   579,    83,   105,   106,    40,   139,   156,   136,   154,
     155,    83,    85,    85,    83,   164,   157,    90,   164,   160,
      72,   162,   302,   168,   157,    10,   164,   160,   157,   162,
     273,   160,    18,   162,    19,   164,    75,   166,   334,   148,
     149,   110,   111,   131,    83,   341,    85,   153,   154,   155,
     162,   331,   332,   125,   166,   154,   155,    10,    83,   357,
     153,   154,   155,   273,   340,   137,    19,    10,   369,    85,
     131,   372,   114,   115,    90,   164,    19,   375,    10,    85,
     153,   154,   155,    83,    90,   157,   125,    19,   160,   387,
     162,   160,   164,   573,   166,    85,   104,   105,   106,    19,
      90,   990,    78,    79,    20,    21,    22,   164,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   415,   157,   331,
     332,   160,    83,   162,    19,   164,   164,   166,    86,    87,
     594,   164,   375,   164,    83,   599,    85,   617,   154,   155,
      85,   404,   406,   404,   631,   160,   375,   982,   154,   155,
      52,    53,   450,    69,    70,    83,    58,    72,    60,   163,
     404,    55,    56,    57,   154,   155,   163,   528,    71,    72,
      72,   104,   105,   106,    72,   525,   125,    71,    72,    81,
      82,    83,   131,    55,    56,    57,   530,    59,   549,    91,
     110,   111,    72,   156,    72,    72,   557,   117,   136,    71,
     120,   121,   122,   123,   124,   125,    20,   450,   157,   164,
     110,   160,   160,   162,    71,   110,   111,   166,   136,    75,
     136,   450,   117,   125,    73,   120,   121,   122,   123,   124,
     125,   156,   530,    10,   777,   156,   138,   156,   140,   141,
     142,   143,   144,   145,   136,    83,    94,    19,   712,   713,
     152,   163,    83,    72,   718,   157,   158,   159,   160,   160,
     558,   102,   164,    83,    85,    85,    18,   586,   220,   134,
     167,    83,   224,   134,   165,   573,   574,    52,    53,    54,
      55,    56,    57,   581,   165,   765,   238,   530,   240,   241,
     242,   589,   165,   594,   164,    73,    71,    72,   599,    10,
     163,   530,    20,   163,   163,   125,   164,   605,   606,   160,
      81,   609,    20,   110,    83,   558,   160,   164,    19,   617,
      83,    20,    85,   120,   121,   122,   123,   124,   125,   558,
     573,    18,   576,   165,    83,    19,   634,   157,   110,   111,
     160,   135,   162,    73,   573,   117,   166,    73,   120,   121,
     122,   123,   124,   125,    73,   165,    73,    73,    73,    73,
      73,   825,   125,   827,   574,    72,   609,   630,    73,   630,
     163,    10,   160,   916,   617,   165,    73,   675,   163,   589,
     609,   679,   680,   681,   682,   683,   630,    10,   617,   687,
     751,    73,   668,    18,   157,   163,   606,   160,   694,   162,
      18,   164,    18,   166,   163,   165,   949,   164,   706,   110,
     111,   712,   713,   156,   156,   163,   117,   718,   165,   120,
     121,   122,   123,   124,   125,   669,   117,   161,   165,   727,
     728,   110,   675,    73,    34,    80,    73,    10,   736,   727,
     904,   153,   740,   163,    34,    19,   675,    85,   736,   992,
      18,    85,    34,    18,   164,   164,    18,  1000,    85,    52,
      53,    54,    55,    56,    57,   163,    59,   765,   163,   679,
     680,   681,   682,   683,    20,   165,   774,   687,    71,   755,
     778,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   165,   165,    20,
      20,    18,   164,    85,   810,   759,   835,   163,   165,   102,
     764,   118,   765,   102,   825,   156,   827,    18,   163,   165,
     163,   163,   991,   163,    78,    56,   765,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   827,
     846,   712,   203,   590,   850,   372,   825,   855,   947,   857,
     213,   326,    71,    72,   774,   561,   925,   865,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   891,   894,   575,   765,   807,
     643,   899,   706,   904,   900,   603,   894,   831,    83,   951,
      85,    41,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   920,    59,   607,   963,   162,   273,
     774,   857,   930,   772,   617,   323,    -1,    71,   218,   935,
      -1,    -1,   940,   939,    -1,   855,    -1,   857,   946,    -1,
     125,   949,   950,    -1,    -1,   865,    -1,    -1,    -1,   955,
      -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   969,    -1,    -1,    -1,    -1,    -1,   923,
      -1,   925,   157,    -1,   982,   160,    -1,   162,    -1,   164,
      -1,   166,   990,    -1,    -1,    -1,    -1,    -1,    -1,   995,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1013,    -1,    -1,
     930,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     940,    -1,    -1,    -1,    -1,    -1,   946,    -1,     7,     8,
     950,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,   126,    74,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   110,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,   174,    -1,    71,    72,   125,
     179,   180,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,   214,   162,    -1,   164,   218,
     166,   167,   168,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,   274,    -1,    -1,   277,   278,
     279,   280,    -1,   574,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,    -1,   589,   298,
     299,   300,    -1,    -1,    -1,    -1,   305,   306,   307,   308,
     309,    -1,   311,    -1,    -1,   606,    11,    12,    13,    -1,
      -1,    -1,   321,    -1,   323,    -1,    -1,    -1,    -1,    -1,
     329,   330,    -1,    -1,    -1,    -1,    -1,    -1,    33,   338,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,   574,    -1,    11,    12,    13,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   589,    -1,   679,   680,
     681,   682,   683,    -1,    -1,    33,   687,    -1,    36,    37,
      38,    39,    40,   606,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,   420,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    58,
      -1,    60,   451,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,   467,    -1,
     165,    -1,    81,    82,    83,    -1,   679,   680,   681,   682,
      -1,    -1,    91,   774,   687,    -1,    -1,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   138,
      -1,   140,   141,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,    -1,    -1,   546,   157,   158,
     159,   160,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   855,    -1,   857,    -1,    -1,    -1,
      -1,    -1,    -1,   572,   865,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
     803,   804,   601,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,   626,    59,    -1,
      -1,    -1,   631,    -1,    -1,    -1,    -1,    -1,   637,   930,
      71,    11,    12,    13,   643,    -1,    -1,    -1,   647,   940,
      -1,    -1,   855,    -1,    -1,   946,    -1,    -1,    -1,   950,
      -1,    -1,   865,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     699,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    -1,    -1,    -1,    -1,   930,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   940,    -1,    -1,
      -1,    -1,    -1,   946,    -1,    -1,    -1,   950,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    58,   762,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    -1,   163,    -1,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
     116,   117,    -1,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,   152,    -1,    -1,    -1,
      -1,   157,   158,   159,   160,    -1,   162,   163,   164,    13,
     166,   167,   168,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    -1,    -1,    33,
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
      18,    19,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      58,    71,    60,    61,    62,    63,    64,    65,    66,    67,
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
      -1,    -1,    14,    15,    33,    17,    18,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    71,    72,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,
      -1,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,   166,   167,   168,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      18,    -1,    -1,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    71,    72,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,   101,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,    -1,    -1,   123,   124,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
     158,   159,   160,    -1,   162,   163,   164,    -1,   166,   167,
     168,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    18,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      71,    -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    96,    -1,    98,    99,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    18,    19,
      -1,    -1,    39,    40,    -1,    42,    43,    44,    45,    46,
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
      -1,    17,    18,    19,    -1,    -1,    39,    40,    41,    42,
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
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    96,    97,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
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
      -1,    17,    18,    19,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    52,    53,    -1,    -1,
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
      -1,    -1,    -1,   157,   158,   159,   160,    -1,   162,    -1,
     164,   165,   166,   167,   168,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
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
     110,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    -1,    -1,    18,   125,    -1,    -1,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
     160,    -1,   162,    -1,   164,    59,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,     5,     6,     7,     8,
       9,    13,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,   166,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,   157,    -1,
      -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    11,    12,    13,    -1,    -1,   163,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    11,    12,    13,    -1,    -1,   163,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    11,    12,    13,    -1,    -1,   163,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,   163,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    11,    12,    13,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    11,    12,
      13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    11,    12,    13,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    71,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
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
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
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
     179,   192,   199,   200,   201,   253,   254,   255,   256,   257,
     259,   263,   264,   265,   268,   273,   276,   277,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   293,   150,    15,
      83,   110,   125,   157,   253,   253,   164,   254,   253,   253,
     253,   253,   253,   190,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   125,   164,   265,   268,
     282,   282,    40,   253,   296,   297,   298,   253,   131,   258,
     264,   265,   266,   267,   268,   269,   286,   287,   288,   164,
     254,   270,   254,    34,    72,   251,   253,   192,   254,   164,
     164,   164,   254,   163,   253,   163,   253,    83,    40,   197,
     139,   162,   226,   265,   163,   253,    18,   253,   110,   111,
     160,   175,   176,   178,   181,   183,   184,   226,   131,   131,
     110,   226,   164,   164,   164,    83,    83,   164,   164,    85,
      90,   153,   154,   155,   299,   300,    18,   160,   175,   176,
     175,    85,   253,   255,   259,    18,   286,   290,    90,   271,
     299,    90,   299,   160,   163,    83,    11,    12,    13,    33,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    59,    71,   163,   163,    72,    72,    72,
     164,   230,   156,    72,    20,    21,    22,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    69,    70,    72,    18,
      72,   230,   136,   230,   230,    18,    72,    18,    72,    20,
     197,    16,    19,   130,   191,   192,   199,   200,   259,   156,
     282,    16,    73,    10,   279,   230,   272,   272,   156,    18,
      72,   136,   136,   165,    34,   192,   253,   291,    10,   163,
      94,    34,   192,   215,   251,   252,   253,    83,   209,   210,
      18,    34,   211,   163,   163,   163,    83,   164,    72,    83,
     186,   187,   163,   190,   163,   175,   183,   160,   102,   160,
     175,   181,    10,   163,    85,   166,   233,   234,   197,    85,
     235,   236,   196,   282,   196,   253,    18,   134,   203,   282,
     293,   294,   295,   296,    72,   136,   153,   300,    84,   253,
     282,    90,   153,   300,   171,   175,    18,   163,   165,   165,
     165,   253,   167,   168,    83,   134,   202,   253,   253,   253,
      34,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   266,   253,   291,   291,   291,
      40,   161,   165,   231,   232,   253,   255,     5,     6,     7,
       8,     9,    11,    12,    13,    14,    15,    18,    59,    74,
      75,    76,    77,    78,    79,    80,    83,    85,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   131,   132,   133,   134,
     135,   137,   138,   139,   157,   166,   172,   173,   174,   291,
      40,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   291,   253,   291,    18,    83,   286,   292,
     253,   291,   253,   291,   253,   253,   165,   174,    40,   253,
     298,   202,   253,   291,   292,   292,   190,   216,    73,   253,
     254,   190,   163,   102,    20,    10,   165,   163,   212,   163,
     212,   164,   223,   224,   225,   226,   228,    81,   227,    20,
      10,   163,    19,   160,    18,    83,   175,   160,   163,   160,
     184,    18,   282,    10,   163,   164,    20,    10,   163,    10,
     165,   165,   165,   237,   205,   265,    18,    10,   165,   165,
      83,    85,    86,   301,    83,    19,    72,    19,    19,    19,
     171,    72,    19,   265,   135,   204,   253,    34,    73,    73,
      73,   282,   253,    10,   165,   165,   253,    18,   166,   290,
     230,    73,   259,   282,    73,    19,    73,   253,   230,    19,
      73,    19,    73,   282,   204,    19,    73,   218,    78,    79,
     217,   220,   163,    95,   252,    40,   222,   282,   293,    52,
      53,    58,    60,    72,    91,   138,   152,   164,   264,   265,
     273,   274,   275,   210,    34,   192,   208,   212,    19,   105,
     106,   213,   212,   104,   223,   165,    10,   197,    73,   274,
     187,   193,    18,   178,   182,   183,   185,   160,    18,   253,
     234,   223,   274,   236,   282,   163,    19,   111,   117,   120,
     121,   122,   123,   124,   125,   238,   245,   246,   247,   248,
      10,   237,   295,    73,   253,    19,   291,   205,    18,   253,
     232,    19,   253,    19,    18,    78,    79,   219,   221,   254,
     192,   163,   163,   282,   165,    16,   274,   274,   274,   274,
     274,   278,   280,   281,   164,    90,   274,   156,    11,    12,
      13,    33,    36,    37,    38,    39,    40,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    71,    72,   190,    19,   253,    34,   163,
     214,   104,   163,   165,   117,   260,   225,   161,   198,   114,
     115,   194,   195,   182,   183,    10,    19,    18,   180,   183,
      19,   165,   226,   205,   226,   110,   248,   265,    19,    73,
      73,   237,   230,    19,   237,   254,    34,    80,   192,   252,
      34,   192,   207,   222,   282,    16,    73,    10,   279,   278,
     165,   174,   274,   274,   274,    34,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     101,   214,   190,   163,    34,   229,   164,   229,    85,   164,
      18,    19,   185,   180,    10,    19,   260,   174,   188,   189,
      18,   163,   239,    85,   249,   250,   197,    19,    19,    19,
      34,   190,   163,   165,   190,   165,   274,   281,   165,   274,
      34,    73,   163,   190,   226,    18,   197,   261,   262,    18,
      20,   265,   190,    19,   183,   229,    20,    10,   163,   240,
      20,    10,   163,   174,   190,    34,   192,   206,    99,   207,
     274,   190,    85,    10,   165,   190,   274,    85,    19,    18,
     274,   189,    19,    83,   157,   174,   241,   242,   243,   265,
     274,   250,   164,   190,   163,    19,   262,    19,   165,   190,
     118,   102,   156,   223,    97,    18,    19,   205,    83,   172,
     248,   174,   165,   163,   190,   163,   163,   163,   163,   174,
     229,    19,   163,    18,   163,   244,   190,    19
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
#line 158 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"start1";;}
    break;

  case 3:
#line 160 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"start2";;}
    break;

  case 4:
#line 165 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement_list1\n";;}
    break;

  case 5:
#line 167 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement_list2\n";;}
    break;

  case 72:
#line 186 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"identifier1\n";;}
    break;

  case 73:
#line 188 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"identifier2\n";;}
    break;

  case 74:
#line 193 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"namespace_name_parts1\n";;}
    break;

  case 75:
#line 195 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"namespace_name_parts2\n";;}
    break;

  case 76:
#line 200 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {	cout<<"namespace_name\n";;}
    break;

  case 77:
#line 205 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement1\n";;}
    break;

  case 78:
#line 207 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement2\n";;}
    break;

  case 79:
#line 209 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement3\n";;}
    break;

  case 80:
#line 211 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement4\n";;}
    break;

  case 81:
#line 213 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement5\n";;}
    break;

  case 82:
#line 215 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement6\n";;}
    break;

  case 83:
#line 217 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement7\n";;}
    break;

  case 84:
#line 219 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement8\n";;}
    break;

  case 85:
#line 221 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement9\n";;}
    break;

  case 86:
#line 223 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement10\n";;}
    break;

  case 87:
#line 225 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"top_statement11\n";;}
    break;

  case 88:
#line 230 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"use_type1\n";;}
    break;

  case 89:
#line 232 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"use_type2\n";;}
    break;

  case 90:
#line 238 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"group_use_declaration1\n";;}
    break;

  case 91:
#line 240 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"group_use_declaration2\n";;}
    break;

  case 92:
#line 242 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"group_use_declaration3\n";;}
    break;

  case 93:
#line 244 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"group_use_declaration4\n";;}
    break;

  case 94:
#line 249 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"unprefixed_use_declarations1\n";;}
    break;

  case 95:
#line 251 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"unprefixed_use_declarations2\n";;}
    break;

  case 96:
#line 256 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"use_declarations1\n";;}
    break;

  case 97:
#line 258 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"use_declarations2\n";;}
    break;

  case 98:
#line 263 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inline_use_declarations1\n";;}
    break;

  case 99:
#line 265 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inline_use_declarations2\n";;}
    break;

  case 100:
#line 270 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"unprefixed_use_declaration1\n";;}
    break;

  case 101:
#line 272 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"unprefixed_use_declaration2\n";;}
    break;

  case 102:
#line 277 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"use_declaration1\n";;}
    break;

  case 103:
#line 279 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"use_declaration2\n";;}
    break;

  case 104:
#line 284 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inline_use_declaration1\n";;}
    break;

  case 105:
#line 286 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inline_use_declaration2\n";;}
    break;

  case 106:
#line 291 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"constant_declaration_list1\n";;}
    break;

  case 107:
#line 293 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"constant_declaration_list2\n";;}
    break;

  case 108:
#line 298 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"constant_declaration\n";;}
    break;

  case 109:
#line 303 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_const_list1\n";;}
    break;

  case 110:
#line 305 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_const_list2\n";;}
    break;

  case 111:
#line 310 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_const\n";;}
    break;

  case 112:
#line 315 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inner_statement_list1\n";;}
    break;

  case 113:
#line 317 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inner_statement_list2\n";;}
    break;

  case 114:
#line 322 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inner_statement1\n";;}
    break;

  case 115:
#line 324 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inner_statement2\n";;}
    break;

  case 116:
#line 326 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inner_statement3\n";;}
    break;

  case 117:
#line 328 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"inner_statement4\n";;}
    break;

  case 118:
#line 333 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement1\n";;}
    break;

  case 119:
#line 335 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement2\n";;}
    break;

  case 120:
#line 337 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement3\n";;}
    break;

  case 121:
#line 339 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement4\n";;}
    break;

  case 122:
#line 341 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement5\n";;}
    break;

  case 123:
#line 343 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement6\n";;}
    break;

  case 124:
#line 345 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement7\n";;}
    break;

  case 125:
#line 347 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement8\n";;}
    break;

  case 126:
#line 349 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement9\n";;}
    break;

  case 127:
#line 351 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement10\n";;}
    break;

  case 128:
#line 353 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement11\n";;}
    break;

  case 129:
#line 355 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement12\n";;}
    break;

  case 130:
#line 357 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement13\n";;}
    break;

  case 131:
#line 359 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement14\n";;}
    break;

  case 132:
#line 361 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement15\n";;}
    break;

  case 133:
#line 363 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement16\n";;}
    break;

  case 134:
#line 365 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement17\n";;}
    break;

  case 135:
#line 367 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement18\n";;}
    break;

  case 136:
#line 369 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement19\n";;}
    break;

  case 137:
#line 371 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement20\n";;}
    break;

  case 138:
#line 373 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement21\n";;}
    break;

  case 139:
#line 375 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement22\n";;}
    break;

  case 140:
#line 377 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement23\n";;}
    break;

  case 141:
#line 379 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement24\n";;}
    break;

  case 142:
#line 381 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement25\n";;}
    break;

  case 143:
#line 383 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement26\n";;}
    break;

  case 144:
#line 385 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement27\n";;}
    break;

  case 145:
#line 387 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"statement28\n";;}
    break;

  case 146:
#line 392 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"catches1\n";;}
    break;

  case 147:
#line 394 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"catches2\n";;}
    break;

  case 148:
#line 399 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"catch\n";;}
    break;

  case 149:
#line 404 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_finally1\n";;}
    break;

  case 150:
#line 406 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_finally2\n";;}
    break;

  case 151:
#line 411 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variables_list1\n";;}
    break;

  case 152:
#line 413 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variables_list2\n";;}
    break;

  case 153:
#line 418 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_ref1\n";;}
    break;

  case 154:
#line 420 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_ref2\n";;}
    break;

  case 155:
#line 425 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_ellipsis1\n";;}
    break;

  case 156:
#line 427 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_ellipsis2\n";;}
    break;

  case 157:
#line 432 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"function_declaration_statement "<<(yyvsp[-9].r.str)<<" "<<(yyvsp[-7].r.str)<<"\n";;}
    break;

  case 158:
#line 437 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement1\n";;}
    break;

  case 159:
#line 439 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement2\n";;}
    break;

  case 160:
#line 441 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_declaration_statement3\n";;}
    break;

  case 161:
#line 446 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_entry_type1\n";;}
    break;

  case 162:
#line 448 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_entry_type2\n";;}
    break;

  case 163:
#line 450 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_entry_type3\n";;}
    break;

  case 164:
#line 455 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"extends_from1\n";;}
    break;

  case 165:
#line 457 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"extends_from2\n";;}
    break;

  case 166:
#line 462 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"interface_extends_list1\n";;}
    break;

  case 167:
#line 464 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"interface_extends_list2\n";;}
    break;

  case 168:
#line 469 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"implements_list1\n";;}
    break;

  case 169:
#line 471 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"implements_list2\n";;}
    break;

  case 170:
#line 476 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"name_list1\n";;}
    break;

  case 171:
#line 478 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"name_list2\n";;}
    break;

  case 172:
#line 483 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"for_statement1\n";;}
    break;

  case 173:
#line 485 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"for_statement2\n";;}
    break;

  case 174:
#line 490 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"foreach_statement1\n";;}
    break;

  case 175:
#line 492 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"foreach_statement2\n";;}
    break;

  case 176:
#line 497 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"declare_statement1\n";;}
    break;

  case 177:
#line 499 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"declare_statement2\n";;}
    break;

  case 178:
#line 504 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"declare_list1\n";;}
    break;

  case 179:
#line 506 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"declare_list2\n";;}
    break;

  case 180:
#line 511 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"declare_list_element\n";;}
    break;

  case 181:
#line 516 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"switch_case_list1\n";;}
    break;

  case 182:
#line 518 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"switch_case_list2\n";;}
    break;

  case 183:
#line 520 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"switch_case_list3\n";;}
    break;

  case 184:
#line 522 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"switch_case_list4\n";;}
    break;

  case 185:
#line 527 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"case_list1\n";;}
    break;

  case 186:
#line 529 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"case_list2\n";;}
    break;

  case 187:
#line 534 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"case1\n";;}
    break;

  case 188:
#line 536 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"case2\n";;}
    break;

  case 189:
#line 541 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"case_separator1\n";;}
    break;

  case 190:
#line 543 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"case_separator2\n";;}
    break;

  case 191:
#line 548 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"while_statement1\n";;}
    break;

  case 192:
#line 550 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"while_statement2\n";;}
    break;

  case 193:
#line 555 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"elseif_list1\n";;}
    break;

  case 194:
#line 557 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"elseif_list2\n";;}
    break;

  case 195:
#line 562 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"elseif1\n";;}
    break;

  case 196:
#line 567 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_elseif_list1\n";;}
    break;

  case 197:
#line 569 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_elseif_list2\n";;}
    break;

  case 198:
#line 574 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_elseif\n";;}
    break;

  case 199:
#line 579 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"else_single1\n";;}
    break;

  case 200:
#line 581 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"else_single2\n";;}
    break;

  case 201:
#line 586 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_else_single1\n";;}
    break;

  case 202:
#line 588 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_else_single2\n";;}
    break;

  case 203:
#line 593 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"foreach_variable1\n";;}
    break;

  case 204:
#line 595 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"foreach_variable2\n";;}
    break;

  case 205:
#line 597 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"foreach_variable3\n";;}
    break;

  case 206:
#line 602 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"parameter_list1\n";;}
    break;

  case 207:
#line 604 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"parameter_list2\n";;}
    break;

  case 208:
#line 609 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_parameter_list1\n";;}
    break;

  case 209:
#line 611 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_parameter_list2\n";;}
    break;

  case 210:
#line 616 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"parameter1\n";;}
    break;

  case 211:
#line 618 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"parameter2\n";;}
    break;

  case 212:
#line 624 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"type1\n";;}
    break;

  case 213:
#line 626 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"type2\n";;}
    break;

  case 214:
#line 628 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"type3\n";;}
    break;

  case 215:
#line 630 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"type4\n";;}
    break;

  case 216:
#line 635 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_capacity1\n";;}
    break;

  case 217:
#line 637 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_capacity2";;}
    break;

  case 218:
#line 641 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"param_type\n";;}
    break;

  case 219:
#line 646 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_return_type1\n";;}
    break;

  case 220:
#line 648 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_return_type2\n";;}
    break;

  case 221:
#line 653 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"argument_list1\n";;}
    break;

  case 222:
#line 655 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"argument_list2\n";;}
    break;

  case 223:
#line 657 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"argument_list3\n";;}
    break;

  case 224:
#line 662 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_argument_list1\n";;}
    break;

  case 225:
#line 664 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_argument_list2\n";;}
    break;

  case 226:
#line 669 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"argument1\n";;}
    break;

  case 227:
#line 671 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"argument2\n";;}
    break;

  case 228:
#line 673 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"argument3\n";;}
    break;

  case 229:
#line 678 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"global_var_list1\n";;}
    break;

  case 230:
#line 680 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"global_var_list2\n";;}
    break;

  case 231:
#line 685 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"global_var1\n";;}
    break;

  case 232:
#line 687 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"global_var2\n";;}
    break;

  case 233:
#line 689 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"global_var3\n";;}
    break;

  case 234:
#line 694 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_var_list1\n";;}
    break;

  case 235:
#line 696 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_var_list2\n";;}
    break;

  case 236:
#line 701 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_var1\n";;}
    break;

  case 237:
#line 703 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_var2\n";;}
    break;

  case 238:
#line 708 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_statement_list1\n";;}
    break;

  case 239:
#line 710 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_statement_list2\n";;}
    break;

  case 240:
#line 715 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_statement1\n";;}
    break;

  case 241:
#line 717 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_statement2\n";;}
    break;

  case 242:
#line 719 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_statement3\n";;}
    break;

  case 243:
#line 721 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_statement4\n";;}
    break;

  case 244:
#line 726 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptations1\n";;}
    break;

  case 245:
#line 728 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptations2\n";;}
    break;

  case 246:
#line 733 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptation_list1\n";;}
    break;

  case 247:
#line 735 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptation_list2\n";;}
    break;

  case 248:
#line 740 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptation1\n";;}
    break;

  case 249:
#line 742 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptation2\n";;}
    break;

  case 250:
#line 744 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptation3\n";;}
    break;

  case 251:
#line 746 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptation4\n";;}
    break;

  case 252:
#line 748 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_adaptation5\n";;}
    break;

  case 253:
#line 753 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_method_reference_fully_qualified\n";;}
    break;

  case 254:
#line 758 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_method_reference1\n";;}
    break;

  case 255:
#line 760 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"trait_method_reference2\n";;}
    break;

  case 256:
#line 765 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"method_body1\n";;}
    break;

  case 257:
#line 767 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"method_body2\n";;}
    break;

  case 258:
#line 772 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable_modifiers1\n";;}
    break;

  case 259:
#line 774 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable_modifiers2\n";;}
    break;

  case 260:
#line 779 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"method_modifiers1\n";;}
    break;

  case 261:
#line 781 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"method_modifiers2\n";;}
    break;

  case 262:
#line 786 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_member_modifiers1\n";;}
    break;

  case 263:
#line 788 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_member_modifiers2\n";;}
    break;

  case 264:
#line 793 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"member_modifier1\n";;}
    break;

  case 265:
#line 795 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"member_modifier2\n";;}
    break;

  case 266:
#line 797 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"member_modifier3\n";;}
    break;

  case 267:
#line 799 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"member_modifier4\n";;}
    break;

  case 268:
#line 801 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"member_modifier5\n";;}
    break;

  case 269:
#line 803 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"member_modifier6\n";;}
    break;

  case 270:
#line 808 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"property_declaration_list1\n";;}
    break;

  case 271:
#line 810 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"property_declaration_list2\n";;}
    break;

  case 272:
#line 815 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"property_declaration1\n";;}
    break;

  case 273:
#line 817 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"property_declaration2\n";;}
    break;

  case 274:
#line 822 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr_list1\n";;}
    break;

  case 275:
#line 824 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr_list2\n";;}
    break;

  case 276:
#line 829 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"for_expr1\n";;}
    break;

  case 277:
#line 831 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"for_expr2\n";;}
    break;

  case 278:
#line 836 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr1\n";;}
    break;

  case 279:
#line 838 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr2\n";;}
    break;

  case 280:
#line 840 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr3\n";;}
    break;

  case 281:
#line 842 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr4\n";;}
    break;

  case 282:
#line 844 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr5\n";;}
    break;

  case 283:
#line 846 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr6\n";;}
    break;

  case 284:
#line 848 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr7\n";;}
    break;

  case 285:
#line 850 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr8\n";;}
    break;

  case 286:
#line 852 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr9\n";;}
    break;

  case 287:
#line 854 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr10\n";;}
    break;

  case 288:
#line 856 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr11\n";;}
    break;

  case 289:
#line 858 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr12\n";;}
    break;

  case 290:
#line 860 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr13\n";;}
    break;

  case 291:
#line 862 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr14\n";;}
    break;

  case 292:
#line 864 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr15\n";;}
    break;

  case 293:
#line 866 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr16\n";;}
    break;

  case 294:
#line 868 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr17\n";;}
    break;

  case 295:
#line 870 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr18\n";;}
    break;

  case 296:
#line 872 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr19\n";;}
    break;

  case 297:
#line 874 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr20\n";;}
    break;

  case 298:
#line 876 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr21\n";;}
    break;

  case 299:
#line 878 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr22\n";;}
    break;

  case 300:
#line 880 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr23\n";;}
    break;

  case 301:
#line 882 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr24\n";;}
    break;

  case 302:
#line 884 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr25\n";;}
    break;

  case 303:
#line 886 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr26\n";;}
    break;

  case 304:
#line 888 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr27\n";;}
    break;

  case 305:
#line 890 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr28\n";;}
    break;

  case 306:
#line 892 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr29\n";;}
    break;

  case 307:
#line 894 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr30\n";;}
    break;

  case 308:
#line 896 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr31\n";;}
    break;

  case 309:
#line 898 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr32\n";;}
    break;

  case 310:
#line 900 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr33\n";;}
    break;

  case 311:
#line 902 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr34\n";;}
    break;

  case 312:
#line 904 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr35\n";;}
    break;

  case 313:
#line 906 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr36\n";;}
    break;

  case 314:
#line 908 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr37\n";;}
    break;

  case 315:
#line 910 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr38\n";;}
    break;

  case 316:
#line 912 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr39\n";;}
    break;

  case 317:
#line 914 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr30\n";;}
    break;

  case 318:
#line 916 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr41\n";;}
    break;

  case 319:
#line 918 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr42\n";;}
    break;

  case 320:
#line 920 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr43\n";;}
    break;

  case 321:
#line 922 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr44\n";;}
    break;

  case 322:
#line 924 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr45\n";;}
    break;

  case 323:
#line 926 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr46\n";;}
    break;

  case 324:
#line 928 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr47\n";;}
    break;

  case 325:
#line 930 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr48\n";;}
    break;

  case 326:
#line 932 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr49\n";;}
    break;

  case 327:
#line 934 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr50\n";;}
    break;

  case 328:
#line 936 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr51\n";;}
    break;

  case 329:
#line 938 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr52\n";;}
    break;

  case 330:
#line 940 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr53\n";;}
    break;

  case 331:
#line 942 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr54\n";;}
    break;

  case 332:
#line 945 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr55\n";;}
    break;

  case 333:
#line 947 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr56\n";;}
    break;

  case 334:
#line 949 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr57\n";;}
    break;

  case 335:
#line 951 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr58\n";;}
    break;

  case 336:
#line 953 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr59\n";;}
    break;

  case 337:
#line 955 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr60\n";;}
    break;

  case 338:
#line 957 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr61\n";;}
    break;

  case 339:
#line 959 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr62\n";;}
    break;

  case 340:
#line 961 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr63\n";;}
    break;

  case 341:
#line 963 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr64\n";;}
    break;

  case 342:
#line 965 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr65\n";;}
    break;

  case 343:
#line 967 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr66\n";;}
    break;

  case 344:
#line 969 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr67\n";;}
    break;

  case 345:
#line 971 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr68\n";;}
    break;

  case 346:
#line 973 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr69\n";;}
    break;

  case 347:
#line 975 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr70\n";;}
    break;

  case 348:
#line 977 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr71\n";;}
    break;

  case 349:
#line 979 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr72\n";;}
    break;

  case 350:
#line 981 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr73\n";;}
    break;

  case 351:
#line 983 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr74\n";;}
    break;

  case 352:
#line 985 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr75\n";;}
    break;

  case 353:
#line 987 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr76\n";;}
    break;

  case 354:
#line 989 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr77\n";;}
    break;

  case 355:
#line 991 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr78\n";;}
    break;

  case 356:
#line 993 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr79\n";;}
    break;

  case 357:
#line 995 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr80\n";;}
    break;

  case 358:
#line 997 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr81\n";;}
    break;

  case 359:
#line 999 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr82\n";;}
    break;

  case 360:
#line 1001 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"expr83\n";;}
    break;

  case 361:
#line 1006 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"parentheses_expr1\n";;}
    break;

  case 362:
#line 1008 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"parentheses_expr2\n";;}
    break;

  case 363:
#line 1013 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"yield_expr1\n";;}
    break;

  case 364:
#line 1015 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"yield_expr2\n";;}
    break;

  case 365:
#line 1020 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"array_expr1\n";;}
    break;

  case 366:
#line 1022 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"array_expr2\n";;}
    break;

  case 367:
#line 1027 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"scalar_dereference1\n";;}
    break;

  case 368:
#line 1029 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"scalar_dereference2\n";;}
    break;

  case 369:
#line 1031 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"scalar_dereference3\n";;}
    break;

  case 370:
#line 1033 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"scalar_dereference4\n";;}
    break;

  case 371:
#line 1039 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"anonymous_class\n";;}
    break;

  case 372:
#line 1044 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_expr1\n";;}
    break;

  case 373:
#line 1046 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_expr2\n";;}
    break;

  case 374:
#line 1051 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"lexical_vars1\n";;}
    break;

  case 375:
#line 1053 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"lexical_vars2\n";;}
    break;

  case 376:
#line 1058 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"lexical_var_list1\n";;}
    break;

  case 377:
#line 1060 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"lexical_var_list2\n";;}
    break;

  case 378:
#line 1065 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"lexical_var\n";;}
    break;

  case 379:
#line 1070 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"function_call1\n";;}
    break;

  case 380:
#line 1072 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"function_call2\n";;}
    break;

  case 381:
#line 1074 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"function_call3\n";;}
    break;

  case 382:
#line 1076 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"function_call4\n";;}
    break;

  case 383:
#line 1078 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"function_call5\n";;}
    break;

  case 384:
#line 1080 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"function_call6\n";;}
    break;

  case 385:
#line 1086 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_name\n";;}
    break;

  case 386:
#line 1088 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_name\n";;}
    break;

  case 387:
#line 1093 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"name1\n";;}
    break;

  case 388:
#line 1095 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"name2\n";;}
    break;

  case 389:
#line 1097 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"name3\n";;}
    break;

  case 390:
#line 1102 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_name_reference1\n";;}
    break;

  case 391:
#line 1104 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_name_reference2\n";;}
    break;

  case 392:
#line 1109 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"dynamic_class_name_reference1\n";;}
    break;

  case 393:
#line 1111 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"dynamic_class_name_reference2\n";;}
    break;

  case 394:
#line 1116 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_name_or_var1\n";;}
    break;

  case 395:
#line 1118 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"class_name_or_var2\n";;}
    break;

  case 396:
#line 1123 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr1\n";;}
    break;

  case 397:
#line 1125 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr2\n";;}
    break;

  case 398:
#line 1127 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr3\n";;}
    break;

  case 399:
#line 1129 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access_for_dcnr4\n";;}
    break;

  case 400:
#line 1134 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"exit_expr1\n";;}
    break;

  case 401:
#line 1136 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"exit_expr2\n";;}
    break;

  case 402:
#line 1138 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"exit_expr3\n";;}
    break;

  case 403:
#line 1143 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"backticks_expr1\n";;}
    break;

  case 404:
#line 1145 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"backticks_expr2\n";;}
    break;

  case 405:
#line 1147 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"backticks_expr3\n";;}
    break;

  case 406:
#line 1152 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"ctor_arguments1\n";;}
    break;

  case 407:
#line 1154 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"ctor_arguments2\n";;}
    break;

  case 408:
#line 1159 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar1\n";;}
    break;

  case 409:
#line 1161 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar2\n";;}
    break;

  case 410:
#line 1163 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar3\n";;}
    break;

  case 411:
#line 1165 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar4\n";;}
    break;

  case 412:
#line 1167 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar5\n";;}
    break;

  case 413:
#line 1169 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar6\n";;}
    break;

  case 414:
#line 1171 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar7\n";;}
    break;

  case 415:
#line 1173 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar8\n";;}
    break;

  case 416:
#line 1175 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar9\n";;}
    break;

  case 417:
#line 1177 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar10\n";;}
    break;

  case 418:
#line 1179 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar11\n";;}
    break;

  case 419:
#line 1181 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar12\n";;}
    break;

  case 420:
#line 1183 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"common_scalar13\n";;}
    break;

  case 421:
#line 1188 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_scalar1\n";;}
    break;

  case 422:
#line 1190 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_scalar2\n";;}
    break;

  case 423:
#line 1192 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_scalar3\n";;}
    break;

  case 424:
#line 1194 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_scalar4\n";;}
    break;

  case 425:
#line 1196 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_scalar5\n";;}
    break;

  case 426:
#line 1198 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_scalar6\n";;}
    break;

  case 427:
#line 1203 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation1\n";;}
    break;

  case 428:
#line 1205 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation2\n";;}
    break;

  case 429:
#line 1207 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation3\n";;}
    break;

  case 430:
#line 1209 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation4\n";;}
    break;

  case 431:
#line 1211 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation5\n";;}
    break;

  case 432:
#line 1213 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation6\n";;}
    break;

  case 433:
#line 1215 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation7\n";;}
    break;

  case 434:
#line 1217 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation8\n";;}
    break;

  case 435:
#line 1219 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation9\n";;}
    break;

  case 436:
#line 1221 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation10\n";;}
    break;

  case 437:
#line 1223 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation11\n";;}
    break;

  case 438:
#line 1225 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation12\n";;}
    break;

  case 439:
#line 1227 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation13\n";;}
    break;

  case 440:
#line 1229 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation14\n";;}
    break;

  case 441:
#line 1231 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation15\n";;}
    break;

  case 442:
#line 1233 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation16\n";;}
    break;

  case 443:
#line 1235 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation17\n";;}
    break;

  case 444:
#line 1237 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation18\n";;}
    break;

  case 445:
#line 1239 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation19\n";;}
    break;

  case 446:
#line 1241 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation20\n";;}
    break;

  case 447:
#line 1243 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation21\n";;}
    break;

  case 448:
#line 1245 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation22\n";;}
    break;

  case 449:
#line 1247 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation23\n";;}
    break;

  case 450:
#line 1249 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation24\n";;}
    break;

  case 451:
#line 1251 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation25\n";;}
    break;

  case 452:
#line 1253 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation26\n";;}
    break;

  case 453:
#line 1255 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation27\n";;}
    break;

  case 454:
#line 1257 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation28\n";;}
    break;

  case 455:
#line 1259 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation29\n";;}
    break;

  case 456:
#line 1261 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation30\n";;}
    break;

  case 457:
#line 1263 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation31\n";;}
    break;

  case 458:
#line 1265 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation32\n";;}
    break;

  case 459:
#line 1267 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_operation33\n";;}
    break;

  case 460:
#line 1272 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"constant1\n";;}
    break;

  case 461:
#line 1274 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"constant2\n";;}
    break;

  case 462:
#line 1279 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"scalar1\n";;}
    break;

  case 463:
#line 1281 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"scalar2\n";;}
    break;

  case 464:
#line 1283 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"scalar3\n";;}
    break;

  case 465:
#line 1285 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"scalar4\n";;}
    break;

  case 466:
#line 1290 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_array_pair_list1\n";;}
    break;

  case 467:
#line 1292 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_array_pair_list2\n";;}
    break;

  case 468:
#line 1297 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_comma1\n";;}
    break;

  case 469:
#line 1299 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"optional_comma2\n";;}
    break;

  case 470:
#line 1304 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_static_array_pair_list1\n";;}
    break;

  case 471:
#line 1306 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_static_array_pair_list2\n";;}
    break;

  case 472:
#line 1311 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_array_pair1\n";;}
    break;

  case 473:
#line 1313 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_array_pair2\n";;}
    break;

  case 474:
#line 1318 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable1\n";;}
    break;

  case 475:
#line 1320 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable2\n";;}
    break;

  case 476:
#line 1322 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable3\n";;}
    break;

  case 477:
#line 1324 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable4\n";;}
    break;

  case 478:
#line 1329 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_expr_array_deref1\n";;}
    break;

  case 479:
#line 1331 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"new_expr_array_deref2\n";;}
    break;

  case 480:
#line 1337 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access1\n";;}
    break;

  case 481:
#line 1339 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access2\n";;}
    break;

  case 482:
#line 1341 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access3\n";;}
    break;

  case 483:
#line 1343 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access4\n";;}
    break;

  case 484:
#line 1345 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_access5\n";;}
    break;

  case 485:
#line 1350 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable_or_new_expr1\n";;}
    break;

  case 486:
#line 1352 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable_or_new_expr2\n";;}
    break;

  case 487:
#line 1357 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable_without_objects1\n";;}
    break;

  case 488:
#line 1359 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"variable_without_objects2\n";;}
    break;

  case 489:
#line 1364 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"base_variable1\n";;}
    break;

  case 490:
#line 1366 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"base_variable2\n";;}
    break;

  case 491:
#line 1371 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_property1\n";;}
    break;

  case 492:
#line 1373 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_property2\n";;}
    break;

  case 493:
#line 1378 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays1\n";;}
    break;

  case 494:
#line 1380 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays2\n";;}
    break;

  case 495:
#line 1382 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays3\n";;}
    break;

  case 496:
#line 1384 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"static_property_with_arrays4\n";;}
    break;

  case 497:
#line 1389 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"reference_variable1\n";;}
    break;

  case 498:
#line 1391 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"reference_variable2\n";;}
    break;

  case 499:
#line 1393 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"reference_variable3\n";;}
    break;

  case 500:
#line 1395 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"reference_variable4\n";;}
    break;

  case 501:
#line 1397 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"reference_variable5\n";;}
    break;

  case 502:
#line 1402 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"dim_offset1\n";;}
    break;

  case 503:
#line 1404 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"dim_offset2\n";;}
    break;

  case 504:
#line 1409 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_property1\n";;}
    break;

  case 505:
#line 1411 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_property2\n";;}
    break;

  case 506:
#line 1413 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"object_property3\n";;}
    break;

  case 507:
#line 1418 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"list_expr\n";;}
    break;

  case 508:
#line 1423 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"list_expr_elements1\n";;}
    break;

  case 509:
#line 1425 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"list_expr_elements2\n";;}
    break;

  case 510:
#line 1430 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"list_expr_element1\n";;}
    break;

  case 511:
#line 1432 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"list_expr_element2\n";;}
    break;

  case 512:
#line 1434 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"list_expr_element3\n";;}
    break;

  case 513:
#line 1439 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"array_pair_list1\n";;}
    break;

  case 514:
#line 1441 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"array_pair_list2\n";;}
    break;

  case 515:
#line 1446 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_array_pair_list1\n";;}
    break;

  case 516:
#line 1448 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"non_empty_array_pair_list2\n";;}
    break;

  case 517:
#line 1453 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"array_pair1\n";;}
    break;

  case 518:
#line 1455 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"array_pair2\n";;}
    break;

  case 519:
#line 1457 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"array_pair3\n";;}
    break;

  case 520:
#line 1459 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"array_pair4\n";;}
    break;

  case 521:
#line 1464 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_list1\n";;}
    break;

  case 522:
#line 1466 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_list2\n";;}
    break;

  case 523:
#line 1468 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_list3\n";;}
    break;

  case 524:
#line 1470 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_list4\n";;}
    break;

  case 525:
#line 1475 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var1\n";;}
    break;

  case 526:
#line 1477 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var2\n";;}
    break;

  case 527:
#line 1479 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var3\n";;}
    break;

  case 528:
#line 1481 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var4\n";;}
    break;

  case 529:
#line 1483 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var5\n";;}
    break;

  case 530:
#line 1485 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var6\n";;}
    break;

  case 531:
#line 1487 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var7\n";;}
    break;

  case 532:
#line 1492 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset1\n";;}
    break;

  case 533:
#line 1494 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset2\n";;}
    break;

  case 534:
#line 1496 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"
    {cout<<"encaps_var_offset3\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 6423 "yacc.cpp"

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


#line 1499 "C:\\Users\\Moustapha Sh\\Documents\\visual studio 2013\\Projects\\Compiler\\Compiler\\yacc.y"




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
	freopen("C:\\Users\\Moustapha Sh\\Documents\\Visual Studio 2013\\Projects\\Compiler\\Compiler\\Compiler\\in.txt","r",stdin);
	freopen("C:\\Users\\Moustapha Sh\\Documents\\Visual Studio 2013\\Projects\\Compiler\\Compiler\\Compiler\\out.txt","w",stdout);
	Parser* p = new Parser();
	p->parse();
	
}
