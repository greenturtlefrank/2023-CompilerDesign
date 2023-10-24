
%{

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



%}

%union {int intVal;

	char var[301];	

	struct symbol *v;
}

%token <intVal> NUM
%token <float> FLOAT
%token <var> TYPE
%token <var> ID
%token <var> PMID
%token <var> NU
%token <var> VAR
%token <var> FOR
%token <var> DO
%token <var> WHILE
%token <var> BREAK
%token <var> CONTINUE
%token <var> IF
%token <var> ELSE
%token <var> RETURN
%token <var> STRUCT
%token <var> SWITCH
%token <var> CASE
%token <var> DEFAULT


%start start

%%


start: first{

	};
     
first: scalar_decl {

	}
	| array_decl {

	}
	| func_decl{

	}
	| func_def{

	};
	


scalar_decl: type ident ';'{

	char h[20] = "<scalar_decl>";	
	char b[20] = ";</scalar_decl>";

	inputhead(h);
	inputback(b);

	};


type: TYPE {
	
	char b[100];	

	inputback(yylval.var);
	
	};

type_scalar: type {

        };


ident: var ident_plus {
	//printf("%c", yylval.var[0]);
	//inputhead(yylval.var);
	};

ident_plus: {

	}
	| ',' var ident_plus{
	inputhead(",");
	}
	| ',' type ident {
	inputhead(",");
	};

var: VAR scalar_plus{
	inputback(yylval.var);
	}
	| '*' VAR scalar_plus{
	inputhead(yylval.var);
	inputhead(",");
	};

scalar_plus: {
   	}
	| '=' expr{
	inputhead("=");
	};










array_decl: type array array_more ';' {
	
	char h[20] = "<array_decl>";
        char b[20] = ";</array_decl>";

        inputhead(h);
        inputback(b);

	};

type_array: type {

        };

array: var '[' expr ']' array_plus  {
	printf(" [ ]");
	};

array_plus: array_plusplus
	{

	}
	| '[' expr ']' array_plus {
	printf("[ ]");
	};

array_plusplus: {

	}
	| '=' '{' array_plusplusplus '}'
	{
	printf("={ }");
	};

array_plusplusplus: {
		 
	}
	| '{' array_plusplusplus '}' array_plusplusplus
	{
	printf("{ }");
	}
	| ',' array_plusplusplus
	{
	printf(",");
	}
	| array_num
	{

	};

array_num: expr array_numplus {
		
	}

array_numplus: {
	     
	}
	| ',' expr array_numplus {
	printf(",");
	}

array_more: {

	}
	| ',' array array_more{
	printf(",");
	};






func_decl: type func_decl_plus ';' {
	
	char h[20] = "<func_decl>";
        char b[20] = ";</func_decl>";

        inputhead(h);
        inputback(b);

	};

type_func: TYPE {

        char b[100];

        inputback(yylval.var);

        };

func_decl_plus:  ident '(' parameter ')'{
	//printf("( )");
	};

parameter: {
	 
	}
	|type ident {

	};










func_def: type func_def_plus {
	
	char h[20] = "<func_def>";
        char b[20] = ";</func_def>";

        inputhead(h);
        inputback(b);

	};

type_func_def: TYPE {

        char b[100];

        inputback(yylval.var);

        };

func_def_plus: ident '(' parameter ')' compound_stmt{
	//printf("( )");
	};










expr: term{
  	
	char h[20] = "<expr>";
        char b[20] = "</expr>";

        inputhead(h);
        inputback(b);

	};

term: mul term_plus{
    	
	};

term_plus: {
	
	}
	| '+' mul term_plus{

	}
	| '-' mul term_plus{

        };

mul: otherid mul_plus {

	}
	| '+' factor {

	}
	| '-' factor {

	};

mul_plus: {

	}
	| '*' otherid mul_plus {
	}
	| '/' otherid mul_plus {

	};

otherid: power otherid_plus {

	};

otherid_plus: {

	}
	| ID power otherid_plus{

	};
	

power: factor{
        
        }
	| PMID {

	};

factor: NUM {

	int n = 0;
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
	
	inputback(re_word);

	}
	| FLOAT {
	
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
	| NU {

	inputhead(yylval.var);

	}
	| '(' expr ')'{
	printf("( )");
	};









stmt: stmt_plus {
	
	char h[20] = "<stmt>";
        char b[20] = "</stmt>";

        inputhead(h);
        inputback(b);

};

stmt_plus: expr ';' {
	
	}
	| ifelse {	

	}
	| switch {

	}
	| while {

	}
	| for {

	}
	| return{

	}
	| compound_stmt {

	};

ifelse: IF '(' expr ')' compound_stmt ifelse_plus{
	printf("if( )");
	};

ifelse_plus: {

	}
	| ELSE compound_stmt {
	printf("else");
	};

switch: SWITCH '(' expr ')' '{' switch_clauses '}' {
	printf("swtich( ){ }");
	};

switch_clauses: switch_clauses_plus switch_clauses_space {

	};

switch_clauses_space:  {
		    
	}
	| switch_clauses_plus switch_clauses_space{

	}
	| ' ' switch_clauses_plus switch_clauses_space{
	printf(" ");
	}
	| '	' switch_clauses_plus switch_clauses_space{
	printf("	");
	}
	| '\n' switch_clauses_plus switch_clauses_space{
	printf("\n");
	}
	;

switch_clauses_plus: CASE expr  ':' switch_clauses_plusplus{
	printf("case :");
	}
	| DEFAULT ':' switch_clauses_plusplus{
	printf("default:");
	};

switch_clauses_plusplus: {

	}
	| stmt switch_clauses_plusplus{

	};


while: WHILE '(' expr ')' stmt {
	printf("while( )");
	}
	| DO stmt WHILE '(' expr ')' ';' {
	printf("do while( );");
	};

for: FOR '(' nullexpr ';' nullexpr ';' nullexpr ')' stmt {
	printf("for( ; ; )");
	}

nullexpr: {

	}
	| expr {

	};

return: RETURN return_plus {
	printf("return");
	}
	| BREAK ';' {
	printf("break;");
	}
	| CONTINUE ';' {
	printf("continue;");
	};

return_plus: expr ';' {
	printf(" ;");
	}
	| ';' {
	printf(";");
	};

compound_stmt: '{' compound_stmt_plus '}' {
	printf("{ }"); 
	};

compound_stmt_plus: {

	}
	| stmt compound_stmt_plus {

	}
	| var_decl compound_stmt_plus {

	};

var_decl: scalar_decl {

	}
	| array_decl {

	}
	| func_decl {

	};







%%



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




