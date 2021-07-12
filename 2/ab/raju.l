%option noyywrap
%x STATE
%x SINGLE_COMMENT
%x MULTI_COMMENT

%{
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int line_count=1;
int error_count=0;

char s1[100]="";
char s2[100]="";

FILE *logout;
FILE *tokenout;


char character(char str[])
{
    if(str[2]=='t')return '\t';
    else if(str[2]=='n')return '\n';
    else if(str[2]=='b')return '\b';
    else if(str[2]=='a')return '\a';
    else if(str[2]=='v')return '\v';
    else if(str[2]=='f')return '\f';
    else if(str[2]=='r')return '\r';
    else if(str[2]=='0')return '\0';
    else if(str[2]=='\\')return '\\';
}

typedef struct _identifier{
    char name[100];
    char type[100];
    struct _identifier* next;
}identifier;

identifier *table[6];

void create_table(){
    int i;
    for (i=0; i<6; i++){
        table[i] = (identifier *)malloc(100 * sizeof(identifier));
        table[i]->next=NULL;
    }
}

int function(char str[])
{
    int l=strlen(str);
    int sum=0,i;
    for(i=0;i<l;i++){
        sum=sum+str[i];
    }
    return sum%6;
}
void print()
{
    int i;
    fprintf(logout,"#Scopetable 1\n");
    for(i=0;i<6;i++){
        identifier *head=table[i];
        if(head->next==NULL)continue;
        fprintf(logout,"%d-->",i);
        while(head->next!=NULL){
            fprintf(logout,"<%s,%s>",head->next->name,head->next->type);
            head=head->next;
        }
        fprintf(logout,"\n");
    }
 fprintf(logout,"\n");
return;
}

void insert(char nam[],char typ[]){
    int x=function(nam);

    identifier *head=table[x];

    identifier *entry=(identifier *)malloc(sizeof(identifier));

    strcpy(entry->name,nam);

    strcpy(entry->type,typ);

    while(head->next!=NULL){
        if(strcmp(head->next->name,nam)==0){
            return;
        }
        head=head->next;
    }
    head->next=entry;
    entry->next=NULL;
    print();
    return;
}



%}

WHITESPACE [ \t\f\r\v]+ 
LETTER [a-zA-Z]
DIGIT [0-9]
NEWLINE \n
EXP ([Ee][-+]?[0-9]+)
ALPHANUMERIC [a-zA-Z0-9]


%%

{NEWLINE} {line_count++;}

"if" { fprintf(tokenout,"<IF>");
       fprintf(logout,"Line no. %d: TOKEN <IF> Lexeme %s found\n",line_count,yytext);
}

"else" { fprintf(tokenout,"<ELSE>");
	 fprintf(logout,"Line no. %d: TOKEN <ELSE> Lexeme %s found\n",line_count,yytext);
}

"for" { fprintf(tokenout,"<FOR>");
	fprintf(logout,"Line no. %d: TOKEN <FOR> Lexeme %s found\n",line_count,yytext);
}

"while" { fprintf(tokenout,"<WHILE>");
	fprintf(logout,"Line no. %d: TOKEN <WHILE> Lexeme %s found\n",line_count,yytext);
}

"do" { fprintf(tokenout,"<DO>");
	fprintf(logout,"Line no. %d: TOKEN <DO> Lexeme %s found\n",line_count,yytext);
}

"break" { fprintf(tokenout,"<BREAK>");
	fprintf(logout,"Line no. %d: TOKEN <BREAK> Lexeme %s found\n",line_count,yytext);
}

"int" { fprintf(tokenout,"<INT>");
	fprintf(logout,"Line no. %d: TOKEN <INT> Lexeme %s found\n",line_count,yytext);
}

"char" { fprintf(tokenout,"<CHAR>");
	fprintf(logout,"Line no. %d: TOKEN <CHAR> Lexeme %s found\n",line_count,yytext);
}

"float" { fprintf(tokenout,"<FLOAT>");
	fprintf(logout,"Line no. %d: TOKEN <FLOAT> Lexeme %s found\n",line_count,yytext);
}

"double" { fprintf(tokenout,"<DOUBLE>");
	fprintf(logout,"Line no. %d: TOKEN <DOUBLE> Lexeme %s found\n",line_count,yytext);
}

"void" { fprintf(tokenout,"<VOID>");
	fprintf(logout,"Line no. %d: TOKEN <VOID> Lexeme %s found\n",line_count,yytext);
}

"return" { fprintf(tokenout,"<RETURN>");
	fprintf(logout,"Line no. %d: TOKEN <RETURN> Lexeme %s found\n",line_count,yytext);
}

"switch" { fprintf(tokenout,"<SWITCH>");
	fprintf(logout,"Line no. %d: TOKEN <SWITCH> Lexeme %s found\n",line_count,yytext);
}

