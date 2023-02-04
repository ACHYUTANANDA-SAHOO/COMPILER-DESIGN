/*LEX program to count the number of Macros defined and header files included in the C program./*
%{
    #include<stdio.h>
    int count1=0;
    int count2=0;
%}

%%
#include count1++;
#define  count2++;
%%
int yywrap()
{
    return 1;
}

int main()
{
    yyin("a.c","r");
    yylex();
    printf("\nNumber of macros is %d and header files = %d\n",count2,count1);
    return 0;
}