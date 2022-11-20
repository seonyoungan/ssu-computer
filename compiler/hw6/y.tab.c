/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "kim.y"


#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;

#include "y.tab.h"
#include "type.h"
#include "syntax_analysis.h"
#include <stdio.h>

extern int line_no, syntax_err, current_level;
extern A_NODE *root;
extern A_ID *current_id;
extern A_TYPE *int_type;

extern int yylex (void);

void yyerror(char *s);

#line 91 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 5,           /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 6,             /* FLOAT_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 7,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 8,             /* STRING_LITERAL  */
  YYSYMBOL_PLUSPLUS = 9,                   /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 10,                /* MINUSMINUS  */
  YYSYMBOL_ARROW = 11,                     /* ARROW  */
  YYSYMBOL_LSS = 12,                       /* LSS  */
  YYSYMBOL_GTR = 13,                       /* GTR  */
  YYSYMBOL_LEQ = 14,                       /* LEQ  */
  YYSYMBOL_GEQ = 15,                       /* GEQ  */
  YYSYMBOL_EQL = 16,                       /* EQL  */
  YYSYMBOL_NEQ = 17,                       /* NEQ  */
  YYSYMBOL_AMPAMP = 18,                    /* AMPAMP  */
  YYSYMBOL_BARBAR = 19,                    /* BARBAR  */
  YYSYMBOL_DOTDOTDOT = 20,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 21,                        /* LP  */
  YYSYMBOL_RP = 22,                        /* RP  */
  YYSYMBOL_LB = 23,                        /* LB  */
  YYSYMBOL_RB = 24,                        /* RB  */
  YYSYMBOL_LR = 25,                        /* LR  */
  YYSYMBOL_RR = 26,                        /* RR  */
  YYSYMBOL_COLON = 27,                     /* COLON  */
  YYSYMBOL_PERIOD = 28,                    /* PERIOD  */
  YYSYMBOL_COMMA = 29,                     /* COMMA  */
  YYSYMBOL_EXCL = 30,                      /* EXCL  */
  YYSYMBOL_STAR = 31,                      /* STAR  */
  YYSYMBOL_SLASH = 32,                     /* SLASH  */
  YYSYMBOL_PERCENT = 33,                   /* PERCENT  */
  YYSYMBOL_AMP = 34,                       /* AMP  */
  YYSYMBOL_SEMICOLON = 35,                 /* SEMICOLON  */
  YYSYMBOL_PLUS = 36,                      /* PLUS  */
  YYSYMBOL_MINUS = 37,                     /* MINUS  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_AUTO_SYM = 39,                  /* AUTO_SYM  */
  YYSYMBOL_BREAK_SYM = 40,                 /* BREAK_SYM  */
  YYSYMBOL_CASE_SYM = 41,                  /* CASE_SYM  */
  YYSYMBOL_CONTINUE_SYM = 42,              /* CONTINUE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 43,               /* DEFAULT_SYM  */
  YYSYMBOL_DO_SYM = 44,                    /* DO_SYM  */
  YYSYMBOL_ELSE_SYM = 45,                  /* ELSE_SYM  */
  YYSYMBOL_ENUM_SYM = 46,                  /* ENUM_SYM  */
  YYSYMBOL_FOR_SYM = 47,                   /* FOR_SYM  */
  YYSYMBOL_IF_SYM = 48,                    /* IF_SYM  */
  YYSYMBOL_RETURN_SYM = 49,                /* RETURN_SYM  */
  YYSYMBOL_SIZEOF_SYM = 50,                /* SIZEOF_SYM  */
  YYSYMBOL_STATIC_SYM = 51,                /* STATIC_SYM  */
  YYSYMBOL_STRUCT_SYM = 52,                /* STRUCT_SYM  */
  YYSYMBOL_SWITCH_SYM = 53,                /* SWITCH_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 54,               /* TYPEDEF_SYM  */
  YYSYMBOL_UNION_SYM = 55,                 /* UNION_SYM  */
  YYSYMBOL_WHILE_SYM = 56,                 /* WHILE_SYM  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_translation_unit = 59,          /* translation_unit  */
  YYSYMBOL_external_declaration = 60,      /* external_declaration  */
  YYSYMBOL_function_definition = 61,       /* function_definition  */
  YYSYMBOL_62_1 = 62,                      /* @1  */
  YYSYMBOL_63_2 = 63,                      /* @2  */
  YYSYMBOL_declaration = 64,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 65,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 66,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 67,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 68,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 69,           /* init_declarator  */
  YYSYMBOL_type_specifier = 70,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 71,          /* struct_specifier  */
  YYSYMBOL_72_3 = 72,                      /* @3  */
  YYSYMBOL_73_4 = 73,                      /* @4  */
  YYSYMBOL_74_5 = 74,                      /* @5  */
  YYSYMBOL_75_6 = 75,                      /* @6  */
  YYSYMBOL_struct_or_union = 76,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 77,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 78,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 79,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 80,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 81,            /* enum_specifier  */
  YYSYMBOL_82_7 = 82,                      /* @7  */
  YYSYMBOL_83_8 = 83,                      /* @8  */
  YYSYMBOL_enumerator_list = 84,           /* enumerator_list  */
  YYSYMBOL_enumerator = 85,                /* enumerator  */
  YYSYMBOL_86_9 = 86,                      /* @9  */
  YYSYMBOL_declarator = 87,                /* declarator  */
  YYSYMBOL_pointer = 88,                   /* pointer  */
  YYSYMBOL_direct_declarator = 89,         /* direct_declarator  */
  YYSYMBOL_90_10 = 90,                     /* @10  */
  YYSYMBOL_constant_expression_opt = 91,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 92,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 93,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 94,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 95,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 96,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 97,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 98, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 99,               /* initializer  */
  YYSYMBOL_initializer_list = 100,         /* initializer_list  */
  YYSYMBOL_statement_list_opt = 101,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 102,           /* statement_list  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_labeled_statement = 104,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 105,       /* compound_statement  */
  YYSYMBOL_106_11 = 106,                   /* @11  */
  YYSYMBOL_declaration_list_opt = 107,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 108,         /* declaration_list  */
  YYSYMBOL_expression_statement = 109,     /* expression_statement  */
  YYSYMBOL_selection_statement = 110,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 111,      /* iteration_statement  */
  YYSYMBOL_for_expression = 112,           /* for_expression  */
  YYSYMBOL_expression_opt = 113,           /* expression_opt  */
  YYSYMBOL_jump_statement = 114,           /* jump_statement  */
  YYSYMBOL_primary_expression = 115,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 116,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 117,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 118,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 119,         /* unary_expression  */
  YYSYMBOL_cast_expression = 120,          /* cast_expression  */
  YYSYMBOL_type_name = 121,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 122, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 123,      /* additive_expression  */
  YYSYMBOL_relational_expression = 124,    /* relational_expression  */
  YYSYMBOL_equality_expression = 125,      /* equality_expression  */
  YYSYMBOL_logical_and_expression = 126,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 127,    /* logical_or_expression  */
  YYSYMBOL_constant_expression = 128,      /* constant_expression  */
  YYSYMBOL_expression = 129,               /* expression  */
  YYSYMBOL_assignment_expression = 130     /* assignment_expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  287

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    33,    33,    35,    36,    38,    39,    42,    42,    43,
      43,    46,    48,    49,    50,    51,    53,    54,    55,    57,
      58,    61,    62,    64,    65,    68,    69,    70,    73,    73,
      73,    74,    74,    74,    75,    77,    78,    80,    81,    83,
      85,    86,    88,    91,    91,    92,    92,    93,    95,    96,
      98,    99,    99,   102,   103,   105,   106,   109,   110,   111,
     112,   112,   114,   115,   117,   118,   121,   122,   124,   125,
     127,   128,   130,   131,   133,   134,   135,   137,   138,   139,
     140,   141,   144,   145,   147,   148,   150,   151,   153,   154,
     156,   157,   158,   159,   160,   161,   163,   164,   167,   167,
     169,   170,   172,   173,   176,   177,   180,   181,   182,   185,
     186,   187,   189,   191,   192,   195,   196,   197,   200,   201,
     202,   203,   204,   205,   208,   209,   210,   211,   212,   213,
     214,   216,   217,   219,   220,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   234,   235,   237,   240,   241,
     242,   243,   245,   246,   247,   250,   251,   252,   253,   254,
     256,   257,   258,   261,   262,   264,   265,   268,   270,   272,
     273
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "INTEGER_CONSTANT", "FLOAT_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PLUSPLUS", "MINUSMINUS",
  "ARROW", "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "AMPAMP", "BARBAR",
  "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR", "COLON", "PERIOD",
  "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "AMP", "SEMICOLON", "PLUS",
  "MINUS", "ASSIGN", "AUTO_SYM", "BREAK_SYM", "CASE_SYM", "CONTINUE_SYM",
  "DEFAULT_SYM", "DO_SYM", "ELSE_SYM", "ENUM_SYM", "FOR_SYM", "IF_SYM",
  "RETURN_SYM", "SIZEOF_SYM", "STATIC_SYM", "STRUCT_SYM", "SWITCH_SYM",
  "TYPEDEF_SYM", "UNION_SYM", "WHILE_SYM", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "@1",
  "@2", "declaration", "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "type_specifier", "struct_specifier", "@3", "@4", "@5", "@6",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier", "@7",
  "@8", "enumerator_list", "enumerator", "@9", "declarator", "pointer",
  "direct_declarator", "@10", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement_list_opt", "statement_list", "statement",
  "labeled_statement", "compound_statement", "@11", "declaration_list_opt",
  "declaration_list", "expression_statement", "selection_statement",
  "iteration_statement", "for_expression", "expression_opt",
  "jump_statement", "primary_expression", "postfix_expression",
  "arg_expression_list_opt", "arg_expression_list", "unary_expression",
  "cast_expression", "type_name", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression", "constant_expression",
  "expression", "assignment_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-231)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,  -231,  -231,    52,    -7,  -231,    26,  -231,  -231,  -231,
    -231,    34,   136,  -231,  -231,  -231,    52,   320,   320,  -231,
      41,  -231,  -231,    10,   145,    27,  -231,    28,    43,  -231,
    -231,    73,    56,  -231,    50,  -231,  -231,   109,   117,   127,
     145,  -231,   390,  -231,   154,   158,  -231,    52,   355,   127,
     159,  -231,  -231,  -231,   320,  -231,  -231,  -231,  -231,  -231,
     407,   407,   266,   390,   390,   390,   390,   390,   442,   169,
    -231,   203,   167,  -231,   132,    65,    92,   157,   176,   187,
    -231,  -231,  -231,   158,   171,    90,  -231,  -231,   178,   355,
    -231,  -231,  -231,  -231,   134,   320,    12,   201,  -231,   196,
    -231,   390,  -231,  -231,    61,   206,   208,  -231,  -231,  -231,
    -231,  -231,  -231,   266,  -231,  -231,  -231,  -231,   231,   390,
     390,   232,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   107,   198,  -231,   158,
    -231,   125,   134,    52,    24,  -231,  -231,    52,   212,   320,
     288,   390,  -231,     9,  -231,  -231,   148,  -231,   156,   302,
     162,  -231,   390,  -231,   216,  -231,   217,   215,  -231,   221,
    -231,  -231,  -231,  -231,  -231,   132,   132,    65,    65,    65,
      65,    92,    92,   157,   176,  -231,   390,  -231,  -231,   355,
     146,    19,  -231,  -231,  -231,  -231,  -231,   222,   390,   223,
     214,   212,   229,   230,   390,   242,   243,   240,   212,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,   244,  -231,   245,   255,
     254,   148,   320,   390,  -231,  -231,  -231,  -231,  -231,   390,
    -231,  -231,  -231,  -231,    52,  -231,  -231,   253,  -231,   212,
     225,   390,   390,   247,  -231,   390,   390,  -231,  -231,  -231,
    -231,  -231,  -231,   261,   260,  -231,  -231,   212,  -231,   264,
     267,   251,   268,  -231,   271,   272,  -231,  -231,  -231,   390,
     212,   390,   212,   212,   212,   273,  -231,   263,   256,  -231,
    -231,   269,   390,   212,  -231,  -231,  -231
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    57,    27,     0,    55,    16,    45,    17,    35,    18,
      36,     0,     2,     3,     5,     6,    19,    13,    12,    25,
      31,    26,     9,     0,    54,     0,    56,    47,     0,     1,
       4,     0,    20,    21,    23,    15,    14,    34,     0,     0,
      53,    60,    62,    58,     0,     0,    11,     0,     0,     0,
       0,    32,    98,    10,    64,   118,   119,   120,   121,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,   135,   145,   148,   152,   155,   160,   163,   165,   169,
      63,   167,   168,     0,    50,     0,    48,    22,    23,     0,
      24,    82,     8,    29,     0,   100,    72,     0,    65,    66,
      68,     0,   136,   137,    72,     0,     0,   145,   140,   139,
     138,   142,   141,     0,   143,    59,   129,   130,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      84,     0,     0,     0,     0,    37,   102,    19,    86,   101,
      64,    62,    70,    74,    71,    73,    75,    61,     0,    64,
      74,   147,     0,   123,     0,   128,     0,   132,   133,     0,
     127,   170,   149,   150,   151,   153,   154,   156,   157,   158,
     159,   161,   162,   164,   166,    44,     0,    49,    83,     0,
       0,     0,    40,    42,    33,    38,   104,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,    87,    88,
      90,    91,    92,    93,    94,    95,     0,   103,     0,     0,
       0,    76,    64,    62,    67,    69,   146,   144,   126,     0,
     125,    52,    85,    30,     0,    39,   117,     0,   116,     0,
       0,   113,     0,     0,   114,     0,     0,    99,    89,   105,
      79,    77,    78,     0,     0,   134,    41,     0,    97,     0,
       0,     0,     0,   115,     0,     0,    81,    80,    96,     0,
       0,   113,     0,     0,     0,     0,   111,     0,   106,   108,
     109,     0,   113,     0,   110,   112,   107
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,  -231,   276,  -231,  -231,  -231,   -72,     4,  -231,
    -231,  -231,   252,   -75,  -231,  -231,  -231,  -231,  -231,  -231,
     165,  -118,  -231,    74,  -231,  -231,  -231,   227,   174,  -231,
      -2,    -1,   -16,  -231,  -142,   -52,  -231,  -231,   164,   210,
    -108,   -67,   -79,  -231,  -231,  -231,  -183,  -231,   -22,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -230,  -231,  -231,  -231,
    -231,  -231,    -3,   -27,   202,    51,   -17,    64,   192,   193,
    -231,   -43,   -42,  -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,    15,    96,    17,
      31,    32,    33,    18,    19,    50,   142,    38,    94,    20,
     144,   145,   191,   192,    21,    44,    28,    85,    86,   137,
      22,    23,    24,    54,    69,   218,    98,    99,   100,   154,
     155,   156,    90,   141,   207,   208,   209,   210,   211,    95,
     148,   149,   212,   213,   214,   260,   243,   215,    70,    71,
     166,   167,    72,    73,   105,    74,    75,    76,    77,    78,
      79,    80,   216,    82
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    25,    97,    26,    16,    91,    81,    40,   168,   220,
     140,   261,     1,     1,    34,     1,    16,    53,   240,   143,
     106,    35,    36,   146,     4,   248,   195,    92,     2,    27,
     150,     3,   151,   150,    29,   151,   108,   109,   110,   111,
     112,   277,   219,     4,    37,    88,    91,    81,   234,    43,
     194,   219,   285,   -43,   235,     1,   258,   102,   103,   106,
     107,   107,   107,   107,   107,   114,   104,   143,    45,   143,
       6,   106,   195,     3,   268,    -7,     8,   217,   169,    10,
     171,   254,   159,     4,   151,    47,   221,   276,    48,   278,
     279,   280,     4,   221,   152,   153,   172,   173,   174,   147,
     286,   126,   127,   160,   128,   129,   130,   131,    46,    81,
     232,   177,   178,   179,   180,   143,   138,   104,   255,   139,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   185,   -28,   226,   139,    40,     2,     1,
       2,   193,    51,   231,    81,    88,    91,    81,    25,   153,
       2,   188,    52,   147,   189,   237,    81,     3,   160,   107,
       2,    84,   244,   123,   124,   125,    41,     4,    42,   222,
     253,   223,   233,   132,   133,     5,   224,   175,   176,    83,
       6,    81,     6,   159,    93,   151,     8,     7,     8,    10,
       9,    10,     6,   115,   134,     5,   181,   182,     8,   244,
     262,    10,     6,   264,   265,   122,   135,     7,     8,   -51,
       9,    10,   116,   117,   118,    55,    48,    56,    57,    58,
      59,    60,    61,   157,   119,   158,   120,   275,   162,   244,
     163,   121,   193,    62,   165,   170,   186,    52,   227,   228,
     244,   239,    63,    64,   229,   230,    65,   196,    66,    67,
     241,   242,   197,   198,   199,   200,   201,   236,   238,   202,
     203,   204,    68,   245,   246,   205,   247,   250,   206,    55,
       2,    56,    57,    58,    59,    60,    61,   251,   252,   249,
     257,   259,   263,   266,   267,   269,   271,    62,    30,   270,
     272,     1,     2,   273,   274,   281,    63,    64,   282,    87,
      65,   283,    66,    67,   284,     5,     2,   190,   256,   150,
     136,   151,     6,   187,   161,   164,    68,     7,     8,     4,
       9,    10,   225,   159,     2,   151,   183,     5,   184,     0,
       0,     0,     0,     4,     6,     0,     0,     0,     0,     7,
       8,     5,     9,    10,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     7,     8,     0,     9,    10,    55,     5,
      56,    57,    58,    59,    60,    61,     6,     0,     0,     0,
       0,     7,     8,     0,     9,    10,    62,     0,     0,     0,
      89,     0,     0,     0,     0,    63,    64,     0,     0,    65,
       0,    66,    67,    55,     0,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      55,    62,    56,    57,    58,    59,    60,    61,     0,     0,
      63,    64,     0,     0,    65,     0,    66,    67,   101,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,     0,
      68,    65,     0,    66,    67,    55,     0,    56,    57,    58,
      59,    60,    61,     0,     0,     0,     0,    68,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,     0,     0,    65,     0,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      42,     3,    54,     4,     0,    48,    48,    23,   119,   151,
      89,   241,     3,     3,    16,     3,    12,    39,   201,    94,
      62,    17,    18,    95,    31,   208,   144,    49,     4,     3,
      21,    21,    23,    21,     0,    23,    63,    64,    65,    66,
      67,   271,   150,    31,     3,    47,    89,    89,    29,    22,
      26,   159,   282,    25,    35,     3,   239,    60,    61,   101,
      63,    64,    65,    66,    67,    68,    62,   142,    25,   144,
      46,   113,   190,    21,   257,    25,    52,   149,   120,    55,
     122,   223,    21,    31,    23,    29,   153,   270,    38,   272,
     273,   274,    31,   160,    96,    96,   123,   124,   125,    95,
     283,    36,    37,   104,    12,    13,    14,    15,    35,   151,
     189,   128,   129,   130,   131,   190,    26,   113,   229,    29,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    26,    25,   162,    29,   153,     4,     3,
       4,   143,    25,   186,   186,   147,   189,   189,   150,   150,
       4,    26,    25,   149,    29,   198,   198,    21,   159,   162,
       4,     3,   204,    31,    32,    33,    21,    31,    23,    21,
     222,    23,    26,    16,    17,    39,    20,   126,   127,    25,
      46,   223,    46,    21,    25,    23,    52,    51,    52,    55,
      54,    55,    46,    24,    18,    39,   132,   133,    52,   241,
     242,    55,    46,   245,   246,    38,    19,    51,    52,    38,
      54,    55,     9,    10,    11,     3,    38,     5,     6,     7,
       8,     9,    10,    22,    21,    29,    23,   269,    22,   271,
      22,    28,   234,    21,     3,     3,    38,    25,    22,    22,
     282,    27,    30,    31,    29,    24,    34,    35,    36,    37,
      21,    21,    40,    41,    42,    43,    44,    35,    35,    47,
      48,    49,    50,    21,    21,    53,    26,    22,    56,     3,
       4,     5,     6,     7,     8,     9,    10,    22,    24,    35,
      27,    56,    35,    22,    24,    21,    35,    21,    12,    22,
      22,     3,     4,    22,    22,    22,    30,    31,    35,    47,
      34,    45,    36,    37,    35,    39,     4,   142,   234,    21,
      83,    23,    46,   139,   104,   113,    50,    51,    52,    31,
      54,    55,   158,    21,     4,    23,   134,    39,   135,    -1,
      -1,    -1,    -1,    31,    46,    -1,    -1,    -1,    -1,    51,
      52,    39,    54,    55,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,     3,    39,
       5,     6,     7,     8,     9,    10,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    21,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,
      -1,    36,    37,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
       3,    21,     5,     6,     7,     8,     9,    10,    -1,    -1,
      30,    31,    -1,    -1,    34,    -1,    36,    37,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      50,    34,    -1,    36,    37,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    21,    31,    39,    46,    51,    52,    54,
      55,    58,    59,    60,    61,    64,    65,    66,    70,    71,
      76,    81,    87,    88,    89,    87,    88,     3,    83,     0,
      60,    67,    68,    69,    87,    65,    65,     3,    74,    63,
      89,    21,    23,    22,    82,    25,    35,    29,    38,    62,
      72,    25,    25,   105,    90,     3,     5,     6,     7,     8,
       9,    10,    21,    30,    31,    34,    36,    37,    50,    91,
     115,   116,   119,   120,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    25,     3,    84,    85,    69,    87,    25,
      99,   128,   105,    25,    75,   106,    65,    92,    93,    94,
      95,    21,   119,   119,    65,   121,   129,   119,   120,   120,
     120,   120,   120,    21,   119,    24,     9,    10,    11,    21,
      23,    28,    38,    31,    32,    33,    36,    37,    12,    13,
      14,    15,    16,    17,    18,    19,    84,    86,    26,    29,
      99,   100,    73,    70,    77,    78,    64,    65,   107,   108,
      21,    23,    87,    88,    96,    97,    98,    22,    29,    21,
      88,    96,    22,    22,   121,     3,   117,   118,   130,   129,
       3,   129,   120,   120,   120,   122,   122,   123,   123,   123,
     123,   124,   124,   125,   126,    26,    38,    85,    26,    29,
      77,    79,    80,    87,    26,    78,    35,    40,    41,    42,
      43,    44,    47,    48,    49,    53,    56,   101,   102,   103,
     104,   105,   109,   110,   111,   114,   129,    64,    92,    97,
      91,    98,    21,    23,    20,    95,   120,    22,    22,    29,
      24,   128,    99,    26,    29,    35,    35,   128,    35,    27,
     103,    21,    21,   113,   129,    21,    21,    26,   103,    35,
      22,    22,    24,    92,    91,   130,    80,    27,   103,    56,
     112,   113,   129,    35,   129,   129,    22,    24,   103,    21,
      22,    35,    22,    22,    22,   129,   103,   113,   103,   103,
     103,    22,    35,    45,    35,   113,   103
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      61,    64,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    72,    73,
      71,    74,    75,    71,    71,    76,    76,    77,    77,    78,
      79,    79,    80,    82,    81,    83,    81,    81,    84,    84,
      85,    86,    85,    87,    87,    88,    88,    89,    89,    89,
      90,    89,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   104,   106,   105,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   111,
     111,   111,   112,   113,   113,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   121,   122,   122,
     122,   122,   123,   123,   123,   124,   124,   124,   124,   124,
     125,   125,   125,   126,   126,   127,   127,   128,   129,   130,
     130
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     3,     1,     1,     2,     2,     1,     1,     1,     0,
       1,     1,     3,     1,     3,     1,     1,     1,     0,     0,
       7,     0,     0,     6,     2,     1,     1,     1,     2,     3,
       1,     3,     1,     0,     6,     0,     5,     2,     1,     3,
       1,     0,     4,     2,     1,     1,     2,     1,     3,     4,
       0,     5,     0,     1,     0,     1,     1,     3,     1,     3,
       2,     2,     0,     1,     1,     1,     2,     3,     3,     3,
       4,     4,     1,     3,     1,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     0,     5,
       0,     1,     1,     2,     1,     2,     5,     7,     5,     5,
       7,     5,     5,     0,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     3,     1,     4,     4,     3,     3,     2,
       2,     0,     1,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     1,     4,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     1,     1,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: translation_unit  */
