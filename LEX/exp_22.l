/*LEX program to validate the given URL./*
%{
    int c=0;
%}

%%
["https://"]w{3,3}["."][a-z]+".com" {c=1;}
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter url here:\n");
    yylex();
    if(c==1)
    {
        printf("Valid url\n");
    }
    else
    {
        printf("Invalid url\n");
    }
}