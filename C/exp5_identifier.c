//5.	Develop a lexical analyzer to test whether a given identifier is valid or not.

#include<stdio.h>
#include<string.h>

int main(){
    char ip[10];
    int valid = 1;

    printf("Enter an Identifier : \n");
    scanf("%s", &ip );

    for(int i = 0;i<strlen(ip);i++){
        if((ip[0] >= 97 && ip[0] <= 122 ))
            valid = 0;
        else if(ip[i] >= '0' && ip[i] <= '9')
            valid = 0;
        else if(ip[i] == ' ')
            valid = 0;
    }

    if(valid == 1)
        printf("VALID Identifier. \n");
    else
        printf("INVALID Identifier. \n ");

}