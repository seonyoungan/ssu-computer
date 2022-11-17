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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    INTEGER_CONSTANT = 260,        /* INTEGER_CONSTANT  */
    FLOAT_CONSTANT = 261,          /* FLOAT_CONSTANT  */
    CHARACTER_CONSTANT = 262,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 263,          /* STRING_LITERAL  */
    PLUSPLUS = 264,                /* PLUSPLUS  */
    MINUSMINUS = 265,              /* MINUSMINUS  */
    ARROW = 266,                   /* ARROW  */
    LSS = 267,                     /* LSS  */
    GTR = 268,                     /* GTR  */
    LEQ = 269,                     /* LEQ  */
    GEQ = 270,                     /* GEQ  */
    EQL = 271,                     /* EQL  */
    NEQ = 272,                     /* NEQ  */
    AMPAMP = 273,                  /* AMPAMP  */
    BARBAR = 274,                  /* BARBAR  */
    DOTDOTDOT = 275,               /* DOTDOTDOT  */
    LP = 276,                      /* LP  */
    RP = 277,                      /* RP  */
    LB = 278,                      /* LB  */
    RB = 279,                      /* RB  */
    LR = 280,                      /* LR  */
    RR = 281,                      /* RR  */
    COLON = 282,                   /* COLON  */
    PERIOD = 283,                  /* PERIOD  */
    COMMA = 284,                   /* COMMA  */
    EXCL = 285,                    /* EXCL  */
    STAR = 286,                    /* STAR  */
    SLASH = 287,                   /* SLASH  */
    PERCENT = 288,                 /* PERCENT  */
    AMP = 289,                     /* AMP  */
    SEMICOLON = 290,               /* SEMICOLON  */
    PLUS = 291,                    /* PLUS  */
    MINUS = 292,                   /* MINUS  */
    ASSIGN = 293,                  /* ASSIGN  */
    AUTO_SYM = 294,                /* AUTO_SYM  */
    BREAK_SYM = 295,               /* BREAK_SYM  */
    CASE_SYM = 296,                /* CASE_SYM  */
    CONTINUE_SYM = 297,            /* CONTINUE_SYM  */
    DEFAULT_SYM = 298,             /* DEFAULT_SYM  */
    DO_SYM = 299,                  /* DO_SYM  */
    ELSE_SYM = 300,                /* ELSE_SYM  */
    ENUM_SYM = 301,                /* ENUM_SYM  */
    FOR_SYM = 302,                 /* FOR_SYM  */
    IF_SYM = 303,                  /* IF_SYM  */
    RETURN_SYM = 304,              /* RETURN_SYM  */
    SIZEOF_SYM = 305,              /* SIZEOF_SYM  */
    STATIC_SYM = 306,              /* STATIC_SYM  */
    STRUCT_SYM = 307,              /* STRUCT_SYM  */
    SWITCH_SYM = 308,              /* SWITCH_SYM  */
    TYPEDEF_SYM = 309,             /* TYPEDEF_SYM  */
    UNION_SYM = 310,               /* UNION_SYM  */
    WHILE_SYM = 311                /* WHILE_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define INTEGER_CONSTANT 260
#define FLOAT_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUSPLUS 264
#define MINUSMINUS 265
#define ARROW 266
#define LSS 267
#define GTR 268
#define LEQ 269
#define GEQ 270
#define EQL 271
#define NEQ 272
#define AMPAMP 273
#define BARBAR 274
#define DOTDOTDOT 275
#define LP 276
#define RP 277
#define LB 278
#define RB 279
#define LR 280
#define RR 281
#define COLON 282
#define PERIOD 283
#define COMMA 284
#define EXCL 285
#define STAR 286
#define SLASH 287
#define PERCENT 288
#define AMP 289
#define SEMICOLON 290
#define PLUS 291
#define MINUS 292
#define ASSIGN 293
#define AUTO_SYM 294
#define BREAK_SYM 295
#define CASE_SYM 296
#define CONTINUE_SYM 297
#define DEFAULT_SYM 298
#define DO_SYM 299
#define ELSE_SYM 300
#define ENUM_SYM 301
#define FOR_SYM 302
#define IF_SYM 303
#define RETURN_SYM 304
#define SIZEOF_SYM 305
#define STATIC_SYM 306
#define STRUCT_SYM 307
#define SWITCH_SYM 308
#define TYPEDEF_SYM 309
#define UNION_SYM 310
#define WHILE_SYM 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */