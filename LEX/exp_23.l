/*Lex Program to identify and count positive and negative numbers./*
%{
    #include<stdio.h>
    int negative=0;
    int positive=0;
%}

%%
[+]?(0-9)+ positive++;
[-]?(0-9)+ negative++;
%%

int main()
{
    yyin=fopen("b.txt","r");
    yylex();
    printf("Count of positive numbers=%d",positive);
    printf("Count of negative numbers=%d",negative);
    return 0;
}

int yywrap()
{
    return 1;
}