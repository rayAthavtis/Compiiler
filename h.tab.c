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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     QUEC = 258,
     NUMBER = 259,
     FLNUM = 260,
     ID = 261,
     LP = 262,
     RP = 263,
     COMMA = 264,
     SEMI = 265,
     LBRACE = 266,
     RBRACE = 267,
     IF = 268,
     ELSE = 269,
     WHILE = 270,
     RETURN = 271,
     FOR = 272,
     INT = 273,
     CHAR = 274,
     INPUT = 275,
     OUTPUT = 276,
     MAIN = 277,
     IFX = 278,
     DVE = 279,
     MLE = 280,
     SBE = 281,
     ADE = 282,
     ASSIGN = 283,
     NOR = 284,
     AND = 285,
     OR = 286,
     AD = 287,
     EQ = 288,
     NE = 289,
     MORE = 290,
     LESS = 291,
     NLESS = 292,
     NMORE = 293,
     SUB = 294,
     ADD = 295,
     MOLD = 296,
     DIV = 297,
     MUL = 298,
     NOT = 299,
     SLFRDC = 300,
     SLFPLS = 301,
     BHSR = 302,
     BHSP = 303,
     UMINUS = 304
   };
#endif
/* Tokens.  */
#define QUEC 258
#define NUMBER 259
#define FLNUM 260
#define ID 261
#define LP 262
#define RP 263
#define COMMA 264
#define SEMI 265
#define LBRACE 266
#define RBRACE 267
#define IF 268
#define ELSE 269
#define WHILE 270
#define RETURN 271
#define FOR 272
#define INT 273
#define CHAR 274
#define INPUT 275
#define OUTPUT 276
#define MAIN 277
#define IFX 278
#define DVE 279
#define MLE 280
#define SBE 281
#define ADE 282
#define ASSIGN 283
#define NOR 284
#define AND 285
#define OR 286
#define AD 287
#define EQ 288
#define NE 289
#define MORE 290
#define LESS 291
#define NLESS 292
#define NMORE 293
#define SUB 294
#define ADD 295
#define MOLD 296
#define DIV 297
#define MUL 298
#define NOT 299
#define SLFRDC 300
#define SLFPLS 301
#define BHSR 302
#define BHSP 303
#define UMINUS 304




