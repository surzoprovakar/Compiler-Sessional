%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "1305002_SymbolTable.h"
#define YYSTYPE symbolInfo*
//int yydebug;
int yyparse(void);
int yylex(void);
double var[26];
symbolTable * table =  new symbolTable(31);
extern int line_count;
extern int error_count;
FILE *out;
symbolInfo *sm = new symbolInfo();
symbolInfo *multiple = new symbolInfo();
symbolInfo *arr_ind = new symbolInfo();
//int ind;

void yyerror(const char *s)
{
	fprintf(stderr,"****error at line %d: %s\n",line_count,s);
	fprintf(out,"****error at line %d: %s\n",line_count,s);
	error_count++;
	//printf("%s\n",s);
	return;
}

%}

%token WHITESPACE NEWLINE IF ELSE FOR WHILE DO BREAK INT CHAR FLOAT DOUBLE MAIN
%token VOID RETURN SWITCH CASE DEFAULT CONTINUE PRINTLN ADDOP MULOP INCOP DECOP
%token RELOP ASSIGNOP LOGICOP NOT LPAREN RPAREN LCURL RCURL LTHIRD RTHIRD COMMA
%token SEMICOLON CONST_INT CONST_FLOAT CONST_CHAR ID
//%type <sym> simple_expression term unary_expression factor
//%type <sym> expression logic_expression rel_expression
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%error-verbose

%% 

Program : INT MAIN LPAREN RPAREN compound_statement
		{fprintf(out, "\n\nProgram: INT MAIN LPAREN RPAREN compound_statement\n");}
	;


compound_statement : LCURL var_declaration statements RCURL
				{fprintf(out, "\n\ncompound_statement: LCURL var_declaration statements RCURL\n");}
		   | LCURL statements RCURL
				{fprintf(out, "\n\ncompound_statement: LCURL statements RCURL\n");}
		   | LCURL RCURL	{fprintf(out, "\n\ncompound_statement: LCURL RCURL\n");}
		   ;

			 
var_declaration	: type_specifier declaration_list SEMICOLON
			{fprintf(out, "\n\nvar_declaration: type_specifier declaration_list SEMICOLON\n");}
		|  var_declaration type_specifier declaration_list SEMICOLON
			{fprintf(out, "\n\nvar_declaration: var_declaration type_specifier declaration_list SEMICOLON\n");}
		;

type_specifier	: INT		{fprintf(out, "\n\ntype_specifier: INT\n");
					sm->name = "int";
				}
		| FLOAT		{fprintf(out, "\n\ntype_specifier: FLOAT\n");
					sm->name = "float";
				}
		| CHAR		{fprintf(out, "\n\ntype_specifier: CHAR\n");
					sm->name = "char";
				}
		;
			
