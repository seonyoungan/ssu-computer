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

    #include <stdio.h>  
    extern char *yytext;
    extern int line_no;
    void yyerror(char *s);
    int yylex();
    int yywrap();

#line 80 "y.tab.c"

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
  YYSYMBOL_declaration_list = 62,          /* declaration_list  */
  YYSYMBOL_declaration = 63,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 64,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 65,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list = 66,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 67,           /* init_declarator  */
  YYSYMBOL_type_specifier = 68,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 69,          /* struct_specifier  */
  YYSYMBOL_struct_or_union = 70,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 71,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 72,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 73,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 74,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 75,            /* enum_specifier  */
  YYSYMBOL_enumarator_list = 76,           /* enumarator_list  */
  YYSYMBOL_enumarator = 77,                /* enumarator  */
  YYSYMBOL_declarator = 78,                /* declarator  */
  YYSYMBOL_pointer = 79,                   /* pointer  */
  YYSYMBOL_direct_declarator = 80,         /* direct_declarator  */
  YYSYMBOL_constant_expression_opt = 81,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 82,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 83,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 84,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 85,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator = 86,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 87, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 88,               /* initializer  */
  YYSYMBOL_initializer_list = 89,          /* initializer_list  */
  YYSYMBOL_statement = 90,                 /* statement  */
  YYSYMBOL_labeled_statement = 91,         /* labeled_statement  */
  YYSYMBOL_compound_statement = 92,        /* compound_statement  */
  YYSYMBOL_statement_list = 93,            /* statement_list  */
  YYSYMBOL_expression_statement = 94,      /* expression_statement  */
  YYSYMBOL_selection_statement = 95,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 96,       /* iteration_statement  */
  YYSYMBOL_expression_opt = 97,            /* expression_opt  */
  YYSYMBOL_jump_statement = 98,            /* jump_statement  */
  YYSYMBOL_primary_expression = 99,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 100,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 101,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 102,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 103,         /* unary_expression  */
  YYSYMBOL_cast_expression = 104,          /* cast_expression  */
  YYSYMBOL_type_name = 105,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 106, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 107,      /* additive_expression  */
  YYSYMBOL_relational_expression = 108,    /* relational_expression  */
  YYSYMBOL_equality_expression = 109,      /* equality_expression  */
  YYSYMBOL_logical_and_expression = 110,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 111,    /* logical_or_expression  */
  YYSYMBOL_constant_expression = 112,      /* constant_expression  */
  YYSYMBOL_expression = 113,               /* expression  */
  YYSYMBOL_assignment_expression = 114     /* assignment_expression  */
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
#define YYLAST   562

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

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
       0,    22,    22,    25,    26,    29,    30,    33,    34,    37,
      38,    41,    42,    45,    46,    47,    48,    51,    52,    53,
      56,    57,    60,    61,    64,    65,    66,    69,    70,    71,
      74,    75,    78,    79,    82,    85,    86,    89,    92,    93,
      94,    97,    98,   101,   102,   105,   106,   109,   110,   113,
     114,   115,   116,   119,   120,   123,   124,   127,   128,   131,
     132,   135,   136,   137,   140,   141,   142,   145,   146,   147,
     148,   149,   152,   153,   156,   157,   160,   161,   162,   163,
     164,   165,   168,   169,   172,   175,   176,   179,   180,   183,
     184,   185,   188,   189,   190,   193,   194,   197,   198,   199,
     202,   203,   204,   205,   206,   207,   210,   211,   212,   213,
     214,   215,   216,   219,   220,   223,   224,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   239,   240,   243,
     244,   247,   248,   249,   250,   253,   254,   255,   258,   259,
     260,   261,   262,   265,   266,   267,   270,   271,   274,   275,
     278,   281,   284,   285
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
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list", "init_declarator",
  "type_specifier", "struct_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumarator_list", "enumarator", "declarator", "pointer",
  "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression_opt", "jump_statement", "primary_expression",
  "postfix_expression", "arg_expression_list_opt", "arg_expression_list",
  "unary_expression", "cast_expression", "type_name",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "constant_expression", "expression",
  "assignment_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-193)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     368,  -193,  -193,    26,    27,  -193,     9,  -193,  -193,  -193,
    -193,    73,   368,  -193,  -193,  -193,   328,  -193,  -193,  -193,
      20,  -193,     1,    21,    15,    40,  -193,    55,    98,  -193,
    -193,  -193,  -193,     6,  -193,  -193,     8,    79,    48,  -193,
    -193,    15,   101,   460,  -193,    98,    69,    11,  -193,    26,
    -193,   425,  -193,    48,    26,    64,  -193,   101,   354,    96,
    -193,    92,  -193,  -193,  -193,  -193,  -193,  -193,   477,   477,
     314,   460,   460,   460,   460,   460,   512,   122,  -193,   165,
     100,  -193,   137,    76,   136,   161,   155,   163,  -193,  -193,
    -193,    62,   460,  -193,    98,  -193,   151,   425,  -193,  -193,
     135,    30,  -193,  -193,  -193,  -193,  -193,   328,   208,   354,
     460,  -193,   141,  -193,   114,  -193,    24,   460,  -193,  -193,
     390,   172,   186,  -193,  -193,  -193,  -193,  -193,  -193,   314,
    -193,  -193,  -193,  -193,   209,   460,   460,   216,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,  -193,  -193,  -193,  -193,    70,  -193,    26,  -193,
    -193,  -193,   190,   460,   191,   200,   260,   207,   210,   460,
     211,   214,  -193,  -193,  -193,  -193,  -193,  -193,  -193,   195,
     215,   218,   212,   114,   101,   460,  -193,  -193,   390,   142,
    -193,   460,  -193,   219,  -193,   224,   225,  -193,   229,  -193,
    -193,  -193,  -193,  -193,   137,   137,    76,    76,    76,    76,
     136,   136,   161,   155,  -193,   425,  -193,  -193,   232,  -193,
     260,   204,   460,   460,   227,  -193,   460,   460,  -193,  -193,
    -193,  -193,   249,   248,  -193,  -193,  -193,   460,  -193,  -193,
     260,  -193,   252,   239,   253,  -193,   254,   255,  -193,  -193,
    -193,  -193,   460,   460,   260,   260,   260,   256,   244,   235,
    -193,  -193,   247,   460,   260,  -193,   261,  -193,   260,  -193
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    49,    26,     0,    47,    17,     0,    18,    30,    19,
      31,     0,     2,     3,     5,     6,     0,    14,    13,    24,
       0,    25,     0,     0,    46,     0,    48,    40,     0,     1,
       4,    11,    16,     0,    20,    15,    22,    29,     0,     9,
       8,    45,    55,    53,    50,     0,    43,     0,    41,     0,
      12,     0,     7,     0,     0,     0,    32,    85,    63,     0,
      56,    57,    59,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   117,
     127,   131,   135,   138,   143,   146,   148,   152,    54,   150,
     151,     0,     0,    39,     0,    21,    22,     0,    23,    72,
       0,     0,    35,    37,    28,    33,    10,     0,     0,    55,
      53,    61,    64,    62,    65,    52,     0,     0,   118,   119,
     129,     0,     0,   127,   122,   121,   120,   124,   123,     0,
     125,    51,   111,   112,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,    44,    42,    74,     0,    27,     0,    34,
      84,    87,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,    86,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,    66,    55,    53,    58,    60,    55,    64,
     130,     0,   105,     0,   110,     0,   114,   115,     0,   109,
     153,   132,   133,   134,   136,   137,   139,   140,   141,   142,
     144,   145,   147,   149,    73,     0,    36,    99,     0,    98,
       0,     0,    95,     0,     0,    96,     0,     0,    88,    69,
      67,    68,     0,     0,   128,   126,   108,     0,   107,    75,
       0,    83,     0,     0,     0,    97,     0,     0,    71,    70,
     116,    82,     0,    95,     0,     0,     0,     0,     0,    89,
      91,    92,     0,    95,     0,    93,     0,    90,     0,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,  -193,   272,  -193,  -193,   230,     7,    -5,  -193,
     237,    34,  -193,  -193,   236,   -34,  -193,   130,  -193,   266,
     198,     2,    -3,   -14,  -100,   -39,  -193,  -193,   177,   -36,
     -92,   -93,  -193,   -97,  -193,     3,  -193,  -193,  -193,  -193,
    -192,  -193,  -193,  -193,  -193,  -193,    56,   -58,   169,  -111,
      77,    43,   149,   154,  -193,   -49,   -43,  -129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    57,    15,    58,    17,    33,
      34,    18,    19,    20,    55,    56,   101,   102,    21,    47,
      48,    22,    23,    24,    77,   180,    60,    61,    62,   181,
     114,    98,   156,   172,   173,   174,   108,   175,   176,   177,
     224,   178,    78,    79,   195,   196,    80,    81,   121,    82,
      83,    84,    85,    86,    87,    88,   179,    90
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    26,    99,    59,   155,    25,   197,    16,    89,    41,
     182,    32,    27,   124,   125,   126,   127,   128,    36,    16,
     183,   105,   113,    37,     1,    40,    39,   122,     2,     1,
     243,   204,   205,    39,    28,    49,    42,    93,    43,    52,
      94,    50,     3,   153,   186,    38,    51,     3,    99,    89,
      35,    96,     2,    32,    89,   112,   103,     4,     4,   158,
     111,   258,    44,     5,   107,   159,   105,    89,     2,   221,
       6,   266,    54,    29,   122,     7,     8,   120,     9,    10,
      45,   201,   202,   203,   190,   233,   122,    54,   152,    54,
     104,    94,    35,   198,     6,   200,   214,   183,    41,   215,
       8,    46,    32,    10,    53,     2,   112,    92,   250,    96,
       6,    25,   142,   143,   218,    32,     8,   189,   115,    10,
      89,   116,   239,   241,   118,   119,   225,   123,   123,   123,
     123,   123,   130,   234,    54,   184,   120,   185,   138,     2,
       5,    35,    89,   251,     1,   232,   131,     6,   144,   145,
     146,   147,     7,     8,    35,     9,    10,   259,   260,   261,
     103,   157,   109,   188,   110,   110,    99,   267,   139,   140,
     141,   269,    89,   150,   132,   133,   134,   148,   149,   225,
     244,     6,   151,   246,   247,   189,   135,     8,   136,    51,
      10,   210,   211,   137,   191,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   192,   257,
     225,    63,   194,    64,    65,    66,    67,    68,    69,   199,
     225,   206,   207,   208,   209,   217,   219,   220,   222,    70,
     228,   223,   226,    39,   160,   227,   231,   229,    71,    72,
     230,   235,    73,   161,    74,    75,   236,   123,   162,   163,
     164,   165,   166,   238,   237,   167,   168,   169,    76,   240,
     242,   170,   245,    63,   171,    64,    65,    66,    67,    68,
      69,   248,   249,   252,   253,   254,   255,   256,   262,   263,
     264,    70,   265,   268,    30,    39,    95,   106,   216,   100,
      71,    72,   154,   187,    73,   161,    74,    75,   193,   212,
     162,   163,   164,   165,   166,   213,     0,   167,   168,   169,
      76,    91,     0,   170,     0,     0,   171,    63,     2,    64,
      65,    66,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     1,     2,     0,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,     0,     0,    73,     3,
      74,    75,     0,     5,     0,     0,     0,     1,     2,     4,
       6,     0,     0,    31,    76,     7,     8,     5,     9,    10,
       0,     1,     2,     0,     6,   109,     0,   110,     0,     7,
       8,     0,     9,    10,     0,     4,     0,     0,     0,     3,
       0,     0,     0,     5,     2,     0,     0,     0,     0,     4,
       6,     0,     0,     0,     0,     7,     8,     5,     9,    10,
       0,   188,     0,   110,     6,     0,     0,     0,     0,     7,
       8,     4,     9,    10,     0,     0,     0,     0,    63,     5,
      64,    65,    66,    67,    68,    69,     6,     0,     0,     0,
       0,     7,     8,     0,     9,    10,    70,     0,     0,     0,
      97,     0,     0,     0,     0,    71,    72,     0,     0,    73,
       0,    74,    75,    63,     0,    64,    65,    66,    67,    68,
      69,     0,     0,     0,     0,    76,     0,     0,     0,     0,
      63,    70,    64,    65,    66,    67,    68,    69,     0,     0,
      71,    72,     0,     0,    73,     0,    74,    75,   117,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    72,     0,
      76,    73,     0,    74,    75,    63,     0,    64,    65,    66,
      67,    68,    69,     0,     0,     0,     0,    76,     0,     0,
       0,     0,     0,   129,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,     0,     0,    73,     0,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      43,     4,    51,    42,    97,     3,   135,     0,    51,    23,
     110,    16,     3,    71,    72,    73,    74,    75,    16,    12,
     112,    55,    58,     3,     3,    22,    25,    70,     4,     3,
     222,   142,   143,    25,    25,    29,    21,    26,    23,    36,
      29,    35,    21,    92,    20,    25,    38,    21,    97,    92,
      16,    49,     4,    58,    97,    58,    54,    31,    31,    29,
      58,   253,    22,    39,    57,    35,   100,   110,     4,   166,
      46,   263,    38,     0,   117,    51,    52,    70,    54,    55,
      25,   139,   140,   141,   120,   185,   129,    53,    26,    55,
      26,    29,    58,   136,    46,   138,    26,   189,   112,    29,
      52,     3,   107,    55,    25,     4,   109,    38,   237,   107,
      46,   109,    36,    37,   163,   120,    52,   120,    22,    55,
     163,    29,   215,   220,    68,    69,   169,    71,    72,    73,
      74,    75,    76,   191,   100,    21,   129,    23,    38,     4,
      39,   107,   185,   240,     3,   184,    24,    46,    12,    13,
      14,    15,    51,    52,   120,    54,    55,   254,   255,   256,
     158,    26,    21,    21,    23,    23,   215,   264,    31,    32,
      33,   268,   215,    18,     9,    10,    11,    16,    17,   222,
     223,    46,    19,   226,   227,   188,    21,    52,    23,    38,
      55,   148,   149,    28,    22,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    22,   252,
     253,     3,     3,     5,     6,     7,     8,     9,    10,     3,
     263,   144,   145,   146,   147,    35,    35,    27,    21,    21,
      35,    21,    21,    25,    26,    21,    24,    22,    30,    31,
      22,    22,    34,    35,    36,    37,    22,   191,    40,    41,
      42,    43,    44,    24,    29,    47,    48,    49,    50,    27,
      56,    53,    35,     3,    56,     5,     6,     7,     8,     9,
      10,    22,    24,    21,    35,    22,    22,    22,    22,    35,
      45,    21,    35,    22,    12,    25,    49,    57,   158,    53,
      30,    31,    94,   116,    34,    35,    36,    37,   129,   150,
      40,    41,    42,    43,    44,   151,    -1,    47,    48,    49,
      50,    45,    -1,    53,    -1,    -1,    56,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    21,
      36,    37,    -1,    39,    -1,    -1,    -1,     3,     4,    31,
      46,    -1,    -1,    35,    50,    51,    52,    39,    54,    55,
      -1,     3,     4,    -1,    46,    21,    -1,    23,    -1,    51,
      52,    -1,    54,    55,    -1,    31,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    39,     4,    -1,    -1,    -1,    -1,    31,
      46,    -1,    -1,    -1,    -1,    51,    52,    39,    54,    55,
      -1,    21,    -1,    23,    46,    -1,    -1,    -1,    -1,    51,
      52,    31,    54,    55,    -1,    -1,    -1,    -1,     3,    39,
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
static const yytype_int8 yystos[] =
{
       0,     3,     4,    21,    31,    39,    46,    51,    52,    54,
      55,    58,    59,    60,    61,    63,    64,    65,    68,    69,
      70,    75,    78,    79,    80,    78,    79,     3,    25,     0,
      60,    35,    65,    66,    67,    68,    78,     3,    25,    25,
      92,    80,    21,    23,    22,    25,     3,    76,    77,    29,
      35,    38,    92,    25,    68,    71,    72,    62,    64,    82,
      83,    84,    85,     3,     5,     6,     7,     8,     9,    10,
      21,    30,    31,    34,    36,    37,    50,    81,    99,   100,
     103,   104,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    76,    38,    26,    29,    67,    78,    25,    88,   112,
      71,    73,    74,    78,    26,    72,    63,    64,    93,    21,
      23,    78,    79,    86,    87,    22,    29,    21,   103,   103,
      64,   105,   113,   103,   104,   104,   104,   104,   104,    21,
     103,    24,     9,    10,    11,    21,    23,    28,    38,    31,
      32,    33,    36,    37,    12,    13,    14,    15,    16,    17,
      18,    19,    26,   112,    77,    88,    89,    26,    29,    35,
      26,    35,    40,    41,    42,    43,    44,    47,    48,    49,
      53,    56,    90,    91,    92,    94,    95,    96,    98,   113,
      82,    86,    81,    87,    21,    23,    20,    85,    21,    79,
      86,    22,    22,   105,     3,   101,   102,   114,   113,     3,
     113,   104,   104,   104,   106,   106,   107,   107,   107,   107,
     108,   108,   109,   110,    26,    29,    74,    35,   112,    35,
      27,    90,    21,    21,    97,   113,    21,    21,    35,    22,
      22,    24,    82,    81,   104,    22,    22,    29,    24,    88,
      27,    90,    56,    97,   113,    35,   113,   113,    22,    24,
     114,    90,    21,    35,    22,    22,    22,   113,    97,    90,
      90,    90,    22,    35,    45,    35,    97,    90,    22,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    64,    64,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    69,    69,    69,
      70,    70,    71,    71,    72,    73,    73,    74,    75,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    85,    86,    86,    86,    87,    87,    87,
      87,    87,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    92,    93,    93,    94,    94,    95,
      95,    95,    96,    96,    96,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   106,   106,   107,   107,   107,   108,   108,
     108,   108,   108,   109,   109,   109,   110,   110,   111,   111,
     112,   113,   114,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     0,
       2,     2,     3,     1,     1,     2,     2,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     1,     3,     1,     5,     4,
       2,     1,     3,     1,     3,     2,     1,     1,     2,     1,
       3,     4,     4,     0,     1,     0,     1,     1,     3,     1,
       3,     2,     2,     1,     1,     1,     2,     3,     3,     3,
       4,     4,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     0,     2,     1,     2,     5,
       7,     5,     5,     7,     9,     0,     1,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     0,     1,     1,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     4,     1,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     1,     1,     3
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

#line 1596 "y.tab.c"

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

#line 287 "kim.y"
 
void yyerror(char *s) {
		printf("line %d: %s near %s\n", line_no,s,yytext);
}
int yywrap() {
		return 1;
}

int main() {
		yyparse();
		printf("success!\n");
}
