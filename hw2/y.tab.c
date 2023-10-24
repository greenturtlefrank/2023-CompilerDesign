/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20220114

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#undef YYBTYACC
#define YYBTYACC 0
#define YYDEBUGSTR YYPREFIX "debug"
#define YYPREFIX "yy"

#define YYPURE 0

#line 3 "parser.y"

#include <stdio.h>
#include <stdlib.h>


int noww = 0;
char remm[301];




struct Node{

int wordc;
char word[301];
struct Node* next;

};

struct Node* head = NULL; 
struct Node* tail = NULL;


void inputback(char* in);
void inputhead(char* in);



#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 33 "parser.y"
typedef union YYSTYPE {int intVal;

	char var[301];	

	struct symbol *v;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 67 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define NUM 257
#define FLOAT 258
#define TYPE 259
#define ID 260
#define PMID 261
#define NU 262
#define VAR 263
#define FOR 264
#define DO 265
#define WHILE 266
#define BREAK 267
#define CONTINUE 268
#define IF 269
#define ELSE 270
#define RETURN 271
#define STRUCT 272
#define SWITCH 273
#define CASE 274
#define DEFAULT 275
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    2,    6,    8,    7,   10,
   10,   10,    9,    9,   11,   11,    3,   15,   13,   16,
   16,   17,   17,   18,   18,   18,   18,   19,   20,   20,
   14,   14,    4,   22,   21,   23,   23,    5,   25,   24,
   12,   27,   29,   29,   29,   28,   28,   28,   31,   31,
   31,   30,   34,   34,   33,   33,   32,   32,   32,   32,
   35,   36,   36,   36,   36,   36,   36,   36,   37,   42,
   42,   38,   43,   45,   45,   45,   45,   45,   44,   44,
   46,   46,   39,   39,   40,   47,   47,   41,   41,   41,
   48,   48,   26,   49,   49,   49,   50,   50,   50,
};
static const YYINT yylen[] = {                            2,
    1,    1,    1,    1,    1,    3,    1,    1,    2,    0,
    3,    3,    2,    3,    0,    2,    4,    1,    5,    1,
    4,    0,    4,    0,    4,    2,    1,    2,    0,    3,
    0,    3,    3,    1,    4,    0,    2,    2,    1,    5,
    1,    2,    0,    3,    3,    2,    2,    2,    0,    3,
    3,    2,    0,    3,    1,    1,    1,    1,    1,    3,
    1,    2,    1,    1,    1,    1,    1,    1,    6,    0,
    2,    7,    2,    0,    2,    3,    3,    3,    4,    3,
    0,    2,    5,    7,    9,    0,    1,    2,    2,    2,
    2,    1,    3,    0,    2,    2,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    7,    0,    1,    2,    3,    4,    5,    0,    0,    0,
    0,    0,    0,    0,   38,    0,   13,    0,    6,    0,
    0,    0,    9,    0,    0,   33,   57,   58,   56,   59,
    0,    0,    0,   16,   41,    0,    0,   55,    0,   14,
    0,    0,    0,    0,    0,    0,    0,   17,    0,   47,
   48,    0,    0,   42,    0,    0,   46,    0,   52,   37,
    0,    0,   12,   11,    0,   32,   60,    0,    0,    0,
    0,    0,    0,   40,    0,    0,   19,   20,   44,   45,
   50,   51,   54,    0,    0,    0,    0,    0,    0,    0,
    0,   97,   98,   99,    0,    0,   68,    0,   61,   63,
   64,   65,   66,   67,    0,    0,    0,    0,    0,    0,
    0,   89,   90,    0,   92,    0,   88,    0,    0,   62,
   95,   93,   96,    0,    0,    0,    0,   27,    0,   87,
    0,    0,    0,    0,   91,    0,    0,   26,    0,    0,
   28,   23,   21,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   83,    0,    0,   35,   25,   30,    0,
    0,    0,   69,    0,    0,    0,    0,    0,   84,   71,
    0,    0,   72,    0,    0,    0,    0,   73,    0,    0,
    0,   80,    0,    0,    0,   75,   85,   79,   82,   76,
   77,   78,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  259,  277,  278,  279,  280,  281,  282,  283,  263,   42,
  284,  286,  290,  298,  301,   61,  288,  263,   59,   40,
   44,   91,  287,   44,  291,   59,  257,  258,  261,  262,
   40,   43,   45,  289,  304,  305,  307,  309,  310,  288,
  283,  300,  283,  286,  289,  286,  290,   59,  289,  309,
  309,   43,   45,  306,   42,   47,  308,  260,  311,  284,
  286,   41,  284,  287,   93,  291,   41,  305,  305,  307,
  307,  310,  123,  303,   61,   91,  293,  294,  306,  306,
  308,  308,  311,  264,  265,  266,  267,  268,  269,  271,
  273,  279,  280,  281,  283,  289,  303,  312,  313,  314,
  315,  316,  317,  318,  326,  327,  123,  289,   40,  312,
   40,   59,   59,   40,   59,  289,  325,   40,  284,   59,
  326,  125,  326,   44,  123,  289,  295,  296,   93,  289,
  324,  266,  289,  289,   59,  289,   40,  295,  295,   44,
  297,  125,  293,   59,   40,   41,   41,   41,  300,  125,
  289,  324,  289,  312,  303,  123,   41,  295,  297,   59,
   41,  270,  319,  274,  275,  320,  321,  324,   59,  303,
  289,   58,  125,   32,    9,   10,  321,  322,   41,   58,
  312,  323,  321,  321,  321,  322,  312,  323,  323,  322,
  322,  322,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          2,
    3,   92,   93,   94,    7,   95,   11,    0,   12,   23,
   17,   96,   13,   25,    0,   77,   78,  127,  128,  141,
   14,    0,   42,   15,    0,   97,   35,   36,   54,   37,
   57,   38,   39,   59,   98,   99,  100,  101,  102,  103,
  104,  163,  166,  177,  178,  182,  131,  117,  105,  106,
};
static const YYINT yysindex[] = {                      -206,
    0,    0,    0,    0,    0,    0,    0,  -25,    4, -202,
  -24,  -31,   23,   10,    0,   43,    0,    4,    0, -206,
  -23,   43,    0,  -25,   22,    0,    0,    0,    0,    0,
   43,   45,   45,    0,    0,    6,   51,    0, -176,    0,
  -25,   46,  -25,   53,   24,   13,   23,    0,   68,    0,
    0,   43,   43,    0,  -16,  -16,    0,  -16,    0,    0,
   53,   -8,    0,    0,  -46,    0,    0,    6,    6,   51,
   51, -176,  -34,    0,   -4,   43,    0,    0,    0,    0,
    0,    0,    0,   82,   14,   86,   85,   93,  113,   37,
  115,    0,    0,    0,  -25,   98,    0,  -34,    0,    0,
    0,    0,    0,    0,   33,  -34,   31,   66,   43, -103,
   43,    0,    0,   43,    0,  103,    0,   43,  -22,    0,
    0,    0,    0,   31,   31,  120,   40,    0,  -46,    0,
  108,  128,  129,  131,    0,  133, -206,    0,   44,   43,
    0,    0,    0,   43,   43,   14,   -8,   52,  136,   31,
  120,  119,  141,    0,  -87, -196,    0,    0,    0,   43,
  125,   -8,    0,   43,  127,   61,   -5,  146,    0,    0,
  130,   14,    0, -196, -196, -196,   -5,    0,   14,   14,
   14,    0,   -5,   -5,   -5,    0,    0,    0,    0,    0,
    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   -1,    0,
    0,  -18,  132,    0,    0,    0,    0,   -1,    0,  148,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   80,   88,    0,  268,    0,
    0,    0,    0,   32,    0,    0,  132,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   32,  134,    0,    0,   11,    0,    0,   80,   80,   88,
   88,  268,   67,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   67,    0,    0,
    0,    0,    0,    0,    0,   67,   69,    0,  137,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   69,   69,   70,    0,    0,   11,    0,
    0,    0,    0,    0,    0,    0,  148,    0,    0,    0,
    0,    0,    0,  137,    0,    0,    0,    0,    0,   69,
   70,    0,    0,    0,   -9,    0,    0,    0,    0,  149,
    0,    0,    0,    0,    0,    0,   72,    0,    0,    0,
    0,   -7,    0,    0,    0,    0,   72,    0,    0,   -7,
   -7,    0,   72,   72,   72,    0,    0,    0,    0,    0,
    0,    0,
};
#if YYBTYACC
static const YYINT yycindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
    0,  198,  199,  200,    0,    8,  -29,    0,    9,  157,
  184,   16,  179,  159,    0,   75,    0, -104,    0,   56,
    0,    0,   71,    0,    0,  -52,    0,   47,   39,   87,
   65,  116,  151,  138,  -78,    0,    0,    0,    0,    0,
    0,    0,    0, -112,  -72,  -30, -118,    0,  -50,    0,
};
#define YYTABLESIZE 393
static const YYINT yytable[] = {                         70,
   70,   81,   81,  175,  176,   31,  110,    8,   32,   74,
   33,   60,   21,   63,   75,   20,   10,  137,   10,  138,
  139,   10,   70,   31,   81,  152,  174,   41,   43,   44,
   70,   34,   46,   70,   19,   70,   19,   45,   15,   15,
   10,  168,   15,  167,   76,  158,   49,  121,   52,   61,
   53,   61,    1,   31,   22,  123,   32,   15,   33,   22,
   18,  183,  184,  185,   16,  119,   24,  154,   26,   22,
   31,   10,   10,   32,  124,   33,   31,  164,  165,   32,
   48,   33,   31,   58,   31,   32,   62,   33,   73,   15,
   10,  108,   55,  181,  155,  115,   21,   56,   68,   69,
  187,  181,  181,   22,  186,  116,   79,   80,   67,  170,
  190,  191,  192,   70,   73,   70,   65,   81,  107,   43,
   43,  109,  126,   43,  130,  111,  133,   49,   49,  134,
   49,   49,   49,  136,   81,   82,   73,   43,   43,  126,
  126,   70,   71,  112,   41,   49,   49,   50,   51,  188,
  189,  113,  114,  125,  118,  151,  120,  122,  129,  130,
  153,  135,  132,  140,  142,  126,  144,  145,  150,  146,
   43,  147,   43,  148,  156,  130,  157,  160,   49,  171,
   49,  161,  162,  169,  172,  173,  179,  180,   36,   86,
   31,   94,   35,   24,   29,   86,   74,    4,    5,    6,
   64,   40,   47,  143,   43,   66,  159,  149,   72,   83,
    0,    0,   49,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   27,   28,    1,    0,   29,   30,    0,   84,
   85,   86,   87,   88,   89,    1,   90,    9,   91,    9,
   27,   28,    0,    0,   29,   30,    0,   70,   70,   70,
    0,   70,   70,    0,   70,   70,   70,   70,   70,   70,
    0,   70,    0,   70,   70,   70,   81,   81,  164,  165,
   27,   28,    0,    0,   29,   30,    0,   84,   85,   86,
   87,   88,   89,    0,   90,    0,   91,   27,   28,    0,
    0,   29,   30,   27,   28,    0,    0,   29,   30,   27,
   28,   27,   28,   29,   30,    0,   30,   53,   53,   53,
   53,   53,   53,    0,   53,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   53,   53,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   53,    0,
   53,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   53,
};
static const YYINT yycheck[] = {                          9,
   10,    9,   10,    9,   10,   40,   85,    0,   43,   62,
   45,   41,   44,   43,   61,   40,   42,   40,   42,  124,
  125,   40,   32,   40,   32,  144,   32,   20,   21,   21,
   40,   16,   24,   43,   59,   45,   59,   22,   40,   41,
   59,  160,   44,  156,   91,  150,   31,   98,   43,   41,
   45,   43,  259,   40,   44,  106,   43,   59,   45,   91,
  263,  174,  175,  176,   61,   95,   44,  146,   59,   59,
   40,   40,   41,   43,   44,   45,   40,  274,  275,   43,
   59,   45,   40,  260,   40,   43,   41,   45,  123,   91,
   59,   76,   42,  172,  147,   59,   44,   47,   52,   53,
  179,  180,  181,   91,  177,   90,   68,   69,   41,  162,
  183,  184,  185,  123,  123,  125,   93,  125,  123,   40,
   41,   40,  107,   44,  109,   40,  111,   40,   41,  114,
   43,   44,   45,  118,   70,   71,  123,   58,   59,  124,
  125,   55,   56,   59,  137,   58,   59,   32,   33,  180,
  181,   59,   40,  123,   40,  140,   59,  125,   93,  144,
  145,   59,  266,   44,  125,  150,   59,   40,  125,   41,
   91,   41,   93,   41,  123,  160,   41,   59,   91,  164,
   93,   41,  270,   59,   58,  125,   41,   58,   41,   41,
   59,  125,   59,  125,  125,   59,  125,    0,    0,    0,
   44,   18,   24,  129,  125,   47,  151,  137,   58,   72,
   -1,   -1,  125,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  257,  258,  259,   -1,  261,  262,   -1,  264,
  265,  266,  267,  268,  269,  259,  271,  263,  273,  263,
  257,  258,   -1,   -1,  261,  262,   -1,  257,  258,  259,
   -1,  261,  262,   -1,  264,  265,  266,  267,  268,  269,
   -1,  271,   -1,  273,  274,  275,  274,  275,  274,  275,
  257,  258,   -1,   -1,  261,  262,   -1,  264,  265,  266,
  267,  268,  269,   -1,  271,   -1,  273,  257,  258,   -1,
   -1,  261,  262,  257,  258,   -1,   -1,  261,  262,  257,
  258,  257,  258,  261,  262,   -1,  262,   40,   41,   42,
   43,   44,   45,   -1,   47,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   58,   59,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   91,   -1,
   93,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  125,
};
#if YYBTYACC
static const YYINT yyctable[] = {                        -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,
};
#endif
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 275
#define YYUNDFTOKEN 328
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,"'\\t'","'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"' '",0,0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,"':'","';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"error","NUM","FLOAT","TYPE","ID","PMID","NU",
"VAR","FOR","DO","WHILE","BREAK","CONTINUE","IF","ELSE","RETURN","STRUCT",
"SWITCH","CASE","DEFAULT","$accept","start","first","scalar_decl","array_decl",
"func_decl","func_def","type","ident","type_scalar","var","ident_plus",
"scalar_plus","expr","array","array_more","type_array","array_plus",
"array_plusplus","array_plusplusplus","array_num","array_numplus",
"func_decl_plus","type_func","parameter","func_def_plus","type_func_def",
"compound_stmt","term","mul","term_plus","otherid","mul_plus","factor","power",
"otherid_plus","stmt","stmt_plus","ifelse","switch","while","for","return",
"ifelse_plus","switch_clauses","switch_clauses_plus","switch_clauses_space",
"switch_clauses_plusplus","nullexpr","return_plus","compound_stmt_plus",
"var_decl","illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : start",
"start : first",
"first : scalar_decl",
"first : array_decl",
"first : func_decl",
"first : func_def",
"scalar_decl : type ident ';'",
"type : TYPE",
"type_scalar : type",
"ident : var ident_plus",
"ident_plus :",
"ident_plus : ',' var ident_plus",
"ident_plus : ',' type ident",
"var : VAR scalar_plus",
"var : '*' VAR scalar_plus",
"scalar_plus :",
"scalar_plus : '=' expr",
"array_decl : type array array_more ';'",
"type_array : type",
"array : var '[' expr ']' array_plus",
"array_plus : array_plusplus",
"array_plus : '[' expr ']' array_plus",
"array_plusplus :",
"array_plusplus : '=' '{' array_plusplusplus '}'",
"array_plusplusplus :",
"array_plusplusplus : '{' array_plusplusplus '}' array_plusplusplus",
"array_plusplusplus : ',' array_plusplusplus",
"array_plusplusplus : array_num",
"array_num : expr array_numplus",
"array_numplus :",
"array_numplus : ',' expr array_numplus",
"array_more :",
"array_more : ',' array array_more",
"func_decl : type func_decl_plus ';'",
"type_func : TYPE",
"func_decl_plus : ident '(' parameter ')'",
"parameter :",
"parameter : type ident",
"func_def : type func_def_plus",
"type_func_def : TYPE",
"func_def_plus : ident '(' parameter ')' compound_stmt",
"expr : term",
"term : mul term_plus",
"term_plus :",
"term_plus : '+' mul term_plus",
"term_plus : '-' mul term_plus",
"mul : otherid mul_plus",
"mul : '+' factor",
"mul : '-' factor",
"mul_plus :",
"mul_plus : '*' otherid mul_plus",
"mul_plus : '/' otherid mul_plus",
"otherid : power otherid_plus",
"otherid_plus :",
"otherid_plus : ID power otherid_plus",
"power : factor",
"power : PMID",
"factor : NUM",
"factor : FLOAT",
"factor : NU",
"factor : '(' expr ')'",
"stmt : stmt_plus",
"stmt_plus : expr ';'",
"stmt_plus : ifelse",
"stmt_plus : switch",
"stmt_plus : while",
"stmt_plus : for",
"stmt_plus : return",
"stmt_plus : compound_stmt",
"ifelse : IF '(' expr ')' compound_stmt ifelse_plus",
"ifelse_plus :",
"ifelse_plus : ELSE compound_stmt",
"switch : SWITCH '(' expr ')' '{' switch_clauses '}'",
"switch_clauses : switch_clauses_plus switch_clauses_space",
"switch_clauses_space :",
"switch_clauses_space : switch_clauses_plus switch_clauses_space",
"switch_clauses_space : ' ' switch_clauses_plus switch_clauses_space",
"switch_clauses_space : '\\t' switch_clauses_plus switch_clauses_space",
"switch_clauses_space : '\\n' switch_clauses_plus switch_clauses_space",
"switch_clauses_plus : CASE expr ':' switch_clauses_plusplus",
"switch_clauses_plus : DEFAULT ':' switch_clauses_plusplus",
"switch_clauses_plusplus :",
"switch_clauses_plusplus : stmt switch_clauses_plusplus",
"while : WHILE '(' expr ')' stmt",
"while : DO stmt WHILE '(' expr ')' ';'",
"for : FOR '(' nullexpr ';' nullexpr ';' nullexpr ')' stmt",
"nullexpr :",
"nullexpr : expr",
"return : RETURN return_plus",
"return : BREAK ';'",
"return : CONTINUE ';'",
"return_plus : expr ';'",
"return_plus : ';'",
"compound_stmt : '{' compound_stmt_plus '}'",
"compound_stmt_plus :",
"compound_stmt_plus : stmt compound_stmt_plus",
"compound_stmt_plus : var_decl compound_stmt_plus",
"var_decl : scalar_decl",
"var_decl : array_decl",
"var_decl : func_decl",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#if YYBTYACC

