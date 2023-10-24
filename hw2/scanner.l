%{
#include<stdio.h>
#include"y.tab.h"

extern YYSTYPE yylval;

int lineCount=0;

int source=1;
int token=1;

int oneblock=1;
int allblock=1;

int now=0;
char rem[301];

int key = 0;
int macro = 0;
int id = 0;
int op = 0;
int punc = 0;
int interger = 0;
int floatt  = 0;
int charr = 0;
int stringg = 0;

%}

num     [0-9]
al      [a-zA-Z]




%%


"for"		{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return FOR;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}	
"do"		{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return DO;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"while"		{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return WHILE;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"break"		{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return BREAK;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"continue"	{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return CONTINUE;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"if"		{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return IF;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"else"		{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return ELSE;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"return"	{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return RETURN;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"struct"	{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return STRUCT;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"switch"	{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return SWITCH;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"case"		{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return CASE;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"default"       {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return DEFAULT;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}





(("const "|"")("signed "|"unsigned "|"")("long long "|"long "|"short "|"")"int")	{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return TYPE; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
(("const "|"")("signed "|"unsigned "|"")("long long"|"long"|"short"|"char")) 		{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return TYPE; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
(("const "|"")("double"|"float"|"void"|"signed"|"unsigned")) 				{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return TYPE; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"const"											{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return TYPE; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}





("__COUNTER__"|"__LINE__"|"INT_MAX"|"INT_MIN"|"CHAR_MAX"|"CHAR_MIN"|"MAX"|"MIN")        {if(token&&oneblock&&allblock){printf("#macro:");ECHO;printf("\n");} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
("NULL")										{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return NU;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}





(("'").("'")|\'\\n\'|\'\\t\'|\'\\0\')                   {if(token&&oneblock&&allblock){printf("#char:");ECHO;printf("\n");} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}


\"(.)*\"                {if(token&&oneblock&&allblock){printf("#string:");ECHO;printf("\n");} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}


("+"|"-"|"*"|"/"|"%"|"<"|"<="|">"|">="|"=="|"!="|"="|"&&"|"||"|"!"|"&"|"|")     {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return *yytext; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}



{num}+                  {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } yylval.intVal = atoi(yytext); return NUM;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}



{num}*"."{num}+         {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return FLOAT; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
{num}+"."{num}*         {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return FLOAT; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"+"{num}*"."{num}+      {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return FLOAT; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"+"{num}+"."{num}*      {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return FLOAT; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"-"{num}*"."{num}+      {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return FLOAT; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"-"{num}+"."{num}*      {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return FLOAT; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}




"//"                    {oneblock=0;}

"/*"                    {allblock=0;}
"*/"                    {allblock=1;}



("++"|"--")                   							{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return PMID; } if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}




(":"|";"|","|"."|"["|"]"|"("|")"|"{"|"}")                                                               {if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return *yytext;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}





("_"|{al})(("_")*{num}*{al}*)*			{if(token&&oneblock&&allblock){ int n = 0; while(yytext[n] != '\0' && n < 301){ yylval.var[n] = yytext[n]; n++; } return VAR;} if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}



"#pragma"(\t|" ")+"source"(\t|" ")+"on"           {source=1; if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"#pragma"(\t|" ")+"source"(\t|" ")+"off"          {source=0; if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"#pragma"(\t|" ")+"token"(\t|" ")+"on"            {token=1; if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"#pragma"(\t|" ")+"token"(\t|" ")+"off"           {token=0; if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}




\n              	{lineCount++; oneblock=1; rem[now]='\0'; if(source){ /*printf("%d:", lineCount);*/ for(int i = 0; i < now; i++){/*printf("%c",rem[i]);*/} /*printf("\n");*/ } now=0;}
" "             	{if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}
"	"             	{if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}


.			{if(oneblock&&allblock){int i = 0; while(yytext[i]!='\0'){rem[now] = yytext[i]; now++; i++;}}}


%%



/*
int main(int argc, char* argv[])
{
        //printf("good!");
        yylex();

        //printf("%d:%s",lineCount,);

        return 0;
}*/

int yywrap()
{
        return 1;
}

int check()
{
}