declaration_list : declaration_list COMMA ID	{fprintf(out, "\n\ndeclaration_list: declaration_list COMMA ID\n");
							fprintf(out,"%s\n",$3->name.c_str());
							multiple = table->lookSymbol($3->name);
							if(multiple==NULL)
							{
								if(strcmp(sm->name.c_str(),"int")==0)
								{
									$3->dataType = 0;
									$3->v.i = -99999;
								}
								else if(strcmp(sm->name.c_str(),"float")==0)
								{
									$3->dataType = 1;
									$3->v.f = -99999.000000;
								}
								else if(strcmp(sm->name.c_str(),"char")==0)
								{
									$3->dataType = 2;
								}
								table->insertSymbol($3);
							}
							else yyerror("multiple declaration");
						}
		 | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD
			{fprintf(out, "\n\ndeclaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n");
				fprintf(out,"%s\n",$3->name.c_str());
				multiple = table->lookSymbol($3->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						$3->dataType = 0;
						$3->sz = $5->v.i;
						$3->v.i_Arr = (int*)malloc(($3->sz)*sizeof(int));
						for(int k = 0; k<$3->sz; k++) $3->v.i_Arr[k] = -1;
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						$3->dataType = 1;
						$3->sz = $5->v.i;
						$3->v.f_Arr = (float*)malloc(($3->sz)*sizeof(float));
						for(int k = 0; k<$3->sz; k++) $3->v.i_Arr[k] = -1.00000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						$3->dataType = 2;
						$3->sz = $5->v.i;
						$3->v.c_Arr = (char*)malloc(($3->sz)*sizeof(char));
					}
					table->insertSymbol($3);
				}
				else yyerror("multiple declaration");
			}
		 | ID   {fprintf(out, "\n\ndeclaration_list: ID\n");
				fprintf(out,"%s\n",$1->name.c_str());
				multiple = table->lookSymbol($1->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						$1->dataType = 0;
						$1->v.i = -99999;
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						$1->dataType = 1;
						$1->v.f = -99999.000000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						$1->dataType = 2;
					}
					table->insertSymbol($1);
				}
				else yyerror("multiple declaration");
			}
		 | ID LTHIRD CONST_INT RTHIRD
			{fprintf(out, "\n\ndeclaration_list: ID LTHIRD CONST_INT RTHIRD\n");
				fprintf(out,"%s\n",$1->name.c_str());
				multiple = table->lookSymbol($1->name);
				if(multiple==NULL)
				{
					if(strcmp(sm->name.c_str(),"int")==0)
					{
						$1->dataType = 0;
						$1->sz = $3->v.i;
						$1->v.i_Arr = (int*)malloc(($1->sz)*sizeof(int));
						for(int k = 0; k<$1->sz; k++) $1->v.i_Arr[k] = -1; 
					}
					else if(strcmp(sm->name.c_str(),"float")==0)
					{
						$1->dataType = 1;
						$1->sz = $3->v.i;
						$1->v.f_Arr = (float*)malloc(($1->sz)*sizeof(float));
						for(int k = 0; k<$1->sz; k++) $1->v.i_Arr[k] = -1.000000;
					}
					else if(strcmp(sm->name.c_str(),"char")==0)
					{
						$1->dataType = 2;
						$1->sz = $3->v.i;
						$1->v.c_Arr = (char*)malloc(($1->sz)*sizeof(char));
					}
					table->insertSymbol($1);
				}
				else yyerror("multiple declaration");
			}
		 ;

statements : statement		{fprintf(out, "\n\nstatements: statement\n");}
	   | statements statement	{fprintf(out, "\n\nstatements: statements statement\n");}
	   ;


statement  : expression_statement	{fprintf(out, "\n\nstatement: expression_statement\n");}
	   | compound_statement		{fprintf(out, "\n\nstatement: compound_statement\n");}
	   | FOR LPAREN expression_statement expression_statement expression RPAREN statement
		{fprintf(out, "\n\nstatement: FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");}
	   | IF LPAREN expression RPAREN statement
		{fprintf(out,"\n\nstatement: IF LPAREN expression RPAREN statement\n");}	%prec LOWER_THAN_ELSE
	   | IF LPAREN expression RPAREN statement ELSE statement
		{fprintf(out,"\n\nstatement: IF LPAREN expression RPAREN statement ELSE statement\n");}
	   | WHILE LPAREN expression RPAREN statement 
		{fprintf(out,"\n\nstatement: WHILE LPAREN expression RPAREN statement\n");}
	   | PRINTLN LPAREN ID RPAREN SEMICOLON 
		{fprintf(out,"\n\nstatement: PRINTLN LPAREN ID RPAREN SEMICOLON\n");}
	   | RETURN expression SEMICOLON 
		{fprintf(out,"\n\nstatement: RETURN expression SEMICOLON\n");}
	   ;
		
expression_statement	: SEMICOLON	{fprintf(out, "\n\nexpression_statement: SEMICOLON\n");}		
			| expression SEMICOLON  {fprintf(out, "\n\nexpression_statement: expression SEMICOLON\n");}
			;
						
