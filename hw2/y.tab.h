#ifndef _yy_defines_h_
#define _yy_defines_h_

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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE {int intVal;

	char var[301];	

	struct symbol *v;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