#ifndef YYLVQUEUEGROWTH
#define YYLVQUEUEGROWTH 32
#endif
#endif /* YYBTYACC */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
#if YYBTYACC

struct YYParseState_s
{
    struct YYParseState_s *save;    /* Previously saved parser state */
    YYSTACKDATA            yystack; /* saved parser stack */
    int                    state;   /* saved parser state */
    int                    errflag; /* saved error recovery status */
    int                    lexeme;  /* saved index of the conflict lexeme in the lexical queue */
    YYINT                  ctry;    /* saved index in yyctable[] for this conflict */
};
typedef struct YYParseState_s YYParseState;
#endif /* YYBTYACC */
/* variables for the parser stack */
static YYSTACKDATA yystack;
#if YYBTYACC

/* Current parser state */
static YYParseState *yyps = 0;

/* yypath != NULL: do the full parse, starting at *yypath parser state. */
static YYParseState *yypath = 0;

/* Base of the lexical value queue */
static YYSTYPE *yylvals = 0;

/* Current position at lexical value queue */
static YYSTYPE *yylvp = 0;

/* End position of lexical value queue */
static YYSTYPE *yylve = 0;

/* The last allocated position at the lexical value queue */
static YYSTYPE *yylvlim = 0;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
/* Base of the lexical position queue */
static YYLTYPE *yylpsns = 0;