variable : ID 				{fprintf(out, "\n\nvariable: ID\n"); fprintf(out,"%s\n",$1->name.c_str());
						sm = table->lookSymbol($1->name);
						//printf("****  %s  ****\n",sm->name.c_str());
						if(sm!=NULL)
						{
							printf("ekhane achi!!!! variable: ID\n");
							if($1->sz!=0) yyerror("identifier to an array");
							else $$ = table->lookSymbol($1->name);
							//$$=$1;
						}
						else yyerror("Undeclared Identifier");
						//add previously declared check
					}
	 | ID LTHIRD expression RTHIRD  {fprintf(out, "\n\nvariable: ID LTHIRD expression RTHIRD\n");
						fprintf(out,"%s\n",$1->name.c_str());
						//add previously declared check
						sm = table->lookSymbol($1->name);
						//printf("****  %s  ****\n",sm->name.c_str());
						if(sm!=NULL)
						{
							printf("ekhane achi!!!! variable: ID LTHIRD expression RTHIRD\n");
							if($1->sz>0)
							{
								arr_ind = $3;
								printf("*** %d *** %d ***\n",arr_ind->v.i,$3->v.i);
								if($3->dataType==0&&(($3->v.i>=0&&$3->v.i<$1->sz)||($3->v.c>=0&&$3->v.c<$1->sz)))
								{
									$$ = table->lookSymbol($1->name);
								}
								/*else if($3->dataType==0&&($3->v.c>=0&&$3->v.c<$1->sz))
								{
									//$$=$1;
									$$ = table->lookSymbol($1->name);
									//$$->index = $3->v.c;
									printf("%d\n",$$->index);
								}*/
								else if($3->dataType==1)yyerror("index can not be a float");
								else yyerror("array index out-of-bound");
							}
							else yyerror("not an array");
						}
						else yyerror("Undeclared Identifier");
					}
	 ;
			
expression : logic_expression		{fprintf(out,"\n\nexpression: logic_expression\n");}
	   | variable ASSIGNOP logic_expression
		{fprintf(out,"\n\nexpression: variable ASSIGNOP logic_expression\n");
			if($3->dataType == 3) {}
			else if(!(($1->dataType==0||$1->dataType==2)&&$3->dataType==1))
			{
				//int ind = $1->index;
				//printf("%d\n",ind);
				if($1->sz == 0)
				{
					printf("ekhane achi!!!! expression: variable ASSIGNOP logic_expression\n");
					if($1->dataType == 0 && $3->dataType == 0)
						$1->v.i=$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 2)
						$1->v.i=$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$1->v.f=$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$1->v.f=$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$1->v.f=$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$1->v.c=$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 2)
						$1->v.c=$3->v.c;
				}
				else /*if(arr_ind->v.i>=0&&arr_ind->v.i<$1->sz)*/
				{
					printf("ekhane achi!!Array!! expression: variable ASSIGNOP logic_expression\n");
					
					if($1->dataType == 0 && $3->dataType == 0)
						$1->v.i_Arr[arr_ind->v.i]=$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 2)
						$1->v.i_Arr[arr_ind->v.i]=$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$1->v.f_Arr[arr_ind->v.i]=$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$1->v.f_Arr[arr_ind->v.i]=$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$1->v.f_Arr[arr_ind->v.i]=$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$1->v.c_Arr[arr_ind->v.i]=$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 2)
						$1->v.c_Arr[arr_ind->v.i]=$3->v.c;
				}
				$$=$1;
				//symbolInfo *tmp = table->lookSymbol($1->name);
				//tmp = $1;
				table->printTable(out);
			}
			else yyerror("can't assign a float to an integer or a character");
		}
	   ;
			
logic_expression : rel_expression 	{fprintf(out,"\n\nlogic_expression: rel_expression\n");}
		 | rel_expression LOGICOP rel_expression 	
			{fprintf(out,"\n\nlogic_expression: rel_expression LOGICOP rel_expression\n");
				$$->dataType = 0;
				if(strcmp($2->name.c_str(),"&&")==0)
				{
					if($1->dataType == 0 && $3->dataType == 0)
						$$->v.i = $1->v.i&&$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 1)
						$$->v.i = $1->v.i&&$3->v.f;
					else if($1->dataType == 0 && $3->dataType == 2)
						$$->v.i = $1->v.i&&$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$$->v.i = $1->v.f&&$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$$->v.i = $1->v.f&&$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$$->v.i = $1->v.f&&$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$$->v.i = $1->v.c&&$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 1)
						$$->v.i = $1->v.c&&$3->v.f;
					else if($1->dataType == 2 && $3->dataType == 2)
						$$->v.i = $1->v.c&&$3->v.c;
				}
				else if(strcmp($2->name.c_str(),"||")==0)
				{
					if($1->dataType == 0 && $3->dataType == 0)
						$$->v.i = $1->v.i||$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 1)
						$$->v.i = $1->v.i||$3->v.f;
					else if($1->dataType == 0 && $3->dataType == 2)
						$$->v.i = $1->v.i||$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$$->v.i = $1->v.f||$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$$->v.i = $1->v.f||$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$$->v.i = $1->v.f||$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$$->v.i = $1->v.c||$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 1)
						$$->v.i = $1->v.c||$3->v.f;
					else if($1->dataType == 2 && $3->dataType == 2)
						$$->v.i = $1->v.c||$3->v.c;
				}
			}
		 ;
			
