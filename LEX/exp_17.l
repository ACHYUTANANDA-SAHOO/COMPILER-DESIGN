/*LEX program to find out total number of vowels and consonants from the given input sting.*/
%{
  #include<stdio.h>
  #include<string.h>
  int vowels=0,consonants=0;
%}

%%
[aeiou] vowels++;
[^aeiou] consonants++;
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter the string here:\n");
    yylex();
    printf("No of vowels= %d \n",vowels);
    printf("No of consonants=%d\n",consonants);
    return 0;
}