"case" { fprintf(tokenout,"<CASE>");
	fprintf(logout,"Line no. %d: TOKEN <CASE> Lexeme %s found\n",line_count,yytext);
}

"default" { fprintf(tokenout,"<DEFAULT>");
	fprintf(logout,"Line no. %d: TOKEN <DEFAULT> Lexeme %s found\n",line_count,yytext);
}

"continue" { fprintf(tokenout,"<CONTINUE>");
	fprintf(logout,"Line no. %d: TOKEN <CONTINUE> Lexeme %s found\n",line_count,yytext);
}


"+" | 
"-" { fprintf(tokenout,"<ADDOP,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <ADDOP> Lexeme %s found\n",line_count,yytext);
}

"*" | 
"/" |
"%" { fprintf(tokenout,"<MULOP,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <MULOP> Lexeme %s found\n",line_count,yytext);
}

"++" | 
"--" { fprintf(tokenout,"<INCOP,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <INCOP> Lexeme %s found\n",line_count,yytext);
}

"<"  | 
"<=" |
">"  |
">=" |
"==" |
"!=" { fprintf(tokenout,"<RELOP,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <RELOP> Lexeme %s found\n",line_count,yytext);
}

"=" { fprintf(tokenout,"<ASSIGNOP,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <ASSIGNOP> Lexeme %s found\n",line_count,yytext);
}

"&&" |
"||" { fprintf(tokenout,"<LOGICOP,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <LOGICOP> Lexeme %s found\n",line_count,yytext);
}

"(" { fprintf(tokenout,"<LPAREN,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <LPAREN> Lexeme %s found\n",line_count,yytext);
}

")" { fprintf(tokenout,"<RPAREN,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <RPAREN> Lexeme %s found\n",line_count,yytext);
}

"{" { fprintf(tokenout,"<LCURL,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <LCURL> Lexeme %s found\n",line_count,yytext);
}

"}" { fprintf(tokenout,"<RCURL,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <RCURL> Lexeme %s found\n",line_count,yytext);
}

"[" { fprintf(tokenout,"<LTHIRD,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <LTHIRD> Lexeme %s found\n",line_count,yytext);
}

"]" { fprintf(tokenout,"<RTHIRD,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <RTHIRD> Lexeme %s found\n",line_count,yytext);
}

"," { fprintf(tokenout,"<COMMA,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <COMMA> Lexeme %s found\n",line_count,yytext);
}

";" { fprintf(tokenout,"<SEMICOLON,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <SEMICOLON> Lexeme %s found\n",line_count,yytext);
}

"!" { fprintf(tokenout,"<NOT,%s>",yytext);
      fprintf(logout,"Line no. %d: TOKEN <NOT> Lexeme %s found\n",line_count,yytext);
}

		
("+"|"-")?{DIGIT}+ { fprintf(tokenout,"<CONST_INT,%s>",yytext);
	   fprintf(logout,"Line no. %d: TOKEN <CONST_INT> Lexeme %s found\n",line_count,yytext);
	   insert(yytext,"<CONST_INT>");
}

("+"|"-")?{DIGIT}+"."{DIGIT}*{EXP}? |
("+"|"-")?"."{DIGIT}+{EXP}?  { fprintf(tokenout,"<CONST_FLOAT,%s>",yytext);
	   fprintf(logout,"Line no. %d: TOKEN <CONST_FLOAT> Lexeme %s found\n",line_count,yytext);
	   insert(yytext,"<CONST_FLOAT>");
}

{DIGIT}+(.{DIGIT}+)?({EXP}+(.{DIGIT}+)+)?  {fprintf(logout,"Error at line no. %d: Ill formed number %s\n",line_count,yytext);
    error_count++;
}

{DIGIT}+((.{DIGIT}+)+)?({EXP}+)? {fprintf(logout,"Error at line no. %d: Too many decimal point %s\n",line_count,yytext);
   error_count++;	
}

{DIGIT}+{LETTER}({LETTER}|{DIGIT})* {
	fprintf(logout,"Error at line no.%d Invalid Suffix on numeric constant or invalid prefix on identifier %s\n",line_count,yytext);
	error_count++;
}

("_")?{LETTER}*("_")?({LETTER}|{DIGIT})* { fprintf(tokenout,"<ID,%s>",yytext);
	   fprintf(logout,"Line no. %d: TOKEN <ID> Lexeme %s found\n",line_count,yytext);
	   insert(yytext,"<ID>");
}

''	{ fprintf(logout,"Error at line no.%d Empty character constant error %s\n",line_count,yytext);
	error_count++;
}

'\\' { fprintf(logout,"Error at line:%d: Unterminated character %s\n",line_count,yytext);
	error_count++;
}