rel_expression	: simple_expression	{fprintf(out,"\n\nrel_expression: simple_expression\n");}
		| simple_expression RELOP simple_expression
			{fprintf(out,"\n\nrel_expression: simple_expression RELOP simple_expression\n");
				$$->dataType = 0;
				if(strcmp($2->name.c_str(),"<")==0)
				{
					if($1->dataType == 0 && $3->dataType == 0)
						$$->v.i = $1->v.i<$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 1)
						$$->v.i = $1->v.i<$3->v.f;
					else if($1->dataType == 0 && $3->dataType == 2)
						$$->v.i = $1->v.i<$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$$->v.i = $1->v.f<$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$$->v.i = $1->v.f<$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$$->v.i = $1->v.f<$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$$->v.i = $1->v.c<$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 1)
						$$->v.i = $1->v.c<$3->v.f;
					else if($1->dataType == 2 && $3->dataType == 2)
						$$->v.i = $1->v.c<$3->v.c;
				}
				else if(strcmp($2->name.c_str(),">")==0)
				{
					if($1->dataType == 0 && $3->dataType == 0)
						$$->v.i = $1->v.i>$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 1)
						$$->v.i = $1->v.i>$3->v.f;
					else if($1->dataType == 0 && $3->dataType == 2)
						$$->v.i = $1->v.i>$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$$->v.i = $1->v.f>$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$$->v.i = $1->v.f>$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$$->v.i = $1->v.f>$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$$->v.i = $1->v.c>$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 1)
						$$->v.i = $1->v.c>$3->v.f;
					else if($1->dataType == 2 && $3->dataType == 2)
						$$->v.i = $1->v.c>$3->v.c;
				}
				else if(strcmp($2->name.c_str(),"<=")==0)
				{
					if($1->dataType == 0 && $3->dataType == 0)
						$$->v.i = $1->v.i<=$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 1)
						$$->v.i = $1->v.i<=$3->v.f;
					else if($1->dataType == 0 && $3->dataType == 2)
						$$->v.i = $1->v.i<=$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$$->v.i = $1->v.f<=$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$$->v.i = $1->v.f<=$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$$->v.i = $1->v.f<=$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$$->v.i = $1->v.c<=$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 1)
						$$->v.i = $1->v.c<=$3->v.f;
					else if($1->dataType == 2 && $3->dataType == 2)
						$$->v.i = $1->v.c<=$3->v.c;
				}
				else if(strcmp($2->name.c_str(),">=")==0)
				{
					if($1->dataType == 0 && $3->dataType == 0)
						$$->v.i = $1->v.i>=$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 1)
						$$->v.i = $1->v.i>=$3->v.f;
					else if($1->dataType == 0 && $3->dataType == 2)
						$$->v.i = $1->v.i>=$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$$->v.i = $1->v.f>=$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$$->v.i = $1->v.f>=$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$$->v.i = $1->v.f>=$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$$->v.i = $1->v.c>=$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 1)
						$$->v.i = $1->v.c>=$3->v.f;
					else if($1->dataType == 2 && $3->dataType == 2)
						$$->v.i = $1->v.c>=$3->v.c;
				}
				else if(strcmp($2->name.c_str(),"==")==0)
				{
					if($1->dataType == 0 && $3->dataType == 0)
						$$->v.i = $1->v.i==$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 1)
						$$->v.i = $1->v.i==$3->v.f;
					else if($1->dataType == 0 && $3->dataType == 2)
						$$->v.i = $1->v.i==$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$$->v.i = $1->v.f==$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$$->v.i = $1->v.f==$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$$->v.i = $1->v.f==$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$$->v.i = $1->v.c==$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 1)
						$$->v.i = $1->v.c==$3->v.f;
					else if($1->dataType == 2 && $3->dataType == 2)
						$$->v.i = $1->v.c==$3->v.c;
				}
				else if(strcmp($2->name.c_str(),"!=")==0)
				{
					if($1->dataType == 0 && $3->dataType == 0)
						$$->v.i = $1->v.i!=$3->v.i;
					else if($1->dataType == 0 && $3->dataType == 1)
						$$->v.i = $1->v.i!=$3->v.f;
					else if($1->dataType == 0 && $3->dataType == 2)
						$$->v.i = $1->v.i!=$3->v.c;
					else if($1->dataType == 1 && $3->dataType == 0)
						$$->v.i = $1->v.f!=$3->v.i;
					else if($1->dataType == 1 && $3->dataType == 1)
						$$->v.i = $1->v.f!=$3->v.f;
					else if($1->dataType == 1 && $3->dataType == 2)
						$$->v.i = $1->v.f!=$3->v.c;
					else if($1->dataType == 2 && $3->dataType == 0)
						$$->v.i = $1->v.c!=$3->v.i;
					else if($1->dataType == 2 && $3->dataType == 1)
						$$->v.i = $1->v.c!=$3->v.f;
					else if($1->dataType == 2 && $3->dataType == 2)
						$$->v.i = $1->v.c!=$3->v.c;
				}
			}
		;
				