/* Copy the first part of user declarations.  */
#line 1 "h.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "node.h"
int yylex(void);
void yyerror(char *);
extern FILE *yyin;
extern FILE *yyout;
struct TreeNode *root;
int line = 0;
//struct IdType IDTable[26];
char IDMem[26][26];
int IDtype[26];
int idno = 0;
int curid = 0;
int temp_var_seq = 0;
int num = 0;


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
#line 21 "h.y"
{
  struct TreeNode *p;
}
/* Line 193 of yacc.c.  */
#line 218 "h.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 231 "h.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   535

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNRULES -- Number of states.  */
#define YYNSTATES  120

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,    10,    13,    15,    18,    21,    23,
      25,    27,    31,    37,    43,    46,    48,    50,    52,    56,
      58,    60,    62,    66,    70,    74,    78,    82,    86,    90,
      94,    98,   102,   106,   110,   114,   118,   122,   125,   128,
     131,   135,   138,   144,   152,   162,   171,   180,   189,   197,
     205,   213
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    22,     7,     8,    53,    -1,    53,    -1,
      53,    52,    -1,    10,    -1,    57,    10,    -1,    54,    10,
      -1,    58,    -1,    59,    -1,    60,    -1,    11,    52,    12,
      -1,    20,     7,    57,     8,    10,    -1,    21,     7,    57,
       8,    10,    -1,    55,    56,    -1,    18,    -1,    19,    -1,
       6,    -1,     6,     9,    56,    -1,     4,    -1,     6,    -1,
       3,    -1,     6,    28,    57,    -1,    57,    40,    57,    -1,
      57,    39,    57,    -1,    57,    43,    57,    -1,    57,    42,
      57,    -1,    57,    36,    57,    -1,    57,    35,    57,    -1,
      57,    37,    57,    -1,    57,    38,    57,    -1,    57,    34,
      57,    -1,    57,    33,    57,    -1,    57,    30,    57,    -1,
      57,    29,    57,    -1,    57,    32,    57,    -1,    57,    31,
      57,    -1,    44,    57,    -1,    57,    46,    -1,    57,    45,
      -1,     7,    57,     8,    -1,    39,    57,    -1,    13,     7,
      57,     8,    53,    -1,    13,     7,    57,     8,    53,    14,
      53,    -1,    17,     7,    57,    10,    57,    10,    57,     8,
      53,    -1,    17,     7,    10,    57,    10,    57,     8,    53,
      -1,    17,     7,    57,    10,    10,    57,     8,    53,    -1,
      17,     7,    57,    10,    57,    10,     8,    53,    -1,    17,
       7,    10,    10,    57,     8,    53,    -1,    17,     7,    10,
      57,    10,     8,    53,    -1,    17,     7,    57,    10,    10,
       8,    53,    -1,    15,     7,    57,     8,    53,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    57,    58,    61,    62,    63,    64,    65,
      66,    67,    70,    73,    78,    99,   100,   103,   112,   124,
     125,   141,   142,   161,   166,   171,   176,   181,   186,   191,
     196,   201,   206,   211,   216,   221,   226,   231,   235,   239,
     243,   244,   247,   251,   258,   264,   269,   274,   279,   283,
     287,   293
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "QUEC", "NUMBER", "FLNUM", "ID", "LP",
  "RP", "COMMA", "SEMI", "LBRACE", "RBRACE", "IF", "ELSE", "WHILE",
  "RETURN", "FOR", "INT", "CHAR", "INPUT", "OUTPUT", "MAIN", "IFX", "DVE",
  "MLE", "SBE", "ADE", "ASSIGN", "NOR", "AND", "OR", "AD", "EQ", "NE",
  "MORE", "LESS", "NLESS", "NMORE", "SUB", "ADD", "MOLD", "DIV", "MUL",
  "NOT", "SLFRDC", "SLFPLS", "BHSR", "BHSP", "UMINUS", "$accept",
  "function", "stmt_list", "stmt", "decl_stmt", "type", "declist", "exp",
  "if_stmt", "for_stmt", "while_stmt", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    54,    55,    55,    56,    56,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    60
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     1,     2,     2,     1,     1,
       1,     3,     5,     5,     2,     1,     1,     1,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     2,     5,     7,     9,     8,     8,     8,     7,     7,
       7,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    21,    19,    20,     0,
       5,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,     2,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     3,     0,     0,     0,     0,     0,    41,    37,     7,
      17,    14,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    38,    22,
      40,    11,     4,     0,     0,     0,     0,     0,     0,     0,
      34,    33,    36,    35,    32,    31,    28,    27,    29,    30,
      24,    23,    26,    25,     0,     0,     0,     0,     0,     0,
       0,    18,    42,    51,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,    43,    48,    49,
       0,    50,     0,     0,     0,    45,    46,    47,     0,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    30,    31,    22,    23,    41,    24,    25,    26,
      27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const yytype_int16 yypact[] =
{
     -14,     4,    12,     5,   -45,   108,   -45,   -45,   -11,    31,
     -45,   108,     7,    13,    16,   -45,   -45,    19,    20,    31,
      31,   -45,    23,    30,   342,   -45,   -45,   -45,    31,   167,
      41,   108,    31,    31,    15,    31,    31,   -45,   -44,   -45,
      46,   -45,   -45,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,   -45,   -45,   427,
     -45,   -45,   -45,   185,   203,    59,   360,   221,   239,    30,
     444,   460,   475,   489,   323,   323,   -36,   -36,   -36,   -36,
      43,    43,   -44,   -44,   108,   108,    31,   391,   127,    47,
      48,   -45,    42,   -45,   257,   135,   142,   409,   -45,   -45,
     108,   108,   108,   275,   108,   293,   150,   -45,   -45,   -45,
     108,   -45,   108,   108,   311,   -45,   -45,   -45,   108,   -45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,    29,    -5,   -45,   -45,    -2,    -4,   -45,   -45,
     -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      21,    57,    58,    53,    54,    29,    55,    56,     1,    57,
      58,     3,     4,     5,    32,    37,    38,    28,     6,     7,
      33,     8,     9,    34,    59,    65,    35,    36,    63,    64,
      66,    67,    68,    39,     6,     7,    40,     8,     9,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    61,    19,    69,   100,    98,    99,    20,
      62,    87,     6,     7,     0,     8,     9,    91,     0,    86,
      19,     0,     0,     0,     0,    20,     0,     0,     0,    92,
      93,     0,    94,     0,    97,    55,    56,     0,    57,    58,
       0,   103,   105,     0,     0,   107,   108,   109,    19,   111,
       0,     0,   114,    20,     0,   115,     0,   116,   117,     0,
       0,     6,     7,   119,     8,     9,     0,     0,    10,    11,
       0,    12,     0,    13,     0,    14,    15,    16,    17,    18,
       6,     7,     0,     8,     9,     0,     0,    96,     6,     7,
       0,     8,     9,   102,     0,     6,     7,    19,     8,     9,
     104,     0,    20,     6,     7,     0,     8,     9,   113,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,    20,     0,     0,    19,    60,     0,     0,     0,    20,
       0,    19,     0,     0,     0,     0,    20,     0,     0,    19,
       0,     0,     0,    84,    20,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,    55,
      56,    85,    57,    58,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,    55,    56,    89,
      57,    58,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,    55,    56,    90,    57,    58,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,    55,    56,   101,    57,    58,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,    55,    56,   110,    57,    58,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,    55,
      56,   112,    57,    58,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,    55,    56,   118,
      57,    58,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,    55,    56,     0,    57,    58,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    42,    55,    56,     0,    57,    58,    49,    50,
      51,    52,    53,    54,     0,    55,    56,     0,    57,    58,
      88,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,    55,    56,     0,    57,    58,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    95,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,    55,    56,     0,    57,    58,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,    55,    56,     0,    57,    58,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,    55,
      56,     0,    57,    58,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,    55,    56,     0,    57,
      58,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,    55,    56,     0,    57,    58,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,    55,    56,     0,
      57,    58,    47,    48,    49,    50,    51,    52,    53,    54,
       0,    55,    56,     0,    57,    58
};

