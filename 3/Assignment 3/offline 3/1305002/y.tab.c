/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "pa.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "1305002_SymbolTable.h"
#define YYSTYPE symbolInfo*
//int yydebug;
int yyparse(void);
int yylex(void);

symbolTable* table1 = new symbolTable(13);
symbolTable* table2 = new symbolTable(31);
extern int line_count;
extern int error_count;
FILE *out;
symbolInfo *sm = new symbolInfo();
symbolInfo *multiple = new symbolInfo();
symbolInfo *arr_ind = new symbolInfo();
symbolInfo *pr_id = new symbolInfo();
symbolInfo *asgn = new symbolInfo();
int scope=1;

void yyerror(const char *s)
{
	fprintf(stderr,"****error at line %d: %s\n",line_count,s);
	fprintf(out,"****error at line %d: %s\n",line_count,s);
	error_count++;
	return;
}


#line 98 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    WHITESPACE = 258,
    NEWLINE = 259,
    IF = 260,
    ELSE = 261,
    FOR = 262,
    WHILE = 263,
    DO = 264,
    BREAK = 265,
    INT = 266,
    CHAR = 267,
    FLOAT = 268,
    DOUBLE = 269,
    MAIN = 270,
    VOID = 271,
    RETURN = 272,
    SWITCH = 273,
    CASE = 274,
    DEFAULT = 275,
    CONTINUE = 276,
    PRINTLN = 277,
    ADDOP = 278,
    MULOP = 279,
    INCOP = 280,
    DECOP = 281,
    RELOP = 282,
    ASSIGNOP = 283,
    LOGICOP = 284,
    NOT = 285,
    LPAREN = 286,
    RPAREN = 287,
    LCURL = 288,
    RCURL = 289,
    LTHIRD = 290,
    RTHIRD = 291,
    COMMA = 292,
    SEMICOLON = 293,
    CONST_INT = 294,
    CONST_FLOAT = 295,
    CONST_CHAR = 296,
    ID = 297,
    LOWER_THAN_ELSE = 298
  };
#endif
/* Tokens.  */
#define WHITESPACE 258
#define NEWLINE 259
#define IF 260
#define ELSE 261
#define FOR 262
#define WHILE 263
#define DO 264
#define BREAK 265
#define INT 266
#define CHAR 267
#define FLOAT 268
#define DOUBLE 269
#define MAIN 270
#define VOID 271
#define RETURN 272
#define SWITCH 273
#define CASE 274
#define DEFAULT 275
#define CONTINUE 276
#define PRINTLN 277
#define ADDOP 278
#define MULOP 279
#define INCOP 280
#define DECOP 281
#define RELOP 282
#define ASSIGNOP 283
#define LOGICOP 284
#define NOT 285
#define LPAREN 286
#define RPAREN 287
#define LCURL 288
#define RCURL 289
#define LTHIRD 290
#define RTHIRD 291
#define COMMA 292
#define SEMICOLON 293
#define CONST_INT 294
#define CONST_FLOAT 295
#define CONST_CHAR 296
#define ID 297
#define LOWER_THAN_ELSE 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    45,    47,    49,    51,    54,    56,    59,
      89,   125,   126,   155,   191,   193,   195,   197,   198,   199,
     201,   205,   207,   209,   210,   212,   213,   216,   221,   225,
     229,   235,   237,   241,   244,   247,   252,   281,   317,   346,
     382,   383,   386,   387,   391,   392,   393,   395,   396,   398,
     399,   401,   402,   404,   405,   422,   424,   427,   428,   429,
     432,   446,   473,   476,   477,   524,   525,   573,   574,   706,
     707,   754,   755,   821,   829,   834,   856,   857,   858,   861,
     864,   867,   881
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHITESPACE", "NEWLINE", "IF", "ELSE",
  "FOR", "WHILE", "DO", "BREAK", "INT", "CHAR", "FLOAT", "DOUBLE", "MAIN",
  "VOID", "RETURN", "SWITCH", "CASE", "DEFAULT", "CONTINUE", "PRINTLN",
  "ADDOP", "MULOP", "INCOP", "DECOP", "RELOP", "ASSIGNOP", "LOGICOP",
  "NOT", "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "COMMA",
  "SEMICOLON", "CONST_INT", "CONST_FLOAT", "CONST_CHAR", "ID",
  "LOWER_THAN_ELSE", "$accept", "Start", "global_var_declaration",
  "global_dec_list", "func_declaration", "Parameter_List", "Parameter",
  "Program", "compound_statement", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -104

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-104)))