simple_expression : term		{fprintf(out,"\n\nsimple_expression: term\n");}
		  | simple_expression ADDOP term {fprintf(out,"\n\nsimple_expression: simple_expression ADDOP term\n");
							
							if(strcmp($2->name.c_str(),"+")==0)
							{
								if($1->dataType == 0 && $3->dataType == 0)
									{$$->dataType = 0;$$->v.i = $1->v.i+$3->v.i;}
								else if($1->dataType == 0 && $3->dataType == 1)
									{$$->dataType = 1;$$->v.f = $1->v.i+$3->v.f;}
								else if($1->dataType == 0 && $3->dataType == 2)
									{$$->dataType = 0;$$->v.i = $1->v.i+$3->v.c;}
								else if($1->dataType == 1 && $3->dataType == 0)
									{$$->dataType = 1;$$->v.f = $1->v.f+$3->v.i;}
								else if($1->dataType == 1 && $3->dataType == 1)
									{$$->dataType = 1;$$->v.f = $1->v.f+$3->v.f;}
								else if($1->dataType == 1 && $3->dataType == 2)
									{$$->dataType = 1;$$->v.f = $1->v.f+$3->v.c;}
								else if($1->dataType == 2 && $3->dataType == 0)
									{$$->dataType = 0;$$->v.i = $1->v.c+$3->v.i;}
								else if($1->dataType == 2 && $3->dataType == 1)
									{$$->dataType = 1;$$->v.f = $1->v.c+$3->v.f;}
								else if($1->dataType == 2 && $3->dataType == 2)
									{$$->dataType = 0;$$->v.i = $1->v.c+$3->v.c;}
							}
							else if(strcmp($2->name.c_str(),"-")==0)
							{
								if($1->dataType == 0 && $3->dataType == 0)
									{$$->dataType = 0;$$->v.i = $1->v.i-$3->v.i;}
								else if($1->dataType == 0 && $3->dataType == 1)
									{$$->dataType = 1;$$->v.f = $1->v.i-$3->v.f;}
								else if($1->dataType == 0 && $3->dataType == 2)
									{$$->dataType = 0;$$->v.i = $1->v.i-$3->v.c;}
								else if($1->dataType == 1 && $3->dataType == 0)
									{$$->dataType = 1;$$->v.f = $1->v.f-$3->v.i;}
								else if($1->dataType == 1 && $3->dataType == 1)
									{$$->dataType = 1;$$->v.f = $1->v.f-$3->v.f;}
								else if($1->dataType == 1 && $3->dataType == 2)
									{$$->dataType = 1;$$->v.f = $1->v.f-$3->v.c;}
								else if($1->dataType == 2 && $3->dataType == 0)
									{$$->dataType = 0;$$->v.i = $1->v.c-$3->v.i;}
								else if($1->dataType == 2 && $3->dataType == 1)
									{$$->dataType = 1;$$->v.f = $1->v.c-$3->v.f;}
								else if($1->dataType == 2 && $3->dataType == 2)
									{$$->dataType = 0;$$->v.i = $1->v.c-$3->v.c;}
							}
						}
		  ;
					