static const yytype_int8 yycheck[] =
{
       5,    45,    46,    39,    40,     9,    42,    43,    22,    45,
      46,     7,     0,     8,     7,    19,    20,    28,     3,     4,
       7,     6,     7,     7,    28,    10,     7,     7,    32,    33,
      34,    35,    36,    10,     3,     4,     6,     6,     7,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    12,    39,     9,    14,    10,    10,    44,
      31,    65,     3,     4,    -1,     6,     7,    69,    -1,    10,
      39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    84,
      85,    -1,    86,    -1,    88,    42,    43,    -1,    45,    46,
      -1,    95,    96,    -1,    -1,   100,   101,   102,    39,   104,
      -1,    -1,   106,    44,    -1,   110,    -1,   112,   113,    -1,
      -1,     3,     4,   118,     6,     7,    -1,    -1,    10,    11,
      -1,    13,    -1,    15,    -1,    17,    18,    19,    20,    21,
       3,     4,    -1,     6,     7,    -1,    -1,    10,     3,     4,
      -1,     6,     7,     8,    -1,     3,     4,    39,     6,     7,
       8,    -1,    44,     3,     4,    -1,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    39,     8,    -1,    -1,    -1,    44,
      -1,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    39,
      -1,    -1,    -1,     8,    44,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,    45,    46,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,     8,
      45,    46,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,     8,    45,    46,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,     8,    45,    46,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,     8,    45,    46,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,    45,    46,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,     8,
      45,    46,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    45,    46,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    10,    42,    43,    -1,    45,    46,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    45,    46,
      10,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    45,    46,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    10,    42,    43,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    -1,    45,    46,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    -1,    45,    46,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    -1,    45,    46,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    45,
      46,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    -1,    45,    46,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
      45,    46,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    -1,    45,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    51,     7,     0,     8,     3,     4,     6,     7,
      10,    11,    13,    15,    17,    18,    19,    20,    21,    39,
      44,    53,    54,    55,    57,    58,    59,    60,    28,    57,
      52,    53,     7,     7,     7,     7,     7,    57,    57,    10,
       6,    56,    10,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    42,    43,    45,    46,    57,
       8,    12,    52,    57,    57,    10,    57,    57,    57,     9,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,     8,     8,    10,    57,    10,     8,
       8,    56,    53,    53,    57,    10,    10,    57,    10,    10,
      14,     8,     8,    57,     8,    57,    10,    53,    53,    53,
       8,    53,     8,     8,    57,    53,    53,    53,     8,    53
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
yyparse (void)
#else
int
yyparse ()

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
        case 2:
#line 44 "h.y"
    { (yyval.p) = (yyvsp[(4) - (4)].p);
                            //printf("hello: \n");
                            //Display($4);
                            //printf("\ntypecheck: \n");
                            root = (yyvsp[(4) - (4)].p);
                            typecheck(root);
                            get_temp(root);
                            get_label(root);
                            gen_code();
                            exit(0);
                          ;}
    break;

  case 3:
#line 57 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p); ;}
    break;

  case 4:
#line 58 "h.y"
    { (yyval.p) = (yyvsp[(1) - (2)].p); (yyval.p)->sibling = (yyvsp[(2) - (2)].p); ;}
    break;

  case 6:
#line 62 "h.y"
    { (yyval.p) = (yyvsp[(1) - (2)].p); ;}
    break;

  case 7:
#line 63 "h.y"
    { (yyval.p) = (yyvsp[(1) - (2)].p); ;}
    break;

  case 8:
#line 64 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p); ;}
    break;

  case 9:
#line 65 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p); ;}
    break;

  case 10:
#line 66 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p); ;}
    break;

  case 11:
#line 67 "h.y"
    { (yyval.p) = newStmtNode(LRK);
                            (yyval.p)->child[0] = (yyvsp[(2) - (3)].p);
                          ;}
    break;

  case 12:
#line 70 "h.y"
    { (yyval.p) = newStmtNode(InpK);
                            (yyval.p)->child[0] = (yyvsp[(3) - (5)].p);
                          ;}
    break;

  case 13:
#line 73 "h.y"
    { (yyval.p) = newStmtNode(OupK);
                            (yyval.p)->child[0] = (yyvsp[(3) - (5)].p);
                          ;}
    break;

  case 14:
#line 78 "h.y"
    { for(; curid < idno; curid++)
                              IDtype[curid] = (yyvsp[(1) - (2)].p)->type;
                            /*
                            struct TreeNode *tmp;
                            tmp = $2;
                            for(; tmp != NULL; tmp = tmp->sibling)
                            {
                              for(int i = 0; i < 26; i++)
                              {
                                if(strcmp(IDTable[i].name, tmp->attr.name) == 0)
                                  IDTable[i].type = $1->type;
                              }
                            }
                            */
                            (yyval.p) = newStmtNode(DeclK);
                            (yyvsp[(2) - (2)].p)->type = (yyvsp[(1) - (2)].p)->type;
                            (yyval.p)->child[0] = (yyvsp[(1) - (2)].p);
                            (yyval.p)->child[1] = (yyvsp[(2) - (2)].p);
                          ;}
    break;

  case 15:
#line 99 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p); ;}
    break;

  case 16:
#line 100 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p); ;}
    break;

  case 17:
#line 103 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p);
                            char *tmp = (yyvsp[(1) - (1)].p)->attr.name;
                            for(int j = 0; j < sizeof(tmp); j++)
                              IDMem[idno][j] = tmp[j];
                            idno++;
                            /**/
                            //strcpy(IDTable[idno].name, $1->attr.name);
                            //idno++;
                          ;}
    break;

  case 18:
#line 112 "h.y"
    { (yyval.p) = (yyvsp[(1) - (3)].p);
                            (yyval.p)->sibling = (yyvsp[(3) - (3)].p);
                            char *tmp = (yyvsp[(1) - (3)].p)->attr.name;
                            for(int j = 0; j<sizeof(tmp); j++)
                              IDMem[idno][j] = tmp[j];
                            idno++;
                            /**/
                            //strcpy(IDTable[idno].name, $1->attr.name);
                            //idno++;
                          ;}
    break;

  case 19:
#line 124 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p); ;}
    break;

  case 20:
#line 125 "h.y"
    { char *tmp = (yyvsp[(1) - (1)].p)->attr.name;
                            for(int i = 0; IDMem[i][0] != '\0' && i < 26; i++)
                              for(int j = 0; j<sizeof(tmp); j++)
                                if(IDMem[i][j] != tmp[j])
                                  break;
                                else if(j == (sizeof(tmp)-1))
                                  (yyvsp[(1) - (1)].p)->type = IDtype[i];
                            /*
                            for(int i = 0; i < 26; i++)
                            {
                              if(strcmp(IDTable[i].name, $1->attr.name) == 0)
                                $1->type = IDTable[i].type;
                            }
                            */
                            (yyval.p) = (yyvsp[(1) - (1)].p);
                          ;}
    break;

  case 21:
#line 141 "h.y"
    { (yyval.p) = (yyvsp[(1) - (1)].p); ;}
    break;

  case 22:
#line 142 "h.y"
    { char *tmp = (yyvsp[(1) - (3)].p)->attr.name;
                            for(int i = 0; IDMem[i][0] != '\0' && i < 26; i++)
                              for(int j = 0; j<sizeof(tmp); j++)
                                if(IDMem[i][j] != tmp[j])
                                  break;
                                else if(j == (sizeof(tmp)-1))
                                  (yyvsp[(1) - (3)].p)->type = IDtype[i];
                            /*
                            for(int i = 0; i < 26; i++)
                            {
                              if(strcmp(IDTable[i].name, $1->attr.name) == 0)
                                $1->type = IDTable[i].type;
                            }
                            */
                            (yyval.p) = newStmtNode(AssignK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "=";
                          ;}
    break;

  case 23:
#line 161 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "+";
                          ;}
    break;

  case 24:
#line 166 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "-";
                          ;}
    break;

  case 25:
#line 171 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "*";
                          ;}
    break;

  case 26:
#line 176 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "/";
                          ;}
    break;

  case 27:
#line 181 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "<";
                          ;}
    break;

  case 28:
#line 186 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = ">";
                          ;}
    break;

  case 29:
#line 191 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = ">=";
                          ;}
    break;

  case 30:
#line 196 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "<=";
                          ;}
    break;

  case 31:
#line 201 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "!=";
                          ;}
    break;

  case 32:
#line 206 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "==";
                          ;}
    break;

  case 33:
#line 211 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "&&";
                          ;}
    break;

  case 34:
#line 216 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "||";
                          ;}
    break;

  case 35:
#line 221 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "&";
                          ;}
    break;

  case 36:
#line 226 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (3)].p);
                            (yyval.p)->child[1] = (yyvsp[(3) - (3)].p);
                            (yyval.p)->attr.op = "|";
                          ;}
    break;

  case 37:
#line 231 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(2) - (2)].p);
                            (yyval.p)->attr.op = "!";
                          ;}
    break;

  case 38:
#line 235 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (2)].p);
                            (yyval.p)->attr.op = "++";
                          ;}
    break;

  case 39:
#line 239 "h.y"
    { (yyval.p) = newExpNode(OpK);
                            (yyval.p)->child[0] = (yyvsp[(1) - (2)].p);
                            (yyval.p)->attr.op = "--";
                          ;}
    break;

  case 40:
#line 243 "h.y"
    { (yyval.p) = (yyvsp[(2) - (3)].p); ;}
    break;

  case 42:
#line 247 "h.y"
    { (yyval.p) = newStmtNode(IfK);
                    		                   (yyval.p)->child[0] = (yyvsp[(3) - (5)].p);
                    		                   (yyval.p)->child[1] = (yyvsp[(5) - (5)].p);
                    		                 ;}
    break;

  case 43:
#line 251 "h.y"
    { (yyval.p) = newStmtNode(IfK);
                      		                 (yyval.p)->child[0] = (yyvsp[(3) - (7)].p);
                      		                 (yyval.p)->child[1] = (yyvsp[(5) - (7)].p);
                      		                 (yyval.p)->child[2] = (yyvsp[(7) - (7)].p);
                      		               ;}
    break;

  case 44:
#line 258 "h.y"
    { (yyval.p) = newStmtNode(ForK);
                                       (yyval.p)->child[0] = (yyvsp[(3) - (9)].p);  //decl
                                       (yyval.p)->child[1] = (yyvsp[(5) - (9)].p);  //opt
                                       (yyval.p)->child[2] = (yyvsp[(7) - (9)].p);  //inc
                                       (yyval.p)->child[3] = (yyvsp[(9) - (9)].p);  //lr
                                     ;}
    break;

  case 45:
#line 264 "h.y"
    { (yyval.p) = newStmtNode(ForK);
                                       (yyval.p)->child[1] = (yyvsp[(4) - (8)].p);  //opt
                                       (yyval.p)->child[2] = (yyvsp[(6) - (8)].p);  //inc
                                       (yyval.p)->child[3] = (yyvsp[(8) - (8)].p);  //lr
                                     ;}
    break;

  case 46:
#line 269 "h.y"
    { (yyval.p) = newStmtNode(ForK);
                                       (yyval.p)->child[0] = (yyvsp[(3) - (8)].p);  //decl
                                       (yyval.p)->child[2] = (yyvsp[(6) - (8)].p);  //inc
                                       (yyval.p)->child[3] = (yyvsp[(8) - (8)].p);  //lr
                                     ;}
    break;

  case 47:
