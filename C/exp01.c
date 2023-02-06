// 1.	Develop a lexical analyzer to identify identifiers, constants, operators using C program.
#include<stdio.h>
#include<string.h>

int delimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return 1;
    return 0;
}

int operator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch =='%')
        return 1;
    return 0;
}
int identifier(char str[])
{
    if (ch == '0' || ch == '1' || ch == '2' ||
        ch == '3' || ch == '4' || ch == '5' ||
        ch == '6' || ch == '7' || ch == '8' ||
        ch == '9' || delimiter(ch) == 1)
        return 0;
    return 1;
}

int main(){
    
    char str[20];
    FILE *file;

    while((fgets(str,20,file))!= EOF) {
        
    }  
}