/* Current position at lexical position queue */
static YYLTYPE *yylpp = 0;

/* End position of lexical position queue */
static YYLTYPE *yylpe = 0;

/* The last allocated position at the lexical position queue */
static YYLTYPE *yylplim = 0;
#endif

/* Current position at lexical token queue */
static YYINT  *yylexp = 0;

static YYINT  *yylexemes = 0;
#endif /* YYBTYACC */
#line 561 "parser.y"



int main(void){
	
	yyparse();

	struct Node* temp = head;
	while(temp != NULL){
		int n = 0;
		while(temp -> word[n] !=  '\0')
		{
			printf("%c", temp -> word[n]);
			n++;
		}
		
		temp = temp -> next;
	}
	printf("\n");	

	return 0;
}

int yyerror(char* s)
{
	
	fprintf(stderr, "%s\n", s);
	return 0;
}


void inputback(char* in){	

	struct Node* temp = (struct Node*) malloc( sizeof(struct Node) );

	int n = 0;

        while(in[n] != '\0' && n < 301)
	{
		temp->word[n] = in[n];
		n++;
	}

	//temp->word[0] = '\0';

	if(head == NULL && tail == NULL)
	{
		temp -> next = NULL;

		head = temp;
		tail = temp;	
	}
	else
	{
		temp -> next = NULL;

                tail -> next = temp;
                tail = temp;
	}

}