#line 33 "kim.y"
                           {root = makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1628 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 35 "kim.y"
                               {yyval = yyvsp[0];}
#line 1634 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 36 "kim.y"
                                                {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1640 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 38 "kim.y"
                              {yyval = yyvsp[0];}
#line 1646 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 39 "kim.y"
                      {yyval = yyvsp[0];}
#line 1652 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 42 "kim.y"
                                            {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1658 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 42 "kim.y"
                                                                                                              {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1664 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 43 "kim.y"
                     {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, 0));}
#line 1670 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 43 "kim.y"
                                                                                                               {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1676 "y.tab.c"
    break;

  case 11: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 46 "kim.y"
                                                                    {yyval = setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1682 "y.tab.c"
    break;

  case 12: /* declaration_specifiers: type_specifier  */
#line 48 "kim.y"
                         {yyval = makeSpecifier(yyvsp[0], 0);}
#line 1688 "y.tab.c"
    break;

  case 13: /* declaration_specifiers: storage_class_specifier  */
#line 49 "kim.y"
                                  {yyval = makeSpecifier(0, yyvsp[0]);}
#line 1694 "y.tab.c"
    break;

  case 14: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 50 "kim.y"
                                                {yyval = updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1700 "y.tab.c"
    break;

  case 15: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 51 "kim.y"
                                                         {yyval = updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1706 "y.tab.c"
    break;

  case 16: /* storage_class_specifier: AUTO_SYM  */
#line 53 "kim.y"
                   {yyval = S_AUTO;}
#line 1712 "y.tab.c"
    break;

  case 17: /* storage_class_specifier: STATIC_SYM  */
#line 54 "kim.y"
                     {yyval = S_STATIC;}
#line 1718 "y.tab.c"
    break;

  case 18: /* storage_class_specifier: TYPEDEF_SYM  */
#line 55 "kim.y"
                      {yyval = S_TYPEDEF;}
#line 1724 "y.tab.c"
    break;

  case 19: /* init_declarator_list_opt: %empty  */
#line 57 "kim.y"
                      {yyval = NIL;}
#line 1730 "y.tab.c"
    break;

  case 20: /* init_declarator_list_opt: init_declarator_list  */
#line 58 "kim.y"
                               {yyval = yyvsp[0];}
#line 1736 "y.tab.c"
    break;

  case 21: /* init_declarator_list: init_declarator  */
#line 61 "kim.y"
                          {yyval = yyvsp[0];}
#line 1742 "y.tab.c"
    break;

  case 22: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 62 "kim.y"
                                                     {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1748 "y.tab.c"
    break;

  case 23: /* init_declarator: declarator  */
#line 64 "kim.y"
                     {yyval = yyvsp[0];}
#line 1754 "y.tab.c"
    break;

  case 24: /* init_declarator: declarator ASSIGN initializer  */
#line 65 "kim.y"
                                        {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1760 "y.tab.c"
    break;

  case 25: /* type_specifier: struct_specifier  */
#line 68 "kim.y"
                           {yyval = yyvsp[0];}
#line 1766 "y.tab.c"
    break;

  case 26: /* type_specifier: enum_specifier  */
#line 69 "kim.y"
                         {yyval = yyvsp[0];}
#line 1772 "y.tab.c"
    break;

  case 27: /* type_specifier: TYPE_IDENTIFIER  */
#line 70 "kim.y"
                          {yyval = yyvsp[0];}
#line 1778 "y.tab.c"
    break;

  case 28: /* @3: %empty  */
#line 73 "kim.y"
                                     {yyval = setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1784 "y.tab.c"
    break;

  case 29: /* @4: %empty  */
#line 73 "kim.y"
                                                                                                 {yyval = current_id; ++current_level;}
#line 1790 "y.tab.c"
    break;

  case 30: /* struct_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 73 "kim.y"
                                                                                                                                                                {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); --current_level; current_id = yyvsp[-2];}
#line 1796 "y.tab.c"
    break;

  case 31: /* @5: %empty  */
#line 74 "kim.y"
                          {yyval = makeType(yyvsp[0]);}
#line 1802 "y.tab.c"
    break;

  case 32: /* @6: %empty  */
#line 74 "kim.y"
                                                  {yyval = current_id; ++current_level;}
#line 1808 "y.tab.c"
    break;

  case 33: /* struct_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 74 "kim.y"
                                                                                                                 {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); --current_level; current_id = yyvsp[-2];}
#line 1814 "y.tab.c"
    break;

  case 34: /* struct_specifier: struct_or_union IDENTIFIER  */
#line 75 "kim.y"
                                     {yyval = getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1820 "y.tab.c"
    break;

  case 35: /* struct_or_union: STRUCT_SYM  */
#line 77 "kim.y"
                     {yyval = T_STRUCT;}
#line 1826 "y.tab.c"
    break;

  case 36: /* struct_or_union: UNION_SYM  */
#line 78 "kim.y"
                    {yyval = T_UNION;}
#line 1832 "y.tab.c"
    break;

  case 37: /* struct_declaration_list: struct_declaration  */
#line 80 "kim.y"
                             {yyval = yyvsp[0];}
#line 1838 "y.tab.c"
    break;

  case 38: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 81 "kim.y"
                                                     {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1844 "y.tab.c"
    break;

  case 39: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 83 "kim.y"
                                                          {yyval = setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1850 "y.tab.c"
    break;

  case 40: /* struct_declarator_list: struct_declarator  */
#line 85 "kim.y"
                            {yyval = yyvsp[0];}
#line 1856 "y.tab.c"
    break;

  case 41: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 86 "kim.y"
                                                         {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1862 "y.tab.c"
    break;

  case 42: /* struct_declarator: declarator  */
#line 88 "kim.y"
                     {yyval = yyvsp[0];}
#line 1868 "y.tab.c"
    break;

  case 43: /* @7: %empty  */
#line 91 "kim.y"
                              {yyval = setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1874 "y.tab.c"
    break;

  case 44: /* enum_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 91 "kim.y"
                                                                                                               {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1880 "y.tab.c"
    break;

  case 45: /* @8: %empty  */
#line 92 "kim.y"
                   {yyval = makeType(T_ENUM);}
#line 1886 "y.tab.c"
    break;

  case 46: /* enum_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 92 "kim.y"
                                                                  {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1892 "y.tab.c"
    break;

  case 47: /* enum_specifier: ENUM_SYM IDENTIFIER  */
#line 93 "kim.y"
                              {yyval = getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1898 "y.tab.c"
    break;

  case 48: /* enumerator_list: enumerator  */
#line 95 "kim.y"
                     {yyval = yyvsp[0];}
#line 1904 "y.tab.c"
    break;

  case 49: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 96 "kim.y"
                                           {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1910 "y.tab.c"
    break;

  case 50: /* enumerator: IDENTIFIER  */
#line 98 "kim.y"
                     {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1916 "y.tab.c"
    break;

  case 51: /* @9: %empty  */
#line 99 "kim.y"
                     {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1922 "y.tab.c"
    break;

  case 52: /* enumerator: IDENTIFIER @9 ASSIGN constant_expression  */
#line 99 "kim.y"
                                                                                                               {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1928 "y.tab.c"
    break;

  case 53: /* declarator: pointer direct_declarator  */
#line 102 "kim.y"
                                    {yyval = setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1934 "y.tab.c"
    break;

  case 54: /* declarator: direct_declarator  */
#line 103 "kim.y"
                            {yyval = yyvsp[0];}
#line 1940 "y.tab.c"
    break;

  case 55: /* pointer: STAR  */
#line 105 "kim.y"
               {yyval = makeType(T_POINTER);}
#line 1946 "y.tab.c"
    break;

  case 56: /* pointer: STAR pointer  */
#line 106 "kim.y"
                       {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 1952 "y.tab.c"
    break;

  case 57: /* direct_declarator: IDENTIFIER  */
#line 109 "kim.y"
                     {yyval = makeIdentifier(yyvsp[0]);}
#line 1958 "y.tab.c"
    break;

  case 58: /* direct_declarator: LP declarator RP  */
#line 110 "kim.y"
                           {yyval = yyvsp[-1];}
#line 1964 "y.tab.c"
    break;

  case 59: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 111 "kim.y"
                                                          {yyval = setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 1970 "y.tab.c"
    break;

  case 60: /* @10: %empty  */
#line 112 "kim.y"
                               {yyval = current_id; ++current_level;}
#line 1976 "y.tab.c"
    break;

  case 61: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 112 "kim.y"
                                                                                              {checkForwardReference(); --current_level; current_id = yyvsp[-2]; yyval = setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 1982 "y.tab.c"
    break;

  case 64: /* parameter_type_list_opt: %empty  */
#line 117 "kim.y"
          {yyval = NIL;}
#line 1988 "y.tab.c"
    break;

  case 65: /* parameter_type_list_opt: parameter_type_list  */
#line 118 "kim.y"
                              {yyval = yyvsp[0];}
#line 1994 "y.tab.c"
    break;

  case 66: /* parameter_type_list: parameter_list  */
#line 121 "kim.y"
                         {yyval = yyvsp[0];}
#line 2000 "y.tab.c"
    break;

  case 67: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 122 "kim.y"
                                         {yyval = linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2006 "y.tab.c"
    break;

  case 68: /* parameter_list: parameter_declaration  */
#line 124 "kim.y"
                                {yyval = yyvsp[0];}
#line 2012 "y.tab.c"
    break;

  case 69: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 125 "kim.y"
                                                     {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2018 "y.tab.c"
    break;

  case 70: /* parameter_declaration: declaration_specifiers declarator  */
#line 127 "kim.y"
                                            {yyval = setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2024 "y.tab.c"
    break;

  case 71: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 128 "kim.y"
                                                         {yyval = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2030 "y.tab.c"
    break;

  case 72: /* abstract_declarator_opt: %empty  */
#line 130 "kim.y"
          {yyval = NIL;}
#line 2036 "y.tab.c"
    break;

  case 73: /* abstract_declarator_opt: abstract_declarator  */
#line 131 "kim.y"
                              {yyval = yyvsp[0];}
#line 2042 "y.tab.c"
    break;

  case 74: /* abstract_declarator: pointer  */
#line 133 "kim.y"
                  {yyval = makeType(T_POINTER);}
#line 2048 "y.tab.c"
    break;

  case 75: /* abstract_declarator: direct_abstract_declarator  */
#line 134 "kim.y"
                                     {yyval = yyvsp[0];}
#line 2054 "y.tab.c"
    break;

  case 76: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 135 "kim.y"
                                             {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2060 "y.tab.c"
    break;

  case 77: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 137 "kim.y"
                                    {yyval = yyvsp[-1];}
#line 2066 "y.tab.c"
    break;

  case 78: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 138 "kim.y"
                                        {yyval = setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2072 "y.tab.c"
    break;

  case 79: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 139 "kim.y"
                                        {yyval = setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2078 "y.tab.c"
    break;

  case 80: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 140 "kim.y"
                                                                   {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2084 "y.tab.c"
    break;

  case 81: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 141 "kim.y"
                                                                   {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 2090 "y.tab.c"
    break;

  case 82: /* initializer: constant_expression  */
#line 144 "kim.y"
                              {yyval = makeNode(N_INIT_LIST_ONE, 0, yyvsp[0], 0);}
#line 2096 "y.tab.c"
    break;

  case 83: /* initializer: LR initializer_list RR  */
#line 145 "kim.y"
                                 {yyval = yyvsp[-1];}
#line 2102 "y.tab.c"
    break;

  case 84: /* initializer_list: initializer  */
#line 147 "kim.y"
                      {yyval = makeNode(N_INIT_LIST, yyvsp[0], 0, makeNode(N_INIT_LIST_NIL, 0, 0, 0));}
#line 2108 "y.tab.c"
    break;

  case 85: /* initializer_list: initializer_list COMMA initializer  */
#line 148 "kim.y"
                                             {yyval = makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 2114 "y.tab.c"
    break;

  case 86: /* statement_list_opt: %empty  */
#line 150 "kim.y"
          {yyval = makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2120 "y.tab.c"
    break;

  case 87: /* statement_list_opt: statement_list  */
#line 151 "kim.y"
                         {yyval = yyvsp[0];}
#line 2126 "y.tab.c"
    break;

  case 88: /* statement_list: statement  */
#line 153 "kim.y"
                    {yyval = makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2132 "y.tab.c"
    break;

  case 89: /* statement_list: statement_list statement  */
#line 154 "kim.y"
                                   {yyval = makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2138 "y.tab.c"
    break;

  case 90: /* statement: labeled_statement  */
#line 156 "kim.y"
                            {yyval = yyvsp[0];}
#line 2144 "y.tab.c"
    break;

  case 91: /* statement: compound_statement  */
#line 157 "kim.y"
                             {yyval = yyvsp[0];}
#line 2150 "y.tab.c"
    break;

  case 92: /* statement: expression_statement  */
#line 158 "kim.y"
                               {yyval = yyvsp[0];}
#line 2156 "y.tab.c"
    break;

  case 93: /* statement: selection_statement  */
#line 159 "kim.y"
                              {yyval = yyvsp[0];}
#line 2162 "y.tab.c"
    break;

  case 94: /* statement: iteration_statement  */
#line 160 "kim.y"
                              {yyval = yyvsp[0];}
#line 2168 "y.tab.c"
    break;

  case 95: /* statement: jump_statement  */
#line 161 "kim.y"
                         {yyval = yyvsp[0];}
#line 2174 "y.tab.c"
    break;

  case 96: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 163 "kim.y"
                                                       {yyval = makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2180 "y.tab.c"
    break;

  case 97: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 164 "kim.y"
                                      {yyval = makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2186 "y.tab.c"
    break;

  case 98: /* @11: %empty  */
#line 167 "kim.y"
             {yyval = current_id; ++current_level;}
#line 2192 "y.tab.c"
    break;

  case 99: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 167 "kim.y"
                                                                                            {checkForwardReference(); yyval = makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); --current_level; current_id = yyvsp[-3];}
#line 2198 "y.tab.c"
    break;

  case 100: /* declaration_list_opt: %empty  */
#line 169 "kim.y"
          {yyval = NIL;}
#line 2204 "y.tab.c"
    break;

  case 101: /* declaration_list_opt: declaration_list  */
#line 170 "kim.y"
                           {yyval = yyvsp[0];}
#line 2210 "y.tab.c"
    break;

  case 102: /* declaration_list: declaration  */
#line 172 "kim.y"
                      {yyval = yyvsp[0];}
#line 2216 "y.tab.c"
    break;

  case 103: /* declaration_list: declaration_list declaration  */
#line 173 "kim.y"
                                       {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 2222 "y.tab.c"
    break;

  case 104: /* expression_statement: SEMICOLON  */
#line 176 "kim.y"
                    {yyval = makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2228 "y.tab.c"
    break;

  case 105: /* expression_statement: expression SEMICOLON  */
#line 177 "kim.y"
                               {yyval = makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2234 "y.tab.c"
    break;

  case 106: /* selection_statement: IF_SYM LP expression RP statement  */
#line 180 "kim.y"
                                            {yyval = makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2240 "y.tab.c"
    break;

  case 107: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 181 "kim.y"
                                                               {yyval = makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2246 "y.tab.c"
    break;

  case 108: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 182 "kim.y"
                                                {yyval = makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2252 "y.tab.c"
    break;

  case 109: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 185 "kim.y"
                                               {yyval = makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2258 "y.tab.c"
    break;

  case 110: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 186 "kim.y"
                                                                {yyval = makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2264 "y.tab.c"
    break;

  case 111: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 187 "kim.y"
                                                 {yyval = makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2270 "y.tab.c"
    break;

  case 112: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 189 "kim.y"
                                                                           {yyval = makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]); }
#line 2276 "y.tab.c"
    break;

  case 113: /* expression_opt: %empty  */
#line 191 "kim.y"
          {yyval = NIL;}
#line 2282 "y.tab.c"
    break;

  case 114: /* expression_opt: expression  */
#line 192 "kim.y"
                     {yyval = yyvsp[0];}
#line 2288 "y.tab.c"
    break;

  case 115: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 195 "kim.y"
                                              {yyval = makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2294 "y.tab.c"
    break;

  case 116: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 196 "kim.y"
                                 {yyval = makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2300 "y.tab.c"
    break;

  case 117: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 197 "kim.y"
                              {yyval = makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2306 "y.tab.c"
    break;

  case 118: /* primary_expression: IDENTIFIER  */
#line 200 "kim.y"
                     {yyval = makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2312 "y.tab.c"
    break;

  case 119: /* primary_expression: INTEGER_CONSTANT  */
#line 201 "kim.y"
                           {yyval = makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2318 "y.tab.c"
    break;

  case 120: /* primary_expression: FLOAT_CONSTANT  */
#line 202 "kim.y"
                         {yyval = makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2324 "y.tab.c"
    break;

  case 121: /* primary_expression: CHARACTER_CONSTANT  */
#line 203 "kim.y"
                             {yyval = makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2330 "y.tab.c"
    break;

  case 122: /* primary_expression: STRING_LITERAL  */
#line 204 "kim.y"
                         {yyval = makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2336 "y.tab.c"
    break;

  case 123: /* primary_expression: LP expression RP  */
#line 205 "kim.y"
                           {yyval = yyvsp[-1];}
#line 2342 "y.tab.c"
    break;

  case 124: /* postfix_expression: primary_expression  */
#line 208 "kim.y"
                             {yyval = yyvsp[0];}
#line 2348 "y.tab.c"
    break;

  case 125: /* postfix_expression: postfix_expression LB expression RB  */
#line 209 "kim.y"
                                              {yyval = makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2354 "y.tab.c"
    break;

  case 126: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 210 "kim.y"
                                                           {yyval = makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2360 "y.tab.c"
    break;

  case 127: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 211 "kim.y"
                                               {yyval = makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2366 "y.tab.c"
    break;

  case 128: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 212 "kim.y"
                                              {yyval = makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2372 "y.tab.c"
    break;

  case 129: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 213 "kim.y"
                                      {yyval = makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2378 "y.tab.c"
    break;

  case 130: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 214 "kim.y"
                                        {yyval = makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2384 "y.tab.c"
    break;

  case 131: /* arg_expression_list_opt: %empty  */
#line 216 "kim.y"
          {yyval = makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2390 "y.tab.c"
    break;

  case 132: /* arg_expression_list_opt: arg_expression_list  */
#line 217 "kim.y"
                              {yyval = yyvsp[0];}
#line 2396 "y.tab.c"
    break;

  case 133: /* arg_expression_list: assignment_expression  */
#line 219 "kim.y"
                                {yyval = makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2402 "y.tab.c"
    break;

  case 134: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 220 "kim.y"
                                                          {yyval = makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2408 "y.tab.c"
    break;

  case 135: /* unary_expression: postfix_expression  */
#line 223 "kim.y"
                             {yyval = yyvsp[0];}
#line 2414 "y.tab.c"
    break;

  case 136: /* unary_expression: PLUSPLUS unary_expression  */
#line 224 "kim.y"
                                    {yyval = makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2420 "y.tab.c"
    break;

  case 137: /* unary_expression: MINUSMINUS unary_expression  */
#line 225 "kim.y"
                                      {yyval = makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2426 "y.tab.c"
    break;

  case 138: /* unary_expression: AMP cast_expression  */
#line 226 "kim.y"
                              {yyval = makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2432 "y.tab.c"
    break;

  case 139: /* unary_expression: STAR cast_expression  */
#line 227 "kim.y"
                               {yyval = makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2438 "y.tab.c"
    break;

  case 140: /* unary_expression: EXCL cast_expression  */
#line 228 "kim.y"
                               {yyval = makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2444 "y.tab.c"
    break;

  case 141: /* unary_expression: MINUS cast_expression  */
#line 229 "kim.y"
                                {yyval = makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2450 "y.tab.c"
    break;

  case 142: /* unary_expression: PLUS cast_expression  */
#line 230 "kim.y"
                               {yyval = makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2456 "y.tab.c"
    break;

  case 143: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 231 "kim.y"
                                      {yyval = makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2462 "y.tab.c"
    break;

  case 144: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 232 "kim.y"
                                     {yyval = makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2468 "y.tab.c"
    break;

  case 145: /* cast_expression: unary_expression  */
#line 234 "kim.y"
                           {yyval = yyvsp[0];}
#line 2474 "y.tab.c"
    break;

  case 146: /* cast_expression: LP type_name RP cast_expression  */
#line 235 "kim.y"
                                          {yyval = makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2480 "y.tab.c"
    break;

  case 147: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 237 "kim.y"
                                                         {yyval = setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2486 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: cast_expression  */
#line 240 "kim.y"
                          {yyval = yyvsp[0];}
#line 2492 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 241 "kim.y"
                                                         {yyval = makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2498 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 242 "kim.y"
                                                          {yyval = makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2504 "y.tab.c"
    break;

  case 151: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 243 "kim.y"
                                                            {yyval = makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2510 "y.tab.c"
    break;

  case 152: /* additive_expression: multiplicative_expression  */
#line 245 "kim.y"
                                    {yyval = yyvsp[0];}
#line 2516 "y.tab.c"
    break;

  case 153: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 246 "kim.y"
                                                             {yyval = makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2522 "y.tab.c"
    break;

  case 154: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 247 "kim.y"
                                                              {yyval = makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2528 "y.tab.c"
    break;

  case 155: /* relational_expression: additive_expression  */
#line 250 "kim.y"
                              {yyval = yyvsp[0];}
#line 2534 "y.tab.c"
    break;

  case 156: /* relational_expression: relational_expression LSS additive_expression  */
#line 251 "kim.y"
                                                        {yyval = makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2540 "y.tab.c"
    break;

  case 157: /* relational_expression: relational_expression GTR additive_expression  */
#line 252 "kim.y"
                                                        {yyval = makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2546 "y.tab.c"
    break;

  case 158: /* relational_expression: relational_expression LEQ additive_expression  */
#line 253 "kim.y"
                                                        {yyval = makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2552 "y.tab.c"
    break;

  case 159: /* relational_expression: relational_expression GEQ additive_expression  */
#line 254 "kim.y"
                                                        {yyval = makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2558 "y.tab.c"
    break;

  case 160: /* equality_expression: relational_expression  */
#line 256 "kim.y"
                                {yyval = yyvsp[0];}
#line 2564 "y.tab.c"
    break;

  case 161: /* equality_expression: equality_expression EQL relational_expression  */
#line 257 "kim.y"
                                                        {yyval = makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2570 "y.tab.c"
    break;

  case 162: /* equality_expression: equality_expression NEQ relational_expression  */
#line 258 "kim.y"
                                                        {yyval = makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2576 "y.tab.c"
    break;

  case 163: /* logical_and_expression: equality_expression  */
#line 261 "kim.y"
                              {yyval = yyvsp[0];}
#line 2582 "y.tab.c"
    break;

  case 164: /* logical_and_expression: logical_and_expression AMPAMP equality_expression  */
#line 262 "kim.y"
                                                            {yyval = makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2588 "y.tab.c"
    break;

  case 165: /* logical_or_expression: logical_and_expression  */
#line 264 "kim.y"
                                 {yyval = yyvsp[0];}
#line 2594 "y.tab.c"
    break;

  case 166: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 265 "kim.y"
                                                              {yyval = makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2600 "y.tab.c"
    break;

  case 167: /* constant_expression: expression  */
#line 268 "kim.y"
                     {yyval = yyvsp[0];}
#line 2606 "y.tab.c"
    break;

  case 168: /* expression: assignment_expression  */
#line 270 "kim.y"
                                {yyval = yyvsp[0];}
#line 2612 "y.tab.c"
    break;

  case 169: /* assignment_expression: logical_or_expression  */
#line 272 "kim.y"
                                {yyval = yyvsp[0];}
#line 2618 "y.tab.c"
    break;

  case 170: /* assignment_expression: unary_expression ASSIGN expression  */
#line 273 "kim.y"
                                             {yyval = makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2624 "y.tab.c"
    break;


#line 2628 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 275 "kim.y"

extern char *yytext;
void yyerror(char *s) { printf("line %d %s near %s \n", line_no, s, yytext); }

void main() {
	initialize();
	yyparse();
	if (!syntax_err && root)
		print_ast(root);

	return;
}