#line 274 "h.y"
    { (yyval.p) = newStmtNode(ForK);
                                       (yyval.p)->child[0] = (yyvsp[(3) - (8)].p);  //decl
                                       (yyval.p)->child[1] = (yyvsp[(5) - (8)].p);  //opt
                                       (yyval.p)->child[3] = (yyvsp[(8) - (8)].p);  //lr
                                     ;}
    break;

  case 48:
#line 279 "h.y"
    { (yyval.p) = newStmtNode(ForK);
                                       (yyval.p)->child[2] = (yyvsp[(5) - (7)].p);  //inc
                                       (yyval.p)->child[3] = (yyvsp[(7) - (7)].p);  //opt
                                     ;}
    break;

  case 49:
#line 283 "h.y"
    { (yyval.p) = newStmtNode(ForK);
                                       (yyval.p)->child[1] = (yyvsp[(4) - (7)].p);
                                       (yyval.p)->child[3] = (yyvsp[(7) - (7)].p);
                                     ;}
    break;

  case 50:
#line 287 "h.y"
    { (yyval.p) = newStmtNode(ForK);
                                       (yyval.p)->child[0] = (yyvsp[(3) - (7)].p);
                                       (yyval.p)->child[3] = (yyvsp[(7) - (7)].p);
                                     ;}
    break;

  case 51:
#line 293 "h.y"
    { (yyval.p) = newStmtNode(WhileK);
                            (yyval.p)->child[0] = (yyvsp[(3) - (5)].p);
                            (yyval.p)->child[1] = (yyvsp[(5) - (5)].p);
                          ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2032 "h.tab.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


#line 297 "h.y"


TreeNode *newStmtNode(StmtKind kind)
{
  TreeNode *t = (TreeNode *) malloc(sizeof(TreeNode));
  if(t == NULL)
    printf("Out of memory error. ");
  else
  {
    for(int i=0; i<MAXCHILDREN; i++)
      t->child[i] = NULL;
    t->sibling = NULL;
    t->nodekind = StmtK;
    t->kind = kind;
    t->lineno = line++;
  }
  return t;
}

TreeNode *newExpNode(ExpKind kind)
{
  TreeNode *t = (TreeNode *) malloc(sizeof(TreeNode));
  if(t == NULL)
    printf("Out of memory error. ");
  else
  {
    for(int i=0; i<MAXCHILDREN; i++)
      t->child[i] = NULL;
    t->sibling = NULL;
    t->nodekind = ExpK;
    t->kind = kind;
    t->lineno = line++;
  }
  return t;
}

void typecheck(struct TreeNode *p)
{
  struct TreeNode *tmp;
  for(int i=0; i<MAXCHILDREN; i++)
    if(p->child[i]!=NULL)
      typecheck(p->child[i]);
  printf("%d: ", p->lineno);
  //fprintf(yyout, "%d: ", p->lineno);
  if(p->nodekind==1)  //表达式
  {
    if(p->kind==0)  //操作符
    {
      if(!strcmp(p->attr.op, "+")||!strcmp(p->attr.op, "-")||!strcmp(p->attr.op, "*")||!strcmp(p->attr.op, "/")||!strcmp(p->attr.op, "&")||!strcmp(p->attr.op, "|"))
      {
        if(p->child[0]->type != Integer || p->child[1]->type != Integer)
          printf("error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);  //fprintf(yyout, "error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);
          p->type = Integer;
          if(p->child[0]->type == Char)
          {
            //p->child[0]->attr.val = int(get_val((p->child[0]->attr.name));
            p->child[0]->type = Integer;
          }
          if(p->child[1]->type == Char)
          {
            //p->child[1]->attr.val = int(get_val((p->child[1]->attr.val));
            p->child[1]->type = Integer;
          }
        else
          p->type = p->child[0]->type;
      }
      else if(!strcmp(p->attr.op, "&&")||!strcmp(p->attr.op, "||"))
      {
        if(p->child[0]->type != Bool || p->child[1]->type != Bool)
          printf("error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);  //fprintf(yyout, "error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);
          p->type = Bool;
          if(p->child[0]->type != Bool)
          {
            //p->child[0]->attr.val = bool(p->child[0]->attr.val);
            p->child[0]->type = Bool;
          }
          if(p->child[1]->type != Bool)
          {
            //p->child[1]->attr.val = bool(p->child[1]->attr.val);
            p->child[1]->type = Bool;
          }
        else
          p->type = p->child[0]->type;
      }
      else if(!strcmp(p->attr.op, "!"))
      {
        if(p->child[0]->type != Bool)
        {
          printf("error: %d with %s \n", p->child[0]->type, p->attr.op);  //fprintf(yyout, "error: %d with %s \n", p->child[0]->type, p->attr.op);
          p->type = Bool;
        }
        else
          p->type = p->child[0]->type;
      }
      else if(!strcmp(p->attr.op, ">")||!strcmp(p->attr.op, "<")||!strcmp(p->attr.op, ">=")||!strcmp(p->attr.op, "<=")||!strcmp(p->attr.op, "==")||!strcmp(p->attr.op, "!="))
      {
        if(p->child[0]->type != p->child[1]->type)
          printf("error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);  //fprintf(yyout, "error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);
        p->type = Bool;
      }
      printf("Expr    op: %s  ", p->attr.op);  //fprintf(yyout, "Expr    op: %s  ", p->attr.op);
    }
    else if(p->kind==1)
      printf("Const    value: %d  ", p->attr.val);  //fprintf(yyout, "Const    value: %d  ", p->attr.val);
    else if(p->kind==2)
      printf("ID    symbol: %s  ", p->attr.name);  //fprintf(yyout, "ID    symbol: %s  ", p->attr.name);
    else if(p->kind==3)
    {
      if(p->type == 0)
        printf("Type    integer    ");  //fprintf(yyout, "Type    integer    ");
      else if(p->type == 1)
        printf("Type    char       ");  //fprintf(yyout, "Type    char       ");
      else if(p->type == 2)
        printf("Type    void       ");  //fprintf(yyout, "Type    void       ");
      else if(p->type == 3)
        printf("Type    bool       ");  //fprintf(yyout, "Type    bool       ");
    }
  }
  else  //句型
  {
    if(p->kind==0)  //声明语句
    {
      p->type = Void;
      printf("Decl              ");  //fprintf(yyout, "Decl              ");
    }
    else if(p->kind==1)  //if语句
    {
      p->type = Void;
      if(p->child[0]->type != Bool)
        printf("error: %d in if_stmt \n", p->child[0]->type);  //fprintf(yyout, "error: %d in if_stmt \n", p->child[0]->type);
      printf("If                ");  //fprintf(yyout, "If                ");
    }
    else if(p->kind==2)  //for语句
    {
      if(p->child[1])
        if(p->child[1]->type != Bool)
          printf("error: %d in for_stmt \n", p->child[0]->type);  //fprintf(yyout, "error: %d in for_stmt \n", p->child[0]->type);
      p->type = Void;
      printf("For               ");  //fprintf(yyout, "For               ");
    }
    else if(p->kind==3)  //while语句
    {
      p->type = Void;
      if(p->child[0]->type != Bool)
        printf("error: %d in if_stmt \n", p->child[0]->type);  //fprintf(yyout, "error: %d in if_stmt \n", p->child[0]->type);
      printf("While             ");  //fprintf(yyout, "While             ");
    }
    else if(p->kind==4) //赋值语句
    {
      if(p->child[0]->type!=p->child[1]->type)
        printf("error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);  //fprintf(yyout, "error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);
      p->type = p->child[0]->type;
      printf("Assign            ");  //fprintf(yyout, "Assign            ");
    }
    else if(p->kind==5)  //输入
    {
      if(p->child[0]->type==Bool)
        printf("error: %d \n", p->child[0]->type);  //fprintf(yyout, "error: %d \n", p->child[0]->type);
      p->type = Void;
      printf("Inp               ");  //fprintf(yyout, "Inp               ");
    }
    else if(p->kind==6)  //输出
    {
      if(p->child[0]->type==Bool)
        printf("error: %d \n", p->child[0]->type);  //fprintf(yyout, "error: %d \n", p->child[0]->type);
      p->type = Void;
      printf("Oup               ");  //fprintf(yyout, "Oup               ");
    }
    else if(p->kind==7)  //复合语句
    {
      p->type = Void;
      printf("LRK               ");  //fprintf(yyout, "LRK               ");
    }
  }
  printf("children: ");  //fprintf(yyout, "children: ");
  for(int i=0; i<MAXCHILDREN; i++)
  {
    if(p->child[i]!=NULL)
    {
      //Display(p->child[i]);
      printf("%d ", p->child[i]->lineno);  //fprintf(yyout, "%d ", p->child[i]->lineno);
      struct TreeNode *tp;
      tp = p->child[i]->sibling;
      while(tp!=NULL)
      {
        printf("%d ", tp->lineno);  //fprintf(yyout, "%d ", tp->lineno);
        tp = tp->sibling;
      }
    }
  }
  printf("\n");  //fprintf(yyout, "\n");
  tmp = p->sibling;
  if(tmp!=NULL)
    typecheck(tmp);
  return ;
}

//生成头
void gen_header()
{
  fprintf(yyout, ".586\n.model flat, stdcall\noption casemap :none\n\n");
  fprintf(yyout, "include \\masm32\\include\\windows.inc\n");
  fprintf(yyout, "include \\masm32\\include\\user32.inc\n");
  fprintf(yyout, "include \\masm32\\include\\kernel32.inc\n");
  fprintf(yyout, "include \\masm32\\include\\masm32.inc\n");
  fprintf(yyout, "include \\masm32\\include\\msvcrt.inc\n\n");
  fprintf(yyout, "includelib \\masm32\\lib\\msvcrt.lib\n");
  fprintf(yyout, "includelib \\masm32\\lib\\user32.lib\n");
  fprintf(yyout, "includelib \\masm32\\lib\\kernel32.lib\n");
  fprintf(yyout, "includelib \\masm32\\lib\\masm32.lib\n");
}

//语句贴标号
void stmt_get_label(TreeNode *t)
{
  switch(t->kind)
  {
    case WhileK:  //while循环语句
    {
      TreeNode *e = t->child[0];
      TreeNode *s = t->child[1];
      if(t->begin_label == NULL)
        t->begin_label = new_label();
      s->next_label = t->begin_label;
      s->begin_label = e->true_label = new_label();
      if(t->next_label == NULL)
        t->next_label = new_label();
      e->false_label = t->next_label;
      if(t->sibling)
        t->sibling->begin_label = t->next_label;
      //recursive_get_label(e);
      //recursive_get_label(s);
      break;
    }
    case IfK:
    {
      TreeNode *e = t->child[0];
      TreeNode *s = t->child[1];
      TreeNode *s2 = t->child[2];
      if(e->true_label == NULL)
        e->true_label = new_label();
      s->begin_label = e->true_label;  //if体开始 真值出口
      if(t->next_label == NULL)
        t->next_label = new_label();  //if体下一条语句的标号
      if(s2)
      {
        if(e->false_label == NULL)
          e->false_label = new_label();
        s2->begin_label = e->false_label;  //假值出口
      }
      else{
        e->false_label = t->next_label;  //假值出口
      }
      if(t->sibling)
        t->sibling->begin_label = t->next_label;  //兄弟节点的开始标号及此语句下一标号
      break;
    }
    case ForK:
    {
      TreeNode *s0 = t->child[0];
      TreeNode *e = t->child[1];
      TreeNode *s2 = t->child[2];
      TreeNode *s3 = t->child[3];
      if(t->begin_label == NULL)
        t->begin_label = new_label();
      if(s0)
      {
        s0->begin_label = t->begin_label;
        t->begin_label = new_label();
      }
      if(s2)
        s2->next_label = t->begin_label;  //继续循环
      else
        s3->next_label = t->begin_label;
      if(e->true_label == NULL)
        e->true_label = new_label();
      if(s3)
        s3->begin_label = e->true_label;  //真值出口
      else if(s2)
        s2->begin_label = e->true_label;
      if(t->next_label == NULL)
        t->next_label = new_label();
      e->false_label = t->next_label;  //循环结束，假值出口
      if(t->sibling)
        t->sibling->begin_label = t->next_label;
      break;
    }
  }
}

//表达式贴标号
void expr_get_label(TreeNode *t)
{
  if(t->type != Bool)
    return ;
  TreeNode *e1 = t->child[0];
  TreeNode *e2 = t->child[1];
  if(strcmp(t->attr.op, "&&") == 0)
  {
    if(e1->true_label == NULL)
      e1->true_label = new_label();
    e2->true_label = t->true_label;
    e1->false_label = e2->false_label = t->false_label;
    e2->begin_label = e1->true_label;
  }
  else if(strcmp(t->attr.op, "||") == 0)
  {
    if(e1->false_label == NULL)
      e1->false_label = new_label();
    e2->false_label = t->false_label;
    e1->true_label = e2->true_label = t->true_label;
    e2->begin_label = e1->false_label;
  }
  else if(strcmp(t->attr.op, "!") == 0)
  {
    e1->true_label = t->false_label;
    e1->false_label = t->true_label;
  }
  //if(e1)
    //recursive_get_label(e1);
  //if(e2)
    //recursive_get_label(e2);
}

//贴标号
void get_label(struct TreeNode *p)
{
  if(p->nodekind == StmtK)
    stmt_get_label(p);
  else if(p->nodekind == ExpK)
    expr_get_label(p);
  struct TreeNode *tmp;
  for(int i=0; i<MAXCHILDREN; i++)
    if(p->child[i]!=NULL)
      get_label(p->child[i]);
  tmp = p->sibling;
  if(tmp!=NULL)
    get_label(tmp);
}

//临时变量
void get_temp(struct TreeNode *p)
{
  struct TreeNode *tmp;
  for(int i=0; i<MAXCHILDREN; i++)
    if(p->child[i]!=NULL)
      get_temp(p->child[i]);
  tmp = p->sibling;
  if(tmp!=NULL)
    get_temp(tmp);
  get_temp_var(p);
}

//生成声明语句（数据段）
void gen_decl(TreeNode *t)
{
  fprintf(yyout, "\n\n.data\n");
  for(;t->kind == DeclK; t = t->sibling)
  {
    TreeNode *p = t->child[1];
    if(p->type == Integer)
      for(; p; p = p->sibling)
          fprintf(yyout, "\t_%s DWORD 0\n", p->attr.name);
    else if(p->type == Char)
      for(; p; p = p->sibling)
        fprintf(yyout, "\t_%s BYTE 0\n", p->attr.name);
  }
  for(int i = 0; i < temp_var_seq; i++)
    fprintf(yyout, "\tt%d DWORD 0\n", i);
  fprintf(yyout, "\tbuffer BYTE 128 dup(0)\n");
  fprintf(yyout, "\tdata1 db '%s', 0\n", "%d");
  fprintf(yyout, "\tvac db ' ', 0\n");
}

//表达式代码
void expr_gen_code(TreeNode *t)
{
  if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
  TreeNode *e1 = t->child[0];
  TreeNode *e2 = t->child[1];
  if(e1)
    recursive_gen_code(e1);
  if(e2)
    recursive_gen_code(e2);
  if(!strcmp(t->attr.op, "+"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tADD eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "-"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tSUB eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "*"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV ebx, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMUL ebx\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "/"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV ebx, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tDIV ebx\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "&"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tAND eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "|"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tOR eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "++"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tINC eax");
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "--"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tDEC eax");
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "<"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjl %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, ">"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjg %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, "<="))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjng %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, ">="))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjnl %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, "=="))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tje %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, "!="))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjne %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
}

