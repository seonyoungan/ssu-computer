/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO_SYM = 258,                /* AUTO_SYM  */
    BREAK_SYM = 259,               /* BREAK_SYM  */
    CASE_SYM = 260,                /* CASE_SYM  */
    CONTINUE_SYM = 261,            /* CONTINUE_SYM  */
    DEFAULT_SYM = 262,             /* DEFAULT_SYM  */
    DO_SYM = 263,                  /* DO_SYM  */
    ELSE_SYM = 264,                /* ELSE_SYM  */
    ENUM_SYM = 265,                /* ENUM_SYM  */
    FOR_SYM = 266,                 /* FOR_SYM  */
    IF_SYM = 267,                  /* IF_SYM  */
    RETURN_SYM = 268,              /* RETURN_SYM  */
    SIZEOF_SYM = 269,              /* SIZEOF_SYM  */
    STATIC_SYM = 270,              /* STATIC_SYM  */
    STRUCT_SYM = 271,              /* STRUCT_SYM  */
    SWITCH_SYM = 272,              /* SWITCH_SYM  */
    TYPEDEF_SYM = 273,             /* TYPEDEF_SYM  */
    UNION_SYM = 274,               /* UNION_SYM  */
    WHILE_SYM = 275,               /* WHILE_SYM  */
    PLUSPLUS = 276,                /* PLUSPLUS  */
    MINUSMINUS = 277,              /* MINUSMINUS  */
    ARROW = 278,                   /* ARROW  */
    LSS = 279,                     /* LSS  */
    GTR = 280,                     /* GTR  */
    LEQ = 281,                     /* LEQ  */
    GEQ = 282,                     /* GEQ  */
    EQL = 283,                     /* EQL  */
    NEQ = 284,                     /* NEQ  */
    AMPAMP = 285,                  /* AMPAMP  */
    BARBAR = 286,                  /* BARBAR  */
    DOTDOTDOT = 287,               /* DOTDOTDOT  */
    LP = 288,                      /* LP  */
    RP = 289,                      /* RP  */
    LB = 290,                      /* LB  */
    RB = 291,                      /* RB  */
    LR = 292,                      /* LR  */
    RR = 293,                      /* RR  */
    COLON = 294,                   /* COLON  */
    PERIOD = 295,                  /* PERIOD  */
    COMMA = 296,                   /* COMMA  */
    EXCL = 297,                    /* EXCL  */
    STAR = 298,                    /* STAR  */
    SLASH = 299,                   /* SLASH  */
    PERCENT = 300,                 /* PERCENT  */
    AMP = 301,                     /* AMP  */
    SEMICOLON = 302,               /* SEMICOLON  */
    PLUS = 303,                    /* PLUS  */
    MINUS = 304,                   /* MINUS  */
    ASSIGN = 305,                  /* ASSIGN  */
    INTEGER_CONSTANT = 306,        /* INTEGER_CONSTANT  */
    FLOAT_CONSTANT = 307,          /* FLOAT_CONSTANT  */
    STRING_LITERAL = 308,          /* STRING_LITERAL  */
    CHARACTER_CONSTANT = 309,      /* CHARACTER_CONSTANT  */
    IDENTIFIER = 310,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 311          /* TYPE_IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AUTO_SYM 258
#define BREAK_SYM 259
#define CASE_SYM 260
#define CONTINUE_SYM 261
#define DEFAULT_SYM 262
#define DO_SYM 263
#define ELSE_SYM 264
#define ENUM_SYM 265
#define FOR_SYM 266
#define IF_SYM 267
#define RETURN_SYM 268
#define SIZEOF_SYM 269
#define STATIC_SYM 270
#define STRUCT_SYM 271
#define SWITCH_SYM 272
#define TYPEDEF_SYM 273
#define UNION_SYM 274
#define WHILE_SYM 275
#define PLUSPLUS 276
#define MINUSMINUS 277
#define ARROW 278
#define LSS 279
#define GTR 280
#define LEQ 281
#define GEQ 282
#define EQL 283
#define NEQ 284
#define AMPAMP 285
#define BARBAR 286
#define DOTDOTDOT 287
#define LP 288
#define RP 289
#define LB 290
#define RB 291
#define LR 292
#define RR 293
#define COLON 294
#define PERIOD 295
#define COMMA 296
#define EXCL 297
#define STAR 298
#define SLASH 299
#define PERCENT 300
#define AMP 301
#define SEMICOLON 302
#define PLUS 303
#define MINUS 304
#define ASSIGN 305
#define INTEGER_CONSTANT 306
#define FLOAT_CONSTANT 307
#define STRING_LITERAL 308
#define CHARACTER_CONSTANT 309
#define IDENTIFIER 310
#define TYPE_IDENTIFIER 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