void inputhead(char* in){

         struct Node* temp = (struct Node*) malloc( sizeof(struct Node) );

        int n = 0;

        while(in[n] != '\0' && n < 301)
        {
                temp->word[n] = in[n];
                n++;
        }

        //temp->word[0] = '\0';

        if(head == NULL && tail == NULL)
        {
                temp -> next = NULL;

                head = temp;
                tail = temp;
        }
        else
        {
                temp -> next = head;
		head = temp;
        }


}




#line 764 "y.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)
#if YYBTYACC
#define yytrial (yyps->save)
#endif /* YYBTYACC */

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */
#if YYBTYACC

static YYParseState *
yyNewState(unsigned size)
{
    YYParseState *p = (YYParseState *) malloc(sizeof(YYParseState));
    if (p == NULL) return NULL;

    p->yystack.stacksize = size;
    if (size == 0)
    {
        p->yystack.s_base = NULL;
        p->yystack.l_base = NULL;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        p->yystack.p_base = NULL;
#endif
        return p;
    }
    p->yystack.s_base    = (YYINT *) malloc(size * sizeof(YYINT));
    if (p->yystack.s_base == NULL) return NULL;
    p->yystack.l_base    = (YYSTYPE *) malloc(size * sizeof(YYSTYPE));
    if (p->yystack.l_base == NULL) return NULL;
    memset(p->yystack.l_base, 0, size * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    p->yystack.p_base    = (YYLTYPE *) malloc(size * sizeof(YYLTYPE));
    if (p->yystack.p_base == NULL) return NULL;
    memset(p->yystack.p_base, 0, size * sizeof(YYLTYPE));
#endif

    return p;
}

static void
yyFreeState(YYParseState *p)
{
    yyfreestack(&p->yystack);
    free(p);
}
#endif /* YYBTYACC */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab
#if YYBTYACC
#define YYVALID        do { if (yyps->save)            goto yyvalid; } while(0)
#define YYVALID_NESTED do { if (yyps->save && \
                                yyps->save->save == 0) goto yyvalid; } while(0)
#endif /* YYBTYACC */

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if YYBTYACC
    int yynewerrflag;
    YYParseState *yyerrctx = NULL;
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

#if YYBTYACC
    yyps = yyNewState(0); if (yyps == 0) goto yyenomem;
    yyps->save = 0;
#endif /* YYBTYACC */
    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
