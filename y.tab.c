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
#line 1 "parserBottomUp.y" /* yacc.c:339  */

	#include <stdio.h>

	int yyerror (char *s);

	int yylex();


#line 75 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif


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
    IDENTIFIER = 258,
    STRING_LIT = 259,
    NUMBER_INT = 260,
    NUMBER_REAL = 261,
    COMMENT = 262,
    PROCEDURE = 263,
    FUNCTION = 264,
    REF = 265,
    VAR = 266,
    CONST = 267,
    INT = 268,
    REAL = 269,
    STRING = 270,
    BOOLEAN = 271,
    TRUE = 272,
    FALSE = 273,
    NIL = 274,
    BEG = 275,
    END = 276,
    RETURN = 277,
    BREAK = 278,
    IF = 279,
    THEN = 280,
    ELSE_ = 281,
    SWITCH = 282,
    CASE = 283,
    DEFAULT = 284,
    FOR = 285,
    DOWNTO = 286,
    TO = 287,
    DO = 288,
    LOOP = 289,
    EXIT = 290,
    WHEN = 291,
    SEMICOLON = 292,
    COLON = 293,
    COMMA = 294,
    DOT = 295,
    OPEN_PARENTHESIS = 296,
    CLOSE_PARENTHESIS = 297,
    OPEN_BRACKETS = 298,
    CLOSE_BRACKETS = 299,
    OPEN_BRACES = 300,
    CLOSE_BRACES = 301,
    ADD = 302,
    SUB = 303,
    MULT = 304,
    DIV = 305,
    MOD = 306,
    INCREMENT = 307,
    DECREMENT = 308,
    EQUAL = 309,
    NEG = 310,
    OR = 311,
    AND = 312,
    LESS_THEN = 313,
    BIGGER_THEN = 314,
    EQUAL_LOGIC = 315,
    NOT_EQUAL = 316,
    LESS_EQUAL = 317,
    BIGGER_EQUAL = 318
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LIT 259
#define NUMBER_INT 260
#define NUMBER_REAL 261
#define COMMENT 262
#define PROCEDURE 263
#define FUNCTION 264
#define REF 265
#define VAR 266
#define CONST 267
#define INT 268
#define REAL 269
#define STRING 270
#define BOOLEAN 271
#define TRUE 272
#define FALSE 273
#define NIL 274
#define BEG 275
#define END 276
#define RETURN 277
#define BREAK 278
#define IF 279
#define THEN 280
#define ELSE_ 281
#define SWITCH 282
#define CASE 283
#define DEFAULT 284
#define FOR 285
#define DOWNTO 286
#define TO 287
#define DO 288
#define LOOP 289
#define EXIT 290
#define WHEN 291
#define SEMICOLON 292
#define COLON 293
#define COMMA 294
#define DOT 295
#define OPEN_PARENTHESIS 296
#define CLOSE_PARENTHESIS 297
#define OPEN_BRACKETS 298
#define CLOSE_BRACKETS 299
#define OPEN_BRACES 300
#define CLOSE_BRACES 301
#define ADD 302
#define SUB 303
#define MULT 304
#define DIV 305
#define MOD 306
#define INCREMENT 307
#define DECREMENT 308
#define EQUAL 309
#define NEG 310
#define OR 311
#define AND 312
#define LESS_THEN 313
#define BIGGER_THEN 314
#define EQUAL_LOGIC 315
#define NOT_EQUAL 316
#define LESS_EQUAL 317
#define BIGGER_EQUAL 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "parserBottomUp.y" /* yacc.c:355  */

	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//

