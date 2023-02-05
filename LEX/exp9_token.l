/* 9.Implement Lexical Analyzer using LEX or FLEX (Fast Lexical Analyzer).  The program should separate the tokens in the given C program and display with appropriate caption.*/

%{
    #include<stdio.h>    
%}

%%
"int"|"float"|"char"|"while"|"for"|"if"|"else"|"main"   {printf("%s \tKEYWORD \n",yytext);}
"#include"  {printf("%s \tHEADER FILE \n", yytext);}
"#define"   {printf("%s \tMACROS \n", yytext);}
"printf"|"scanf"    {printf("%s \tFUNCTION \n", yytext);}
"("|")"|"="|"&&"|"!"    {printf("%s \tSPECIAL SYMBOL \n", yytext);}
"<"|">"|"<="|">="|"=="   {printf("%s \tRELATION \n", yytext);}
[0-9]*"."[0-9]*     {printf("%s \tFloat \n", yytext);}
[0-9]*     {printf("%s \tInteger \n", yytext);}
"//"[a-zA-Z0-9\t\n ]* ;

%%

int yywrap(){
    return 1;
}

int main(){
    yyin = fopen("sample.c","r");
    yylex();
    return 0;
}