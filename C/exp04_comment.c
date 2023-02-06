//4.	Develop a lexical analyzer to identify whether a given line is a comment or not.

#include<stdio.h>
#include<string.h>

int main(){
    char ip[10];
    int valid = 1;

    printf("Enter an Identifier : \n");
    scanf("%s", &ip );


    if(ip[0] == '/' && ip[1] == '/')
        printf("COMMENT \n");
    else
        printf("NOT A COMMENT \n ");

}