//语句代码
void stmt_gen_code(TreeNode *t)
{
  if(t->kind == AssignK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[1]);
    TreeNode *e1 = t->child[0];
    TreeNode *e2 = t->child[1];
    if(e1->type == Integer)
    {
      fprintf(yyout, "\tMOV eax, ");
      if(e2->kind == IdK)
        fprintf(yyout, "_%s", e2->attr.name);
      else if(e2->kind == ConstK)
        fprintf(yyout, "%d", e2->attr.val);
      else
        fprintf(yyout, "t%d", e2->temp_var);
      fprintf(yyout, "\n");
      fprintf(yyout, "\tMOV ");
      if(e1->kind == IdK)
        fprintf(yyout, "_%s", e1->attr.name);
      else if(e1->kind == ConstK)
        fprintf(yyout, "%d", e1->attr.val);
      else
        fprintf(yyout, "t%d", e1->temp_var);
      fprintf(yyout, ", eax\n");
    }
    else if(e2->type == Char)
    {
      fprintf(yyout, "\tMOV al, ");
      if(e2->kind == IdK)
        fprintf(yyout, "_%s", e2->attr.name);
      else if(e2->kind == ConstK)
        fprintf(yyout, "%d", e2->attr.val);
      else
        fprintf(yyout, "t%d", e2->temp_var);
      fprintf(yyout, "\n");
      fprintf(yyout, "\tMOV ");
      if(e1->kind == IdK)
        fprintf(yyout, "_%s", e1->attr.name);
      else if(e1->kind == ConstK)
        fprintf(yyout, "%d", e1->attr.val);
      else
        fprintf(yyout, "t%d", e1->temp_var);
      fprintf(yyout, ", al\n");
    }
  }
  else if(t->kind == LRK)
  {
    for(int i = 0; t->child[i]; i++)
    {
      if(t->begin_label != NULL)
        fprintf(yyout, "%s:\n", t->begin_label);
      recursive_gen_code(t->child[i]);
      for(TreeNode *p = t->child[i]->sibling; p; p = p->sibling)
        recursive_gen_code(p);
    }
  }
  else if(t->kind == WhileK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[0]);
    recursive_gen_code(t->child[1]);
    fprintf(yyout, "\tjmp %s\n", t->begin_label);
  }
  else if(t->kind == IfK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[0]);
    recursive_gen_code(t->child[1]);
    fprintf(yyout, "\tjmp %s\n", t->next_label);
    if(t->child[2])
    {
      recursive_gen_code(t->child[2]);
    }
  }
  else if(t->kind == ForK)
  {
    recursive_gen_code(t->child[0]);
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[1]);
    recursive_gen_code(t->child[3]);
    recursive_gen_code(t->child[2]);
    fprintf(yyout, "\tjmp %s\n", t->begin_label);
  }
  else if(t->kind == InpK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    if(t->child[0]->type == Integer)
      fprintf(yyout, "\tinvoke crt_scanf, addr data1, addr _%s\n", t->child[0]->attr.name);
    else if(t->child[0]->type == Char)
      fprintf(yyout, "\tinvoke StdIn, addr __%s, 8\n", t->child[0]->attr.name);
  }
  else if(t->kind == OupK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[0]);
    if(t->child[0]->type == Integer)
      fprintf(yyout, "\tinvoke crt_printf, addr data1, ");
    else if(t->child[0]->type == Char)
      fprintf(yyout, "\tinvoke crt_printf, addr ");
    if(t->child[0]->kind == IdK)
      fprintf(yyout, "_%s", t->child[0]->attr.name);
    else if(t->child[0]->kind == ConstK)
      fprintf(yyout, "%d", t->child[0]->attr.val);
    else
      fprintf(yyout, "t%d", t->child[0]->temp_var);
    fprintf(yyout, "\n\tinvoke crt_printf, addr vac\n");
  }
}