#line 244 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 261 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    97,    98,    99,   103,   103,   107,   107,
     108,   112,   112,   113,   117,   117,   117,   121,   121,   121,
     122,   126,   127,   131,   131,   131,   136,   136,   136,   141,
     142,   143,   147,   148,   154,   155,   159,   160,   161,   162,
     163,   164,   165,   166,   170,   174,   178,   179,   185,   189,
     190,   191,   195,   196,   197,   201,   205,   209,   210,   211,
     215,   216,   220,   224,   225,   229,   233,   234,   238,   242,
     242,   242,   242,   242,   248,   250,   254,   262,   265,   269,
     274,   279,   280,   284,   290,   294,   298,   299,   303,   307,
     308,   312,   316,   317,   318,   322,   326,   327,   328,   329,
     330,   334,   338,   339,   340,   344,   348,   349,   350,   351,
     355,   359,   360,   363,   363,   363,   363,   367,   371,   372,
     376,   376,   376,   376,   376
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LIT", "NUMBER_INT",
  "NUMBER_REAL", "COMMENT", "PROCEDURE", "FUNCTION", "REF", "VAR", "CONST",
  "INT", "REAL", "STRING", "BOOLEAN", "TRUE", "FALSE", "NIL", "BEG", "END",
  "RETURN", "BREAK", "IF", "THEN", "ELSE_", "SWITCH", "CASE", "DEFAULT",
  "FOR", "DOWNTO", "TO", "DO", "LOOP", "EXIT", "WHEN", "SEMICOLON",
  "COLON", "COMMA", "DOT", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS",
  "OPEN_BRACKETS", "CLOSE_BRACKETS", "OPEN_BRACES", "CLOSE_BRACES", "ADD",
  "SUB", "MULT", "DIV", "MOD", "INCREMENT", "DECREMENT", "EQUAL", "NEG",
  "OR", "AND", "LESS_THEN", "BIGGER_THEN", "EQUAL_LOGIC", "NOT_EQUAL",
  "LESS_EQUAL", "BIGGER_EQUAL", "$accept", "declaration", "var", "$@1",
  "id_exp", "$@2", "ids_exps", "$@3", "const", "$@4", "$@5", "const_aux",
  "$@6", "$@7", "subprogram", "procedure", "$@8", "$@9", "function",
  "$@10", "$@11", "parameter_list", "parameter_list_aux", "cb", "command",
  "block", "commands", "commands_aux", "access_n_call",
  "access_n_call_aux", "access", "attribuition", "subprogram_call",
  "real_parameter_list", "real_parameter_list_aux", "l_exp", "l_exp_aux",
  "return", "return_aux", "break", "if", "$@12", "$@13", "$@14", "$@15",
  "else", "switch", "caselist", "default", "for", "for_aux", "loop",
  "exit", "expression", "term_or_tail", "term_or", "term_and_tail",
  "term_and", "term_bool_comparison_tail", "term_bool_comparison",
  "term_arit_comparison_tail", "term_arit_comparison", "term_tail", "term",
  "factor_tail", "factor", "negation_unsub_tail", "negation_unsub",
  "arr_exp", "arr_exp_aux", "literal", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

