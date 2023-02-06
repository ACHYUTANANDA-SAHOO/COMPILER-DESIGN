//7.	Develop a program to recognize strings under 'a*', 'a*b+', 'abb' using lexical analysis.

#include<stdio.h>
#include<string.h>

int main(){
    char ip[20];
    int valid = 1;
    while(1){
        printf("Enter a String : \n");
        scanf("%s", &ip );

        for(int i = 0;i<strlen(ip);i++){
            if((ip[i] == 'a' && ip[i+1] == 'b' && ip[i+2] == 'a')||(ip[i] == 'b' && ip[i+1] == 'a'))
                valid = 0;
        }

        if(valid == 1){
            if((ip[0] == 'a' && ip[strlen(ip)-1] == 'a'))
                printf("%s belongs to a* .\n", ip);
            else if((ip[0] == 'a' && ip[strlen(ip)-1] == 'b') ||( ip[0] == 'b' && ip[strlen(ip)-1] == 'b'))
                printf("%s belongs to a*b+ .\n ",ip);
            else if(ip == "abb")
                printf("%s belongs to abb .\n",ip);
        }
        else
            printf("String doesnt belong to any grammar specified. \n");
    }
}