//代码段
void recursive_gen_code(TreeNode *t)
{
  if(t->nodekind == StmtK)
    stmt_gen_code(t);
  else if(t->nodekind == ExpK && t->kind == OpK)
    expr_gen_code(t);
}

//计算临时变量需求数
void get_temp_var(TreeNode *t)
{
  if(t->nodekind != ExpK)
    return ;
  if(t->kind != OpK)
    return ;
  if(strcmp(t->attr.op, "+") && strcmp(t->attr.op, "-")
    && strcmp(t->attr.op, "*") && strcmp(t->attr.op, "/"))
    return ;
  TreeNode *arg1 = t->child[0];
  TreeNode *arg2 = t->child[1];
  if(arg1->kind == OpK)
    temp_var_seq--;
  if(arg2 && arg2->kind == OpK)
    temp_var_seq--;
  t->temp_var = temp_var_seq;
  temp_var_seq++;
}

//生成框架
void gen_code()
{
  gen_header();
  TreeNode *p = root->child[0];
  if(p->kind == DeclK)
    gen_decl(p);
  fprintf(yyout, "\n.code\nstart:\n");
  recursive_gen_code(root);
  fprintf(yyout, "L%d:\n\tinvoke crt__getch\n", num);
  fprintf(yyout, "\tinvoke ExitProcess, 0\n");
  fprintf(yyout, "end start\n");
}

char *new_label()
{
  num++;
  char *label = (char *) malloc(sizeof(char)*3);
  if(label == NULL)
    printf("Out of memory error. ");
  sprintf(label, "L%d", num);
  return label;
}

void yyerror(char *s){
  printf("%s\n", s);
}

int main(void){
  yyin = fopen("test.c", "r");
  if(yyin == NULL){
      printf("Can't open file test.c");
      return 1;
  }
  yyout = fopen("output.asm", "w");
  yyparse();
  fclose(yyin);
  fclose(yyout);
  return 0;
}
