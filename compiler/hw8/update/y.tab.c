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
extern void print_sem(A_NODE *);
extern void semantic_analysis(A_NODE *);
FILE *fout;

void yyerror(char *s);

#line 93 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO_SYM = 3,                   /* AUTO_SYM  */
  YYSYMBOL_BREAK_SYM = 4,                  /* BREAK_SYM  */
  YYSYMBOL_CASE_SYM = 5,                   /* CASE_SYM  */
  YYSYMBOL_CONTINUE_SYM = 6,               /* CONTINUE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 7,                /* DEFAULT_SYM  */
  YYSYMBOL_DO_SYM = 8,                     /* DO_SYM  */
  YYSYMBOL_ELSE_SYM = 9,                   /* ELSE_SYM  */
  YYSYMBOL_ENUM_SYM = 10,                  /* ENUM_SYM  */
  YYSYMBOL_FOR_SYM = 11,                   /* FOR_SYM  */
  YYSYMBOL_IF_SYM = 12,                    /* IF_SYM  */
  YYSYMBOL_RETURN_SYM = 13,                /* RETURN_SYM  */
  YYSYMBOL_SIZEOF_SYM = 14,                /* SIZEOF_SYM  */
  YYSYMBOL_STATIC_SYM = 15,                /* STATIC_SYM  */
  YYSYMBOL_STRUCT_SYM = 16,                /* STRUCT_SYM  */
  YYSYMBOL_SWITCH_SYM = 17,                /* SWITCH_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 18,               /* TYPEDEF_SYM  */
  YYSYMBOL_UNION_SYM = 19,                 /* UNION_SYM  */
  YYSYMBOL_WHILE_SYM = 20,                 /* WHILE_SYM  */
  YYSYMBOL_PLUSPLUS = 21,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 22,                /* MINUSMINUS  */
  YYSYMBOL_ARROW = 23,                     /* ARROW  */
  YYSYMBOL_LSS = 24,                       /* LSS  */
  YYSYMBOL_GTR = 25,                       /* GTR  */
  YYSYMBOL_LEQ = 26,                       /* LEQ  */
  YYSYMBOL_GEQ = 27,                       /* GEQ  */
  YYSYMBOL_EQL = 28,                       /* EQL  */
  YYSYMBOL_NEQ = 29,                       /* NEQ  */
  YYSYMBOL_AMPAMP = 30,                    /* AMPAMP  */
  YYSYMBOL_BARBAR = 31,                    /* BARBAR  */
  YYSYMBOL_DOTDOTDOT = 32,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 33,                        /* LP  */
  YYSYMBOL_RP = 34,                        /* RP  */
  YYSYMBOL_LB = 35,                        /* LB  */
  YYSYMBOL_RB = 36,                        /* RB  */
  YYSYMBOL_LR = 37,                        /* LR  */
  YYSYMBOL_RR = 38,                        /* RR  */
  YYSYMBOL_COLON = 39,                     /* COLON  */
  YYSYMBOL_PERIOD = 40,                    /* PERIOD  */
  YYSYMBOL_COMMA = 41,                     /* COMMA  */
  YYSYMBOL_EXCL = 42,                      /* EXCL  */
  YYSYMBOL_STAR = 43,                      /* STAR  */
  YYSYMBOL_SLASH = 44,                     /* SLASH  */
  YYSYMBOL_PERCENT = 45,                   /* PERCENT  */
  YYSYMBOL_AMP = 46,                       /* AMP  */
  YYSYMBOL_SEMICOLON = 47,                 /* SEMICOLON  */
  YYSYMBOL_PLUS = 48,                      /* PLUS  */
  YYSYMBOL_MINUS = 49,                     /* MINUS  */
  YYSYMBOL_ASSIGN = 50,                    /* ASSIGN  */
  YYSYMBOL_INTEGER_CONSTANT = 51,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 52,            /* FLOAT_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 53,            /* STRING_LITERAL  */
  YYSYMBOL_CHARACTER_CONSTANT = 54,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_IDENTIFIER = 55,                /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 56,           /* TYPE_IDENTIFIER  */
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
#define YYLAST   464

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
       0,    37,    37,    39,    40,    42,    43,    46,    46,    47,
      47,    50,    52,    53,    54,    55,    57,    58,    59,    61,
      62,    65,    66,    68,    69,    72,    73,    74,    77,    77,
      77,    78,    78,    78,    79,    81,    82,    84,    85,    87,
      89,    90,    92,    95,    95,    96,    96,    97,    99,   100,
     102,   103,   103,   106,   107,   109,   110,   113,   114,   115,
     116,   116,   118,   119,   121,   122,   125,   126,   128,   129,
     131,   132,   134,   135,   137,   138,   139,   141,   142,   143,
     144,   145,   148,   149,   151,   152,   154,   155,   157,   158,
     160,   161,   162,   163,   164,   165,   167,   168,   171,   171,
     173,   174,   176,   177,   180,   181,   184,   185,   186,   189,
     190,   191,   193,   195,   196,   199,   200,   201,   204,   205,
     206,   207,   208,   209,   212,   213,   214,   215,   216,   217,
     218,   220,   221,   223,   224,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   238,   239,   241,   244,   245,
     246,   247,   249,   250,   251,   254,   255,   256,   257,   258,
     260,   261,   262,   265,   266,   268,   269,   272,   274,   276,
     277
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
  "\"end of file\"", "error", "\"invalid token\"", "AUTO_SYM",
  "BREAK_SYM", "CASE_SYM", "CONTINUE_SYM", "DEFAULT_SYM", "DO_SYM",
  "ELSE_SYM", "ENUM_SYM", "FOR_SYM", "IF_SYM", "RETURN_SYM", "SIZEOF_SYM",
  "STATIC_SYM", "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM", "UNION_SYM",
  "WHILE_SYM", "PLUSPLUS", "MINUSMINUS", "ARROW", "LSS", "GTR", "LEQ",
  "GEQ", "EQL", "NEQ", "AMPAMP", "BARBAR", "DOTDOTDOT", "LP", "RP", "LB",
  "RB", "LR", "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH",
  "PERCENT", "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN",
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL",
  "CHARACTER_CONSTANT", "IDENTIFIER", "TYPE_IDENTIFIER", "$accept",
  "program", "translation_unit", "external_declaration",
  "function_definition", "@1", "@2", "declaration",
  "declaration_specifiers", "storage_class_specifier",
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

