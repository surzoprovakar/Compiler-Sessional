/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