#define YYTABLE_NINF -61

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,    41,  -104,  -104,    10,    27,    19,    83,  -104,    12,
      -2,    61,    67,  -104,    94,  -104,    12,    83,  -104,    30,
      78,    49,     6,   103,   123,     9,    41,  -104,    63,  -104,
      30,   101,   136,    91,    11,    96,  -104,   112,   114,  -104,
    -104,   116,   -13,  -104,    13,  -104,   125,   117,    -9,   129,
     131,   143,   109,  -104,   165,  -104,   149,   164,   153,   159,
     195,  -104,   160,  -104,  -104,    25,   161,    14,    15,    16,
      48,   166,   130,   130,   130,  -104,  -104,  -104,  -104,  -104,
     282,  -104,   151,   162,   178,  -104,  -104,   174,   167,  -104,
     177,    59,   179,  -104,    86,   169,  -104,  -104,   209,   186,
     175,  -104,   187,   188,  -104,   183,   130,   184,    35,   198,
     130,   192,   193,   190,  -104,  -104,  -104,   194,   199,   130,
     162,   220,    32,    81,  -104,  -104,   130,  -104,   130,   130,
     130,   130,  -104,  -104,  -104,   197,  -104,  -104,  -104,  -104,
     234,   204,    35,    35,   237,   207,  -104,  -104,   208,  -104,
     240,   210,    92,  -104,   212,   205,   203,  -104,  -104,  -104,
     179,   225,  -104,  -104,   217,   262,    35,   130,   223,   262,
     214,   221,  -104,  -104,   255,   228,    90,   262,   259,   265,
     236,   262,  -104,  -104,  -104,   235,  -104,   238,   233,   268,
     262,   243,   262,  -104,  -104,   275,   241,   262,  -104,   262,
    -104,   242,  -104,  -104,  -104,  -104
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    33,    35,    34,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     1,     0,     5,     0,     0,     4,     0,
       0,    12,     0,     0,     0,     0,     0,     3,     0,     2,
       0,    12,     0,     0,     0,     0,     7,     0,     0,    33,
      26,     0,     0,    22,     0,     8,     0,     0,     0,     0,
       0,     9,     0,    27,     0,    20,     0,     0,     0,    23,
       0,    19,     0,    14,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    57,    78,    79,    80,
       0,    45,     0,     0,     0,    42,    44,    76,     0,    63,
      65,    67,    69,    71,    75,     0,    16,    21,     0,     0,
       0,    15,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    73,    74,     0,     0,     0,
       0,     0,     0,     0,    29,    43,     0,    58,     0,     0,
       0,     0,    81,    82,    18,     0,    24,    17,    11,    10,
       0,     0,     0,     0,     0,     0,    56,    55,     0,    77,
       0,     0,     0,    28,     0,     0,     0,    31,    64,    66,
      70,    68,    72,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    32,     0,     0,     0,     0,    48,     0,
       0,     0,    52,    54,    62,     0,    39,     0,     0,    49,
       0,     0,     0,    53,    41,     0,     0,     0,    50,     0,
      46,     0,    37,    51,    47,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,   273,    18,   276,   248,   229,   127,   250,  -104,
       1,   168,   215,   -84,  -103,   -69,   -68,   163,   170,   182,
     196,   -63,  -104
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,    22,     7,    42,    43,     8,    81,    82,
      44,   123,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     125,     9,   112,   114,   114,   143,   117,    16,    19,   115,
     116,    11,    49,    20,    58,   105,   107,   109,    30,    56,
      39,     2,     3,    62,    57,    40,   102,    13,    57,    23,
       1,     2,     3,   154,    28,     4,    66,   125,   141,   166,
     167,    41,   145,    35,    36,   106,   108,   110,    28,   111,
      50,   151,    12,    83,    21,    59,    10,   114,    72,   114,
     114,   114,   114,   179,   103,    73,    74,   155,   162,   -38,
     -38,    72,    31,    76,    77,    78,    79,    80,    73,    74,
      33,   178,   129,   120,    34,   182,   130,    77,    78,    79,
      80,   187,    24,   189,     1,     2,     3,   193,    25,   180,
      35,    45,    39,     2,     3,    26,   198,    40,   200,    32,
      66,   132,   133,   203,    67,   204,    68,    69,   156,   157,
      39,     2,     3,    47,    38,   188,    70,   -36,   -36,   156,
     173,    71,    72,    15,    18,    37,    34,    46,    51,    73,
      74,    27,    52,    75,    29,    52,    54,    76,    77,    78,
      79,    80,    66,    72,    55,    61,    67,    60,    68,    69,
      73,    74,    39,     2,     3,    63,    95,    64,    70,    77,
      78,    79,    80,    71,    72,    39,     2,     3,    65,    66,
      40,    73,    74,    67,    52,    68,    69,    96,    98,    76,
      77,    78,    79,    80,    99,    70,   100,   113,   101,   104,
      71,    72,   126,   131,   122,   127,   128,   134,    73,    74,
     135,    52,   124,   137,   140,   142,    76,    77,    78,    79,
      80,    66,   136,   138,   139,    67,   149,    68,    69,   144,
     146,   147,   148,   163,   150,   164,   165,    70,   168,   169,
     170,   171,    71,    72,   175,   176,   172,   174,   129,   177,
      73,    74,   183,    52,   153,   181,   185,   184,    76,    77,
      78,    79,    80,    66,   186,   190,   191,    67,   192,    68,
      69,   194,   196,   195,   197,   199,   201,   202,   205,    70,
      17,    48,    14,   118,    71,    72,    97,    53,   152,   158,
       0,     0,    73,    74,     0,    52,     0,   121,   159,     0,
      76,    77,    78,    79,    80,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   161,     0,   -60,     0,     0,   119,   -60,     0,
     -60,     0,     0,     0,     0,   160
};