#if YYBTYACC
        do {
        if (yylvp < yylve)
        {
            /* we're currently re-reading tokens */
            yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc = *yylpp++;
#endif
            yychar = *yylexp++;
            break;
        }
        if (yyps->save)
        {
            /* in trial mode; save scanner results for future parse attempts */
            if (yylvp == yylvlim)
            {   /* Enlarge lexical value queue */
                size_t p = (size_t) (yylvp - yylvals);
                size_t s = (size_t) (yylvlim - yylvals);

                s += YYLVQUEUEGROWTH;
                if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL) goto yyenomem;
                if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL) goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL) goto yyenomem;
#endif
                yylvp   = yylve = yylvals + p;
                yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp   = yylpe = yylpsns + p;
                yylplim = yylpsns + s;
#endif
                yylexp  = yylexemes + p;
            }
            *yylexp = (YYINT) YYLEX;
            *yylvp++ = yylval;
            yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *yylpp++ = yylloc;
            yylpe++;
#endif
            yychar = *yylexp++;
            break;
        }
        /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
        yychar = YYLEX;
#if YYBTYACC
        } while (0);
#endif /* YYBTYACC */
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
#if YYBTYACC

    /* Do we have a conflict? */
    if (((yyn = yycindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
        yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        YYINT ctry;

        if (yypath)
        {
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: CONFLICT in state %d: following successful trial parse\n",
                                YYDEBUGSTR, yydepth, yystate);
#endif
            /* Switch to the next conflict context */
            save = yypath;
            yypath = save->save;
            save->save = NULL;
            ctry = save->ctry;
            if (save->state != yystate) YYABORT;
            yyFreeState(save);

        }
        else
        {

            /* Unresolved conflict - start/continue trial parse */
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
            {
                fprintf(stderr, "%s[%d]: CONFLICT in state %d. ", YYDEBUGSTR, yydepth, yystate);
                if (yyps->save)
                    fputs("ALREADY in conflict, continuing trial parse.\n", stderr);
                else
                    fputs("Starting trial parse.\n", stderr);
            }
#endif
            save                  = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (save == NULL) goto yyenomem;
            save->save            = yyps->save;
            save->state           = yystate;
            save->errflag         = yyerrflag;
            save->yystack.s_mark  = save->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (save->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            save->yystack.l_mark  = save->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (save->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            save->yystack.p_mark  = save->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (save->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            ctry                  = yytable[yyn];
            if (yyctable[ctry] == -1)
            {
#if YYDEBUG
                if (yydebug && yychar >= YYEOF)
                    fprintf(stderr, "%s[%d]: backtracking 1 token\n", YYDEBUGSTR, yydepth);
#endif
                ctry++;
            }
            save->ctry = ctry;
            if (yyps->save == NULL)
            {
                /* If this is a first conflict in the stack, start saving lexemes */
                if (!yylexemes)
                {
                    yylexemes = (YYINT *) malloc((YYLVQUEUEGROWTH) * sizeof(YYINT));
                    if (yylexemes == NULL) goto yyenomem;
                    yylvals   = (YYSTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYSTYPE));
                    if (yylvals == NULL) goto yyenomem;
                    yylvlim   = yylvals + YYLVQUEUEGROWTH;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpsns   = (YYLTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYLTYPE));
                    if (yylpsns == NULL) goto yyenomem;
                    yylplim   = yylpsns + YYLVQUEUEGROWTH;
#endif
                }
                if (yylvp == yylve)
                {
                    yylvp  = yylve = yylvals;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp  = yylpe = yylpsns;
#endif
                    yylexp = yylexemes;
                    if (yychar >= YYEOF)
                    {
                        *yylve++ = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                        *yylpe++ = yylloc;
#endif
                        *yylexp  = (YYINT) yychar;
                        yychar   = YYEMPTY;
                    }
                }
            }
            if (yychar >= YYEOF)
            {
                yylvp--;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp--;
#endif
                yylexp--;
                yychar = YYEMPTY;
            }
            save->lexeme = (int) (yylvp - yylvals);
            yyps->save   = save;
        }
        if (yytable[yyn] == ctry)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                                YYDEBUGSTR, yydepth, yystate, yyctable[ctry]);
#endif
            if (yychar < 0)
            {
                yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp++;
#endif
                yylexp++;
            }
            if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                goto yyoverflow;
            yystate = yyctable[ctry];
            *++yystack.s_mark = (YYINT) yystate;
            *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *++yystack.p_mark = yylloc;
#endif
            yychar  = YYEMPTY;
            if (yyerrflag > 0) --yyerrflag;
            goto yyloop;
        }
        else
        {
            yyn = yyctable[ctry];
            goto yyreduce;
        }
    } /* End of code dealing with conflicts */
#endif /* YYBTYACC */
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;
#if YYBTYACC

    yynewerrflag = 1;
    goto yyerrhandler;
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */

yyerrlab:
    /* explicit YYERROR from an action -- pop the rhs of the rule reduced
     * before looking for error recovery */
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif

    yynewerrflag = 0;
yyerrhandler:
    while (yyps->save)
    {
        int ctry;
        YYParseState *save = yyps->save;
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: ERROR in state %d, CONFLICT BACKTRACKING to state %d, %d tokens\n",
                            YYDEBUGSTR, yydepth, yystate, yyps->save->state,
                    (int)(yylvp - yylvals - yyps->save->lexeme));
