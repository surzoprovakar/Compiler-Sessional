/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 2 "1305115.y"

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "1305115_table.h"
#define YYSTYPE symbolInfo*
using namespace std;

FILE *output;
string cmp;
int globalflag=100;
symbolInfo* notget;
symbolInfo* idcheck;
symbolInfo* ix;
symbolInfo* idprint;
symbolTable* table=new symbolTable(31);
symbolTable* globaltable=new symbolTable(31);
extern int line;
extern int error;
void yyerror(const char *s){
	printf("%s\n",s);
	fprintf(output,"Error at line %d : %s \n",line,s);
	error++;
}

int yylex(void);


/* Line 371 of yacc.c  */
#line 98 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     MAIN = 259,
     LPAREN = 260,
     RPAREN = 261,
     LCURL = 262,
     RCURL = 263,
     SEMICOLON = 264,
     FLOAT = 265,
     CHAR = 266,
     COMMA = 267,
     ID = 268,
     LTHIRD = 269,
     RTHIRD = 270,
     CONST_INT = 271,
     CONST_FLOAT = 272,
     CONST_CHAR = 273,
     FOR = 274,
     IF = 275,
     WHILE = 276,
     PRINTLN = 277,
     RETURN = 278,
     LOGICOP = 279,
     RELOP = 280,
     ASSIGNOP = 281,
     ADDOP = 282,
     NOT = 283,
     MULOP = 284,
     INCOP = 285,
     DECOP = 286,
     STRING = 287,
     ELSE = 288,
     DO = 289,
     BREAK = 290,
     DOUBLE = 291,
     VOID = 292,
     CASE = 293,
     SWITCH = 294,
     CONTINUE = 295,
     DEFAULT = 296,
     LOWER_THAN_ELSE = 297
   };
#endif
/* Tokens.  */
#define INT 258
#define MAIN 259
#define LPAREN 260
#define RPAREN 261
#define LCURL 262
#define RCURL 263
#define SEMICOLON 264
#define FLOAT 265
#define CHAR 266
#define COMMA 267
#define ID 268
#define LTHIRD 269
#define RTHIRD 270
#define CONST_INT 271
#define CONST_FLOAT 272
#define CONST_CHAR 273
#define FOR 274
#define IF 275
#define WHILE 276
#define PRINTLN 277
#define RETURN 278
#define LOGICOP 279
#define RELOP 280
#define ASSIGNOP 281
#define ADDOP 282
#define NOT 283
#define MULOP 284
#define INCOP 285
#define DECOP 286
#define STRING 287
#define ELSE 288
#define DO 289
#define BREAK 290
#define DOUBLE 291
#define VOID 292
#define CASE 293
#define SWITCH 294
#define CONTINUE 295
#define DEFAULT 296
#define LOWER_THAN_ELSE 297



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 248 "y.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    14,    17,    19,    23,    28,
      32,    39,    44,    46,    52,    59,    63,    65,    68,    73,
      79,    84,    88,    91,    95,   100,   102,   104,   106,   108,
     112,   119,   121,   126,   128,   131,   133,   135,   142,   150,
     156,   160,   168,   176,   182,   190,   196,   202,   206,   208,
     211,   214,   216,   221,   227,   232,   234,   238,   240,   244,
     246,   250,   252,   256,   258,   262,   265,   268,   270,   272,
     276,   278,   280,   282,   285
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    50,    -1,    45,    47,    50,    -1,
      47,    45,    50,    -1,    47,    50,    -1,    50,    -1,    53,
      46,     9,    -1,    45,    53,    46,     9,    -1,    46,    12,
      13,    -1,    46,    12,    13,    14,    16,    15,    -1,    13,
      14,    16,    15,    -1,    13,    -1,    53,    13,     5,     6,
       9,    -1,    53,    13,     5,    48,     6,     9,    -1,    48,
      12,    49,    -1,    49,    -1,    53,    13,    -1,    53,    13,
      14,    15,    -1,     3,     4,     5,     6,    51,    -1,     7,
      52,    55,     8,    -1,     7,    55,     8,    -1,     7,     8,
      -1,    53,    54,     9,    -1,    52,    53,    54,     9,    -1,
       3,    -1,    10,    -1,    11,    -1,    37,    -1,    54,    12,
      13,    -1,    54,    12,    13,    14,    16,    15,    -1,    13,
      -1,    13,    14,    16,    15,    -1,    56,    -1,    55,    56,
      -1,    57,    -1,    51,    -1,    20,     1,     5,     1,     6,
      56,    -1,    20,     5,     1,     6,    56,    33,    56,    -1,
      21,     5,     1,     6,    56,    -1,    23,     1,     9,    -1,
      19,     5,    57,    57,     1,     6,    56,    -1,    19,     5,
      57,    57,    59,     6,    56,    -1,    20,     5,    59,     6,
      56,    -1,    20,     5,    59,     6,    56,    33,    56,    -1,
      21,     5,    59,     6,    56,    -1,    22,     5,    13,     6,
       9,    -1,    23,    59,     9,    -1,     9,    -1,    59,     9,
      -1,     1,     9,    -1,    13,    -1,    13,    14,     1,    15,
      -1,    13,     1,    14,    59,    15,    -1,    13,    14,    59,
      15,    -1,    60,    -1,    58,    26,    60,    -1,    61,    -1,
      61,    24,    61,    -1,    62,    -1,    62,    25,    62,    -1,
      63,    -1,    62,    27,    63,    -1,    64,    -1,    63,    29,
      64,    -1,    27,    64,    -1,    28,    64,    -1,    65,    -1,
      58,    -1,     5,    59,     6,    -1,    16,    -1,    17,    -1,
      18,    -1,    65,    30,    -1,    65,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    43,    45,    48,    53,
      55,    57,    59,    62,    64,    67,    68,    70,    71,    74,
      78,    80,    81,    85,    87,    91,    92,    93,    94,    97,
     131,   167,   197,   236,   237,   241,   242,   243,   244,   245,
     246,   247,   248,   250,   253,   255,   256,   274,   278,   279,
     280,   283,   299,   300,   301,   332,   333,   380,   381,   513,
     514,   835,   837,   903,   904,   976,  1004,  1030,  1067,  1068,
    1072,  1077,  1082,  1086,  1128
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "MAIN", "LPAREN", "RPAREN",
  "LCURL", "RCURL", "SEMICOLON", "FLOAT", "CHAR", "COMMA", "ID", "LTHIRD",
  "RTHIRD", "CONST_INT", "CONST_FLOAT", "CONST_CHAR", "FOR", "IF", "WHILE",
  "PRINTLN", "RETURN", "LOGICOP", "RELOP", "ASSIGNOP", "ADDOP", "NOT",
  "MULOP", "INCOP", "DECOP", "STRING", "ELSE", "DO", "BREAK", "DOUBLE",
  "VOID", "CASE", "SWITCH", "CONTINUE", "DEFAULT", "LOWER_THAN_ELSE",
  "$accept", "global", "global_var_declaration", "global_declaration_list",
  "function", "param_list", "list", "Program", "compound_statement",
  "var_declaration", "type_specifier", "declaration_list", "statements",
  "statement", "expression_statement", "variable", "expression",
  "logic_expression", "rel_expression", "simple_expression", "term",
  "unary_expression", "factor", YY_NULL
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
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    45,    45,    46,
      46,    46,    46,    47,    47,    48,    48,    49,    49,    50,
      51,    51,    51,    52,    52,    53,    53,    53,    53,    54,
      54,    54,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    57,
      57,    58,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     2,     1,     3,     4,     3,
       6,     4,     1,     5,     6,     3,     1,     2,     4,     5,
       4,     3,     2,     3,     4,     1,     1,     1,     1,     3,
       6,     1,     4,     1,     2,     1,     1,     6,     7,     5,
       3,     7,     7,     5,     7,     5,     5,     3,     1,     2,
       2,     1,     4,     5,     4,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     1,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    26,    27,    28,     0,     0,     0,     6,     0,
       0,     1,     0,     2,     0,     0,     5,     0,    12,     0,
       0,     0,     3,     0,     4,     0,    12,     0,     0,     7,
       0,     0,     8,    25,     0,     0,    16,     0,     0,     9,
       0,    19,    13,     0,     0,    17,    11,     0,     0,     0,
      22,    48,     0,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,    33,    35,    68,
       0,    55,    57,    59,    61,    63,    67,    14,    15,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    65,    66,     0,     0,    31,     0,    21,
      34,     0,    49,     0,     0,     0,     0,    73,    74,    18,
      10,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    47,     0,    20,     0,    23,     0,    56,
      58,    60,    62,    64,     0,    52,    54,     0,     0,     0,
       0,     0,     0,     0,    24,     0,    29,    53,     0,     0,
       0,     0,    43,    39,    45,    46,    32,     0,     0,     0,
      37,     0,     0,     0,    41,    42,    38,    44,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,    19,     7,    35,    36,     8,    63,    64,
      37,    98,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
      15,     9,   -67,   -67,   -67,    16,    15,    15,   -67,    55,
      67,   -67,    76,   -67,    55,    15,   -67,    75,    30,    20,
      84,     9,   -67,    44,   -67,    75,    77,     4,    78,   -67,
      85,    93,   -67,   -67,    99,    25,   -67,    89,    95,    97,
      96,   -67,   -67,   111,    17,   107,   -67,   106,   116,     6,
     -67,   -67,    56,   -67,   -67,   -67,   122,    54,   124,   126,
     228,     6,     6,   -67,   125,   127,   150,   -67,   -67,   113,
     128,   -67,   130,    42,   120,   -67,    47,   -67,   -67,   135,
     141,   -67,   154,   147,   246,   222,   159,   252,   270,   152,
     165,   167,   -67,   -67,   -67,   127,   174,   166,    49,   -67,
     -67,     6,   -67,     6,     6,     6,     6,   -67,   -67,   -67,
     -67,   -67,     6,   169,   170,   222,   185,   182,   183,   192,
     194,   200,   -67,   -67,    51,   -67,   188,   -67,   195,   -67,
     -67,   186,   120,   -67,   197,   -67,   -67,   276,   203,   198,
     198,   198,   198,   201,   -67,   207,   210,   -67,   224,   226,
     198,   204,   209,   -67,   -67,   -67,   -67,   212,   198,   198,
     -67,   198,   198,   219,   -67,   -67,   -67,   -67,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   229,    24,   237,   -67,   208,   284,   217,   -67,
       2,   163,   190,   -66,   -64,   -58,   -48,   160,   157,   162,
     171,   -56,   -67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -52
