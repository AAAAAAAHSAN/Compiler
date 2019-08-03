/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    OPEN_PARENTHESES = 258,
    CLOSE_PARENTHESES = 259,
    OPEN_CURLY_BRACES = 260,
    CLOSE_CURLY_BRACES = 261,
    COMMA = 262,
    COLON = 263,
    LAMBDA = 264,
    ADD = 265,
    SUB = 266,
    MUL = 267,
    DIV = 268,
    MOD = 269,
    ASSIGN = 270,
    EQUAL = 271,
    NOT_EQUAL = 272,
    GREATER = 273,
    GREATER_EQUAL = 274,
    LESSER = 275,
    LESSER_EQUAL = 276,
    IF_KEYWORD = 277,
    ELSE_KEYWORD = 278,
    FOR_KEYWORD = 279,
    IN_KEYWORD = 280,
    TO_KEYWORD = 281,
    BY_KEYWORD = 282,
    INT_KEYWORD = 283,
    DOUBLE_KEYWORD = 284,
    VOID_KEYWORD = 285,
    DEF_KEYWORD = 286,
    RETURN_KEYWORD = 287,
    EXTERN_KEYWORD = 288,
    INT_DATATYPE = 289,
    DOUBLE_DATATYPE = 290,
    ID = 291,
    EOL = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
