// Program to eliminate left recursion
#include<stdio.h>
#include<conio.h>
#include<string.h>

char input[20];

int main(){
    char rhs[30];
    char new_rhs[50];
    int count = 1;

    printf("Enter a Production : \n(Separate LHS and RHS by = )\n");
    scanf("%s", &input);

    if(input[0] == input[2]){
        printf("The Production is Left Recursive.");
        for(int i = 4;i<strlen(input);i++)
            strncat(rhs, &input[i], 1);
        
        printf("\n%s\n", rhs);
        
        char *token = strtok(rhs, "|");
   
        while (token != NULL)
        {   
            printf("%s%c'|", token,input[0]);
            token = strtok(NULL, "|");
            count++;
        }
        
    }
    else{
        printf("The Production is not Left Recursive.");
    }




    return 0;
}