term :	unary_expression		{fprintf(out,"\n\nterm: unary_expression\n");}
     |  term MULOP unary_expression	{fprintf(out,"\n\nterm: term MULOP unary_expression\n");
						
						if(strcmp($2->name.c_str(),"*")==0)
						{
							if($1->dataType == 0 && $3->dataType == 0)
								{$$->dataType = 0; $$->v.i = $1->v.i*$3->v.i;}
							else if($1->dataType == 0 && $3->dataType == 1)
								{$$->dataType = 1; $$->v.f = $1->v.i*$3->v.f;}
							else if($1->dataType == 0 && $3->dataType == 2)
								{$$->dataType = 0; $$->v.i = $1->v.i*$3->v.c;}
							else if($1->dataType == 1 && $3->dataType == 0)
								{$$->dataType = 1; $$->v.f = $1->v.f*$3->v.i;}
							else if($1->dataType == 1 && $3->dataType == 1)
								{$$->dataType = 1; $$->v.f = $1->v.f*$3->v.f;}
							else if($1->dataType == 1 && $3->dataType == 2)
								{$$->dataType = 1; $$->v.f = $1->v.f*$3->v.c;}
							else if($1->dataType == 2 && $3->dataType == 0)
								{$$->dataType = 0; $$->v.i = $1->v.c*$3->v.i;}
							else if($1->dataType == 2 && $3->dataType == 1)
								{$$->dataType = 1; $$->v.f = $1->v.c*$3->v.f;}
							else if($1->dataType == 2 && $3->dataType == 2)
								{$$->dataType = 0; $$->v.i = $1->v.c*$3->v.c;}
						}
						else if(strcmp($2->name.c_str(),"/")==0)
						{
							if($1->dataType == 0 && $3->dataType == 0)
								{$$->dataType = 0; $$->v.i = $1->v.i/$3->v.i;}
							else if($1->dataType == 0 && $3->dataType == 1)
								{$$->dataType = 1; $$->v.f = $1->v.i/$3->v.f;}
							else if($1->dataType == 0 && $3->dataType == 2)
								{$$->dataType = 0; $$->v.i = $1->v.i/$3->v.c;}
							else if($1->dataType == 1 && $3->dataType == 0)
								{$$->dataType = 1; $$->v.f = $1->v.f/$3->v.i;}
							else if($1->dataType == 1 && $3->dataType == 1)
								{$$->dataType = 1; $$->v.f = $1->v.f/$3->v.f;}
							else if($1->dataType == 1 && $3->dataType == 2)
								{$$->dataType = 1; $$->v.f = $1->v.f/$3->v.c;}
							else if($1->dataType == 2 && $3->dataType == 0)
								{$$->dataType = 0; $$->v.i = $1->v.c/$3->v.i;}
							else if($1->dataType == 2 && $3->dataType == 1)
								{$$->dataType = 1; $$->v.f = $1->v.c/$3->v.f;}
							else if($1->dataType == 2 && $3->dataType == 2)
								{$$->dataType = 0; $$->v.i = $1->v.c/$3->v.c;}
						}
						else 
						{
							if(!($1->dataType==1 || $3->dataType==1))
							{
								if($1->dataType == 0 && $3->dataType == 0)
									{$$->dataType = 0; $$->v.i = $1->v.i%$3->v.i;}
								else if($1->dataType == 0 && $3->dataType == 2)
									{$$->dataType = 0; $$->v.i = $1->v.i%$3->v.c;}
								else if($1->dataType == 2 && $3->dataType == 0)
									{$$->dataType = 0; $$->v.i = $1->v.c%$3->v.i;}
								else if($1->dataType == 2 && $3->dataType == 2)
									{$$->dataType = 0; $$->v.i = $1->v.c%$3->v.c;}
							}
							else
							{
								$$->dataType = 3;
								yyerror("invalid operands for modulo operation");
							}
						}
					}
     ;