static const yytype_int16 yytable[] =
{
     100,    82,     9,    92,    92,    93,    94,    33,    14,    17,
      34,    49,    91,    10,     2,     3,    11,    25,     1,    52,
      33,   115,    53,    54,    55,     2,     3,     2,     3,    29,
     100,    43,    30,    61,    62,    27,   114,    44,    23,   118,
     120,     4,    65,    92,    28,    92,    92,    92,    92,    23,
     133,   137,     4,    32,     4,    86,    30,    83,   127,    87,
     144,   128,   -51,   128,   134,   -51,    95,   104,    18,   105,
      84,   -51,    20,   151,   152,   153,   154,   107,   108,    21,
     -51,   -51,   -51,   -51,   160,   -51,   -51,   -51,    26,   149,
      31,    28,   164,   165,    38,   166,   167,    48,    39,    33,
      40,    49,    45,    40,    50,    51,     2,     3,    42,    52,
      46,    47,    53,    54,    55,    56,    57,    58,    59,    60,
      77,    79,    80,    61,    62,    81,    48,    85,    33,    88,
      49,    89,    40,     4,    51,     2,     3,   102,    52,   101,
      97,    53,    54,    55,    56,    57,    58,    59,    60,   106,
     109,    48,    61,    62,   103,    49,   110,    40,    99,    51,
     111,   112,     4,    52,   116,   121,    53,    54,    55,    56,
      57,    58,    59,    60,   122,    48,   123,    61,    62,    49,
     126,    40,   125,    51,   135,   136,   138,    52,   139,   140,
      53,    54,    55,    56,    57,    58,    59,    60,   141,    48,
     142,    61,    62,    49,   145,    40,   143,    51,   146,   150,
     155,    52,   147,   105,    53,    54,    55,    56,    57,    58,
      59,    60,   156,    48,   157,    61,    62,    49,   163,    90,
     158,    51,   159,    49,   168,    52,    15,   161,    53,    54,
      55,    52,   162,    12,    53,    54,    55,   113,    41,    61,
      62,    49,    78,   117,    96,    61,    62,    49,   124,    52,
     130,   129,    53,    54,    55,    52,   131,     0,    53,    54,
      55,   119,     0,    61,    62,    49,   132,   148,     0,    61,
      62,    49,     0,    52,     0,     0,    53,    54,    55,    52,
      13,    16,    53,    54,    55,     0,    22,    61,    62,    24,
       0,     0,     0,    61,    62
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      66,    49,     0,    61,    62,    61,    62,     3,     6,     7,
       6,     5,    60,     4,    10,    11,     0,    15,     3,    13,
       3,    85,    16,    17,    18,    10,    11,    10,    11,     9,
      96,     6,    12,    27,    28,     5,    84,    12,    14,    87,
      88,    37,    40,   101,    14,   103,   104,   105,   106,    25,
     106,   115,    37,     9,    37,     1,    12,     1,     9,     5,
       9,    12,     6,    12,   112,     9,    64,    25,    13,    27,
      14,    15,     5,   139,   140,   141,   142,    30,    31,     3,
      24,    25,    26,    27,   150,    29,    30,    31,    13,   137,
       6,    14,   158,   159,    16,   161,   162,     1,    13,     3,
       7,     5,    13,     7,     8,     9,    10,    11,     9,    13,
      15,    14,    16,    17,    18,    19,    20,    21,    22,    23,
       9,    14,    16,    27,    28,     9,     1,     5,     3,     5,
       5,     5,     7,    37,     9,    10,    11,     9,    13,    26,
      13,    16,    17,    18,    19,    20,    21,    22,    23,    29,
      15,     1,    27,    28,    24,     5,    15,     7,     8,     9,
       6,    14,    37,    13,     5,    13,    16,    17,    18,    19,
      20,    21,    22,    23,     9,     1,     9,    27,    28,     5,
      14,     7,     8,     9,    15,    15,     1,    13,     6,     6,
      16,    17,    18,    19,    20,    21,    22,    23,     6,     1,
       6,    27,    28,     5,    16,     7,     6,     9,    13,     6,
       9,    13,    15,    27,    16,    17,    18,    19,    20,    21,
      22,    23,    15,     1,    14,    27,    28,     5,    16,     1,
       6,     9,     6,     5,    15,    13,     7,    33,    16,    17,
      18,    13,    33,     6,    16,    17,    18,     1,    31,    27,
      28,     5,    44,     1,    64,    27,    28,     5,    95,    13,
     103,   101,    16,    17,    18,    13,   104,    -1,    16,    17,
      18,     1,    -1,    27,    28,     5,   105,     1,    -1,    27,
      28,     5,    -1,    13,    -1,    -1,    16,    17,    18,    13,
       6,     7,    16,    17,    18,    -1,    12,    27,    28,    15,
      -1,    -1,    -1,    27,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    11,    37,    44,    45,    47,    50,    53,
       4,     0,    47,    50,    53,    45,    50,    53,    13,    46,
       5,     3,    50,    46,    50,    53,    13,     5,    14,     9,
      12,     6,     9,     3,     6,    48,    49,    53,    16,    13,
       7,    51,     9,     6,    12,    13,    15,    14,     1,     5,
       8,     9,    13,    16,    17,    18,    19,    20,    21,    22,
      23,    27,    28,    51,    52,    53,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     9,    49,    14,
      16,     9,    59,     1,    14,     5,     1,     5,     5,     5,
       1,    59,    58,    64,    64,    53,    55,    13,    54,     8,
      56,    26,     9,    24,    25,    27,    29,    30,    31,    15,
      15,     6,    14,     1,    59,    57,     5,     1,    59,     1,
      59,    13,     9,     9,    54,     8,    14,     9,    12,    60,
      61,    62,    63,    64,    59,    15,    15,    57,     1,     6,
       6,     6,     6,     6,     9,    16,    13,    15,     1,    59,
       6,    56,    56,    56,    56,     9,    15,    14,     6,     6,
      56,    33,    33,    16,    56,    56,    56,    56,    15
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 39 "1305115.y"
    { fprintf(output,"global: global_var_declaration Program \n\n");globalflag=100; }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 40 "1305115.y"
    { fprintf(output,"global: global_var_declaration function Program \n\n");globalflag=100;}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 41 "1305115.y"
    { fprintf(output,"global: function global_var_declaration Program \n\n");globalflag=100;}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 42 "1305115.y"
    { fprintf(output,"global: function Program \n\n"); globalflag=100;}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 43 "1305115.y"
    { fprintf(output,"global: Program\n\n");globalflag=0;}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 46 "1305115.y"
    { fprintf(output,"global_var_declaration : type_specifier globaldeclaration_list SEMICOLON\n\n"); globalflag=0;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 50 "1305115.y"
    {fprintf(output,"global_var_declaration : global_var_declaration type_specifier global_declaration_list SEMICOLON  \n\n"); globalflag=0;}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 53 "1305115.y"
    { 
		fprintf(output,"global_declaration_list  : global_declaration_list COMMA ID\n\n\n");globalflag=140;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 56 "1305115.y"
    {fprintf(output,"global_declaration_list  : global_declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n");globalflag=140;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 58 "1305115.y"
    {fprintf(output,"global_declaration_list  : ID LTHIRD CONST_INT RTHIRD\n");globalflag=140;}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 59 "1305115.y"
    {fprintf(output,"global_declaration_list  : ID \n\n");globalflag=140;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 63 "1305115.y"
    { fprintf(output,"function: type_specifier ID LPAREN RPAREN SEMICOLON \n\n");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 65 "1305115.y"
    {fprintf(output,"function: type_specifier ID LPAREN param_list RPAREN SEMICOLON \n\n");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 67 "1305115.y"
    {fprintf(output,"param_list : param_list COMMA list\n\n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 68 "1305115.y"
    {fprintf(output,"param_list : list\n\n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 70 "1305115.y"
    {fprintf(output,"list : type_specifier ID\n\n");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 71 "1305115.y"
    {fprintf(output,"list : type_specifier ID LTHIRD RTHIRD\n\n");}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 74 "1305115.y"
    { fprintf(output,"program : INT MAIN LPAREN RPAREN compound_statement\n\n");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 79 "1305115.y"
    { globalflag=0;fprintf(output,"compound_statement : LCURL var_declaration statements RCURL\n\n");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 80 "1305115.y"
    { fprintf(output,"compound_statement : LCURL statements RCURL\n\n");}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 81 "1305115.y"
    { fprintf(output,"compound_statement : LCURL RCURL \n\n");}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 86 "1305115.y"
    { fprintf(output,"var_declaration : type_specifier declaration_list SEMICOLON\n\n");globalflag=0; }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 88 "1305115.y"
    { fprintf(output,"var_declaration : var_declaration type_specifier declaration_list SEMICOLON  \n\n"); globalflag=0;}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 91 "1305115.y"
    { fprintf(output,"type_specifier  : INT \n\n"); {cmp="int";}}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 92 "1305115.y"
    { fprintf(output,"type_specifier  : FLOAT\n\n");   {cmp="float";}}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 93 "1305115.y"
    { fprintf(output,"type_specifier : CHAR \n\n"); {cmp="char";}}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 94 "1305115.y"
    { fprintf(output,"type_specifier : VOID \n\n"); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 97 "1305115.y"
    { 
		fprintf(output,"declaration_list  : declaration_list COMMA ID\n%s\n\n",(yyvsp[(3) - (3)])->name.c_str()); 
		globalflag=0;
		idcheck=table->lookOut((yyvsp[(3) - (3)])->name);
	if(idcheck==Null){
				
					if(strcmp(cmp.c_str(),"int")==0)
					{
					(yyvsp[(3) - (3)])->data=integer;
					(yyvsp[(3) - (3)])->val.i=-99999;
					(yyvsp[(3) - (3)])->position=0;
					table->insertItem((yyvsp[(3) - (3)]));
					}
					else if(strcmp(cmp.c_str(),"float")==0)
					{
					(yyvsp[(3) - (3)])->data=floating;
					(yyvsp[(3) - (3)])->val.f=-99999.000;
					(yyvsp[(3) - (3)])->position=0;
					table->insertItem((yyvsp[(3) - (3)]));
					}
					else if(strcmp(cmp.c_str(),"char")==0)
					{
					(yyvsp[(3) - (3)])->data=character; 
					(yyvsp[(3) - (3)])->val.c='0';
					(yyvsp[(3) - (3)])->position=0;
					table->insertItem((yyvsp[(3) - (3)]));
					}
			}
			else{
				char errorarr[30]="Multiple Declaration";
				strcat(errorarr,(yyvsp[(3) - (3)])->name.c_str());							
				yyerror(errorarr);}
					
					}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 132 "1305115.y"
    {fprintf(output,"declaration_list  : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n %s\n\n",
				(yyvsp[(3) - (6)])->name.c_str());
				globalflag=0;
		idcheck=table->lookOut((yyvsp[(3) - (6)])->name);
		if(idcheck==Null){
				//printf("*** %d ***\n",$5->val.i);
				if(strcmp(cmp.c_str(),"int")==0)
				{
				(yyvsp[(3) - (6)])->data=integer; 
				(yyvsp[(3) - (6)])->arraysz=(yyvsp[(5) - (6)])->val.i;
				(yyvsp[(3) - (6)])->val.arrayi=(int*)malloc(((yyvsp[(3) - (6)])->arraysz)*sizeof(int));
				for(int k=0;k<(yyvsp[(3) - (6)])->arraysz;k++){(yyvsp[(3) - (6)])->val.arrayi[k]=-1;}
				}
				else if(strcmp(cmp.c_str(),"float")==0)
				{
				(yyvsp[(3) - (6)])->data=floating; 
				(yyvsp[(3) - (6)])->arraysz=(yyvsp[(5) - (6)])->val.i;
				(yyvsp[(3) - (6)])->val.arrayf=(float*)malloc(((yyvsp[(3) - (6)])->arraysz)*sizeof(float));
				for(int k=0;k<(yyvsp[(3) - (6)])->arraysz;k++){(yyvsp[(3) - (6)])->val.arrayf[k]=-1;}
				}
				else if(strcmp(cmp.c_str(),"char")==0)
				{	
				(yyvsp[(3) - (6)])->data=character; 
				(yyvsp[(3) - (6)])->arraysz=(yyvsp[(5) - (6)])->val.i;
				(yyvsp[(3) - (6)])->val.arrayc=(char*)malloc(((yyvsp[(3) - (6)])->arraysz)*sizeof(char));
				for(int k=0;k<(yyvsp[(3) - (6)])->arraysz;k++){(yyvsp[(3) - (6)])->val.arrayc[k]=-1;}
				}
				table->insertItem((yyvsp[(3) - (6)]));	
			}
	else{
		char errorarr[30]="Multiple Declaration : ";
		strcat(errorarr,(yyvsp[(3) - (6)])->name.c_str());							
		yyerror(errorarr);	
	}	
		}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 167 "1305115.y"
    { 
			fprintf(output,"declaration_list  : ID \n%s\n\n",(yyvsp[(1) - (1)])->name.c_str());
	globalflag=0;
	idcheck=table->lookOut((yyvsp[(1) - (1)])->name);
	if(idcheck==Null){ 
				if(strcmp(cmp.c_str(),"int")==0)
				{
				(yyvsp[(1) - (1)])->data=integer; 
				(yyvsp[(1) - (1)])->val.i=-99999;
				table->insertItem((yyvsp[(1) - (1)]));
				}
				else if(strcmp(cmp.c_str(),"float")==0)
				{
				(yyvsp[(1) - (1)])->data=floating; 
				(yyvsp[(1) - (1)])->val.f=-99999.000;
				table->insertItem((yyvsp[(1) - (1)]));
				}
				else if(strcmp(cmp.c_str(),"char")==0)
				{
				(yyvsp[(1) - (1)])->data=character; 
				(yyvsp[(1) - (1)])->val.c=-999;
				table->insertItem((yyvsp[(1) - (1)]));
				}
			}
		else{
			char errorarr[30]="Multiple Declaration : ";
			strcat(errorarr,(yyvsp[(1) - (1)])->name.c_str());							
			yyerror(errorarr);			
			}
		      }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 197 "1305115.y"
    { 
			fprintf(output,"declaration_list  : ID LTHIRD CONST_INT RTHIRD \n%s\n\n",(yyvsp[(1) - (4)])->name.c_str()); 
			printf("%s\n",(yyvsp[(1) - (4)])->name.c_str());
	globalflag=0;
	idcheck=table->lookOut((yyvsp[(1) - (4)])->name);
	if(idcheck==Null){

			//printf("*** %d ***\n",$3->val.i);
			if(strcmp(cmp.c_str(),"int")==0)
			{
			(yyvsp[(1) - (4)])->data=integer; 
			(yyvsp[(1) - (4)])->arraysz=(yyvsp[(3) - (4)])->val.i;
			(yyvsp[(1) - (4)])->val.arrayi=(int*)malloc(((yyvsp[(1) - (4)])->arraysz)*sizeof(int));
			for(int k=0;k<(yyvsp[(1) - (4)])->arraysz;k++){(yyvsp[(1) - (4)])->val.arrayi[k]=-1;}
			}
			else if(strcmp(cmp.c_str(),"float")==0)
			{
			(yyvsp[(1) - (4)])->data=floating; 
			(yyvsp[(1) - (4)])->arraysz=(yyvsp[(3) - (4)])->val.i;
			(yyvsp[(1) - (4)])->val.arrayf=(float*)malloc(((yyvsp[(1) - (4)])->arraysz)*sizeof(float));
			for(int k=0;k<(yyvsp[(1) - (4)])->arraysz;k++){(yyvsp[(1) - (4)])->val.arrayf[k]=-1;}
			}
			else if(strcmp(cmp.c_str(),"char")==0)
			{
			(yyvsp[(1) - (4)])->data=character; 
			(yyvsp[(1) - (4)])->arraysz=(yyvsp[(3) - (4)])->val.i;
			(yyvsp[(1) - (4)])->val.arrayc=(char*)malloc(((yyvsp[(1) - (4)])->arraysz)*sizeof(char));
			for(int k=0;k<(yyvsp[(1) - (4)])->arraysz;k++){(yyvsp[(1) - (4)])->val.arrayc[k]=-1;}
			}
		table->insertItem((yyvsp[(1) - (4)]));
		}
else{

	char errorarr[30]="Multiple Declaration : ";
	strcat(errorarr,(yyvsp[(1) - (4)])->name.c_str());							
	yyerror(errorarr);
	}
}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 236 "1305115.y"
    { fprintf(output,"statements  : statement\n\n"); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 237 "1305115.y"
    { fprintf(output,"statements  : statements statement\n\n"); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 241 "1305115.y"
    { fprintf(output,"statement  : expression_statement\n\n"); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 242 "1305115.y"
    { fprintf(output,"statement  : compound_statement \n\n"); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 249 "1305115.y"
    { fprintf(output,"statement  : FOR LPAREN expression_statement expression_statement expression RPAREN statement \n\n"); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 252 "1305115.y"
    { fprintf(output,"statement  : IF LPAREN expression RPAREN statement \n\n"); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 254 "1305115.y"
    { fprintf(output,"statement  : IF LPAREN expression RPAREN statement ELSE statement \n\n"); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 255 "1305115.y"
    { fprintf(output,"statement  : WHILE LPAREN expression RPAREN statement \n\n"); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 256 "1305115.y"
    { 
		fprintf(output,"statement  : PRINTLN LPAREN ID RPAREN SEMICOLON \n\n");
		idprint=table->lookOut((yyvsp[(3) - (5)])->name);
		if(idprint!=Null)
		{	
			if(idprint->data==integer)
				printf("\n\n\nPRINTLN LPAREN ID RPAREN SEMICOLON  %d\n\n\n",idprint->val.i);
			else if(idprint->data==floating)
				printf("\n\n\nPRINTLN LPAREN ID RPAREN SEMICOLON  %f\n\n\n",idprint->val.f); 
			else if(idprint->data==character)
				printf("\n\n\nPRINTLN LPAREN ID RPAREN SEMICOLON  %c\n\n\n",idprint->val.c);
		}
		else {
			char errorarr[30]="Undeclared ID: ";
			strcat(errorarr,(yyvsp[(3) - (5)])->name.c_str());							
			yyerror(errorarr);
		}
		}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 274 "1305115.y"
    { fprintf(output,"statement  : RETURN expression SEMICOLON \n\n"); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 278 "1305115.y"
    { fprintf(output,"expression_statement  : SEMICOLON \n\n"); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 279 "1305115.y"
    { fprintf(output,"expression_statement  : expression SEMICOLON \n\n"); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 283 "1305115.y"
    { fprintf(output,"variable  : ID \n\n"); //printf("type: %d\n",$1->data);
			notget=table->lookOut((yyvsp[(1) - (1)])->name);
			//printf("declared before: %s\n",notget->name.c_str());
			if(notget!=Null)
			{
			(yyval)=notget;
			
			if((yyval)->arraysz!=0){yyerror("Identifier to an array");}
			}
			else
			{
			char errorarr[30]="Undeclared ID: ";
			strcat(errorarr,(yyvsp[(1) - (1)])->name.c_str());							
			yyerror(errorarr);
			}
}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 302 "1305115.y"
    { fprintf(output,"variable  : ID LTHIRD expression RTHIRD\n\n");//printf("Arraytype: %d\n",$1->data); 
			notget=table->lookOut((yyvsp[(1) - (4)])->name);
			
			if(notget!=Null)
			{
				
				if(notget->arraysz>0) 
				{
					printf("declared before1: %s\n",notget->name.c_str());
					ix=(yyvsp[(3) - (4)]);
					printf("here is in assign %d %d\n",ix->val.i,(yyvsp[(3) - (4)])->val.i);
					(yyval)=notget;
					if((yyvsp[(3) - (4)])->data==floating){yyerror("invalid index");}
					else if((yyvsp[(3) - (4)])->val.i>=(yyval)->arraysz || (yyvsp[(3) - (4)])->val.i<0){yyerror("Array Index out of bound");}
				}
				else if(notget->arraysz==0)
					{
					char errorarr[30]="Not an array : ";
					strcat(errorarr,(yyvsp[(1) - (4)])->name.c_str());							
					yyerror(errorarr);
					}
			}
			else
			{
			char errorarr[30]="Undeclared ID: ";
			strcat(errorarr,(yyvsp[(1) - (4)])->name.c_str());							
			yyerror(errorarr);
			}
		}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 332 "1305115.y"
    { fprintf(output,"expression : logic_expression\n\n"); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 333 "1305115.y"
    { fprintf(output,"expression : variable ASSIGNOP logic_expression\n\n"); 
		if((yyvsp[(3) - (3)])->data==invalid){}
		else if(((yyvsp[(1) - (3)])->data==integer||(yyvsp[(1) - (3)])->data==character)&&(yyvsp[(3) - (3)])->data==floating)
 		{yyerror("Type mismatch");}
		//fprintf(output,"Warning::Casting float to integer/character\n\n");}
		else{
			if((yyvsp[(1) - (3)])->arraysz==0){

				if((yyvsp[(3) - (3)])->data==integer)
				{
					(yyvsp[(1) - (3)])->val.i=(yyvsp[(3) - (3)])->val.i;
					(yyvsp[(1) - (3)])->data=(yyvsp[(3) - (3)])->data;
				}
				else if((yyvsp[(3) - (3)])->data==floating)
				{
					(yyvsp[(1) - (3)])->val.f=(yyvsp[(3) - (3)])->val.f;
					(yyvsp[(1) - (3)])->data=(yyvsp[(3) - (3)])->data;
				}
				else if((yyvsp[(3) - (3)])->data==character)
				{
					(yyvsp[(1) - (3)])->val.c=(yyvsp[(3) - (3)])->val.c;
					(yyvsp[(1) - (3)])->data=(yyvsp[(3) - (3)])->data;
				}
				table->print(output);
					}
			else if((yyvsp[(1) - (3)])->arraysz>0)
			{
				if((yyvsp[(3) - (3)])->data==integer)
				{
					(yyvsp[(1) - (3)])->val.arrayi[ix->val.i]=(yyvsp[(3) - (3)])->val.i;
					(yyvsp[(1) - (3)])->data=(yyvsp[(3) - (3)])->data;
				}
				else if((yyvsp[(3) - (3)])->data==floating)
				{
					(yyvsp[(1) - (3)])->val.arrayf[ix->val.i]=(yyvsp[(3) - (3)])->val.f;
					(yyvsp[(1) - (3)])->data=(yyvsp[(3) - (3)])->data;
				}
				else if((yyvsp[(3) - (3)])->data==character)
				{
					(yyvsp[(1) - (3)])->val.arrayc[ix->val.i]=(yyvsp[(3) - (3)])->val.c;
					(yyvsp[(1) - (3)])->data=(yyvsp[(3) - (3)])->data;
				}
			table->print(output);	
			}
		}
		}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 380 "1305115.y"
    { fprintf(output,"logic_expression : rel_expression\n\n"); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 382 "1305115.y"
    { fprintf(output,"logic_expression : rel_expression LOGICOP rel_expression\n\n");
				if((strcmp((yyvsp[(2) - (3)])->name.c_str(),"&&"))==0)
				{
					if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//int&&int
					{
							printf("%d",(yyvsp[(1) - (3)])->val.i);
							if((yyvsp[(1) - (3)])->val.i==0||(yyvsp[(3) - (3)])->val.i==0)
							{
							(yyval)->val.i=0;
							(yyval)->data=integer;
							}
							else
							{
							(yyval)->val.i=1;
							(yyval)->data=integer;
							}
							printf("&&%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int&&float
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if(static_cast<float>((yyvsp[(1) - (3)])->val.i)==0||(yyvsp[(3) - (3)])->val.f==0)
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						printf("&&%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float&&int
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(3) - (3)])->val.i==0||(yyvsp[(1) - (3)])->val.f==0)
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						printf("&&%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float&&float
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f==0||(yyvsp[(3) - (3)])->val.f==0)
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						printf("&&%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
						
				}
				else if((strcmp((yyvsp[(2) - (3)])->name.c_str(),"||"))==0)
				{
					if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//int||int
					{
							printf("%d",(yyvsp[(1) - (3)])->val.i);
							if((yyvsp[(1) - (3)])->val.i==0&&(yyvsp[(3) - (3)])->val.i==0)
							{
							(yyval)->val.i=0;
							(yyval)->data=integer;
							}
							else
							{
							(yyval)->val.i=1;
							(yyval)->data=integer;
							}
							printf("||%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int||float
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if(static_cast<float>((yyvsp[(1) - (3)])->val.i)==0&&(yyvsp[(3) - (3)])->val.f==0)
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						printf("||%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float||int
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(3) - (3)])->val.i==0&&(yyvsp[(1) - (3)])->val.f==0)
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						printf("||%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float||float
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f==0&&(yyvsp[(3) - (3)])->val.f==0)
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						printf("||%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
					
											
				} }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 513 "1305115.y"
    { fprintf(output,"rel_expression : simple_expression\n\n"); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 515 "1305115.y"
    { fprintf(output,"rel_expression : simple_expression RELOP simple_expression\n\n"); 
				if((strcmp((yyvsp[(2) - (3)])->name.c_str(),"<"))==0)
				{					
					if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int<float
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if(static_cast<float>((yyvsp[(1) - (3)])->val.i)<(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("<%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float<int
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if(static_cast<float>((yyvsp[(3) - (3)])->val.i)>(yyvsp[(1) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("<%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//int<int
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if((yyvsp[(1) - (3)])->val.i<(yyvsp[(3) - (3)])->val.i)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("<%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float<float
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f<(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("<%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}				
											
				}
				else if((strcmp((yyvsp[(2) - (3)])->name.c_str(),">")==0))
				{
					if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int>float
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if(static_cast<float>((yyvsp[(1) - (3)])->val.i)>(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf(">%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float>int
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if(static_cast<float>((yyvsp[(3) - (3)])->val.i)<(yyvsp[(1) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf(">%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//int>int
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if((yyvsp[(1) - (3)])->val.i>(yyvsp[(3) - (3)])->val.i)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf(">%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float>float
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f>(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf(">%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
				}
				else if((strcmp((yyvsp[(2) - (3)])->name.c_str(),"<="))==0)
				{
					if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int<=float
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if(static_cast<float>((yyvsp[(1) - (3)])->val.i)<=(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("<=%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float<=int
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f<=static_cast<float>((yyvsp[(3) - (3)])->val.i))
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("<=%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//int<=int
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if((yyvsp[(1) - (3)])->val.i<=(yyvsp[(3) - (3)])->val.i)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("<=%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float<float
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f<=(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("<=%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
				}
				else if((strcmp((yyvsp[(2) - (3)])->name.c_str(),">="))==0)
				{
					if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int>=float
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if(static_cast<float>((yyvsp[(1) - (3)])->val.i)>=(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf(">=%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float>=int
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f>=static_cast<float>((yyvsp[(3) - (3)])->val.i))
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf(">=%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//int>=int
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if((yyvsp[(1) - (3)])->val.i>=(yyvsp[(3) - (3)])->val.i)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf(">=%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float>=float
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f>=(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf(">=%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
				}
				else if((strcmp((yyvsp[(2) - (3)])->name.c_str(),"!="))==0)
				{
					if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int!=float
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if(static_cast<float>((yyvsp[(1) - (3)])->val.i)!=(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("!=%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float!=int
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f!=static_cast<float>((yyvsp[(3) - (3)])->val.i))
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("!=%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//int!=int
					{
						printf("%d",(yyvsp[(1) - (3)])->val.i);
						if((yyvsp[(1) - (3)])->val.i!=(yyvsp[(3) - (3)])->val.i)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("!=%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
					}
					else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float!=float
					{
						printf("%f",(yyvsp[(1) - (3)])->val.f);
						if((yyvsp[(1) - (3)])->val.f!=(yyvsp[(3) - (3)])->val.f)
						{
						(yyval)->val.i=1;
						(yyval)->data=integer;
						}
						else
						{
						(yyval)->val.i=0;
						(yyval)->data=integer;
						}
						printf("!=%f=%d\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
					}
				
				}}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 836 "1305115.y"
    { fprintf(output,"simple_expression : term\n\n");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 838 "1305115.y"
    { fprintf(output,"simple_expression : simple_expression ADDOP term  \n\n"); 
		if((strcmp((yyvsp[(2) - (3)])->name.c_str(),"+"))==0)
		{
			if((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//integer+integer
			{printf("%d",(yyvsp[(1) - (3)])->val.i);
			(yyval)->val.i=(yyvsp[(1) - (3)])->val.i+(yyvsp[(3) - (3)])->val.i;
			(yyval)->data==(yyvsp[(1) - (3)])->data;
			printf("+%d:%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);//why $1 ==$$ in this line???
			}
			else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float+float
			{
			printf("%f",(yyvsp[(1) - (3)])->val.f);
			(yyval)->val.f=(yyvsp[(1) - (3)])->val.f+(yyvsp[(3) - (3)])->val.f;
			(yyval)->data==(yyvsp[(1) - (3)])->data;
			printf("+%f:%f\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.f);
			}
			else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int+float=float
			{
			printf("%f",static_cast<float>((yyvsp[(1) - (3)])->val.i));
			(yyval)->val.f=static_cast<float>((yyvsp[(1) - (3)])->val.i)+(yyvsp[(3) - (3)])->val.f;
			(yyval)->data==(yyvsp[(3) - (3)])->data;
			printf("+%f:%f\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.f);
			}
			else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//int+float=float
			{
			printf("%f",(yyvsp[(1) - (3)])->val.f);
			(yyval)->val.f=static_cast<float>((yyvsp[(3) - (3)])->val.i)+(yyvsp[(1) - (3)])->val.f;
			(yyval)->data==(yyvsp[(1) - (3)])->data;
			printf("+%f:%f\n",static_cast<float>((yyvsp[(3) - (3)])->val.i),(yyval)->val.f);
			}
				
		} 
		else if((strcmp((yyvsp[(2) - (3)])->name.c_str(),"-"))==0)
		{
			if((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//integer-integer=int
			{
			printf("%d",(yyvsp[(1) - (3)])->val.i);
			(yyval)->val.i=(yyvsp[(1) - (3)])->val.i-(yyvsp[(3) - (3)])->val.i;
			(yyval)->data==(yyvsp[(1) - (3)])->data;
			printf("-%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
			}
			else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float-float=float
			{
			printf("%f",(yyvsp[(1) - (3)])->val.f);
			(yyval)->val.f=(yyvsp[(1) - (3)])->val.f-(yyvsp[(3) - (3)])->val.f;
			(yyval)->data==(yyvsp[(1) - (3)])->data;
			printf("-%f=%f\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.f);
			}
			else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//int-float=float
			{
			printf("%f",static_cast<float>((yyvsp[(1) - (3)])->val.i));
			(yyval)->val.f=static_cast<float>((yyvsp[(1) - (3)])->val.i)-(yyvsp[(3) - (3)])->val.f;
			(yyval)->data==(yyvsp[(3) - (3)])->data;
			printf("-%f=%f\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.f);
			}
			else if ((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float-int=float
			{
			printf("%f",(yyvsp[(1) - (3)])->val.f);
			(yyval)->val.f=(yyvsp[(1) - (3)])->val.f-static_cast<float>((yyvsp[(3) - (3)])->val.i);
			(yyval)->data==(yyvsp[(1) - (3)])->data;
			printf("-%f=%f\n",static_cast<float>((yyvsp[(3) - (3)])->val.i),(yyval)->val.f);
			}
 
		} }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 903 "1305115.y"
    { fprintf(output,"term : unary_expression\n\n");}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 904 "1305115.y"
    { fprintf(output,"term : term MULOP unary_expression\n\n");
		if((strcmp((yyvsp[(2) - (3)])->name.c_str(),"*")==0))
			{
				if((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//integer is multipllied by integer
				{
				printf("%d",(yyvsp[(1) - (3)])->val.i);
				(yyval)->val.i=(yyvsp[(1) - (3)])->val.i*(yyvsp[(3) - (3)])->val.i;(yyval)->data=(yyvsp[(1) - (3)])->data;
				printf("*%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
				}
				else if((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float is multipllied by float
				{
				printf("%f",(yyvsp[(1) - (3)])->val.f);
				(yyval)->val.f=(yyvsp[(1) - (3)])->val.f*(yyvsp[(3) - (3)])->val.f;(yyval)->data=(yyvsp[(1) - (3)])->data;
				printf("*%f=%f\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.f);
				}
				else if((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)//integer is multiplied by float
				{
				printf("%d",(yyvsp[(1) - (3)])->val.i);
				(yyval)->val.f=static_cast<float>((yyvsp[(1) - (3)])->val.i)*((yyvsp[(3) - (3)])->val.f);
				(yyval)->data=(yyvsp[(3) - (3)])->data;
				printf("*%f=%f\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.i);
				}
				else if((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float*float
				{
				printf("%f",(yyvsp[(1) - (3)])->val.f);
				(yyval)->val.f=((yyvsp[(1) - (3)])->val.f)*static_cast<float>((yyvsp[(3) - (3)])->val.i);
				(yyval)->data=(yyvsp[(1) - (3)])->data;
				printf("*%d=%f\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.f);
				}
					
			} 
		else if (strcmp((yyvsp[(2) - (3)])->name.c_str(),"%")==0)
			{
				if ((yyvsp[(1) - (3)])->data!=integer||(yyvsp[(3) - (3)])->data!=integer){(yyval)->data=invalid;yyerror("invalid operands for modulo");}
				else if ((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//other cases are not acceptable
				{
				printf("%d",(yyvsp[(1) - (3)])->val.i);
				(yyval)->val.i=((yyvsp[(1) - (3)])->val.i)%((yyvsp[(3) - (3)])->val.i);
				(yyval)->data=(yyvsp[(1) - (3)])->data;
				printf(" %d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
				};
			}
		else {
				if((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==integer)//integer is divided by integer
				{
				printf("%d",(yyvsp[(1) - (3)])->val.i);
				(yyval)->val.i=((yyvsp[(1) - (3)])->val.i)/((yyvsp[(3) - (3)])->val.i);
				(yyval)->data=(yyvsp[(1) - (3)])->data;
				printf("/%d=%d\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.i);
				}
				else if((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==floating)//float is divided by float
				{
				printf("%f",(yyvsp[(1) - (3)])->val.f);
				(yyval)->val.f=(yyvsp[(1) - (3)])->val.f/(yyvsp[(3) - (3)])->val.f;(yyval)->data=(yyvsp[(1) - (3)])->data;
				printf("/%f=%f\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.f);
				}
				else if((yyvsp[(1) - (3)])->data==integer&&(yyvsp[(3) - (3)])->data==floating)	//integer is divided by float
				{
				printf("%d",(yyvsp[(1) - (3)])->val.i);
				(yyval)->val.f=static_cast<float>((yyvsp[(1) - (3)])->val.i)/((yyvsp[(3) - (3)])->val.f);
				(yyval)->data=(yyvsp[(3) - (3)])->data;
				printf("/%f=%f\n",(yyvsp[(3) - (3)])->val.f,(yyval)->val.f);
				}
				else if((yyvsp[(1) - (3)])->data==floating&&(yyvsp[(3) - (3)])->data==integer)//float is divided by integer
				{
				printf("%f",(yyvsp[(1) - (3)])->val.f);
				(yyval)->val.f=((yyvsp[(1) - (3)])->val.f)/static_cast<float>((yyvsp[(3) - (3)])->val.i);
				(yyval)->data=(yyvsp[(1) - (3)])->data;
				printf("/%d=%f\n",(yyvsp[(3) - (3)])->val.i,(yyval)->val.f);
				}
		      }	}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 977 "1305115.y"
    { fprintf(output,"unary_expression : ADDOP unary_expression \n\n"); 
		if((strcmp((yyvsp[(1) - (2)])->name.c_str(),"+")==0))
			{
				if((yyvsp[(2) - (2)])->data==integer)
				{
				(yyval)->val.i=(yyvsp[(2) - (2)])->val.i;
				(yyval)->data==(yyvsp[(2) - (2)])->data;
				}
				else if ((yyvsp[(2) - (2)])->data==floating)
				{
				(yyval)->val.f=(yyvsp[(2) - (2)])->val.f;
				(yyval)->data==(yyvsp[(2) - (2)])->data;
				}
			} 
		else {
				if((yyvsp[(2) - (2)])->data==integer)
				{
				(yyval)->val.i=((yyvsp[(2) - (2)])->val.i)*(-1);
				(yyval)->data==(yyvsp[(2) - (2)])->data;
				}
				else if ((yyvsp[(2) - (2)])->data==floating)	
				{
				(yyval)->val.f=((yyvsp[(2) - (2)])->val.f)*(-1);
				(yyval)->data==(yyvsp[(2) - (2)])->data;
				}
		     }
		}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 1005 "1305115.y"
    { fprintf(output,"unary_expression : NOT unary_expression \n\n");
				(yyval)->data==(yyvsp[(2) - (2)])->data;
				if((yyvsp[(2) - (2)])->data==integer)//!5=0 !0=1
				{
					if((yyvsp[(2) - (2)])->val.i==0)
					{
					(yyval)->val.i=1;
					}
					else
					{
					(yyval)->val.i=0;
					}
				}
				else if ((yyvsp[(2) - (2)])->data==floating)
				{
					if((yyvsp[(2) - (2)])->val.f==0)
					{
					(yyval)->val.f=1.0;
					}
					else
					{
					(yyval)->val.f=0;
					}
				}
			}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 1030 "1305115.y"
    { fprintf(output,"unary_expression : factor\n\n");
				(yyval)=new symbolInfo((yyvsp[(1) - (1)])->name,(yyvsp[(1) - (1)])->type,(yyvsp[(1) - (1)])->position);
				(yyval)->data=(yyvsp[(1) - (1)])->data;
				(yyval)->arraysz=(yyvsp[(1) - (1)])->arraysz;
				if((yyval)->arraysz==0)
				{
					printf("normal factor\n ");
					if((yyvsp[(1) - (1)])->data==integer)
					{
					(yyval)->val.i=(yyvsp[(1) - (1)])->val.i;
					}
					else if((yyvsp[(1) - (1)])->data==floating)
					{
					(yyval)->val.f=(yyvsp[(1) - (1)])->val.f;
					}
					else if((yyvsp[(1) - (1)])->data==character)
					{
					(yyval)->val.c=(yyvsp[(1) - (1)])->val.c;
					}
				}
				else
				{
					printf("array factor\n ");
					if((yyvsp[(1) - (1)])->data==integer)
					{
					(yyval)->val.i=(yyvsp[(1) - (1)])->val.arrayi[ix->val.i];
					}
					else if((yyvsp[(1) - (1)])->data==floating)
					{
					(yyval)->val.f=(yyvsp[(1) - (1)])->val.arrayf[ix->val.i];
					}
					else if((yyvsp[(1) - (1)])->data==character)
					{
					(yyval)->val.c=(yyvsp[(1) - (1)])->val.arrayc[ix->val.i];
					}
			} }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 1067 "1305115.y"
    { fprintf(output,"factor : variable\n\n");}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 1068 "1305115.y"
    {
				 fprintf(output,"factor : LPAREN expression RPAREN\n\n");
				 (yyval)=(yyvsp[(2) - (3)]);
				   }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 1072 "1305115.y"
    { 
			fprintf(output,"factor : CONST_INT\n%d\n\n",(yyvsp[(1) - (1)])->val.i);
			(yyval)=(yyvsp[(1) - (1)]);
			//printf("int::%d\n ",$$->val.i);
		    }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 1077 "1305115.y"
    { 
			fprintf(output,"factor : CONST_FLOAT\n%s\n\n",(yyvsp[(1) - (1)])->name.c_str());
			(yyval)=(yyvsp[(1) - (1)]);
			//printf("float::%f \n ",$$->val.f);
			}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 1082 "1305115.y"
    { 
		fprintf(output,"factor : CONST_CHAR\n%s\n\n",(yyvsp[(1) - (1)])->name.c_str());
			(yyval)=(yyvsp[(1) - (1)]);
			}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 1086 "1305115.y"
    { fprintf(output,"factor : factor INCOP\n\n\n"); 
	if((yyvsp[(1) - (2)])->arraysz==0){
		if((yyvsp[(1) - (2)])->data==integer)
			{
			(yyvsp[(1) - (2)])->val.i++;
			(yyval)=(yyvsp[(1) - (2)]);
			printf("\nfartor++ %d\n",(yyval)->val.i);
			}
		else if((yyvsp[(1) - (2)])->data==floating)
			{
			(yyvsp[(1) - (2)])->val.f++;
			(yyval)=(yyvsp[(1) - (2)]);
			}
		else if((yyvsp[(1) - (2)])->data==character)
			{
			(yyvsp[(1) - (2)])->val.c++;
			(yyval)=(yyvsp[(1) - (2)]);
			}
	}

	else
		{
				if((yyvsp[(1) - (2)])->data==integer)
					{
					(yyvsp[(1) - (2)])->val.arrayi[ix->val.i]++;
					(yyval)=(yyvsp[(1) - (2)]);
					printf("\nfactor-- %d\n",(yyval)->val.i);
					}
				else if((yyvsp[(1) - (2)])->data==floating)
					{
					(yyvsp[(1) - (2)])->val.arrayf[ix->val.i]++;
					(yyval)=(yyvsp[(1) - (2)]);
					printf("\nfactor-- %f\n",(yyval)->val.f);
					}
				else if((yyvsp[(1) - (2)])->data==character)
					{
					(yyvsp[(1) - (2)])->val.arrayc[ix->val.i]++;
					(yyval)=(yyvsp[(1) - (2)]);
					printf("\nfactor-- %c\n",(yyval)->val.c);
					}
		}			
 			}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 1128 "1305115.y"
    { fprintf(output,"factor : factor DECOP\n\n");
		if((yyvsp[(1) - (2)])->arraysz==0){ 
				if((yyvsp[(1) - (2)])->data==integer)
					{
					(yyvsp[(1) - (2)])->val.i--;
					(yyval)=(yyvsp[(1) - (2)]);
					printf("\nfactor-- %d\n",(yyval)->val.i);
					}
				else if((yyvsp[(1) - (2)])->data==floating)
					{
					(yyvsp[(1) - (2)])->val.f--;
					(yyval)=(yyvsp[(1) - (2)]);
					}
				else if((yyvsp[(1) - (2)])->data==character)
					{
					(yyvsp[(1) - (2)])->val.c--;
					(yyval)=(yyvsp[(1) - (2)]);
					}
				}
		else
		{
				if((yyvsp[(1) - (2)])->data==integer)
					{
					(yyvsp[(1) - (2)])->val.arrayi[ix->val.i]--;
					(yyval)=(yyvsp[(1) - (2)]);
					printf("\nfactor-- %d\n",(yyval)->val.i);
					}
				else if((yyvsp[(1) - (2)])->data==floating)
					{
					(yyvsp[(1) - (2)])->val.arrayf[ix->val.i]--;
					(yyval)=(yyvsp[(1) - (2)]);
					printf("\nfactor-- %f\n",(yyval)->val.f);
					}
				else if((yyvsp[(1) - (2)])->data==character)
					{
					(yyvsp[(1) - (2)])->val.arrayc[ix->val.i]--;
					(yyval)=(yyvsp[(1) - (2)]);
					printf("\nfactor-- %c\n",(yyval)->val.c);
					}
		}		
			}
    break;


/* Line 1792 of yacc.c  */
#line 2997 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 1170 "1305115.y"


int main(int argc,char *argv[])
{

	extern FILE* yyin;	
	if(argc!=2)
		{
		printf("Please provide input file name and try again\n");
		return 0;
		}
	FILE *input=fopen(argv[1],"r");
	if(input==NULL){
		printf("cannot open the file\n");
		return 0;
		}
	output= fopen("1305115_output.txt","w");
	yyin= input;
    	yyparse();
	printf("\nline   %d\n",line);
	fprintf(output,"\nLine   : %d\n\n",line);
	fprintf(output,"\nError   : %d\n\n",error);
	fprintf(output,"\n\nSymbol Table\n\n");
	table->print(output);
	fclose(yyin);
	fclose(output);
    exit(0);
return 0;
}
