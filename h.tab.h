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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "h.y"
{
  struct TreeNode *p;
}
/* Line 1529 of yacc.c.  */
#line 151 "h.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