static const yytype_int16 yycheck[] =
{
      84,     0,    70,    72,    73,   108,    74,     6,     7,    72,
      73,     1,     1,     1,     1,     1,     1,     1,    17,    32,
      11,    12,    13,    32,    37,    16,     1,     0,    37,    31,
      11,    12,    13,     1,    16,    16,     1,   121,   106,   142,
     143,    32,   110,    37,    38,    31,    31,    31,    30,     1,
      39,   119,    42,    52,    42,    42,    15,   126,    23,   128,
     129,   130,   131,   166,    39,    30,    31,    35,   131,    37,
      38,    23,    42,    38,    39,    40,    41,    42,    30,    31,
      31,   165,    23,    82,    35,   169,    27,    39,    40,    41,
      42,     1,    31,   177,    11,    12,    13,   181,    31,   167,
      37,    38,    11,    12,    13,    11,   190,    16,   192,    31,
       1,    25,    26,   197,     5,   199,     7,     8,    37,    38,
      11,    12,    13,    32,     1,    35,    17,    37,    38,    37,
      38,    22,    23,     6,     7,    32,    35,     1,    42,    30,
      31,    14,    33,    34,    17,    33,    32,    38,    39,    40,
      41,    42,     1,    23,    38,    38,     5,    32,     7,     8,
      30,    31,    11,    12,    13,    36,     1,    36,    17,    39,
      40,    41,    42,    22,    23,    11,    12,    13,    35,     1,
      16,    30,    31,     5,    33,     7,     8,    38,    35,    38,
      39,    40,    41,    42,    35,    17,     1,    31,    38,    38,
      22,    23,    28,    24,    42,    38,    29,    38,    30,    31,
       1,    33,    34,    38,    31,    31,    38,    39,    40,    41,
      42,     1,    36,    36,    36,     5,    32,     7,     8,    31,
      38,    38,    42,    36,    35,     1,    32,    17,     1,    32,
      32,     1,    22,    23,    39,    42,    36,    35,    23,    32,
      30,    31,    38,    33,    34,    32,     1,    36,    38,    39,
      40,    41,    42,     1,    36,     6,     1,     5,    32,     7,
       8,    36,    39,    35,     6,    32,     1,    36,    36,    17,
       7,    33,     6,     1,    22,    23,    57,    37,   120,   126,
      -1,    -1,    30,    31,    -1,    33,    -1,    82,   128,    -1,
      38,    39,    40,    41,    42,    23,    24,    25,    26,    27,
      28,    29,   130,    -1,    32,    -1,    -1,    35,    36,    -1,
      38,    -1,    -1,    -1,    -1,   129
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    13,    16,    45,    46,    48,    51,    54,
      15,     1,    42,     0,    48,    51,    54,    46,    51,    54,
       1,    42,    47,    31,    31,    31,    11,    51,    47,    51,
      54,    42,    31,    31,    35,    37,    38,    32,     1,    11,
      16,    32,    49,    50,    54,    38,     1,    32,    49,     1,
      39,    42,    33,    52,    32,    38,    32,    37,     1,    42,
      32,    38,    32,    36,    36,    35,     1,     5,     7,     8,
      17,    22,    23,    30,    31,    34,    38,    39,    40,    41,
      42,    52,    53,    54,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     1,    38,    50,    35,    35,
       1,    38,     1,    39,    38,     1,    31,     1,    31,     1,
      31,     1,    60,    31,    59,    65,    65,    60,     1,    35,
      54,    56,    42,    55,    34,    57,    28,    38,    29,    23,
      27,    24,    25,    26,    38,     1,    36,    38,    36,    36,
      31,    60,    31,    58,    31,    60,    38,    38,    42,    32,
      35,    60,    55,    34,     1,    35,    37,    38,    61,    62,
      64,    63,    65,    36,     1,    32,    58,    58,     1,    32,
      32,     1,    36,    38,    35,    39,    42,    32,    57,    58,
      60,    32,    57,    38,    36,     1,    36,     1,    35,    57,
       6,     1,    32,    57,    36,    35,    39,     6,    57,    32,
      57,     1,    36,    57,    57,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    45,    45,    45,    46,    46,    47,
      47,    47,    47,    47,    47,    48,    48,    48,    48,    48,
      48,    49,    49,    50,    50,    50,    50,    51,    52,    52,
      52,    53,    53,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    58,
      59,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     1,     3,     4,     3,
       6,     6,     1,     4,     4,     6,     6,     7,     7,     5,
       5,     3,     1,     2,     4,     5,     1,     5,     4,     3,
       2,     3,     4,     1,     1,     1,     3,     6,     1,     4,
       7,     5,     1,     2,     1,     1,     7,     8,     5,     6,
       7,     8,     5,     6,     5,     3,     3,     1,     2,     2,
       1,     4,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     2,     2,     1,     1,     3,     1,     1,
       1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 44 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nStart : func_declaration global_var_declaration Program\n");}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nStart : global_var_declaration func_declaration Program\n");}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 48 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nStart : func_declaration Program\n");}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nStart : global_var_declaration Program\n");}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nStart : Program\n");}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nglobal_var_declaration : type_specifier global_dec_list SEMICOLON\n");}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nglobal_var_declaration : global_var_declaration type_specifier global_dec_list SEMICOLON\n");}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nglobal_dec_list : global_dec_list COMMA ID\n");
				fprintf(out,"%s\n",(yyvsp[0])->name.c_str());
				multiple = table1->lookSymbol((yyvsp[0])->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						(yyvsp[0])->dataType = 0;
						(yyvsp[0])->v.i = -99999;
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						(yyvsp[0])->dataType = 1;
						(yyvsp[0])->v.f = -99999.000000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						(yyvsp[0])->dataType = 2;
						(yyvsp[0])->v.c = '0';
					}
					table1->insertSymbol((yyvsp[0]));
				}
				else
				{
					char msg[30] = "Multiple Declaration For ID: ";
					strcat(msg,(yyvsp[0])->name.c_str());
					yyerror(msg);
				}
			}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 90 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nglobal_dec_list : global_dec_list COMMA ID LTHIRD CONST_INT RTHIRD\n");
				fprintf(out,"%s\n",(yyvsp[-3])->name.c_str());
				multiple = table1->lookSymbol((yyvsp[-3])->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						(yyvsp[-3])->dataType = 0;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.i_Arr = (int*)malloc(((yyvsp[-3])->sz)*sizeof(int));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.i_Arr[k] = -1;
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						(yyvsp[-3])->dataType = 1;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.f_Arr = (float*)malloc(((yyvsp[-3])->sz)*sizeof(float));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.f_Arr[k] = -1.00000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						(yyvsp[-3])->dataType = 2;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.c_Arr = (char*)malloc(((yyvsp[-3])->sz)*sizeof(char));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.c_Arr[k] = '0';
					}
					table1->insertSymbol((yyvsp[-3]));
				}
				else
				{
					char msg[30] = "Multiple Declaration For ID: ";
					strcat(msg,(yyvsp[-3])->name.c_str());
					yyerror(msg);
				}
			}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 126 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nglobal_dec_list : ID\n");
				fprintf(out,"%s\n",(yyvsp[0])->name.c_str());
				multiple = table1->lookSymbol((yyvsp[0])->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						(yyvsp[0])->dataType = 0;
						(yyvsp[0])->v.i = -99999;
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						(yyvsp[0])->dataType = 1;
						(yyvsp[0])->v.f = -99999.000000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						(yyvsp[0])->dataType = 2;
						(yyvsp[0])->v.c = '0';
					}
					table1->insertSymbol((yyvsp[0]));
				}
				else
				{
					char msg[30] = "Multiple Declaration For ID: ";
					strcat(msg,(yyvsp[0])->name.c_str());
					yyerror(msg);
				}
			}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 156 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nglobal_dec_list : ID LTHIRD CONST_INT RTHIRD\n");
				fprintf(out,"%s\n",(yyvsp[-3])->name.c_str());
				multiple = table1->lookSymbol((yyvsp[-3])->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						(yyvsp[-3])->dataType = 0;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.i_Arr = (int*)malloc(((yyvsp[-3])->sz)*sizeof(int));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.i_Arr[k] = -1; 
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						(yyvsp[-3])->dataType = 1;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.f_Arr = (float*)malloc(((yyvsp[-3])->sz)*sizeof(float));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.f_Arr[k] = -1.000000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						(yyvsp[-3])->dataType = 2;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.c_Arr = (char*)malloc(((yyvsp[-3])->sz)*sizeof(char));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.c_Arr[k] = '0';
					}
					table1->insertSymbol((yyvsp[-3]));
				}
				else
				{
					char msg[30] = "Multiple Declaration For ID: ";
					strcat(msg,(yyvsp[-3])->name.c_str());
					yyerror(msg);
				}
			}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 194 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nfunc_declaration : type_specifier ID LPAREN Parameter_List RPAREN SEMICOLON\n");}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 196 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nfunc_declaration : VOID ID LPAREN Parameter_List RPAREN SEMICOLON\n");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 200 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nfunc_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 202 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nfunc_declaration : VOID ID LPAREN RPAREN SEMICOLON\n");}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 206 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nParameter_List : Parameter_List COMMA Parameter\n");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 207 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nParameter_List : Parameter\n");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 209 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nParameter : type_specifier ID\n");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 211 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nParameter : type_specifier ID LTHIRD CONST_INT RTHIRD\n");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 213 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nParameter : VOID\n");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 217 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nProgram: INT MAIN LPAREN RPAREN compound_statement\n");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 222 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ncompound_statement: LCURL var_declaration statements RCURL\n");
					scope = 2;
				}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 226 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ncompound_statement: LCURL statements RCURL\n");
					scope = 2;
				}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 229 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ncompound_statement: LCURL RCURL\n");
						scope = 2;
					}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 236 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nvar_declaration: type_specifier declaration_list SEMICOLON\n");}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 238 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nvar_declaration: var_declaration type_specifier declaration_list SEMICOLON\n");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 241 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ntype_specifier: INT\n");
					sm->name = "int";
				}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 244 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ntype_specifier: FLOAT\n");
					sm->name = "float";
				}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 247 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ntype_specifier: CHAR\n");
					sm->name = "char";
				}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 252 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ndeclaration_list: declaration_list COMMA ID\n");
							fprintf(out,"%s\n",(yyvsp[0])->name.c_str());
							multiple = table2->lookSymbol((yyvsp[0])->name);
							if(multiple==NULL)
							{
								if(strcmp(sm->name.c_str(),"int")==0)
								{
									(yyvsp[0])->dataType = 0;
									(yyvsp[0])->v.i = -99999;
								}
								else if(strcmp(sm->name.c_str(),"float")==0)
								{
									(yyvsp[0])->dataType = 1;
									(yyvsp[0])->v.f = -99999.000000;
								}
								else if(strcmp(sm->name.c_str(),"char")==0)
								{
									(yyvsp[0])->dataType = 2;
									(yyvsp[0])->v.c = '0';
								}
								table2->insertSymbol((yyvsp[0]));
							}
							else
							{
								char msg[30] = "Multiple Declaration For ID: ";
								strcat(msg,(yyvsp[0])->name.c_str());
								yyerror(msg);
							}
						}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 282 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ndeclaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n");
				fprintf(out,"%s\n",(yyvsp[-3])->name.c_str());
				multiple = table2->lookSymbol((yyvsp[-3])->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						(yyvsp[-3])->dataType = 0;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.i_Arr = (int*)malloc(((yyvsp[-3])->sz)*sizeof(int));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.i_Arr[k] = -1;
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						(yyvsp[-3])->dataType = 1;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.f_Arr = (float*)malloc(((yyvsp[-3])->sz)*sizeof(float));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.f_Arr[k] = -1.00000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						(yyvsp[-3])->dataType = 2;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.c_Arr = (char*)malloc(((yyvsp[-3])->sz)*sizeof(char));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.c_Arr[k] = '0';
					}
					table2->insertSymbol((yyvsp[-3]));
				}
				else
				{
					char msg[30] = "Multiple Declaration For ID: ";
					strcat(msg,(yyvsp[-3])->name.c_str());
					yyerror(msg);
				}
			}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 317 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ndeclaration_list: ID\n");
				fprintf(out,"%s\n",(yyvsp[0])->name.c_str());
				multiple = table2->lookSymbol((yyvsp[0])->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						(yyvsp[0])->dataType = 0;
						(yyvsp[0])->v.i = -99999;
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						(yyvsp[0])->dataType = 1;
						(yyvsp[0])->v.f = -99999.000000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						(yyvsp[0])->dataType = 2;
						(yyvsp[0])->v.c = '0';
					}
					table2->insertSymbol((yyvsp[0]));
				}
				else
				{
					char msg[30] = "Multiple Declaration For ID: ";
					strcat(msg,(yyvsp[0])->name.c_str());
					yyerror(msg);
				}
			}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 347 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\ndeclaration_list: ID LTHIRD CONST_INT RTHIRD\n");
				fprintf(out,"%s\n",(yyvsp[-3])->name.c_str());
				multiple = table2->lookSymbol((yyvsp[-3])->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						(yyvsp[-3])->dataType = 0;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.i_Arr = (int*)malloc(((yyvsp[-3])->sz)*sizeof(int));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.i_Arr[k] = -1; 
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						(yyvsp[-3])->dataType = 1;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.f_Arr = (float*)malloc(((yyvsp[-3])->sz)*sizeof(float));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.f_Arr[k] = -1.000000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						(yyvsp[-3])->dataType = 2;
						(yyvsp[-3])->sz = (yyvsp[-1])->v.i;
						(yyvsp[-3])->v.c_Arr = (char*)malloc(((yyvsp[-3])->sz)*sizeof(char));
						for(int k = 0; k<(yyvsp[-3])->sz; k++) (yyvsp[-3])->v.c_Arr[k] = '0';
					}
					table2->insertSymbol((yyvsp[-3]));
				}
				else
				{
					char msg[30] = "Multiple Declaration For ID: ";
					strcat(msg,(yyvsp[-3])->name.c_str());
					yyerror(msg);
				}
			}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 386 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nstatements: statement\n");}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 387 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nstatements: statements statement\n");}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 391 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nstatement: expression_statement\n");}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 392 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nstatement: compound_statement\n");}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 394 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nstatement: FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 397 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nstatement: IF LPAREN expression RPAREN statement\n");}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 400 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nstatement: IF LPAREN expression RPAREN statement ELSE statement\n");}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 403 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nstatement: WHILE LPAREN expression RPAREN statement\n");}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 406 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nstatement: PRINTLN LPAREN ID RPAREN SEMICOLON\n");
			pr_id = table2->lookSymbol((yyvsp[-2])->name);
			if(pr_id!=NULL)
			{
				if(pr_id->dataType==0)printf("%d\n",pr_id->v.i);
				else if(pr_id->dataType==1)printf("%f\n",pr_id->v.f);
				else if(pr_id->dataType==2)printf("%c\n",pr_id->v.c);
			}
			else
			{
				char msg[30] = "Undeclared Identifier: ";
				strcat(msg,(yyvsp[-2])->name.c_str());
				yyerror(msg);
			}
		
		}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 423 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nstatement: RETURN expression SEMICOLON\n");}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 427 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nexpression_statement: SEMICOLON\n");}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 428 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nexpression_statement: expression SEMICOLON\n");}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 432 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nvariable: ID\n"); fprintf(out,"%s\n",(yyvsp[0])->name.c_str());
						asgn = table2->lookSymbol((yyvsp[0])->name);
						if(asgn!=NULL)
						{
							if(asgn->sz!=0) yyerror("identifier to an array");
							else (yyval) = table2->lookSymbol((yyvsp[0])->name);
						}
						else 
						{
							char msg[30] = "Undeclared Identifier: ";
							strcat(msg,(yyvsp[0])->name.c_str());
							yyerror(msg);
						}
					}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 446 "pa.y" /* yacc.c:1646  */
    {fprintf(out, "\n\nvariable: ID LTHIRD expression RTHIRD\n");
						fprintf(out,"%s\n",(yyvsp[-3])->name.c_str());
						asgn = table2->lookSymbol((yyvsp[-3])->name);
						if(asgn!=NULL)
						{
							if(asgn->sz>0)
							{
								arr_ind = (yyvsp[-1]);
								if(((yyvsp[-1])->dataType==0||(yyvsp[-1])->dataType==2)&&(((yyvsp[-1])->v.i>=0&&(yyvsp[-1])->v.i<asgn->sz)||((yyvsp[-1])->v.c>=0&&(yyvsp[-1])->v.c<asgn->sz)))
								{
									(yyval) = table2->lookSymbol((yyvsp[-3])->name);
								}
								else if((yyvsp[-1])->dataType==1)yyerror("index can not be a float");
								else yyerror("array index out-of-bound");
							}
							else
							{
								yyerror("not an array");
							}
						}
						else 
						{
							char msg[30] = "Undeclared Identifier: ";
							strcat(msg,(yyvsp[-3])->name.c_str());
							yyerror(msg);
						}
					}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 476 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nexpression: logic_expression\n");}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 478 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nexpression: variable ASSIGNOP logic_expression\n");
			if((yyvsp[0])->dataType == 3) {}
			else if(!(((yyvsp[-2])->dataType==0||(yyvsp[-2])->dataType==2)&&(yyvsp[0])->dataType==1))
			{
				if((yyvsp[-2])->sz == 0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyvsp[-2])->v.i=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyvsp[-2])->v.i=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyvsp[-2])->v.f=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyvsp[-2])->v.f=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyvsp[-2])->v.f=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyvsp[-2])->v.c=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyvsp[-2])->v.c=(yyvsp[0])->v.c;
				}
				else
				{
					
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyvsp[-2])->v.i_Arr[arr_ind->v.i]=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyvsp[-2])->v.i_Arr[arr_ind->v.i]=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyvsp[-2])->v.f_Arr[arr_ind->v.i]=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyvsp[-2])->v.f_Arr[arr_ind->v.i]=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyvsp[-2])->v.f_Arr[arr_ind->v.i]=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyvsp[-2])->v.c_Arr[arr_ind->v.i]=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyvsp[-2])->v.c_Arr[arr_ind->v.i]=(yyvsp[0])->v.c;
				}
				(yyval)=(yyvsp[-2]);
				table2->printTable(out);
			}
			else yyerror("Type Mismatch");
		}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 524 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nlogic_expression: rel_expression\n");}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 526 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nlogic_expression: rel_expression LOGICOP rel_expression\n");
				(yyval)->dataType = 0;
				if(strcmp((yyvsp[-1])->name.c_str(),"&&")==0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.i&&(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.i&&(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.i&&(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.f&&(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.f&&(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.f&&(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.c&&(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.c&&(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.c&&(yyvsp[0])->v.c;
				}
				else if(strcmp((yyvsp[-1])->name.c_str(),"||")==0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.i||(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.i||(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.i||(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.f||(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.f||(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.f||(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.c||(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.c||(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.c||(yyvsp[0])->v.c;
				}
			}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 573 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nrel_expression: simple_expression\n");}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 575 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nrel_expression: simple_expression RELOP simple_expression\n");
				(yyval)->dataType = 0;
				if(strcmp((yyvsp[-1])->name.c_str(),"<")==0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.i<(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.i<(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.i<(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.f<(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.f<(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.f<(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.c<(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.c<(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.c<(yyvsp[0])->v.c;
				}
				else if(strcmp((yyvsp[-1])->name.c_str(),">")==0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.i>(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.i>(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.i>(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.f>(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.f>(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.f>(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.c>(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.c>(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.c>(yyvsp[0])->v.c;
				}
				else if(strcmp((yyvsp[-1])->name.c_str(),"<=")==0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.i<=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.i<=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.i<=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.f<=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.f<=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.f<=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.c<=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.c<=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.c<=(yyvsp[0])->v.c;
				}
				else if(strcmp((yyvsp[-1])->name.c_str(),">=")==0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.i>=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.i>=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.i>=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.f>=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.f>=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.f>=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.c>=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.c>=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.c>=(yyvsp[0])->v.c;
				}
				else if(strcmp((yyvsp[-1])->name.c_str(),"==")==0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.i==(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.i==(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.i==(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.f==(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.f==(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.f==(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.c==(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.c==(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.c==(yyvsp[0])->v.c;
				}
				else if(strcmp((yyvsp[-1])->name.c_str(),"!=")==0)
				{
					if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.i!=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.i!=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.i!=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.f!=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.f!=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.f!=(yyvsp[0])->v.c;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
						(yyval)->v.i = (yyvsp[-2])->v.c!=(yyvsp[0])->v.i;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
						(yyval)->v.i = (yyvsp[-2])->v.c!=(yyvsp[0])->v.f;
					else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
						(yyval)->v.i = (yyvsp[-2])->v.c!=(yyvsp[0])->v.c;
				}
			}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 706 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nsimple_expression: term\n");}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 707 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nsimple_expression: simple_expression ADDOP term\n");
							
							if(strcmp((yyvsp[-1])->name.c_str(),"+")==0)
							{
								if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
									{(yyval)->dataType = 0;(yyval)->v.i = (yyvsp[-2])->v.i+(yyvsp[0])->v.i;}
								else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.i+(yyvsp[0])->v.f;}
								else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
									{(yyval)->dataType = 0;(yyval)->v.i = (yyvsp[-2])->v.i+(yyvsp[0])->v.c;}
								else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.f+(yyvsp[0])->v.i;}
								else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.f+(yyvsp[0])->v.f;}
								else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.f+(yyvsp[0])->v.c;}
								else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
									{(yyval)->dataType = 0;(yyval)->v.i = (yyvsp[-2])->v.c+(yyvsp[0])->v.i;}
								else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.c+(yyvsp[0])->v.f;}
								else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
									{(yyval)->dataType = 0;(yyval)->v.i = (yyvsp[-2])->v.c+(yyvsp[0])->v.c;}
							}
							else if(strcmp((yyvsp[-1])->name.c_str(),"-")==0)
							{
								if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
									{(yyval)->dataType = 0;(yyval)->v.i = (yyvsp[-2])->v.i-(yyvsp[0])->v.i;}
								else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.i-(yyvsp[0])->v.f;}
								else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
									{(yyval)->dataType = 0;(yyval)->v.i = (yyvsp[-2])->v.i-(yyvsp[0])->v.c;}
								else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.f-(yyvsp[0])->v.i;}
								else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.f-(yyvsp[0])->v.f;}
								else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.f-(yyvsp[0])->v.c;}
								else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
									{(yyval)->dataType = 0;(yyval)->v.i = (yyvsp[-2])->v.c-(yyvsp[0])->v.i;}
								else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
									{(yyval)->dataType = 1;(yyval)->v.f = (yyvsp[-2])->v.c-(yyvsp[0])->v.f;}
								else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
									{(yyval)->dataType = 0;(yyval)->v.i = (yyvsp[-2])->v.c-(yyvsp[0])->v.c;}
							}
						}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 754 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nterm: unary_expression\n");}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 755 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nterm: term MULOP unary_expression\n");
						
						if(strcmp((yyvsp[-1])->name.c_str(),"*")==0)
						{
							if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
								{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.i*(yyvsp[0])->v.i;}
							else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.i*(yyvsp[0])->v.f;}
							else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
								{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.i*(yyvsp[0])->v.c;}
							else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.f*(yyvsp[0])->v.i;}
							else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.f*(yyvsp[0])->v.f;}
							else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.f*(yyvsp[0])->v.c;}
							else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
								{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.c*(yyvsp[0])->v.i;}
							else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.c*(yyvsp[0])->v.f;}
							else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
								{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.c*(yyvsp[0])->v.c;}
						}
						else if(strcmp((yyvsp[-1])->name.c_str(),"/")==0)
						{
							if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
								{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.i/(yyvsp[0])->v.i;}
							else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 1)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.i/(yyvsp[0])->v.f;}
							else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
								{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.i/(yyvsp[0])->v.c;}
							else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 0)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.f/(yyvsp[0])->v.i;}
							else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 1)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.f/(yyvsp[0])->v.f;}
							else if((yyvsp[-2])->dataType == 1 && (yyvsp[0])->dataType == 2)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.f/(yyvsp[0])->v.c;}
							else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
								{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.c/(yyvsp[0])->v.i;}
							else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 1)
								{(yyval)->dataType = 1; (yyval)->v.f = (yyvsp[-2])->v.c/(yyvsp[0])->v.f;}
							else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
								{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.c/(yyvsp[0])->v.c;}
						}
						else 
						{
							if(!((yyvsp[-2])->dataType==1 || (yyvsp[0])->dataType==1))
							{
								if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 0)
									{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.i%(yyvsp[0])->v.i;}
								else if((yyvsp[-2])->dataType == 0 && (yyvsp[0])->dataType == 2)
									{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.i%(yyvsp[0])->v.c;}
								else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 0)
									{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.c%(yyvsp[0])->v.i;}
								else if((yyvsp[-2])->dataType == 2 && (yyvsp[0])->dataType == 2)
									{(yyval)->dataType = 0; (yyval)->v.i = (yyvsp[-2])->v.c%(yyvsp[0])->v.c;}
							}
							else
							{
								(yyval)->dataType = 3;
								yyerror("invalid operands for modulo operation");
							}
						}
					}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 821 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nunary_expression: ADDOP unary_expression\n");
						if(strcmp((yyvsp[-1])->name.c_str(),"-")==0)
						{
							if((yyvsp[-1])->dataType == 0) {(yyvsp[0])->v.i=-(yyvsp[0])->v.i; (yyval)=(yyvsp[0]);}
							else if((yyvsp[-1])->dataType == 1) {(yyvsp[0])->v.f=-(yyvsp[0])->v.f; (yyval)=(yyvsp[0]);}
							else if((yyvsp[-1])->dataType == 2) {(yyvsp[0])->v.c=-(yyvsp[0])->v.c; (yyval)=(yyvsp[0]);}
						}
					  }
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 829 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nunary_expression: NOT unary_expression\n");
						if((yyvsp[-1])->dataType == 0) {(yyvsp[0])->v.i=!(yyvsp[0])->v.i; (yyval)=(yyvsp[0]);}
						else if((yyvsp[-1])->dataType == 1) {(yyvsp[0])->v.f=!(yyvsp[0])->v.f; (yyval)=(yyvsp[0]);}
						else if((yyvsp[-1])->dataType == 2) {(yyvsp[0])->v.c=!(yyvsp[0])->v.c; (yyval)=(yyvsp[0]);}	
					}
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 834 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nunary_expression: factor\n");
				(yyval) = new symbolInfo();
				(yyval)->name = (yyvsp[0])->name;
				(yyval)->type = (yyvsp[0])->type;
				(yyval)->dataType = (yyvsp[0])->dataType;
				(yyval)->index = (yyvsp[0])->index;
				(yyval)->sz = (yyvsp[0])->sz;
				if((yyvsp[0])->sz == 0)
				{
					if((yyvsp[0])->dataType==0)(yyval)->v.i = (yyvsp[0])->v.i;
					else if((yyvsp[0])->dataType==1)(yyval)->v.f = (yyvsp[0])->v.f;
					else if((yyvsp[0])->dataType==2)(yyval)->v.c = (yyvsp[0])->v.c;
				}
				else
				{
					if((yyvsp[0])->dataType==0)(yyval)->v.i = (yyvsp[0])->v.i_Arr[arr_ind->v.i];
					else if((yyvsp[0])->dataType==1)(yyval)->v.f = (yyvsp[0])->v.f_Arr[arr_ind->v.i];
					else if((yyvsp[0])->dataType==2)(yyval)->v.c = (yyvsp[0])->v.c_Arr[arr_ind->v.i];	
				}
			}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 856 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nfactor: variable\n");}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 857 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\nfactor: LPAREN expression RPAREN\n"); (yyval)=(yyvsp[-1]);}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 858 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nfactor: CONST_INT\n");
				fprintf(out,"%d\n",(yyvsp[0])->v.i);
			}
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 861 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nfactor: CONST_FLOAT\n");
				fprintf(out,"%f\n",(yyvsp[0])->v.f);
			}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 864 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nfactor: CONST_CHAR\n");
				fprintf(out,"%c\n",(yyvsp[0])->v.c);
			}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 867 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nfactor: factor INCOP\n");
				if((yyvsp[-1])->sz==0)
				{
					if((yyvsp[-1])->dataType == 0) {(yyvsp[-1])->v.i++; (yyval)=(yyvsp[-1]);}
					else if((yyvsp[-1])->dataType == 1) {(yyvsp[-1])->v.f++; (yyval)=(yyvsp[-1]);}
					else if((yyvsp[-1])->dataType == 2) {(yyvsp[-1])->v.c++; (yyval)=(yyvsp[-1]);}
				}
				else
				{
					if((yyvsp[-1])->dataType==0){(yyvsp[-1])->v.i_Arr[arr_ind->v.i]++; (yyval)=(yyvsp[-1]);}
					else if((yyvsp[-1])->dataType==1){(yyvsp[-1])->v.f_Arr[arr_ind->v.i]++; (yyval)=(yyvsp[-1]);}
					else if((yyvsp[-1])->dataType==2){(yyvsp[-1])->v.c_Arr[arr_ind->v.i]++; (yyval)=(yyvsp[-1]);}	
				}
			}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 881 "pa.y" /* yacc.c:1646  */
    {fprintf(out,"\n\nfactor: factor DECOP\n");
				if((yyvsp[-1])->sz==0)
				{
					if((yyvsp[-1])->dataType == 0) {(yyvsp[-1])->v.i--; (yyval)=(yyvsp[-1]);}
					else if((yyvsp[-1])->dataType == 1) {(yyvsp[-1])->v.f--; (yyval)=(yyvsp[-1]);}
					else if((yyvsp[-1])->dataType == 2) {(yyvsp[-1])->v.c--; (yyval)=(yyvsp[-1]);}
				}
				else
				{
					if((yyvsp[-1])->dataType==0){(yyvsp[-1])->v.i_Arr[arr_ind->v.i]--; (yyval)=(yyvsp[-1]);}
					else if((yyvsp[-1])->dataType==1){(yyvsp[-1])->v.f_Arr[arr_ind->v.i]--; (yyval)=(yyvsp[-1]);}
					else if((yyvsp[-1])->dataType==2){(yyvsp[-1])->v.c_Arr[arr_ind->v.i]--; (yyval)=(yyvsp[-1]);}	
				}
			}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2568 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 898 "pa.y" /* yacc.c:1906  */

int main(int argc,char *argv[]){
	
	extern FILE *yyin;
	if(argc!=2){
		printf("Please provide input file name and try again\n");
		return 0;
	}
	
	FILE *fin=fopen(argv[1],"r");
	if(fin==NULL){
		printf("Cannot open specified file\n");
		return 0;
	}
	
	out= fopen("output.txt","w");

	yyin= fin;
	/*yydebug=1;*/
	yyparse();
	fprintf(out,"\n*******global symbol table******\n");
	table1->printTable(out);
	fprintf(out,"\n*******local symbol table******\n");
	table2->printTable(out);
	fprintf(out,"\nTotal Lines: %d\n",line_count);
	fprintf(out,"\nTotal Errors: %d\n",error_count);
	fclose(yyin);
	fclose(out);
	return 0;
}
