/*LEX program to take input C program from a .c file and count the number of characters, number of lines & number of words./* 
 number of characters, number of lines & number of words.

%{
    #include<stdio.h>
    int char_no=0,lines_no=0,words_no=0;
%}

%%
\n {lines_no++;words_no++;}
[\t ' '] words_no++;
[a-zA-Z] char_no++;
%%

int main()
{
    yyin=fopen("a.c","r");
    yylex();
    printf("\nFile contents\n");
    printf("\n\t%d lines",lines_no);
    printf("\n\t%d words",words_no);
    printf("\n\t%d characters",char_no);
    return 0;
}

int yywrap()
{
    return 1;
}