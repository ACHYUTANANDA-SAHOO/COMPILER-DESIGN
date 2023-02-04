/*a LEX program to print all the constants in the given C source program file./*
%{
    #include<stdio.h>
    char ch;
}%

%%
[a-zA-Z(^aeiouAEIOU)] {printf("%c",ch);}
%%

int yywrap()
{
    return 1;
}

int main()
{
    yyin=fopen("a.c","r");
    yylex();
    return 0;
    fclose(yyin);
}