'.'	{ fprintf(tokenout,"<CONST_CHAR,%c>",yytext[1]);
	fprintf(logout,"Line no %d: TOKEN <CONST_CHAR> Lexeme %s found\n",line_count,yytext);
	insert(yytext,"<CONST_CHAR>");
}

'\\t'|'\\n'|'\\r'|'\\a'|'\\b'|'\\v'|'\\f'|'\\\\'|'\\0'	{ fprintf(tokenout,"<CONST_CHAR,%c>",character(yytext));
		fprintf(logout,"Line no %d: TOKEN <CONST_CHAR> Lexeme %s found\n",line_count,yytext);
		insert(yytext,"<CONST_CHAR>");
}

'(.)+'	{ fprintf(logout,"Error at line:%d: Multi character constant error %s\n",line_count,yytext);
	 error_count++;
}

'[^(\')|(\n)]*	{ fprintf(logout,"Error at line:%d: Unterminated character %s\n",line_count,yytext);
 	error_count++;
}

\"	{BEGIN STATE;
	strcat(s2,yytext);
	strcat(s1,yytext);}
<STATE>{NEWLINE} 	{error_count++;
			fprintf(logout,"Error at line no. %d Unterminated String %s\n",line_count,s2);
			strcpy(s1,"");
			line_count++;
			strcpy(s2,"");
			BEGIN INITIAL;}
<STATE>\\t	{  strcat(s1,"\t");
		   strcat(s2,"\\t");}
<STATE>\\n	{  strcat(s1,"\n");
		 strcat(s2,"\\n");}
<STATE>\\a	{  strcat(s1,"\a");
		strcat(s2,"\\n");}
<STATE>\\b	{  strcat(s1,"\b");
		strcat(s2,"\\b");}
<STATE>\\f	{  strcat(s1,"\f");
		strcat(s2,"\\f");}
<STATE>\\v	{  strcat(s1,"\v");
		strcat(s2,"\\v");}
<STATE>\\r	{  strcat(s1,"\r");
		strcat(s2,"\\r");}
<STATE>\\	{  strcat(s2,yytext);}

<STATE>\\{NEWLINE}	{line_count++;strcat(s2,yytext);}


<STATE>\"	{strcat(s2,yytext);
		strcat(s1,yytext);
		fprintf(tokenout,"<STRING,%s>",s1);
		fprintf(logout,"Line no. %d: Token <STRING> Lexeme %s found\n",line_count,s2);
		strcpy(s1,"");
		strcpy(s2,"");
		BEGIN INITIAL;
}
<STATE>[^\\\"]	{  strcat(s1,yytext);
		strcat(s2,yytext);
}

\/\/	{ BEGIN SINGLE_COMMENT;
	strcat(s1,yytext);}
<SINGLE_COMMENT>{NEWLINE}	{
				fprintf(logout,"Line no. %d: Token <SINGLE COMMENT> Lexeme %s found\n",line_count,s1);
				strcpy(s1,"");
				BEGIN INITIAL;
				}
<SINGLE_COMMENT>(\\)+	{strcat(s1,yytext);}
<SINGLE_COMMENT>(\\)+{NEWLINE}	{line_count++; strcat(s1,yytext);}

<SINGLE_COMMENT>[^\\]	{strcat(s1,yytext);}

\/\*	{ BEGIN MULTI_COMMENT;
	strcat(s1,yytext);}
<MULTI_COMMENT>(\*)+	{strcat(s1,yytext);}
<MULTI_COMMENT>(\*)+\/	{	strcat(s1,yytext);
				fprintf(logout,"Line no. %d: Token <MULTI COMMENT> Lexeme %s found\n",line_count,s1);
				line_count++;
				strcpy(s1,"");
				BEGIN INITIAL;
			}
<MULTI_COMMENT>{NEWLINE}	{line_count++; strcat(s1,"\n");}

<MULTI_COMMENT>[^\*]		{strcat(s1,yytext);}

<MULTI_COMMENT><<EOF>>	{error_count++;
				fprintf(logout,"Error at line no: %d: Unterminated comment  %s \n",line_count,s1);
				strcpy(s1,"");
				BEGIN INITIAL;
				}

%%

int main(int argc,char *argv[]){
	
	if(argc!=2){
		printf("Please provide input file name and try again\n");
		return 0;
	}
	
	FILE *fin=fopen(argv[1],"r");
	if(fin==NULL){
		printf("Cannot open specified file\n");
		return 0;
	}
	
	logout= fopen("log.txt","w");
	tokenout= fopen("token.txt","w");

	yyin= fin;
	yylex();
	print();
	fprintf(logout,"Total Line: %d\n",line_count);
	fprintf(logout,"Total Error: %d\n",error_count);
	fclose(yyin);
	fclose(tokenout);
	fclose(logout);
	return 0;
}
