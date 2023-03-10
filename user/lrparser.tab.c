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
#line 1 "lrparser.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
extern past root;
int yylex(void);
void yyerror(char *);


#line 83 "lrparser.tab.c"

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

#include "lrparser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_num_INT = 3,                    /* num_INT  */
  YYSYMBOL_num_FLOAT = 4,                  /* num_FLOAT  */
  YYSYMBOL_Y_ID = 5,                       /* Y_ID  */
  YYSYMBOL_Y_INT = 6,                      /* Y_INT  */
  YYSYMBOL_Y_FLOAT = 7,                    /* Y_FLOAT  */
  YYSYMBOL_Y_VOID = 8,                     /* Y_VOID  */
  YYSYMBOL_Y_CONST = 9,                    /* Y_CONST  */
  YYSYMBOL_Y_IF = 10,                      /* Y_IF  */
  YYSYMBOL_Y_ELSE = 11,                    /* Y_ELSE  */
  YYSYMBOL_Y_WHILE = 12,                   /* Y_WHILE  */
  YYSYMBOL_Y_BREAK = 13,                   /* Y_BREAK  */
  YYSYMBOL_Y_CONTINUE = 14,                /* Y_CONTINUE  */
  YYSYMBOL_Y_RETURN = 15,                  /* Y_RETURN  */
  YYSYMBOL_Y_ADD = 16,                     /* Y_ADD  */
  YYSYMBOL_Y_SUB = 17,                     /* Y_SUB  */
  YYSYMBOL_Y_MUL = 18,                     /* Y_MUL  */
  YYSYMBOL_Y_DIV = 19,                     /* Y_DIV  */
  YYSYMBOL_Y_MODULO = 20,                  /* Y_MODULO  */
  YYSYMBOL_Y_LESS = 21,                    /* Y_LESS  */
  YYSYMBOL_Y_LESSEQ = 22,                  /* Y_LESSEQ  */
  YYSYMBOL_Y_GREAT = 23,                   /* Y_GREAT  */
  YYSYMBOL_Y_GREATEQ = 24,                 /* Y_GREATEQ  */
  YYSYMBOL_Y_NOTEQ = 25,                   /* Y_NOTEQ  */
  YYSYMBOL_Y_EQ = 26,                      /* Y_EQ  */
  YYSYMBOL_Y_NOT = 27,                     /* Y_NOT  */
  YYSYMBOL_Y_AND = 28,                     /* Y_AND  */
  YYSYMBOL_Y_OR = 29,                      /* Y_OR  */
  YYSYMBOL_Y_ASSIGN = 30,                  /* Y_ASSIGN  */
  YYSYMBOL_Y_LPAR = 31,                    /* Y_LPAR  */
  YYSYMBOL_Y_RPAR = 32,                    /* Y_RPAR  */
  YYSYMBOL_Y_LBRACKET = 33,                /* Y_LBRACKET  */
  YYSYMBOL_Y_RBRACKET = 34,                /* Y_RBRACKET  */
  YYSYMBOL_Y_LSQUARE = 35,                 /* Y_LSQUARE  */
  YYSYMBOL_Y_RSQUARE = 36,                 /* Y_RSQUARE  */
  YYSYMBOL_Y_COMMA = 37,                   /* Y_COMMA  */
  YYSYMBOL_Y_SEMICOLON = 38,               /* Y_SEMICOLON  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_Start = 40,                     /* Start  */
  YYSYMBOL_PrimaryExp = 41,                /* PrimaryExp  */
  YYSYMBOL_Type = 42,                      /* Type  */
  YYSYMBOL_LOrExp = 43,                    /* LOrExp  */
  YYSYMBOL_LAndExp = 44,                   /* LAndExp  */
  YYSYMBOL_EqExp = 45,                     /* EqExp  */
  YYSYMBOL_RelExp = 46,                    /* RelExp  */
  YYSYMBOL_AddExp = 47,                    /* AddExp  */
  YYSYMBOL_MulExp = 48,                    /* MulExp  */
  YYSYMBOL_CallParams = 49,                /* CallParams  */
  YYSYMBOL_UnaryExp = 50,                  /* UnaryExp  */
  YYSYMBOL_ArraySubscripts = 51,           /* ArraySubscripts  */
  YYSYMBOL_LVal = 52,                      /* LVal  */
  YYSYMBOL_CompUnit = 53,                  /* CompUnit  */
  YYSYMBOL_Decl = 54,                      /* Decl  */
  YYSYMBOL_ConstDecl = 55,                 /* ConstDecl  */
  YYSYMBOL_ConstDefs = 56,                 /* ConstDefs  */
  YYSYMBOL_ConstDef = 57,                  /* ConstDef  */
  YYSYMBOL_ConstExps = 58,                 /* ConstExps  */
  YYSYMBOL_ConstInitVal = 59,              /* ConstInitVal  */
  YYSYMBOL_ConstInitVals = 60,             /* ConstInitVals  */
  YYSYMBOL_VarDecl = 61,                   /* VarDecl  */
  YYSYMBOL_VarDecls = 62,                  /* VarDecls  */
  YYSYMBOL_VarDef = 63,                    /* VarDef  */
  YYSYMBOL_InitVal = 64,                   /* InitVal  */
  YYSYMBOL_InitVals = 65,                  /* InitVals  */
  YYSYMBOL_FuncDef = 66,                   /* FuncDef  */
  YYSYMBOL_FuncParams = 67,                /* FuncParams  */
  YYSYMBOL_FuncParam = 68,                 /* FuncParam  */
  YYSYMBOL_Block = 69,                     /* Block  */
  YYSYMBOL_BlockItems = 70,                /* BlockItems  */
  YYSYMBOL_BlockItem = 71,                 /* BlockItem  */
  YYSYMBOL_Stmt = 72                       /* Stmt  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    32,    35,    36,    37,    38,    41,    42,
      43,    46,    47,    50,    51,    54,    55,    56,    59,    60,
      61,    62,    63,    66,    67,    68,    71,    72,    73,    74,
      77,    78,    81,    82,    83,    84,    85,    86,    89,    90,
      93,    94,    99,   100,   101,   102,   105,   106,   109,   110,
     113,   114,   117,   118,   121,   122,   125,   126,   127,   128,
     131,   132,   135,   136,   139,   140,   143,   144,   145,   146,
     149,   150,   151,   152,   155,   156,   159,   160,   163,   164,
     167,   168,   169,   170,   173,   174,   177,   178,   181,   182,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195
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
  "\"end of file\"", "error", "\"invalid token\"", "num_INT", "num_FLOAT",
  "Y_ID", "Y_INT", "Y_FLOAT", "Y_VOID", "Y_CONST", "Y_IF", "Y_ELSE",
  "Y_WHILE", "Y_BREAK", "Y_CONTINUE", "Y_RETURN", "Y_ADD", "Y_SUB",
  "Y_MUL", "Y_DIV", "Y_MODULO", "Y_LESS", "Y_LESSEQ", "Y_GREAT",
  "Y_GREATEQ", "Y_NOTEQ", "Y_EQ", "Y_NOT", "Y_AND", "Y_OR", "Y_ASSIGN",
  "Y_LPAR", "Y_RPAR", "Y_LBRACKET", "Y_RBRACKET", "Y_LSQUARE", "Y_RSQUARE",
  "Y_COMMA", "Y_SEMICOLON", "$accept", "Start", "PrimaryExp", "Type",
  "LOrExp", "LAndExp", "EqExp", "RelExp", "AddExp", "MulExp", "CallParams",
  "UnaryExp", "ArraySubscripts", "LVal", "CompUnit", "Decl", "ConstDecl",
  "ConstDefs", "ConstDef", "ConstExps", "ConstInitVal", "ConstInitVals",
  "VarDecl", "VarDecls", "VarDef", "InitVal", "InitVals", "FuncDef",
  "FuncParams", "FuncParam", "Block", "BlockItems", "BlockItem", "Stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,   -71,   -71,   -71,     9,    34,    69,   -71,   110,   -71,
     -71,   110,    75,   -71,    22,   129,   -71,   -71,    32,    21,
     131,   253,    19,   291,    58,    79,   -71,    84,   271,    83,
     -71,    75,   -71,   -71,   -71,    -7,   291,   291,   291,   291,
     215,   -71,   155,   125,   -71,   -71,   -71,    91,   121,   103,
     100,    54,   253,    43,   126,   -71,   234,   155,   -71,   271,
     -71,   136,   274,   291,   -71,   -71,   -71,   -71,    13,   -71,
      52,   291,   291,   291,   291,   291,   143,   -71,   140,    91,
       9,   145,   -71,   -71,   -71,    86,   -71,   -71,    23,   158,
      65,   -71,   -71,   253,   165,   125,   125,   -71,   -71,   -71,
     172,   176,   170,   171,   197,   -71,   -71,    79,     6,   181,
     -71,   -71,   182,   179,   -71,    60,   -71,   -71,   -71,   -71,
     -71,   271,   187,   291,   -71,   180,   185,   -71,   291,   291,
     -71,   -71,   -71,    16,   -71,   291,   -71,   -71,   180,   186,
     -71,   -71,   -71,   -71,   104,   198,   153,   107,   155,   132,
     -71,    20,   -71,   -71,   291,    94,   291,   291,   291,   291,
     291,   291,   291,    94,   -71,   198,   214,   153,   107,   107,
     155,   155,   155,   155,   -71,    94,   -71
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     8,     9,    10,     0,     0,     0,     3,    44,    46,
      47,    45,     0,     1,    66,     0,    42,    43,     0,     0,
       0,     0,     0,     0,    68,     0,    62,     0,     0,     0,
      49,     0,    48,     6,     7,    40,     0,     0,     0,     0,
       0,    32,    70,    23,    26,     5,    67,     0,     0,     0,
      78,     0,     0,    66,    64,    63,     0,    56,    52,     0,
      51,    50,     0,     0,    41,    35,    36,    37,     0,    71,
       0,     0,     0,     0,     0,     0,     0,    76,    80,     0,
       0,    54,    69,    65,    57,     0,    53,    33,    30,     0,
       0,     4,    72,     0,     0,    24,    25,    27,    28,    29,
       0,     0,     0,     0,     0,    85,    91,     0,     0,     5,
      88,    93,     0,    86,    89,     0,    82,    77,    79,    55,
      58,     0,     0,     0,    34,    38,    74,    73,     0,     0,
      97,    98,   100,     0,    92,     0,    84,    87,    81,    60,
      59,    31,    39,    75,     0,    11,    13,    15,    18,     0,
      99,     0,    83,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    12,    95,    14,    17,    16,
      19,    21,    20,    22,    94,     0,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   -71,    -1,    98,    76,    73,    40,   -21,   133,
     111,   -26,   -69,   -70,   154,   -63,   -71,   202,   205,   -13,
     -55,   101,   -71,   189,   216,   -32,   118,   -71,   167,   -71,
     -33,   139,   -71,   -60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,    41,     6,   144,   145,   146,   147,   148,    43,
      89,    44,    64,    45,     7,     8,     9,    19,    20,    24,
      58,   122,    10,    27,    15,    46,    94,    11,    49,    50,
     111,   112,   113,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      42,    85,    51,    12,    86,    29,   109,    57,    70,   116,
      65,    66,    67,   110,    77,     1,     2,     3,    68,    42,
      82,    48,    71,    72,    62,     1,     2,     3,    63,    71,
      72,    42,    71,    72,    13,    57,    71,    72,    57,    71,
      72,    88,    90,   109,   134,    91,   117,    97,    98,    99,
     110,    47,    21,    22,   150,   108,   142,    23,   164,    30,
     123,   126,    28,    33,    34,    35,   139,    23,   119,   152,
      71,    72,    42,    21,    14,   107,    36,    37,    23,    48,
      18,    71,    72,   133,    53,   109,    92,    38,    52,    93,
      81,    39,   108,   109,    90,   166,   138,    33,    34,    35,
      57,   125,    88,   174,   100,   109,   101,   102,   103,   104,
      36,    37,   107,    59,   151,   176,     1,     2,     3,     4,
     120,    38,    55,   121,    76,    39,    78,    76,   159,   160,
     161,   162,   106,   154,   108,    79,   155,    80,   170,   171,
     172,   173,   108,    73,    74,    75,    33,    34,    35,     1,
       2,     3,     4,   100,   108,   101,   102,   103,   104,    36,
      37,   154,    16,    25,   163,    17,    25,    26,    31,    32,
      38,    71,    72,    31,    39,   115,    76,   105,   157,   158,
      23,   106,    33,    34,    35,     1,     2,     3,     4,   100,
     124,   101,   102,   103,   104,    36,    37,   168,   169,   127,
      33,    34,    35,   128,    95,    96,    38,   129,   130,   131,
      39,   135,    76,    36,    37,    63,   136,   106,    33,    34,
      35,   140,    93,   121,    38,   175,   156,   149,    39,   167,
     165,    36,    37,    60,   141,   132,    61,    33,    34,    35,
     153,    54,    38,    83,   143,     0,    39,   118,    40,    69,
      36,    37,   137,     0,     0,     0,    33,    34,    35,     0,
       0,    38,     0,     0,     0,    39,     0,    56,    84,    36,
      37,     0,     0,     0,    33,    34,    35,    33,    34,    35,
      38,     0,     0,     0,    39,     0,    40,    36,    37,     0,
      36,    37,     0,     0,    33,    34,    35,     0,    38,     0,
       0,    38,    39,     0,    56,    39,    87,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,    39
};

static const yytype_int16 yycheck[] =
{
      21,    56,    23,     4,    59,    18,    76,    28,    40,    78,
      36,    37,    38,    76,    47,     6,     7,     8,    39,    40,
      52,    22,    16,    17,    31,     6,     7,     8,    35,    16,
      17,    52,    16,    17,     0,    56,    16,    17,    59,    16,
      17,    62,    63,   113,    38,    32,    79,    73,    74,    75,
     113,    32,    30,    31,    38,    76,   125,    35,    38,    38,
      37,    93,    30,     3,     4,     5,   121,    35,    81,   138,
      16,    17,    93,    30,     5,    76,    16,    17,    35,    80,
       5,    16,    17,   104,     5,   155,    34,    27,    30,    37,
      36,    31,   113,   163,   115,   155,    36,     3,     4,     5,
     121,    36,   123,   163,    10,   175,    12,    13,    14,    15,
      16,    17,   113,    30,   135,   175,     6,     7,     8,     9,
      34,    27,    38,    37,    33,    31,     5,    33,    21,    22,
      23,    24,    38,    29,   155,    32,    32,    37,   159,   160,
     161,   162,   163,    18,    19,    20,     3,     4,     5,     6,
       7,     8,     9,    10,   175,    12,    13,    14,    15,    16,
      17,    29,     8,    37,    32,    11,    37,    38,    37,    38,
      27,    16,    17,    37,    31,    35,    33,    34,    25,    26,
      35,    38,     3,     4,     5,     6,     7,     8,     9,    10,
      32,    12,    13,    14,    15,    16,    17,   157,   158,    34,
       3,     4,     5,    31,    71,    72,    27,    31,    38,    38,
      31,    30,    33,    16,    17,    35,    34,    38,     3,     4,
       5,    34,    37,    37,    27,    11,    28,   129,    31,   156,
     154,    16,    17,    31,   123,    38,    31,     3,     4,     5,
     139,    25,    27,    54,   126,    -1,    31,    80,    33,    34,
      16,    17,   113,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    27,    -1,    -1,    -1,    31,    -1,    33,    34,    16,
      17,    -1,    -1,    -1,     3,     4,     5,     3,     4,     5,
      27,    -1,    -1,    -1,    31,    -1,    33,    16,    17,    -1,
      16,    17,    -1,    -1,     3,     4,     5,    -1,    27,    -1,
      -1,    27,    31,    -1,    33,    31,    32,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,     9,    40,    42,    53,    54,    55,
      61,    66,    42,     0,     5,    63,    53,    53,     5,    56,
      57,    30,    31,    35,    58,    37,    38,    62,    30,    58,
      38,    37,    38,     3,     4,     5,    16,    17,    27,    31,
      33,    41,    47,    48,    50,    52,    64,    32,    42,    67,
      68,    47,    30,     5,    63,    38,    33,    47,    59,    30,
      56,    57,    31,    35,    51,    50,    50,    50,    47,    34,
      64,    16,    17,    18,    19,    20,    33,    69,     5,    32,
      37,    36,    64,    62,    34,    59,    59,    32,    47,    49,
      47,    32,    34,    37,    65,    48,    48,    50,    50,    50,
      10,    12,    13,    14,    15,    34,    38,    42,    47,    52,
      54,    69,    70,    71,    72,    35,    51,    69,    67,    58,
      34,    37,    60,    37,    32,    36,    64,    34,    31,    31,
      38,    38,    38,    47,    38,    30,    34,    70,    36,    59,
      34,    49,    51,    65,    43,    44,    45,    46,    47,    43,
      38,    47,    51,    60,    29,    32,    28,    25,    26,    21,
      22,    23,    24,    32,    38,    44,    72,    45,    46,    46,
      47,    47,    47,    47,    72,    11,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    41,    41,    41,    41,    42,    42,
      42,    43,    43,    44,    44,    45,    45,    45,    46,    46,
      46,    46,    46,    47,    47,    47,    48,    48,    48,    48,
      49,    49,    50,    50,    50,    50,    50,    50,    51,    51,
      52,    52,    53,    53,    53,    53,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     4,     2,     2,     2,     3,     4,
       1,     2,     2,     2,     1,     1,     1,     1,     4,     4,
       3,     3,     3,     4,     3,     4,     1,     2,     3,     4,
       2,     3,     3,     4,     2,     3,     1,     3,     2,     4,
       1,     2,     3,     4,     2,     3,     5,     6,     1,     3,
       2,     4,     3,     5,     3,     2,     1,     2,     1,     1,
       4,     1,     2,     1,     5,     5,     7,     2,     2,     3,
       2
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
  case 3: /* Start: CompUnit  */