#define YYPACT_NINF (-208)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     253,  -208,   -28,  -208,  -208,  -208,  -208,   -15,    12,  -208,
    -208,    83,   253,  -208,  -208,  -208,   -15,    34,    34,  -208,
      33,  -208,  -208,   -20,   119,    70,    99,    95,  -208,  -208,
    -208,   110,   134,  -208,    26,  -208,  -208,   103,   145,   159,
     119,  -208,   359,   160,   157,  -208,  -208,   -15,   345,   159,
     164,  -208,  -208,  -208,    34,   395,   409,   409,   195,   359,
     359,   359,   359,   359,  -208,  -208,  -208,  -208,  -208,   179,
    -208,   185,   169,  -208,   123,    52,     5,   135,   191,   193,
    -208,  -208,  -208,   157,   172,    10,  -208,  -208,   176,   345,
    -208,  -208,  -208,  -208,   146,    34,   115,   197,  -208,   192,
    -208,   195,  -208,   359,  -208,  -208,    56,   198,   200,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,   180,   359,
     359,   181,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,    92,   189,  -208,   157,
    -208,    93,   146,   -15,    58,  -208,  -208,   -15,   309,    34,
     242,   359,  -208,    49,  -208,  -208,   138,  -208,   263,   208,
      23,   139,  -208,   359,  -208,  -208,   219,   213,  -208,   223,
    -208,  -208,  -208,  -208,  -208,   123,   123,    52,    52,    52,
      52,     5,     5,   135,   191,  -208,   359,  -208,  -208,   345,
     122,    65,  -208,  -208,  -208,  -208,   215,   359,   217,   216,
     309,   232,   234,   359,   237,   241,  -208,   238,   309,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,   233,  -208,   249,   250,
     251,   138,    34,   359,  -208,  -208,  -208,  -208,  -208,   359,
    -208,  -208,  -208,  -208,   -15,  -208,  -208,   252,  -208,   309,
     268,   359,   359,   243,  -208,   359,   359,  -208,  -208,  -208,
    -208,  -208,  -208,   255,   256,  -208,  -208,   309,  -208,   260,
     265,   247,   266,  -208,   267,   269,  -208,  -208,  -208,   359,
     309,   359,   309,   309,   309,   270,  -208,   258,   293,  -208,
    -208,   259,   359,   309,  -208,  -208,  -208
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,    45,    17,    35,    18,    36,     0,    55,    57,
      27,     0,     2,     3,     5,     6,    19,    13,    12,    25,
      31,    26,     9,     0,    54,    47,     0,     0,    56,     1,
       4,     0,    20,    21,    23,    15,    14,    34,     0,     0,
      53,    60,    62,     0,     0,    58,    11,     0,     0,     0,
       0,    32,    98,    10,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   122,   121,   118,     0,
     124,   135,   145,   148,   152,   155,   160,   163,   165,   169,
      63,   167,   168,     0,    50,     0,    48,    22,    23,     0,
      24,    82,     8,    29,     0,   100,    72,     0,    65,    66,
      68,     0,   143,     0,   136,   137,    72,     0,     0,   145,
     140,   139,   138,   142,   141,    59,   129,   130,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      84,     0,     0,     0,     0,    37,   102,    19,    86,   101,
      64,    62,    70,    74,    71,    73,    75,    61,     0,     0,
      64,    74,   147,     0,   123,   128,     0,   132,   133,     0,
     127,   170,   149,   150,   151,   153,   154,   156,   157,   158,
     159,   161,   162,   164,   166,    44,     0,    49,    83,     0,
       0,     0,    40,    42,    33,    38,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,   104,     0,    87,    88,
      90,    91,    92,    93,    94,    95,     0,   103,     0,     0,
       0,    76,    64,    62,    67,    69,   144,   146,   126,     0,
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
    -208,  -208,  -208,   295,  -208,  -208,  -208,   -80,     2,  -208,
    -208,  -208,   264,   -77,  -208,  -208,  -208,  -208,  -208,  -208,
     168,  -133,  -208,    78,  -208,  -208,  -208,   235,   186,  -208,
      -4,    -1,   -18,  -208,  -142,   -53,  -208,  -208,   166,   221,
    -114,   -59,   -79,  -208,  -208,  -208,  -146,  -208,    59,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -207,  -208,  -208,  -208,
    -208,  -208,    60,   -38,   227,    50,   -58,    47,   199,   201,
    -208,   -44,   -42,  -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,    15,    96,    17,
      31,    32,    33,    18,    19,    50,   142,    38,    94,    20,
     144,   145,   191,   192,    21,    43,    26,    85,    86,   137,
      22,    23,    24,    54,    69,   218,    98,    99,   100,   154,
     155,   156,    90,   141,   207,   208,   209,   210,   211,    95,
     148,   149,   212,   213,   214,   260,   243,   215,    70,    71,
     166,   167,    72,    73,   107,    74,    75,    76,    77,    78,
      79,    80,   216,    82
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    97,    16,    27,    91,    40,    81,    28,   168,   220,
     140,   195,    34,     7,    16,   146,   108,   143,     7,    35,
      36,   110,   111,   112,   113,   114,     1,    25,     8,   128,
     129,   130,   131,     2,   261,     9,   219,     1,     3,     4,
       9,     5,     6,    88,     2,    91,   219,    81,   138,     3,
       4,   139,     5,     6,   240,     8,   160,   195,   151,   108,
     106,   108,   248,    -7,   277,   143,     8,   143,     2,   217,
     177,   178,   179,   180,     4,   285,    48,     6,   169,    10,
     171,   254,   150,    29,   151,   172,   173,   174,    37,   160,
      10,   151,   152,   258,   221,   153,   194,   147,    53,     8,
     126,   127,   221,   106,     9,   161,   234,   -43,    92,    81,
     232,   268,   235,   143,    10,   102,   104,   105,   255,   109,
     109,   109,   109,   109,   276,   227,   278,   279,   280,    45,
     185,   188,     2,   139,   189,    40,    44,   286,     4,   193,
     -28,     6,   231,    88,    81,    91,    27,    81,   150,   153,
     151,   147,    41,   237,    42,    81,     2,    46,     8,   161,
     233,   244,     4,   132,   133,     6,   123,   124,   125,   253,
       9,   222,   160,   223,   151,    47,   175,   176,    10,   181,
     182,    81,    51,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,    52,    83,     1,   244,
     262,    93,    10,   264,   265,     2,   116,   117,   118,    55,
       3,     4,    84,     5,     6,   115,    56,    57,   119,   122,
     120,   134,   -51,   109,   135,   121,    48,   275,    58,   244,
     193,   157,   163,   158,   164,   165,   170,    59,    60,   186,
     244,    61,   226,    62,    63,     1,    64,    65,    66,    67,
      68,    10,     2,   228,   229,   239,     1,     3,     4,   230,
       5,     6,   236,     2,   238,   241,     1,   242,     3,     4,
     245,     5,     6,     2,   246,   150,   247,   151,     3,     4,
     249,     5,     6,   250,   251,     8,     7,   252,   259,   266,
     263,   257,   267,   269,   271,   224,     8,     9,    10,   270,
     272,   273,   283,   274,   281,   282,   284,    30,     9,    10,
     190,    87,   256,   196,   197,   198,   199,   200,   136,    10,
     201,   202,   203,    55,   225,   187,   204,   162,   159,   205,
      56,    57,     0,   183,     0,     0,   184,     0,     0,     0,
       0,     0,    58,     0,     0,     0,    52,     0,     0,     0,
       0,    59,    60,     0,     0,    61,   206,    62,    63,    55,
      64,    65,    66,    67,    68,     0,    56,    57,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,    58,     0,
      56,    57,    89,     0,     0,     0,     0,    59,    60,     0,
       0,    61,    58,    62,    63,     0,    64,    65,    66,    67,
      68,    59,    60,     0,     0,    61,     0,    62,    63,    55,
      64,    65,    66,    67,    68,     0,    56,    57,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,   101,     0,
      56,    57,     0,     0,     0,     0,     0,    59,    60,     0,
       0,    61,   103,    62,    63,     0,    64,    65,    66,    67,
      68,    59,    60,     0,     0,    61,     0,    62,    63,     0,
      64,    65,    66,    67,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     0,     7,    48,    23,    48,     8,   119,   151,
      89,   144,    16,    33,    12,    95,    58,    94,    33,    17,
      18,    59,    60,    61,    62,    63,     3,    55,    43,    24,
      25,    26,    27,    10,   241,    55,   150,     3,    15,    16,
      55,    18,    19,    47,    10,    89,   160,    89,    38,    15,
      16,    41,    18,    19,   200,    43,    33,   190,    35,   101,
      58,   103,   208,    37,   271,   142,    43,   144,    10,   149,
     128,   129,   130,   131,    16,   282,    50,    19,   120,    56,
     122,   223,    33,     0,    35,   123,   124,   125,    55,    33,
      56,    35,    96,   239,   153,    96,    38,    95,    39,    43,
      48,    49,   161,   101,    55,   106,    41,    37,    49,   151,
     189,   257,    47,   190,    56,    55,    56,    57,   229,    59,
      60,    61,    62,    63,   270,   163,   272,   273,   274,    34,
      38,    38,    10,    41,    41,   153,    37,   283,    16,   143,
      37,    19,   186,   147,   186,   189,   150,   189,    33,   150,
      35,   149,    33,   197,    35,   197,    10,    47,    43,   160,
      38,   203,    16,    28,    29,    19,    43,    44,    45,   222,
      55,    33,    33,    35,    35,    41,   126,   127,    56,   132,
     133,   223,    37,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    37,    37,     3,   241,
     242,    37,    56,   245,   246,    10,    21,    22,    23,    14,
      15,    16,    55,    18,    19,    36,    21,    22,    33,    50,
      35,    30,    50,   163,    31,    40,    50,   269,    33,   271,
     234,    34,    34,    41,    34,    55,    55,    42,    43,    50,
     282,    46,    34,    48,    49,     3,    51,    52,    53,    54,
      55,    56,    10,    34,    41,    39,     3,    15,    16,    36,
      18,    19,    47,    10,    47,    33,     3,    33,    15,    16,
      33,    18,    19,    10,    33,    33,    38,    35,    15,    16,
      47,    18,    19,    34,    34,    43,    33,    36,    20,    34,
      47,    39,    36,    33,    47,    32,    43,    55,    56,    34,
      34,    34,     9,    34,    34,    47,    47,    12,    55,    56,
     142,    47,   234,     4,     5,     6,     7,     8,    83,    56,
      11,    12,    13,    14,   158,   139,    17,   106,   101,    20,
      21,    22,    -1,   134,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    46,    47,    48,    49,    14,
      51,    52,    53,    54,    55,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    33,    -1,
      21,    22,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    33,    48,    49,    -1,    51,    52,    53,    54,
      55,    42,    43,    -1,    -1,    46,    -1,    48,    49,    14,
      51,    52,    53,    54,    55,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    33,    -1,
      21,    22,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    33,    48,    49,    -1,    51,    52,    53,    54,
      55,    42,    43,    -1,    -1,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    15,    16,    18,    19,    33,    43,    55,
      56,    58,    59,    60,    61,    64,    65,    66,    70,    71,
      76,    81,    87,    88,    89,    55,    83,    87,    88,     0,
      60,    67,    68,    69,    87,    65,    65,    55,    74,    63,
      89,    33,    35,    82,    37,    34,    47,    41,    50,    62,
      72,    37,    37,   105,    90,    14,    21,    22,    33,    42,
      43,    46,    48,    49,    51,    52,    53,    54,    55,    91,
     115,   116,   119,   120,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    37,    55,    84,    85,    69,    87,    37,
      99,   128,   105,    37,    75,   106,    65,    92,    93,    94,
      95,    33,   119,    33,   119,   119,    65,   121,   129,   119,
     120,   120,   120,   120,   120,    36,    21,    22,    23,    33,
      35,    40,    50,    43,    44,    45,    48,    49,    24,    25,
      26,    27,    28,    29,    30,    31,    84,    86,    38,    41,
      99,   100,    73,    70,    77,    78,    64,    65,   107,   108,
      33,    35,    87,    88,    96,    97,    98,    34,    41,   121,
      33,    88,    96,    34,    34,    55,   117,   118,   130,   129,
      55,   129,   120,   120,   120,   122,   122,   123,   123,   123,
     123,   124,   124,   125,   126,    38,    50,    85,    38,    41,
      77,    79,    80,    87,    38,    78,     4,     5,     6,     7,
       8,    11,    12,    13,    17,    20,    47,   101,   102,   103,
     104,   105,   109,   110,   111,   114,   129,    64,    92,    97,
      91,    98,    33,    35,    32,    95,    34,   120,    34,    41,
      36,   128,    99,    38,    41,    47,    47,   128,    47,    39,
     103,    33,    33,   113,   129,    33,    33,    38,   103,    47,
      34,    34,    36,    92,    91,   130,    80,    39,   103,    20,
     112,   113,   129,    47,   129,   129,    34,    36,   103,    33,
      34,    47,    34,    34,    34,   129,   103,   113,   103,   103,
     103,    34,    47,     9,    47,   113,   103
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
#line 37 "kim.y"
                           {root = makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1625 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 39 "kim.y"
                               {yyval = yyvsp[0];}
#line 1631 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 40 "kim.y"
                                                {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1637 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 42 "kim.y"
                              {yyval = yyvsp[0];}
#line 1643 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 43 "kim.y"
                      {yyval = yyvsp[0];}
#line 1649 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 46 "kim.y"
                                            {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1655 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 46 "kim.y"
                                                                                                              {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1661 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 47 "kim.y"
                     {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, 0));}
#line 1667 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 47 "kim.y"
                                                                                                               {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1673 "y.tab.c"
    break;

  case 11: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 50 "kim.y"
                                                                    {yyval = setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1679 "y.tab.c"
    break;

  case 12: /* declaration_specifiers: type_specifier  */
#line 52 "kim.y"
                         {yyval = makeSpecifier(yyvsp[0], 0);}
#line 1685 "y.tab.c"
    break;

  case 13: /* declaration_specifiers: storage_class_specifier  */
#line 53 "kim.y"
                                  {yyval = makeSpecifier(0, yyvsp[0]);}
#line 1691 "y.tab.c"
    break;

  case 14: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 54 "kim.y"
                                                {yyval = updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1697 "y.tab.c"
    break;

  case 15: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 55 "kim.y"
                                                         {yyval = updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1703 "y.tab.c"
    break;

  case 16: /* storage_class_specifier: AUTO_SYM  */
#line 57 "kim.y"
                   {yyval = S_AUTO;}
#line 1709 "y.tab.c"
    break;

  case 17: /* storage_class_specifier: STATIC_SYM  */
#line 58 "kim.y"
                     {yyval = S_STATIC;}
#line 1715 "y.tab.c"
    break;

  case 18: /* storage_class_specifier: TYPEDEF_SYM  */
#line 59 "kim.y"
                      {yyval = S_TYPEDEF;}
#line 1721 "y.tab.c"
    break;

  case 19: /* init_declarator_list_opt: %empty  */
#line 61 "kim.y"
                      {yyval = NIL;}
#line 1727 "y.tab.c"
    break;

  case 20: /* init_declarator_list_opt: init_declarator_list  */
#line 62 "kim.y"
                               {yyval = yyvsp[0];}
#line 1733 "y.tab.c"
    break;

  case 21: /* init_declarator_list: init_declarator  */
#line 65 "kim.y"
                          {yyval = yyvsp[0];}
#line 1739 "y.tab.c"
    break;

  case 22: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 66 "kim.y"
                                                     {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1745 "y.tab.c"
    break;

  case 23: /* init_declarator: declarator  */
#line 68 "kim.y"
                     {yyval = yyvsp[0];}
#line 1751 "y.tab.c"
    break;

  case 24: /* init_declarator: declarator ASSIGN initializer  */
#line 69 "kim.y"
                                        {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1757 "y.tab.c"
    break;

  case 25: /* type_specifier: struct_specifier  */
#line 72 "kim.y"
                           {yyval = yyvsp[0];}
#line 1763 "y.tab.c"
    break;

  case 26: /* type_specifier: enum_specifier  */
#line 73 "kim.y"
                         {yyval = yyvsp[0];}
#line 1769 "y.tab.c"
    break;

  case 27: /* type_specifier: TYPE_IDENTIFIER  */
#line 74 "kim.y"
                          {yyval = yyvsp[0];}
#line 1775 "y.tab.c"
    break;

  case 28: /* @3: %empty  */
#line 77 "kim.y"
                                     {yyval = setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1781 "y.tab.c"
    break;

  case 29: /* @4: %empty  */
#line 77 "kim.y"
                                                                                                 {yyval = current_id; ++current_level;}
#line 1787 "y.tab.c"
    break;

  case 30: /* struct_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 77 "kim.y"
                                                                                                                                                                {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); --current_level; current_id = yyvsp[-2];}
#line 1793 "y.tab.c"
    break;

  case 31: /* @5: %empty  */
#line 78 "kim.y"
                          {yyval = makeType(yyvsp[0]);}
#line 1799 "y.tab.c"
    break;

  case 32: /* @6: %empty  */
#line 78 "kim.y"
                                                  {yyval = current_id; ++current_level;}
#line 1805 "y.tab.c"
    break;

  case 33: /* struct_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 78 "kim.y"
                                                                                                                 {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); --current_level; current_id = yyvsp[-2];}
#line 1811 "y.tab.c"
    break;

  case 34: /* struct_specifier: struct_or_union IDENTIFIER  */
#line 79 "kim.y"
                                     {yyval = getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1817 "y.tab.c"
    break;

  case 35: /* struct_or_union: STRUCT_SYM  */
#line 81 "kim.y"
                     {yyval = T_STRUCT;}
#line 1823 "y.tab.c"
    break;

  case 36: /* struct_or_union: UNION_SYM  */
#line 82 "kim.y"
                    {yyval = T_UNION;}
#line 1829 "y.tab.c"
    break;

  case 37: /* struct_declaration_list: struct_declaration  */
#line 84 "kim.y"
                             {yyval = yyvsp[0];}
#line 1835 "y.tab.c"
    break;

  case 38: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 85 "kim.y"
                                                     {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1841 "y.tab.c"
    break;

  case 39: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 87 "kim.y"
                                                          {yyval = setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1847 "y.tab.c"
    break;

  case 40: /* struct_declarator_list: struct_declarator  */
#line 89 "kim.y"
                            {yyval = yyvsp[0];}
#line 1853 "y.tab.c"
    break;

  case 41: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 90 "kim.y"
                                                         {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1859 "y.tab.c"
    break;

  case 42: /* struct_declarator: declarator  */
#line 92 "kim.y"
                     {yyval = yyvsp[0];}
#line 1865 "y.tab.c"
    break;

  case 43: /* @7: %empty  */
#line 95 "kim.y"
                              {yyval = setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1871 "y.tab.c"
    break;

  case 44: /* enum_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 95 "kim.y"
                                                                                                               {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1877 "y.tab.c"
    break;

  case 45: /* @8: %empty  */
#line 96 "kim.y"
                   {yyval = makeType(T_ENUM);}
#line 1883 "y.tab.c"
    break;

  case 46: /* enum_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 96 "kim.y"
                                                                  {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1889 "y.tab.c"
    break;

  case 47: /* enum_specifier: ENUM_SYM IDENTIFIER  */
#line 97 "kim.y"
                              {yyval = getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1895 "y.tab.c"
    break;

  case 48: /* enumerator_list: enumerator  */
#line 99 "kim.y"
                     {yyval = yyvsp[0];}
#line 1901 "y.tab.c"
    break;

  case 49: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 100 "kim.y"
                                           {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1907 "y.tab.c"
    break;

  case 50: /* enumerator: IDENTIFIER  */
#line 102 "kim.y"
                     {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1913 "y.tab.c"
    break;

  case 51: /* @9: %empty  */
#line 103 "kim.y"
                     {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1919 "y.tab.c"
    break;

  case 52: /* enumerator: IDENTIFIER @9 ASSIGN constant_expression  */
#line 103 "kim.y"
                                                                                                               {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1925 "y.tab.c"
    break;

  case 53: /* declarator: pointer direct_declarator  */
#line 106 "kim.y"
                                    {yyval = setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1931 "y.tab.c"
    break;

  case 54: /* declarator: direct_declarator  */
#line 107 "kim.y"
                            {yyval = yyvsp[0];}
#line 1937 "y.tab.c"
    break;

  case 55: /* pointer: STAR  */
#line 109 "kim.y"
               {yyval = makeType(T_POINTER);}
#line 1943 "y.tab.c"
    break;

  case 56: /* pointer: STAR pointer  */
#line 110 "kim.y"
                       {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 1949 "y.tab.c"
    break;

  case 57: /* direct_declarator: IDENTIFIER  */
#line 113 "kim.y"
                     {yyval = makeIdentifier(yyvsp[0]);}
#line 1955 "y.tab.c"
    break;

  case 58: /* direct_declarator: LP declarator RP  */
#line 114 "kim.y"
                           {yyval = yyvsp[-1];}
#line 1961 "y.tab.c"
    break;

  case 59: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 115 "kim.y"
                                                          {yyval = setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 1967 "y.tab.c"
    break;

  case 60: /* @10: %empty  */
#line 116 "kim.y"
                               {yyval = current_id; ++current_level;}
#line 1973 "y.tab.c"
    break;

  case 61: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 116 "kim.y"
                                                                                              {checkForwardReference(); --current_level; current_id = yyvsp[-2]; yyval = setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 1979 "y.tab.c"
    break;

  case 64: /* parameter_type_list_opt: %empty  */
#line 121 "kim.y"
          {yyval = NIL;}
#line 1985 "y.tab.c"
    break;

  case 65: /* parameter_type_list_opt: parameter_type_list  */
#line 122 "kim.y"
                              {yyval = yyvsp[0];}
#line 1991 "y.tab.c"
    break;

  case 66: /* parameter_type_list: parameter_list  */
#line 125 "kim.y"
                         {yyval = yyvsp[0];}
#line 1997 "y.tab.c"
    break;

  case 67: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 126 "kim.y"
                                         {yyval = linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2003 "y.tab.c"
    break;

  case 68: /* parameter_list: parameter_declaration  */
#line 128 "kim.y"
                                {yyval = yyvsp[0];}
#line 2009 "y.tab.c"
    break;

  case 69: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 129 "kim.y"
                                                     {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2015 "y.tab.c"
    break;

  case 70: /* parameter_declaration: declaration_specifiers declarator  */
#line 131 "kim.y"
                                            {yyval = setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2021 "y.tab.c"
    break;

  case 71: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 132 "kim.y"
                                                         {yyval = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2027 "y.tab.c"
    break;

  case 72: /* abstract_declarator_opt: %empty  */
#line 134 "kim.y"
          {yyval = NIL;}
#line 2033 "y.tab.c"
    break;

  case 73: /* abstract_declarator_opt: abstract_declarator  */
#line 135 "kim.y"
                              {yyval = yyvsp[0];}
#line 2039 "y.tab.c"
    break;

  case 74: /* abstract_declarator: pointer  */
#line 137 "kim.y"
                  {yyval = makeType(T_POINTER);}
#line 2045 "y.tab.c"
    break;

  case 75: /* abstract_declarator: direct_abstract_declarator  */
#line 138 "kim.y"
                                     {yyval = yyvsp[0];}
#line 2051 "y.tab.c"
    break;

  case 76: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 139 "kim.y"
                                             {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2057 "y.tab.c"
    break;

  case 77: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 141 "kim.y"
                                    {yyval = yyvsp[-1];}
#line 2063 "y.tab.c"
    break;

  case 78: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 142 "kim.y"
                                        {yyval = setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2069 "y.tab.c"
    break;

  case 79: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 143 "kim.y"
                                        {yyval = setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2075 "y.tab.c"
    break;

  case 80: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 144 "kim.y"
                                                                   {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2081 "y.tab.c"
    break;

  case 81: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 145 "kim.y"
                                                                   {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 2087 "y.tab.c"
    break;

  case 82: /* initializer: constant_expression  */
#line 148 "kim.y"
                              {yyval = makeNode(N_INIT_LIST_ONE, 0, yyvsp[0], 0);}
#line 2093 "y.tab.c"
    break;

  case 83: /* initializer: LR initializer_list RR  */
#line 149 "kim.y"
                                 {yyval = yyvsp[-1];}
#line 2099 "y.tab.c"
    break;

  case 84: /* initializer_list: initializer  */
#line 151 "kim.y"
                      {yyval = makeNode(N_INIT_LIST, yyvsp[0], 0, makeNode(N_INIT_LIST_NIL, 0, 0, 0));}
#line 2105 "y.tab.c"
    break;

  case 85: /* initializer_list: initializer_list COMMA initializer  */
#line 152 "kim.y"
                                             {yyval = makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 2111 "y.tab.c"
    break;

  case 86: /* statement_list_opt: %empty  */
#line 154 "kim.y"
          {yyval = makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2117 "y.tab.c"
    break;

  case 87: /* statement_list_opt: statement_list  */
#line 155 "kim.y"
                         {yyval = yyvsp[0];}
#line 2123 "y.tab.c"
    break;

  case 88: /* statement_list: statement  */
#line 157 "kim.y"
                    {yyval = makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2129 "y.tab.c"
    break;

  case 89: /* statement_list: statement_list statement  */
#line 158 "kim.y"
                                   {yyval = makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2135 "y.tab.c"
    break;

  case 90: /* statement: labeled_statement  */
#line 160 "kim.y"
                            {yyval = yyvsp[0];}
#line 2141 "y.tab.c"
    break;

  case 91: /* statement: compound_statement  */
#line 161 "kim.y"
                             {yyval = yyvsp[0];}
#line 2147 "y.tab.c"
    break;

  case 92: /* statement: expression_statement  */
#line 162 "kim.y"
                               {yyval = yyvsp[0];}
#line 2153 "y.tab.c"
    break;

  case 93: /* statement: selection_statement  */
#line 163 "kim.y"
                              {yyval = yyvsp[0];}
#line 2159 "y.tab.c"
    break;

  case 94: /* statement: iteration_statement  */
#line 164 "kim.y"
                              {yyval = yyvsp[0];}
#line 2165 "y.tab.c"
    break;

  case 95: /* statement: jump_statement  */
#line 165 "kim.y"
                         {yyval = yyvsp[0];}
#line 2171 "y.tab.c"
    break;

  case 96: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 167 "kim.y"
                                                       {yyval = makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2177 "y.tab.c"
    break;

  case 97: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 168 "kim.y"
                                      {yyval = makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2183 "y.tab.c"
    break;

  case 98: /* @11: %empty  */
#line 171 "kim.y"
             {yyval = current_id; ++current_level;}
#line 2189 "y.tab.c"
    break;

  case 99: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 171 "kim.y"
                                                                                            {checkForwardReference(); yyval = makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); --current_level; current_id = yyvsp[-3];}
#line 2195 "y.tab.c"
    break;

  case 100: /* declaration_list_opt: %empty  */
#line 173 "kim.y"
          {yyval = NIL;}
#line 2201 "y.tab.c"
    break;

  case 101: /* declaration_list_opt: declaration_list  */
#line 174 "kim.y"
                           {yyval = yyvsp[0];}
#line 2207 "y.tab.c"
    break;

  case 102: /* declaration_list: declaration  */
#line 176 "kim.y"
                      {yyval = yyvsp[0];}
#line 2213 "y.tab.c"
    break;

  case 103: /* declaration_list: declaration_list declaration  */
#line 177 "kim.y"
                                       {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 2219 "y.tab.c"
    break;

  case 104: /* expression_statement: SEMICOLON  */
#line 180 "kim.y"
                    {yyval = makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2225 "y.tab.c"
    break;

  case 105: /* expression_statement: expression SEMICOLON  */
#line 181 "kim.y"
                               {yyval = makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2231 "y.tab.c"
    break;

  case 106: /* selection_statement: IF_SYM LP expression RP statement  */
#line 184 "kim.y"
                                            {yyval = makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2237 "y.tab.c"
    break;

  case 107: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 185 "kim.y"
                                                               {yyval = makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2243 "y.tab.c"
    break;

  case 108: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 186 "kim.y"
                                                {yyval = makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2249 "y.tab.c"
    break;

  case 109: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 189 "kim.y"
                                               {yyval = makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2255 "y.tab.c"
    break;

  case 110: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 190 "kim.y"
                                                                {yyval = makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2261 "y.tab.c"
    break;

  case 111: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 191 "kim.y"
                                                 {yyval = makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2267 "y.tab.c"
    break;

  case 112: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 193 "kim.y"
                                                                           {yyval = makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]); }
#line 2273 "y.tab.c"
    break;

  case 113: /* expression_opt: %empty  */
#line 195 "kim.y"
          {yyval = NIL;}
#line 2279 "y.tab.c"
    break;

  case 114: /* expression_opt: expression  */
#line 196 "kim.y"
                     {yyval = yyvsp[0];}
#line 2285 "y.tab.c"
    break;

  case 115: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 199 "kim.y"
                                              {yyval = makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2291 "y.tab.c"
    break;

  case 116: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 200 "kim.y"
                                 {yyval = makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2297 "y.tab.c"
    break;

  case 117: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 201 "kim.y"
                              {yyval = makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2303 "y.tab.c"
    break;

  case 118: /* primary_expression: IDENTIFIER  */
#line 204 "kim.y"
                     {yyval = makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2309 "y.tab.c"
    break;

  case 119: /* primary_expression: INTEGER_CONSTANT  */
#line 205 "kim.y"
                           {yyval = makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2315 "y.tab.c"
    break;

  case 120: /* primary_expression: FLOAT_CONSTANT  */
#line 206 "kim.y"
                         {yyval = makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2321 "y.tab.c"
    break;

  case 121: /* primary_expression: CHARACTER_CONSTANT  */
#line 207 "kim.y"
                             {yyval = makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2327 "y.tab.c"
    break;

  case 122: /* primary_expression: STRING_LITERAL  */
#line 208 "kim.y"
                         {yyval = makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2333 "y.tab.c"
    break;

  case 123: /* primary_expression: LP expression RP  */
#line 209 "kim.y"
                           {yyval = yyvsp[-1];}
#line 2339 "y.tab.c"
    break;

  case 124: /* postfix_expression: primary_expression  */
#line 212 "kim.y"
                             {yyval = yyvsp[0];}
#line 2345 "y.tab.c"
    break;

  case 125: /* postfix_expression: postfix_expression LB expression RB  */
#line 213 "kim.y"
                                              {yyval = makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2351 "y.tab.c"
    break;

  case 126: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 214 "kim.y"
                                                           {yyval = makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2357 "y.tab.c"
    break;

  case 127: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 215 "kim.y"
                                               {yyval = makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2363 "y.tab.c"
    break;

  case 128: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 216 "kim.y"
                                              {yyval = makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2369 "y.tab.c"
    break;

  case 129: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 217 "kim.y"
                                      {yyval = makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2375 "y.tab.c"
    break;

  case 130: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 218 "kim.y"
                                        {yyval = makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2381 "y.tab.c"
    break;

  case 131: /* arg_expression_list_opt: %empty  */
#line 220 "kim.y"
          {yyval = makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2387 "y.tab.c"
    break;

  case 132: /* arg_expression_list_opt: arg_expression_list  */
#line 221 "kim.y"
                              {yyval = yyvsp[0];}
#line 2393 "y.tab.c"
    break;

  case 133: /* arg_expression_list: assignment_expression  */
#line 223 "kim.y"
                                {yyval = makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2399 "y.tab.c"
    break;

  case 134: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 224 "kim.y"
                                                          {yyval = makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2405 "y.tab.c"
    break;

  case 135: /* unary_expression: postfix_expression  */
#line 227 "kim.y"
                             {yyval = yyvsp[0];}
#line 2411 "y.tab.c"
    break;

  case 136: /* unary_expression: PLUSPLUS unary_expression  */
#line 228 "kim.y"
                                    {yyval = makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2417 "y.tab.c"
    break;

  case 137: /* unary_expression: MINUSMINUS unary_expression  */
#line 229 "kim.y"
                                      {yyval = makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2423 "y.tab.c"
    break;

  case 138: /* unary_expression: AMP cast_expression  */
#line 230 "kim.y"
                              {yyval = makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2429 "y.tab.c"
    break;

  case 139: /* unary_expression: STAR cast_expression  */
#line 231 "kim.y"
                               {yyval = makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2435 "y.tab.c"
    break;

  case 140: /* unary_expression: EXCL cast_expression  */
#line 232 "kim.y"
                               {yyval = makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2441 "y.tab.c"
    break;

  case 141: /* unary_expression: MINUS cast_expression  */
#line 233 "kim.y"
                                {yyval = makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2447 "y.tab.c"
    break;

  case 142: /* unary_expression: PLUS cast_expression  */
#line 234 "kim.y"
                               {yyval = makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2453 "y.tab.c"
    break;

  case 143: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 235 "kim.y"
                                      {yyval = makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2459 "y.tab.c"
    break;

  case 144: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 236 "kim.y"
                                     {yyval = makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2465 "y.tab.c"
    break;

  case 145: /* cast_expression: unary_expression  */
#line 238 "kim.y"
                           {yyval = yyvsp[0];}
#line 2471 "y.tab.c"
    break;

  case 146: /* cast_expression: LP type_name RP cast_expression  */
#line 239 "kim.y"
                                          {yyval = makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2477 "y.tab.c"
    break;

  case 147: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 241 "kim.y"
                                                         {yyval = setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2483 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: cast_expression  */
#line 244 "kim.y"
                          {yyval = yyvsp[0];}
#line 2489 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 245 "kim.y"
                                                         {yyval = makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2495 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 246 "kim.y"
                                                          {yyval = makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2501 "y.tab.c"
    break;

  case 151: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 247 "kim.y"
                                                            {yyval = makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2507 "y.tab.c"
    break;

  case 152: /* additive_expression: multiplicative_expression  */
#line 249 "kim.y"
                                    {yyval = yyvsp[0];}
#line 2513 "y.tab.c"
    break;

  case 153: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 250 "kim.y"
                                                             {yyval = makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2519 "y.tab.c"
    break;

  case 154: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 251 "kim.y"
                                                              {yyval = makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2525 "y.tab.c"
    break;

  case 155: /* relational_expression: additive_expression  */
#line 254 "kim.y"
                              {yyval = yyvsp[0];}
#line 2531 "y.tab.c"
    break;

  case 156: /* relational_expression: relational_expression LSS additive_expression  */
#line 255 "kim.y"
                                                        {yyval = makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2537 "y.tab.c"
    break;

  case 157: /* relational_expression: relational_expression GTR additive_expression  */
#line 256 "kim.y"
                                                        {yyval = makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2543 "y.tab.c"
    break;

  case 158: /* relational_expression: relational_expression LEQ additive_expression  */
#line 257 "kim.y"
                                                        {yyval = makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2549 "y.tab.c"
    break;

  case 159: /* relational_expression: relational_expression GEQ additive_expression  */
#line 258 "kim.y"
                                                        {yyval = makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2555 "y.tab.c"
    break;

  case 160: /* equality_expression: relational_expression  */
#line 260 "kim.y"
                                {yyval = yyvsp[0];}
#line 2561 "y.tab.c"
    break;

  case 161: /* equality_expression: equality_expression EQL relational_expression  */
#line 261 "kim.y"
                                                        {yyval = makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2567 "y.tab.c"
    break;

  case 162: /* equality_expression: equality_expression NEQ relational_expression  */
#line 262 "kim.y"
                                                        {yyval = makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2573 "y.tab.c"
    break;

  case 163: /* logical_and_expression: equality_expression  */
#line 265 "kim.y"
                              {yyval = yyvsp[0];}
#line 2579 "y.tab.c"
    break;

  case 164: /* logical_and_expression: logical_and_expression AMPAMP equality_expression  */
#line 266 "kim.y"
                                                            {yyval = makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2585 "y.tab.c"
    break;

  case 165: /* logical_or_expression: logical_and_expression  */
#line 268 "kim.y"
                                 {yyval = yyvsp[0];}
#line 2591 "y.tab.c"
    break;

  case 166: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 269 "kim.y"
                                                              {yyval = makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2597 "y.tab.c"
    break;

  case 167: /* constant_expression: expression  */
#line 272 "kim.y"
                     {yyval = yyvsp[0];}
#line 2603 "y.tab.c"
    break;

  case 168: /* expression: assignment_expression  */
#line 274 "kim.y"
                                {yyval = yyvsp[0];}
#line 2609 "y.tab.c"
    break;

  case 169: /* assignment_expression: logical_or_expression  */
#line 276 "kim.y"
                                {yyval = yyvsp[0];}
#line 2615 "y.tab.c"
    break;

  case 170: /* assignment_expression: unary_expression ASSIGN expression  */
#line 277 "kim.y"
                                             {yyval = makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2621 "y.tab.c"
    break;


#line 2625 "y.tab.c"

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

#line 279 "kim.y"

extern char *yytext;
void yyerror(char *s) { printf("line %d %s near %s \n", line_no, s, yytext); }

void main() {
	if ((fout = fopen("a.asm", "w")) == NULL) {
		printf("can not open output file: a.asm\n");
		exit(1);
	}
	initialize();
	yyparse();
	if (!syntax_err && root)
		print_ast(root);
	else
		exit(1);
	semantic_analysis(root);
	print_sem_ast(root);
	code_generation(root);
	
	return;
}