#define YYPACT_NINF -162

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-162)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      87,  -162,  -162,  -162,  -162,    12,    87,    87,    87,  -162,
    -162,    28,    33,    36,    38,  -162,  -162,  -162,  -162,     6,
       9,    29,    43,     7,     7,  -162,    24,  -162,    46,    54,
      71,    75,    17,  -162,  -162,    17,     7,  -162,    46,  -162,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,    17,    64,  -162,
      73,    63,    -8,    31,    18,    56,    76,  -162,  -162,   127,
      93,  -162,  -162,    87,    87,    91,    95,    17,  -162,    17,
    -162,    17,    17,  -162,    17,    17,    17,    17,  -162,    17,
      17,  -162,    17,    17,    17,  -162,    17,  -162,    29,  -162,
    -162,   115,  -162,  -162,  -162,    64,    90,    73,    63,    -8,
      -8,    31,    31,    31,    31,    18,    18,    56,    56,    56,
    -162,    24,   135,    37,    95,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
      85,   -27,    17,  -162,  -162,    99,   138,    37,   106,   107,
     122,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,   142,     1,    17,    17,  -162,  -162,  -162,  -162,  -162,
    -162,   105,   145,    96,   130,   111,    37,  -162,  -162,    17,
     -27,   150,   112,   116,   113,   117,  -162,  -162,   119,    17,
    -162,    17,  -162,    93,  -162,   116,  -162,     1,  -162,   -27,
      17,  -162,    17,   139,    60,   120,  -162,  -162,  -162,  -162,
    -162,   121,   136,  -162,  -162,    17,  -162,  -162,    17,   137,
     132,   143,   129,   131,   149,    21,  -162,    21,    21,  -162,
    -162,  -162,  -162,    21,   136,  -162,   146,  -162,    21,  -162,
    -162
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    23,    26,     6,    14,     0,     5,     5,     5,    21,
      22,     0,     0,     0,     0,     1,     2,     3,     4,     0,
       0,    10,     0,    31,    31,     8,    13,    15,    33,     0,
       0,     0,     0,    11,     7,     0,    31,    29,    33,    24,
      27,   113,   120,   121,   122,   123,   124,     0,     0,     9,
      87,    90,    94,   100,   104,   109,   112,   114,   115,     0,
      20,    32,    30,     5,     5,     0,   119,     0,    85,     0,
      88,     0,     0,    91,     0,     0,     0,     0,    95,     0,
       0,   101,     0,     0,     0,   105,     0,   110,    10,    17,
      16,     0,    25,    28,   116,     0,     0,    87,    90,    94,
      94,   100,   100,   100,   100,   104,   104,   109,   109,   109,
     111,    13,     0,     0,   119,   117,    86,    89,    92,    93,
      96,    97,    98,    99,   102,   103,   106,   107,   108,    12,
       0,    54,    67,    68,    69,     0,     0,     0,     0,    47,
       0,    36,    37,    38,    39,    40,    43,    41,    42,   118,
      18,     0,    59,     0,     0,    48,    49,    50,    51,    65,
      66,     0,     0,     0,     0,     0,     0,    45,    44,     0,
      54,     0,     0,    61,     0,    64,    55,    70,     0,     0,
      83,     0,    46,    20,    52,    61,    56,    59,    58,    54,
       0,    62,     0,     0,     0,     0,    19,    57,    60,    53,
      63,     0,    78,    82,    81,     0,    84,    71,     0,     0,
       0,     0,     0,     0,     0,     5,    72,     5,     5,    76,
      80,    34,    35,     5,    78,    79,    75,    77,     5,    73,
      74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,    80,  -162,  -162,    83,  -162,    66,  -162,  -162,  -162,
    -162,    -9,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,     2,   140,  -144,  -112,    45,  -129,  -162,    13,  -161,
    -162,  -162,  -162,    -7,    -6,    -5,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,   -43,  -162,  -162,
    -162,  -162,  -162,   -32,    86,   123,    84,   118,    19,    52,
     -26,    27,    20,    48,     3,    32,  -162,    98,  -162,    72,
     -46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    91,     6,    13,    26,    32,    34,    59,     7,    14,
      35,    90,   112,   169,     8,     9,    11,    63,    10,    12,
      64,    30,    37,   220,   221,   222,   140,   167,   141,   155,
     156,   157,   158,   172,   188,   174,   191,   142,   159,   143,
     144,   161,   192,   211,   223,   229,   145,   209,   214,   146,
     205,   147,   148,   173,    68,    50,    70,    51,    73,    52,
      78,    53,    81,    54,    85,    55,    87,    56,    57,    96,
      58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      49,   139,    66,    60,    41,    42,    43,    44,   164,   184,
      28,   171,    15,   151,   152,    65,   153,    29,    45,    46,
      41,    42,    43,    44,   131,   139,    31,   154,   199,     1,
       2,    19,     3,     4,    45,    46,    20,   182,    61,    21,
     131,    22,    47,   132,   133,   134,    48,    23,   135,   114,
      24,   136,    71,    72,   139,   137,   138,    38,    47,   132,
     133,   134,    48,    33,   135,    79,    80,   136,    42,    43,
      44,   137,   138,   224,   225,   120,   121,   122,   123,   226,
       5,    45,    46,    25,   230,    36,    16,    17,    18,    74,
      75,   203,   204,    76,    77,     1,     2,    27,     3,     4,
     160,   101,   102,   103,   104,    82,    83,    84,    92,    93,
     126,   127,   128,    39,   107,   108,   109,    40,   118,   119,
      69,   175,   176,    99,   100,   124,   125,   105,   106,    67,
      88,    86,    89,    94,    95,   113,   115,   183,   130,   150,
     162,   163,   165,   168,   166,   170,   177,   194,   131,   195,
     179,   180,   181,   185,   186,   187,   190,   189,   175,   202,
     201,   193,   206,   207,   208,   215,   213,   217,   216,   218,
     219,   111,   228,   210,   196,   178,   212,   129,    62,   197,
     198,   227,   117,   116,   110,   200,   149,    98,     0,     0,
      97
};