#line 32 "lrparser.y"
                                {root=(yyvsp[0].pAst);showAst((yyvsp[0].pAst),0);}
#line 1293 "lrparser.tab.c"
    break;

  case 4: /* PrimaryExp: Y_LPAR AddExp Y_RPAR  */
#line 35 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1299 "lrparser.tab.c"
    break;

  case 5: /* PrimaryExp: LVal  */
#line 36 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1305 "lrparser.tab.c"
    break;

  case 6: /* PrimaryExp: num_INT  */
#line 37 "lrparser.y"
                                {(yyval.pAst) = newInteger((yyvsp[0].ivalue));}
#line 1311 "lrparser.tab.c"
    break;

  case 7: /* PrimaryExp: num_FLOAT  */
#line 38 "lrparser.y"
                                {(yyval.pAst) = newFloat((yyvsp[0].fvalue));}
#line 1317 "lrparser.tab.c"
    break;

  case 8: /* Type: Y_INT  */
#line 41 "lrparser.y"
                {(yyval.svalue) = "int";}
#line 1323 "lrparser.tab.c"
    break;

  case 9: /* Type: Y_FLOAT  */
#line 42 "lrparser.y"
                                {(yyval.svalue) = "float";}
#line 1329 "lrparser.tab.c"
    break;

  case 10: /* Type: Y_VOID  */
