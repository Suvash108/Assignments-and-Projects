%{#include<stdio.h>
%}
%%
[a-z] { printf("%c",yytext[0]-32);}
[A-Z] {printf("%c",yytext[0]+32);}
[\t\n]+ ;
. ;
%%
int yywrap(){}
int main(int argc, char *argv[])
{
extern FILE *yyin;
yyin = fopen("line.java","r");
yylex();
return 0;
}