// Write a C program to implement Predictive parser for the following grammar
//  E → TE’
//  E’→ +TE’/∈
//  T → FT’
//  T’→ *FT’/∈
//  F → (E)/i

#include<stdio.h>
#include<string.h>

char input[20],stack[20];
char symbol[10];
int sp = -1; // stack top
int i = 0; // input pointer

void symbol_order(){
    int k = 0;
    for(int i = 0; i<strlen(input);i++)
        if(input[i] == '+' || input[i] == '*'){
            symbol[k] = input[i];
            k++;
        }
}
int possible(){
    for(int s = 0; s< sp ;s++ ){
        if((stack[s] == 'T' && stack[s-1] == 'Ep') || 
        (stack[s] == '+' && stack[s-1] == 'T' && stack[s - 2] == 'Ep') || 
        (stack[s] == 'F' && stack[s-1] == 'Tp') ||
        (stack[s] == '*' && stack[s-1] == 'F' && stack[s-2] == 'Tp') ||
        (stack[s] == '(' && stack[s-1] == 'E' && stack[s-2] == ')')||
        (stack[s] == 'i') || (stack[s] == 'E') || (stack[s] == 'Ep') || (stack[s] == 'T') || (stack[s] == 'Tp')||
        (stack[s] == 'F'))
            return 1;
    }
    return 0;
}

void find_and_reduce(){
    if(stack[sp] == 'E'){
        stack[sp] == 'Ep';
        sp++;
        stack[sp] == 'T';
    }
    if(stack[sp] == 'T'){
        stack[sp] == 'Tp';
        sp++;
        stack[sp] == 'F';
    }
    if(stack[sp] == 'F'){
        stack[sp] == 'i' ;
    }
    if(stack[sp] == 'Tp'){
        if(input[i] != '+'){
            stack[sp] == 'Tp';
            sp++;
            stack[sp] == 'F';
            sp++;
            stack[sp] == '*';
        }
        else 
            stack[sp] == "\0";
    }
    if(stack[sp] == 'E')


}

int main(){

    printf("Enter a String to parse : ");
    scanf("%s", &input);

    stack[0] = '$' ;
    sp++;

    stack[1] = 'E' ;
    sp++;

    while(possible() == 1){

    }



    if(stack == "$")
        prtinf("String Accepted !!");
    else
        printf("String Rejected !!");


}