#endif
        /* Memorize most forward-looking error state in case it's really an error. */
        if (yyerrctx == NULL || yyerrctx->lexeme < yylvp - yylvals)
        {
            /* Free old saved error context state */
            if (yyerrctx) yyFreeState(yyerrctx);
            /* Create and fill out new saved error context state */
            yyerrctx                 = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (yyerrctx == NULL) goto yyenomem;
            yyerrctx->save           = yyps->save;
            yyerrctx->state          = yystate;
            yyerrctx->errflag        = yyerrflag;
            yyerrctx->yystack.s_mark = yyerrctx->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (yyerrctx->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yyerrctx->yystack.l_mark = yyerrctx->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (yyerrctx->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yyerrctx->yystack.p_mark = yyerrctx->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (yyerrctx->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yyerrctx->lexeme         = (int) (yylvp - yylvals);
        }
        yylvp          = yylvals   + save->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yylpp          = yylpsns   + save->lexeme;
#endif
        yylexp         = yylexemes + save->lexeme;
        yychar         = YYEMPTY;
        yystack.s_mark = yystack.s_base + (save->yystack.s_mark - save->yystack.s_base);
        memcpy (yystack.s_base, save->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
        yystack.l_mark = yystack.l_base + (save->yystack.l_mark - save->yystack.l_base);
        memcpy (yystack.l_base, save->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yystack.p_mark = yystack.p_base + (save->yystack.p_mark - save->yystack.p_base);
        memcpy (yystack.p_base, save->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
        ctry           = ++save->ctry;
        yystate        = save->state;
        /* We tried shift, try reduce now */
        if ((yyn = yyctable[ctry]) >= 0) goto yyreduce;
        yyps->save     = save->save;
        save->save     = NULL;
        yyFreeState(save);

        /* Nothing left on the stack -- error */
        if (!yyps->save)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%sdebug[%d,trial]: trial parse FAILED, entering ERROR mode\n",
                                YYPREFIX, yydepth);
#endif
            /* Restore state as it was in the most forward-advanced error */
            yylvp          = yylvals   + yyerrctx->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylpp          = yylpsns   + yyerrctx->lexeme;
#endif
            yylexp         = yylexemes + yyerrctx->lexeme;
            yychar         = yylexp[-1];
            yylval         = yylvp[-1];
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc         = yylpp[-1];
#endif
            yystack.s_mark = yystack.s_base + (yyerrctx->yystack.s_mark - yyerrctx->yystack.s_base);
            memcpy (yystack.s_base, yyerrctx->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yystack.l_mark = yystack.l_base + (yyerrctx->yystack.l_mark - yyerrctx->yystack.l_base);
            memcpy (yystack.l_base, yyerrctx->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yystack.p_mark = yystack.p_base + (yyerrctx->yystack.p_mark - yyerrctx->yystack.p_base);
            memcpy (yystack.p_base, yyerrctx->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yystate        = yyerrctx->state;
            yyFreeState(yyerrctx);
            yyerrctx       = NULL;
        }
        yynewerrflag = 1;
    }
    if (yynewerrflag == 0) goto yyinrecovery;
#endif /* YYBTYACC */

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
                if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
#if YYBTYACC
    if (!yytrial)
#endif /* YYBTYACC */
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
case 1:
#line 66 "parser.y"
	{

	}
#line 1439 "y.tab.c"
break;
case 2:
#line 70 "parser.y"
	{

	}
#line 1446 "y.tab.c"
break;
case 3:
#line 73 "parser.y"
	{

	}
#line 1453 "y.tab.c"
break;
case 4:
#line 76 "parser.y"
	{

	}
#line 1460 "y.tab.c"
break;
case 5:
#line 79 "parser.y"
	{

	}
#line 1467 "y.tab.c"
break;
case 6:
#line 85 "parser.y"
	{

	char h[20] = "<scalar_decl>";	
	char b[20] = ";</scalar_decl>";

	inputhead(h);
	inputback(b);

	}
#line 1480 "y.tab.c"
break;
case 7:
#line 96 "parser.y"
	{
	
	char b[100];	

	inputback(yylval.var);
	
	}
#line 1491 "y.tab.c"
break;
case 8:
#line 104 "parser.y"
	{

        }
#line 1498 "y.tab.c"
break;
case 9:
#line 109 "parser.y"
	{
	/*printf("%c", yylval.var[0]);*/
	/*inputhead(yylval.var);*/
	}
#line 1506 "y.tab.c"
break;
case 10:
#line 114 "parser.y"
	{

	}
#line 1513 "y.tab.c"
break;
case 11:
#line 117 "parser.y"
	{
	inputhead(",");
	}
#line 1520 "y.tab.c"
break;
case 12:
#line 120 "parser.y"
	{
	inputhead(",");
	}
#line 1527 "y.tab.c"
break;
case 13:
#line 124 "parser.y"
	{
	inputback(yylval.var);
	}
#line 1534 "y.tab.c"
break;
case 14:
#line 127 "parser.y"
	{
	inputhead(yylval.var);
	inputhead(",");
	}
#line 1542 "y.tab.c"
break;
case 15:
#line 132 "parser.y"
	{
   	}
#line 1548 "y.tab.c"
break;
case 16:
#line 134 "parser.y"
	{
	inputhead("=");
	}
#line 1555 "y.tab.c"
break;
case 17:
#line 147 "parser.y"
	{
	
	char h[20] = "<array_decl>";
        char b[20] = ";</array_decl>";

        inputhead(h);
        inputback(b);

	}
#line 1568 "y.tab.c"
break;
case 18:
#line 157 "parser.y"
	{

        }
#line 1575 "y.tab.c"
break;
case 19:
#line 161 "parser.y"
	{
	printf(" [ ]");
	}
#line 1582 "y.tab.c"
break;
case 20:
#line 166 "parser.y"
	{

	}
#line 1589 "y.tab.c"
break;
case 21:
#line 169 "parser.y"
	{
	printf("[ ]");
	}
#line 1596 "y.tab.c"
break;
case 22:
#line 173 "parser.y"
	{

	}
#line 1603 "y.tab.c"
break;
case 23:
#line 177 "parser.y"
	{
	printf("={ }");
	}
#line 1610 "y.tab.c"
break;
case 24:
#line 181 "parser.y"
	{
		 
	}
#line 1617 "y.tab.c"
break;
case 25:
#line 185 "parser.y"
	{
	printf("{ }");
	}
#line 1624 "y.tab.c"
break;
case 26:
#line 189 "parser.y"
	{
	printf(",");
	}
#line 1631 "y.tab.c"
break;
case 27:
#line 193 "parser.y"
	{

	}
#line 1638 "y.tab.c"
break;
case 28:
#line 197 "parser.y"
	{
		
	}
#line 1645 "y.tab.c"
break;
case 29:
#line 201 "parser.y"
	{
	     
	}
#line 1652 "y.tab.c"
break;
case 30:
#line 204 "parser.y"
	{
	printf(",");
	}
#line 1659 "y.tab.c"
break;
case 31:
#line 208 "parser.y"
	{

	}
#line 1666 "y.tab.c"
break;
case 32:
#line 211 "parser.y"
	{
	printf(",");
	}
#line 1673 "y.tab.c"
break;
case 33:
#line 220 "parser.y"
	{
	
	char h[20] = "<func_decl>";
        char b[20] = ";</func_decl>";

        inputhead(h);
        inputback(b);

	}
#line 1686 "y.tab.c"
break;
case 34:
#line 230 "parser.y"
	{

        char b[100];

        inputback(yylval.var);

        }
#line 1697 "y.tab.c"
break;
case 35:
#line 238 "parser.y"
	{
	/*printf("( )");*/
	}
#line 1704 "y.tab.c"
break;
case 36:
#line 242 "parser.y"
	{
	 
	}
#line 1711 "y.tab.c"
break;
case 37:
#line 245 "parser.y"
	{

	}
#line 1718 "y.tab.c"
break;
case 38:
#line 258 "parser.y"
	{
	
	char h[20] = "<func_def>";
        char b[20] = ";</func_def>";

        inputhead(h);
        inputback(b);

	}
#line 1731 "y.tab.c"
break;
case 39:
#line 268 "parser.y"
	{

        char b[100];

        inputback(yylval.var);

        }
#line 1742 "y.tab.c"
break;
case 40:
#line 276 "parser.y"
	{
	/*printf("( )");*/
	}
#line 1749 "y.tab.c"
break;
case 41:
#line 289 "parser.y"
	{
  	
	char h[20] = "<expr>";
        char b[20] = "</expr>";

        inputhead(h);
        inputback(b);

	}
#line 1762 "y.tab.c"
break;
case 42:
#line 299 "parser.y"
	{
    	
	}
#line 1769 "y.tab.c"
break;
case 43:
#line 303 "parser.y"
	{
	
	}
#line 1776 "y.tab.c"
break;
case 44:
#line 306 "parser.y"
	{

	}
#line 1783 "y.tab.c"
break;
case 45:
#line 309 "parser.y"
	{

        }
#line 1790 "y.tab.c"
break;
case 46:
#line 313 "parser.y"
	{

	}
#line 1797 "y.tab.c"
break;
case 47:
#line 316 "parser.y"
	{

	}
#line 1804 "y.tab.c"
break;
case 48:
#line 319 "parser.y"
	{

	}
#line 1811 "y.tab.c"
break;
case 49:
#line 323 "parser.y"
	{

	}
#line 1818 "y.tab.c"
break;
case 50:
#line 326 "parser.y"
	{
	}
#line 1824 "y.tab.c"
break;
case 51:
#line 328 "parser.y"
	{

	}
#line 1831 "y.tab.c"
break;
case 52:
#line 332 "parser.y"
	{

	}
#line 1838 "y.tab.c"
break;
case 53:
#line 336 "parser.y"
	{

	}
#line 1845 "y.tab.c"
break;
case 54:
#line 339 "parser.y"
	{

	}
#line 1852 "y.tab.c"
break;
case 55:
#line 344 "parser.y"
	{
        
        }
#line 1859 "y.tab.c"
break;
case 56:
#line 347 "parser.y"
	{

	}
#line 1866 "y.tab.c"
break;
case 57:
#line 351 "parser.y"
	{

	int n = 0;
	int temp = yystack.l_mark[0].intVal;
	char expr_word[301];
	char re_word[301];

      	while(temp  != 0)
	{
	expr_word[n] = (temp%10) + '0';
	temp = temp / 10;
	n++;
	}
	
	for(int i = 0; i < n; i++){
	re_word[i] = expr_word[n-i-1];
	}
	
	inputback(re_word);

	}
#line 1891 "y.tab.c"
break;
case 58:
#line 372 "parser.y"
	{
	
	/*int n = 0;
        int temp = $1;
        char expr_word[301];
        char re_word[301];

        while(temp  != 0)
        {
        expr_word[n] = (temp%10) + '0';
        temp = temp / 10;
        n++;
        }

        for(int i = 0; i < n; i++){
        re_word[i] = expr_word[n-i-1];
        }

        inputback(re_word);*/

	inputhead(yylval.var);

	}
#line 1918 "y.tab.c"
break;
case 59:
#line 395 "parser.y"
	{

	inputhead(yylval.var);

	}
#line 1927 "y.tab.c"
break;
case 60:
#line 400 "parser.y"
	{
	printf("( )");
	}
#line 1934 "y.tab.c"
break;
case 61:
#line 412 "parser.y"
	{
	
	char h[20] = "<stmt>";
        char b[20] = "</stmt>";

        inputhead(h);
        inputback(b);

}
#line 1947 "y.tab.c"
break;
case 62:
#line 422 "parser.y"
	{
	
	}
#line 1954 "y.tab.c"
break;
case 63:
#line 425 "parser.y"
	{	

	}
#line 1961 "y.tab.c"
break;
case 64:
#line 428 "parser.y"
	{

	}
#line 1968 "y.tab.c"
break;
case 65:
#line 431 "parser.y"
	{

	}
#line 1975 "y.tab.c"
break;
case 66:
#line 434 "parser.y"
	{

	}
#line 1982 "y.tab.c"
break;
case 67:
#line 437 "parser.y"
	{

	}
#line 1989 "y.tab.c"
break;
case 68:
#line 440 "parser.y"
	{

	}
#line 1996 "y.tab.c"
break;
case 69:
#line 444 "parser.y"
	{
	printf("if( )");
	}
#line 2003 "y.tab.c"
break;
case 70:
#line 448 "parser.y"
	{

	}
#line 2010 "y.tab.c"
break;
case 71:
#line 451 "parser.y"
	{
	printf("else");
	}
#line 2017 "y.tab.c"
break;
case 72:
#line 455 "parser.y"
	{
	printf("swtich( ){ }");
	}
#line 2024 "y.tab.c"
break;
case 73:
#line 459 "parser.y"
	{

	}
#line 2031 "y.tab.c"
break;
case 74:
#line 463 "parser.y"
	{
		    
	}
#line 2038 "y.tab.c"
break;
case 75:
#line 466 "parser.y"
	{

	}
#line 2045 "y.tab.c"
break;
case 76:
#line 469 "parser.y"
	{
	printf(" ");
	}
#line 2052 "y.tab.c"
break;
case 77:
#line 472 "parser.y"
	{
	printf("	");
	}
#line 2059 "y.tab.c"
break;
case 78:
#line 475 "parser.y"
	{
	printf("\n");
	}
#line 2066 "y.tab.c"
break;
case 79:
#line 480 "parser.y"
	{
	printf("case :");
	}
#line 2073 "y.tab.c"
break;
case 80:
#line 483 "parser.y"
	{
	printf("default:");
	}
#line 2080 "y.tab.c"
break;
case 81:
#line 487 "parser.y"
	{

	}
#line 2087 "y.tab.c"
break;
case 82:
#line 490 "parser.y"
	{

	}
#line 2094 "y.tab.c"
break;
case 83:
#line 495 "parser.y"
	{
	printf("while( )");
	}
#line 2101 "y.tab.c"
break;
case 84:
#line 498 "parser.y"
	{
	printf("do while( );");
	}
#line 2108 "y.tab.c"
break;
case 85:
#line 502 "parser.y"
	{
	printf("for( ; ; )");
	}
#line 2115 "y.tab.c"
break;
case 86:
#line 506 "parser.y"
	{

	}
#line 2122 "y.tab.c"
break;
case 87:
#line 509 "parser.y"
	{

	}
#line 2129 "y.tab.c"
break;
case 88:
#line 513 "parser.y"
	{
	printf("return");
	}
#line 2136 "y.tab.c"
break;
case 89:
#line 516 "parser.y"
	{
	printf("break;");
	}
#line 2143 "y.tab.c"
break;
case 90:
#line 519 "parser.y"
	{
	printf("continue;");
	}
#line 2150 "y.tab.c"
break;
case 91:
#line 523 "parser.y"
	{
	printf(" ;");
	}
#line 2157 "y.tab.c"
break;
case 92:
#line 526 "parser.y"
	{
	printf(";");
	}
#line 2164 "y.tab.c"
break;
case 93:
#line 530 "parser.y"
	{
	printf("{ }"); 
	}
#line 2171 "y.tab.c"
break;
case 94:
#line 534 "parser.y"
	{

	}
#line 2178 "y.tab.c"
break;
case 95:
#line 537 "parser.y"
	{

	}
#line 2185 "y.tab.c"
break;
case 96:
#line 540 "parser.y"
	{

	}
#line 2192 "y.tab.c"
break;
case 97:
#line 544 "parser.y"
	{

	}
#line 2199 "y.tab.c"
break;
case 98:
#line 547 "parser.y"
	{

	}
#line 2206 "y.tab.c"
break;
case 99:
#line 550 "parser.y"
	{

	}
#line 2213 "y.tab.c"
break;
#line 2215 "y.tab.c"
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
#if YYBTYACC
            do {
            if (yylvp < yylve)
            {
                /* we're currently re-reading tokens */
                yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylloc = *yylpp++;
#endif
                yychar = *yylexp++;
                break;
            }
            if (yyps->save)
            {
                /* in trial mode; save scanner results for future parse attempts */
                if (yylvp == yylvlim)
                {   /* Enlarge lexical value queue */
                    size_t p = (size_t) (yylvp - yylvals);
                    size_t s = (size_t) (yylvlim - yylvals);

                    s += YYLVQUEUEGROWTH;
                    if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL)
                        goto yyenomem;
                    if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL)
                        goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL)
                        goto yyenomem;
#endif
                    yylvp   = yylve = yylvals + p;
                    yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp   = yylpe = yylpsns + p;
                    yylplim = yylpsns + s;
#endif
                    yylexp  = yylexemes + p;
                }
                *yylexp = (YYINT) YYLEX;
                *yylvp++ = yylval;
                yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                *yylpp++ = yylloc;
                yylpe++;
#endif
                yychar = *yylexp++;
                break;
            }
            /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
            yychar = YYLEX;
#if YYBTYACC
            } while (0);
#endif /* YYBTYACC */
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;
#if YYBTYACC

    /* Reduction declares that this path is valid. Set yypath and do a full parse */
yyvalid:
    if (yypath) YYABORT;
    while (yyps->save)
    {
        YYParseState *save = yyps->save;
        yyps->save = save->save;
        save->save = yypath;
        yypath = save;
    }
#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%s[%d]: state %d, CONFLICT trial successful, backtracking to state %d, %d tokens\n",
                        YYDEBUGSTR, yydepth, yystate, yypath->state, (int)(yylvp - yylvals - yypath->lexeme));
#endif
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    yylvp          = yylvals + yypath->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yylpp          = yylpsns + yypath->lexeme;
#endif
    yylexp         = yylexemes + yypath->lexeme;
    yychar         = YYEMPTY;
    yystack.s_mark = yystack.s_base + (yypath->yystack.s_mark - yypath->yystack.s_base);
    memcpy (yystack.s_base, yypath->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
    yystack.l_mark = yystack.l_base + (yypath->yystack.l_mark - yypath->yystack.l_base);
    memcpy (yystack.l_base, yypath->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base + (yypath->yystack.p_mark - yypath->yystack.p_base);
    memcpy (yystack.p_base, yypath->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
    yystate        = yypath->state;
    goto yyloop;
#endif /* YYBTYACC */

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
#if YYBTYACC
    goto yyabort_nomem;
yyenomem:
    YYERROR_CALL("memory exhausted");
yyabort_nomem:
#endif /* YYBTYACC */
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
#if YYBTYACC
    if (yyps->save) goto yyvalid;
#endif /* YYBTYACC */
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

#if YYBTYACC
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    while (yyps)
    {
        YYParseState *save = yyps;
        yyps = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
    while (yypath)
    {
        YYParseState *save = yypath;
        yypath = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
#endif /* YYBTYACC */
    yyfreestack(&yystack);
    return (yyresult);
}