#line 43 "lrparser.y"
                                {(yyval.svalue) = "void";}
#line 1335 "lrparser.tab.c"
    break;

  case 11: /* LOrExp: LAndExp  */
#line 46 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1341 "lrparser.tab.c"
    break;

  case 12: /* LOrExp: LOrExp Y_OR LAndExp  */
#line 47 "lrparser.y"
                                        {(yyval.pAst) = doLOrExp((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1347 "lrparser.tab.c"
    break;

  case 13: /* LAndExp: EqExp  */
#line 50 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1353 "lrparser.tab.c"
    break;

  case 14: /* LAndExp: LAndExp Y_AND EqExp  */
#line 51 "lrparser.y"
                                        {(yyval.pAst) = doLAndExp((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1359 "lrparser.tab.c"
    break;

  case 15: /* EqExp: RelExp  */
#line 54 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1365 "lrparser.tab.c"
    break;

  case 16: /* EqExp: EqExp Y_EQ RelExp  */
#line 55 "lrparser.y"
                                        {(yyval.pAst) = doEqExp("==",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1371 "lrparser.tab.c"
    break;

  case 17: /* EqExp: EqExp Y_NOTEQ RelExp  */
#line 56 "lrparser.y"
                                        {(yyval.pAst) = doEqExp("!=",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1377 "lrparser.tab.c"
    break;

  case 18: /* RelExp: AddExp  */
#line 59 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1383 "lrparser.tab.c"
    break;

  case 19: /* RelExp: RelExp Y_LESS AddExp  */
#line 60 "lrparser.y"
                                                {(yyval.pAst) = doRelExp("<",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1389 "lrparser.tab.c"
    break;

  case 20: /* RelExp: RelExp Y_GREAT AddExp  */
#line 61 "lrparser.y"
                                                {(yyval.pAst) = doRelExp(">",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1395 "lrparser.tab.c"
    break;

  case 21: /* RelExp: RelExp Y_LESSEQ AddExp  */
#line 62 "lrparser.y"
                                                {(yyval.pAst) = doRelExp("<=",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1401 "lrparser.tab.c"
    break;

  case 22: /* RelExp: RelExp Y_GREATEQ AddExp  */
#line 63 "lrparser.y"
                                                {(yyval.pAst) = doRelExp(">=",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1407 "lrparser.tab.c"
    break;

  case 23: /* AddExp: MulExp  */
#line 66 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1413 "lrparser.tab.c"
    break;

  case 24: /* AddExp: AddExp Y_ADD MulExp  */
#line 67 "lrparser.y"
                                        {(yyval.pAst) = doAddExp("+",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1419 "lrparser.tab.c"
    break;

  case 25: /* AddExp: AddExp Y_SUB MulExp  */
#line 68 "lrparser.y"
                                        {(yyval.pAst) = doAddExp("-",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1425 "lrparser.tab.c"
    break;

  case 26: /* MulExp: UnaryExp  */
#line 71 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1431 "lrparser.tab.c"
    break;

  case 27: /* MulExp: MulExp Y_MUL UnaryExp  */
#line 72 "lrparser.y"
                                        {(yyval.pAst) = doMulExp("*",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1437 "lrparser.tab.c"
    break;

  case 28: /* MulExp: MulExp Y_DIV UnaryExp  */
#line 73 "lrparser.y"
                                        {(yyval.pAst) = doMulExp("/",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1443 "lrparser.tab.c"
    break;

  case 29: /* MulExp: MulExp Y_MODULO UnaryExp  */
#line 74 "lrparser.y"
                                                {(yyval.pAst) = doMulExp("%",(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1449 "lrparser.tab.c"
    break;

  case 30: /* CallParams: AddExp  */
#line 77 "lrparser.y"
                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1455 "lrparser.tab.c"
    break;

  case 31: /* CallParams: AddExp Y_COMMA CallParams  */
#line 78 "lrparser.y"
                                                {(yyval.pAst) = doCallParams((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1461 "lrparser.tab.c"
    break;

  case 32: /* UnaryExp: PrimaryExp  */
#line 81 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1467 "lrparser.tab.c"
    break;

  case 33: /* UnaryExp: Y_ID Y_LPAR Y_RPAR  */
#line 82 "lrparser.y"
                                        {(yyval.pAst) = funcc((yyvsp[-2].svalue),NULL);}
#line 1473 "lrparser.tab.c"
    break;

  case 34: /* UnaryExp: Y_ID Y_LPAR CallParams Y_RPAR  */
#line 83 "lrparser.y"
                                                {(yyval.pAst) = funcc((yyvsp[-3].svalue),(yyvsp[-1].pAst));}
#line 1479 "lrparser.tab.c"
    break;

  case 35: /* UnaryExp: Y_ADD UnaryExp  */
#line 84 "lrparser.y"
                                        {(yyval.pAst) = doUnaryExp("+",(yyvsp[0].pAst));}
#line 1485 "lrparser.tab.c"
    break;

  case 36: /* UnaryExp: Y_SUB UnaryExp  */
#line 85 "lrparser.y"
                                        {(yyval.pAst) = doUnaryExp("-",(yyvsp[0].pAst));}
#line 1491 "lrparser.tab.c"
    break;

  case 37: /* UnaryExp: Y_NOT UnaryExp  */
#line 86 "lrparser.y"
                                        {(yyval.pAst) = doUnaryExp("!",(yyvsp[0].pAst));}
#line 1497 "lrparser.tab.c"
    break;

  case 38: /* ArraySubscripts: Y_LSQUARE AddExp Y_RSQUARE  */
#line 89 "lrparser.y"
                                                        {(yyval.pAst) = doArray((yyvsp[-1].pAst),NULL);}
#line 1503 "lrparser.tab.c"
    break;

  case 39: /* ArraySubscripts: Y_LSQUARE AddExp Y_RSQUARE ArraySubscripts  */
#line 90 "lrparser.y"
                                                                        {(yyval.pAst) = doArray((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1509 "lrparser.tab.c"
    break;

  case 40: /* LVal: Y_ID  */
#line 93 "lrparser.y"
                                {(yyval.pAst)=newString((yyvsp[0].svalue));}
#line 1515 "lrparser.tab.c"
    break;

  case 41: /* LVal: Y_ID ArraySubscripts  */
#line 94 "lrparser.y"
                                        {(yyval.pAst)=doLVal((yyvsp[-1].svalue),(yyvsp[0].pAst));}
#line 1521 "lrparser.tab.c"
    break;

  case 42: /* CompUnit: Decl CompUnit  */
#line 99 "lrparser.y"
                                        {(yyval.pAst)=doCompUnit((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1527 "lrparser.tab.c"
    break;

  case 43: /* CompUnit: FuncDef CompUnit  */
#line 100 "lrparser.y"
                                        {(yyval.pAst)=doCompUnit((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1533 "lrparser.tab.c"
    break;

  case 44: /* CompUnit: Decl  */
#line 101 "lrparser.y"
                                        {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1539 "lrparser.tab.c"
    break;

  case 45: /* CompUnit: FuncDef  */
#line 102 "lrparser.y"
                                        {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1545 "lrparser.tab.c"
    break;

  case 46: /* Decl: ConstDecl  */
#line 105 "lrparser.y"
                                {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1551 "lrparser.tab.c"
    break;

  case 47: /* Decl: VarDecl  */
#line 106 "lrparser.y"
                                {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1557 "lrparser.tab.c"
    break;

  case 48: /* ConstDecl: Y_CONST Type ConstDef Y_SEMICOLON  */
#line 109 "lrparser.y"
                                                        {(yyval.pAst)=doConstDecl((yyvsp[-2].svalue),(yyvsp[-1].pAst));}
#line 1563 "lrparser.tab.c"
    break;

  case 49: /* ConstDecl: Y_CONST Type ConstDefs Y_SEMICOLON  */
#line 110 "lrparser.y"
                                                        {(yyval.pAst)=doConstDecl((yyvsp[-2].svalue),(yyvsp[-1].pAst));}
#line 1569 "lrparser.tab.c"
    break;

  case 50: /* ConstDefs: ConstDef Y_COMMA ConstDef  */
#line 113 "lrparser.y"
                                                {(yyval.pAst)=doConstDefs((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1575 "lrparser.tab.c"
    break;

  case 51: /* ConstDefs: ConstDef Y_COMMA ConstDefs  */
#line 114 "lrparser.y"
                                                {(yyval.pAst)=doConstDefs((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1581 "lrparser.tab.c"
    break;

  case 52: /* ConstDef: Y_ID Y_ASSIGN ConstInitVal  */
#line 117 "lrparser.y"
                                                {(yyval.pAst)=doConstDef((yyvsp[-2].svalue),(yyvsp[0].pAst));}
#line 1587 "lrparser.tab.c"
    break;

  case 53: /* ConstDef: Y_ID ConstExps Y_ASSIGN ConstInitVal  */
#line 118 "lrparser.y"
                                                        {(yyval.pAst)=doConstDef((yyvsp[-3].svalue),(yyvsp[0].pAst));}
#line 1593 "lrparser.tab.c"
    break;

  case 54: /* ConstExps: Y_LSQUARE AddExp Y_RSQUARE  */
#line 121 "lrparser.y"
                                                        {(yyval.pAst)=(yyvsp[-1].pAst);}
#line 1599 "lrparser.tab.c"
    break;

  case 55: /* ConstExps: Y_LSQUARE AddExp Y_RSQUARE ConstExps  */
#line 122 "lrparser.y"
                                                        {(yyval.pAst)=(yyvsp[-2].pAst);}
#line 1605 "lrparser.tab.c"
    break;

  case 56: /* ConstInitVal: AddExp  */
#line 125 "lrparser.y"
                                {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1611 "lrparser.tab.c"
    break;

  case 57: /* ConstInitVal: Y_LBRACKET Y_RBRACKET  */
#line 126 "lrparser.y"
                                                {(yyval.pAst)=doConstInitVal(NULL,NULL);}
#line 1617 "lrparser.tab.c"
    break;

  case 58: /* ConstInitVal: Y_LBRACKET ConstInitVal Y_RBRACKET  */
#line 127 "lrparser.y"
                                                        {(yyval.pAst)=doConstInitVal((yyvsp[-1].pAst),NULL);}
#line 1623 "lrparser.tab.c"
    break;

  case 59: /* ConstInitVal: Y_LBRACKET ConstInitVal ConstInitVals Y_RBRACKET  */
#line 128 "lrparser.y"
                                                                        {(yyval.pAst)=doConstInitVal((yyvsp[-2].pAst),(yyvsp[-1].pAst));}
#line 1629 "lrparser.tab.c"
    break;

  case 60: /* ConstInitVals: Y_COMMA ConstInitVal  */
#line 131 "lrparser.y"
                                                {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1635 "lrparser.tab.c"
    break;

  case 61: /* ConstInitVals: Y_COMMA ConstInitVal ConstInitVals  */
#line 132 "lrparser.y"
                                                        {(yyval.pAst)=doConstInitVals((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1641 "lrparser.tab.c"
    break;

  case 62: /* VarDecl: Type VarDef Y_SEMICOLON  */
#line 135 "lrparser.y"
                                                {(yyval.pAst)=doVarDecl((yyvsp[-2].svalue),(yyvsp[-1].pAst),NULL);}
#line 1647 "lrparser.tab.c"
    break;

  case 63: /* VarDecl: Type VarDef VarDecls Y_SEMICOLON  */
#line 136 "lrparser.y"
                                                        {(yyval.pAst)=doVarDecl((yyvsp[-3].svalue),(yyvsp[-2].pAst),(yyvsp[-1].pAst));}
#line 1653 "lrparser.tab.c"
    break;

  case 64: /* VarDecls: Y_COMMA VarDef  */
#line 139 "lrparser.y"
                                        {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1659 "lrparser.tab.c"
    break;

  case 65: /* VarDecls: Y_COMMA VarDef VarDecls  */
#line 140 "lrparser.y"
                                                {(yyval.pAst)=doVarDecls((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1665 "lrparser.tab.c"
    break;

  case 66: /* VarDef: Y_ID  */
#line 143 "lrparser.y"
                        {(yyval.pAst)=newString((yyvsp[0].svalue));}
#line 1671 "lrparser.tab.c"
    break;

  case 67: /* VarDef: Y_ID Y_ASSIGN InitVal  */
#line 144 "lrparser.y"
                                        {(yyval.pAst)=doVarDef((yyvsp[-2].svalue),(yyvsp[0].pAst));}
#line 1677 "lrparser.tab.c"
    break;

  case 68: /* VarDef: Y_ID ConstExps  */
#line 145 "lrparser.y"
                                        {(yyval.pAst)=newString((yyvsp[-1].svalue));}
#line 1683 "lrparser.tab.c"
    break;

  case 69: /* VarDef: Y_ID ConstExps Y_ASSIGN InitVal  */
#line 146 "lrparser.y"
                                                        {(yyval.pAst)=doVarDef((yyvsp[-3].svalue),(yyvsp[0].pAst));}
#line 1689 "lrparser.tab.c"
    break;

  case 70: /* InitVal: AddExp  */
#line 149 "lrparser.y"
                                {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1695 "lrparser.tab.c"
    break;

  case 71: /* InitVal: Y_LBRACKET Y_RBRACKET  */
#line 150 "lrparser.y"
                                                {(yyval.pAst)=doInitVal(NULL,NULL);}
#line 1701 "lrparser.tab.c"
    break;

  case 72: /* InitVal: Y_LBRACKET InitVal Y_RBRACKET  */
#line 151 "lrparser.y"
                                                        {(yyval.pAst)=doInitVal((yyvsp[-1].pAst),NULL);}
#line 1707 "lrparser.tab.c"
    break;

  case 73: /* InitVal: Y_LBRACKET InitVal InitVals Y_RBRACKET  */
#line 152 "lrparser.y"
                                                        {(yyval.pAst)=doInitVal((yyvsp[-2].pAst),(yyvsp[-1].pAst));}
#line 1713 "lrparser.tab.c"
    break;

  case 74: /* InitVals: Y_COMMA InitVal  */
#line 155 "lrparser.y"
                                        {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1719 "lrparser.tab.c"
    break;

  case 75: /* InitVals: Y_COMMA InitVal InitVals  */
#line 156 "lrparser.y"
                                                {(yyval.pAst)=doInitVals((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1725 "lrparser.tab.c"
    break;

  case 76: /* FuncDef: Type Y_ID Y_LPAR Y_RPAR Block  */
#line 159 "lrparser.y"
                                                {(yyval.pAst)=doFuncDef((yyvsp[-4].svalue),(yyvsp[-3].svalue),NULL,(yyvsp[0].pAst));}
#line 1731 "lrparser.tab.c"
    break;

  case 77: /* FuncDef: Type Y_ID Y_LPAR FuncParams Y_RPAR Block  */
#line 160 "lrparser.y"
                                                                {(yyval.pAst)=doFuncDef((yyvsp[-5].svalue),(yyvsp[-4].svalue),(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1737 "lrparser.tab.c"
    break;

  case 78: /* FuncParams: FuncParam  */
#line 163 "lrparser.y"
                                {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1743 "lrparser.tab.c"
    break;

  case 79: /* FuncParams: FuncParam Y_COMMA FuncParams  */
#line 164 "lrparser.y"
                                                {(yyval.pAst)=doFuncParams((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1749 "lrparser.tab.c"
    break;

  case 80: /* FuncParam: Type Y_ID  */
#line 167 "lrparser.y"
                                {(yyval.pAst)=doFuncParam((yyvsp[-1].svalue),(yyvsp[0].svalue));}
#line 1755 "lrparser.tab.c"
    break;

  case 81: /* FuncParam: Type Y_ID Y_LSQUARE Y_RSQUARE  */
#line 168 "lrparser.y"
                                                {(yyval.pAst)=doFuncParam((yyvsp[-3].svalue),(yyvsp[-2].svalue));}
#line 1761 "lrparser.tab.c"
    break;

  case 82: /* FuncParam: Type Y_ID ArraySubscripts  */
#line 169 "lrparser.y"
                                                {(yyval.pAst)=doFuncParam((yyvsp[-2].svalue),(yyvsp[-1].svalue));}
#line 1767 "lrparser.tab.c"
    break;

  case 83: /* FuncParam: Type Y_ID Y_LSQUARE Y_RSQUARE ArraySubscripts  */
#line 170 "lrparser.y"
                                                                {(yyval.pAst)=doFuncParam((yyvsp[-4].svalue),(yyvsp[-3].svalue));}
#line 1773 "lrparser.tab.c"
    break;

  case 84: /* Block: Y_LBRACKET BlockItems Y_RBRACKET  */
#line 173 "lrparser.y"
                                                        {(yyval.pAst)=doBlock((yyvsp[-1].pAst));}
#line 1779 "lrparser.tab.c"
    break;

  case 85: /* Block: Y_LBRACKET Y_RBRACKET  */
#line 174 "lrparser.y"
                                                {(yyval.pAst)=doBlock(NULL);}
#line 1785 "lrparser.tab.c"
    break;

  case 86: /* BlockItems: BlockItem  */
#line 177 "lrparser.y"
                                {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1791 "lrparser.tab.c"
    break;

  case 87: /* BlockItems: BlockItem BlockItems  */
#line 178 "lrparser.y"
                                        {(yyval.pAst)=doBlockItems((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1797 "lrparser.tab.c"
    break;

  case 88: /* BlockItem: Decl  */
#line 181 "lrparser.y"
                        {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1803 "lrparser.tab.c"
    break;

  case 89: /* BlockItem: Stmt  */
#line 182 "lrparser.y"
                        {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1809 "lrparser.tab.c"
    break;

  case 90: /* Stmt: LVal Y_ASSIGN AddExp Y_SEMICOLON  */
#line 185 "lrparser.y"
                                                        {(yyval.pAst)=doStmt1((yyvsp[-3].pAst),(yyvsp[-1].pAst));}
#line 1815 "lrparser.tab.c"
    break;

  case 91: /* Stmt: Y_SEMICOLON  */
#line 186 "lrparser.y"
                                {(yyval.pAst)=doStmt2();}
#line 1821 "lrparser.tab.c"
    break;

  case 92: /* Stmt: AddExp Y_SEMICOLON  */
#line 187 "lrparser.y"
                                        {(yyval.pAst)=(yyvsp[-1].pAst);}
#line 1827 "lrparser.tab.c"
    break;

  case 93: /* Stmt: Block  */
#line 188 "lrparser.y"
                                {(yyval.pAst)=(yyvsp[0].pAst);}
#line 1833 "lrparser.tab.c"
    break;

  case 94: /* Stmt: Y_WHILE Y_LPAR LOrExp Y_RPAR Stmt  */
#line 189 "lrparser.y"
                                                        {(yyval.pAst)=dowhile((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1839 "lrparser.tab.c"
    break;

  case 95: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt  */
#line 190 "lrparser.y"
                                                        {(yyval.pAst)=doif((yyvsp[-2].pAst),(yyvsp[0].pAst),NULL);}
#line 1845 "lrparser.tab.c"
    break;

  case 96: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt Y_ELSE Stmt  */
#line 191 "lrparser.y"
                                                                {(yyval.pAst)=doif((yyvsp[-4].pAst),(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1851 "lrparser.tab.c"
    break;

  case 97: /* Stmt: Y_BREAK Y_SEMICOLON  */
#line 192 "lrparser.y"
                                                {(yyval.pAst)=dobreak();}
#line 1857 "lrparser.tab.c"
    break;

  case 98: /* Stmt: Y_CONTINUE Y_SEMICOLON  */
#line 193 "lrparser.y"
                                                {(yyval.pAst)=docontinue();}
#line 1863 "lrparser.tab.c"
    break;

  case 99: /* Stmt: Y_RETURN AddExp Y_SEMICOLON  */
#line 194 "lrparser.y"
                                                {(yyval.pAst)=doreturn((yyvsp[-1].pAst));}
#line 1869 "lrparser.tab.c"
    break;

  case 100: /* Stmt: Y_RETURN Y_SEMICOLON  */
#line 195 "lrparser.y"
                                                {(yyval.pAst)=doreturn(NULL);}
#line 1875 "lrparser.tab.c"
    break;


#line 1879 "lrparser.tab.c"

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

#line 199 "lrparser.y"


