#include<stdio.h>
#include<string.h>

void main(){
    char s[5];
    printf("Enter any operator : ");
    gets(s);
    
    if(s[0] == '+' && s[1] == '+')
        printf("\tINCREAMENT \n");
    else if(s[0] == '-' && s[1] == '-')
        printf("\tDECREAMENT \n");
    else if(s[0] == '*')
        printf("\tMULTIPLICATION. \n");
    else if(s[0] == '/')
        printf("\tDIVISION. \n");
    else if(s[0] == '%')
        printf("\t MODULUS. \n");
    else if(s[0] == '-')
        printf("\tSUBTRACTION. \n");
    else if(s[0] == '-')
        printf("\tSUBTRACTION. \n");
    else if(s[0] == '+')
        printf("\tADDITION. \n");
}