unary_expression : ADDOP unary_expression {fprintf(out,"\n\nunary_expression: ADDOP unary_expression\n");
						if(strcmp($1->name.c_str(),"-")==0)
						{
							if($1->dataType == 0) {$2->v.i=-$2->v.i; $$=$2;}
							else if($1->dataType == 1) {$2->v.f=-$2->v.f; $$=$2;}
							else if($1->dataType == 2) {$2->v.c=-$2->v.c; $$=$2;}
						}
					  }  
		 | NOT unary_expression   {fprintf(out,"\n\nunary_expression: NOT unary_expression\n");
						if($1->dataType == 0) {$2->v.i=!$2->v.i; $$=$2;}
						else if($1->dataType == 1) {$2->v.f=!$2->v.f; $$=$2;}
						else if($1->dataType == 2) {$2->v.c=!$2->v.c; $$=$2;}	
					} 
		 | factor {fprintf(out,"\n\nunary_expression: factor\n");
				$$ = new symbolInfo();
				//$$=$1;
				$$->name = $1->name;
				$$->type = $1->type;
				$$->dataType = $1->dataType;
				$$->index = $1->index;
				$$->sz = $1->sz;
				if($1->sz == 0)
				{
					if($1->dataType==0)$$->v.i = $1->v.i;
					else if($1->dataType==1)$$->v.f = $1->v.f;
					else if($1->dataType==2)$$->v.c = $1->v.c;
				}
				else
				{
					if($1->dataType==0)$$->v.i = $1->v.i_Arr[arr_ind->v.i];
					else if($1->dataType==1)$$->v.f = $1->v.f_Arr[arr_ind->v.i];
					else if($1->dataType==2)$$->v.c = $1->v.c_Arr[arr_ind->v.i];	
				}
			}
		 ;
	
factor	: variable {fprintf(out,"\n\nfactor: variable\n");}//symbolInfo* $$ = new symbolInfo(); $$=$1;}
	| LPAREN expression RPAREN   {fprintf(out,"\nfactor: LPAREN expression RPAREN\n"); $$=$2;}
	| CONST_INT    {fprintf(out,"\n\nfactor: CONST_INT\n");
				fprintf(out,"%d\n",$1->v.i);
				printf("Integer: %d\n",$1->v.i);
			} 
	| CONST_FLOAT  {fprintf(out,"\n\nfactor: CONST_FLOAT\n");
				fprintf(out,"%f\n",$1->v.f);
				printf("Float: %f\n",$1->v.f);
			}
	| CONST_CHAR   {fprintf(out,"\n\nfactor: CONST_CHAR\n");
				fprintf(out,"%c\n",$1->v.c);
				printf("Character: %c\n",$1->v.c);
			}
	| factor INCOP {fprintf(out,"\n\nfactor: factor INCOP\n");
				if($1->sz==0)
				{
					if($1->dataType == 0) {$1->v.i++; $$=$1;}
					else if($1->dataType == 1) {$1->v.f++; $$=$1;}
					else if($1->dataType == 2) {$1->v.c++; $$=$1;}
				}
				else
				{
					if($1->dataType==0){$1->v.i_Arr[arr_ind->v.i]++; $$=$1;}
					else if($1->dataType==1){$1->v.f_Arr[arr_ind->v.i]++; $$=$1;}
					else if($1->dataType==2){$1->v.c_Arr[arr_ind->v.i]++; $$=$1;}	
				}
			}
	| factor DECOP {fprintf(out,"\n\nfactor: factor DECOP\n");
				if($1->sz==0)
				{
					if($1->dataType == 0) {$1->v.i--; $$=$1;}
					else if($1->dataType == 1) {$1->v.f--; $$=$1;}
					else if($1->dataType == 2) {$1->v.c--; $$=$1;}
				}
				else
				{
					if($1->dataType==0){$1->v.i_Arr[arr_ind->v.i]--; $$=$1;}
					else if($1->dataType==1){$1->v.f_Arr[arr_ind->v.i]--; $$=$1;}
					else if($1->dataType==2){$1->v.c_Arr[arr_ind->v.i]--; $$=$1;}	
				}
			}
	;


%%
int main(int argc,char *argv[]){
	
	extern FILE *yyin;
	if(argc!=2){
		printf("Please provide input file name and try again\n");
		return 0;
	}
	
	FILE *fin=fopen(argv[1],"r");
	if(fin==NULL){
		printf("Cannot open specified file\n");
		return 0;
	}
	
	out= fopen("output.txt","w");

	yyin= fin;
	/*yydebug=1;*/
	yyparse();
	//printf("\nline: %d\n",line_count);
	fprintf(out,"\n*******symbol table******\n");
	table->printTable(out);
	fprintf(out,"\nTotal Lines: %d\n",line_count);
	fprintf(out,"\nTotal Errors: %d\n",error_count);
	fclose(yyin);
	fclose(out);
	return 0;
}
