/*lex program to check the input date is valid or not*/
%{
  #include<stdio.h> 
  int valid=0;
  int i;
%}

%%
([0-2][0-9]|3[0-1])\/(0[1-9]|1[0-2])\/([1-2][0-9][0-9][0-9]) {i = atoi(yytext);}
%%
int yywrap()
{
	return 1;
}

int main()
{
    //yyin=fopen("a.txt","r");
    //yylex();
    if(valid==1)
    {
      printf("Valid Date\n");
    }
    else
    {
      printf("Not a valid date\n");
    }
    return 0;
}