static const yytype_int16 yycheck[] =
{
      32,   113,    48,    35,     3,     4,     5,     6,   137,   170,
       3,    10,     0,    40,    41,    47,    43,    10,    17,    18,
       3,     4,     5,     6,     3,   137,    24,    54,   189,     8,
       9,     3,    11,    12,    17,    18,     3,   166,    36,     3,
       3,     3,    41,    22,    23,    24,    45,    41,    27,    95,
      41,    30,    60,    61,   166,    34,    35,     3,    41,    22,
      23,    24,    45,    39,    27,    47,    48,    30,     4,     5,
       6,    34,    35,   217,   218,   101,   102,   103,   104,   223,
       0,    17,    18,    54,   228,    39,     6,     7,     8,    58,
      59,    31,    32,    62,    63,     8,     9,    54,    11,    12,
     132,    74,    75,    76,    77,    49,    50,    51,    63,    64,
     107,   108,   109,    42,    82,    83,    84,    42,    99,   100,
      57,   153,   154,    71,    72,   105,   106,    79,    80,    56,
       3,    55,    39,    42,    39,    20,    46,   169,     3,    54,
      41,     3,    36,    21,    37,     3,    41,   179,     3,   181,
      54,    21,    41,     3,    42,    39,    39,    44,   190,    20,
     192,    42,    42,    42,    28,    33,    29,    38,    25,    38,
      21,    88,    26,   205,   183,   162,   208,   111,    38,   185,
     187,   224,    98,    97,    86,   190,   114,    69,    -1,    -1,
      67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    11,    12,    65,    66,    72,    78,    79,
      82,    80,    83,    67,    73,     0,    65,    65,    65,     3,
       3,     3,     3,    41,    41,    54,    68,    54,     3,    10,
      85,    85,    69,    39,    70,    74,    39,    86,     3,    42,
      42,     3,     4,     5,     6,    17,    18,    41,    45,   117,
     119,   121,   123,   125,   127,   129,   131,   132,   134,    71,
     117,    85,    86,    81,    84,   117,   134,    56,   118,    57,
     120,    60,    61,   122,    58,    59,    62,    63,   124,    47,
      48,   126,    49,    50,    51,   128,    55,   130,     3,    39,
      75,    65,    89,    89,    42,    39,   133,   119,   121,   123,
     123,   125,   125,   125,   125,   127,   127,   129,   129,   129,
     131,    68,    76,    20,   134,    46,   118,   120,   122,   122,
     124,   124,   124,   124,   126,   126,   128,   128,   128,    70,
       3,     3,    22,    23,    24,    27,    30,    34,    35,    88,
      90,    92,   101,   103,   104,   110,   113,   115,   116,   133,
      54,    40,    41,    43,    54,    93,    94,    95,    96,   102,
     117,   105,    41,     3,    90,    36,    37,    91,    21,    77,
       3,    10,    97,   117,    99,   117,   117,    41,    92,    54,
      21,    41,    90,   117,    93,     3,    42,    39,    98,    44,
      39,   100,   106,    42,   117,   117,    75,    98,    97,    93,
      99,   117,    20,    31,    32,   114,    42,    42,    28,   111,
     117,   107,   117,    29,   112,    33,    25,    38,    38,    21,
      87,    88,    89,   108,    87,    87,    87,   111,    26,   109,
      87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    67,    66,    69,    68,
      68,    71,    70,    70,    73,    74,    72,    76,    77,    75,
      75,    78,    78,    80,    81,    79,    83,    84,    82,    85,
      85,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    90,    91,    91,    92,    93,
      93,    93,    94,    94,    94,    95,    96,    97,    97,    97,
      98,    98,    99,   100,   100,   101,   102,   102,   103,   105,
     106,   107,   108,   104,   109,   109,   110,   111,   111,   112,
     113,   114,   114,   115,   116,   117,   118,   118,   119,   120,
     120,   121,   122,   122,   122,   123,   124,   124,   124,   124,
     124,   125,   126,   126,   126,   127,   128,   128,   128,   128,
     129,   130,   130,   131,   131,   131,   131,   132,   133,   133,
     134,   134,   134,   134,   134
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     0,     5,     0,     3,
       0,     0,     5,     0,     0,     0,     7,     0,     0,     7,
       0,     1,     1,     0,     0,     8,     0,     0,     8,     2,
       3,     0,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     2,     0,     2,     1,
       1,     1,     3,     4,     0,     2,     3,     3,     2,     0,
       2,     0,     2,     2,     0,     2,     1,     0,     1,     0,
       0,     0,     0,    11,     2,     0,     8,     5,     0,     3,
       8,     1,     1,     3,     5,     2,     3,     0,     2,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     3,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     3,     0,
       2,     2,     0,     1,     1,     1,     3,     4,     3,     0,
       1,     1,     1,     1,     1
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
        case 6:
#line 103 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("var ");}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 112 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 117 "parserBottomUp.y" /* yacc.c:1646  */
    { printf("const "); }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 117 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 121 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 121 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 131 "parserBottomUp.y" /* yacc.c:1646  */
    { printf("procedure "); }
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 131 "parserBottomUp.y" /* yacc.c:1646  */
    { printf("\n"); }
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 136 "parserBottomUp.y" /* yacc.c:1646  */
    { printf("function "); }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 136 "parserBottomUp.y" /* yacc.c:1646  */
    { printf("\n"); }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 242 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("if ");}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 242 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 242 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(") ");}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 242 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("then");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1616 "y.tab.c" /* yacc.c:1646  */
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
#line 380 "parserBottomUp.y" /* yacc.c:1906  */
