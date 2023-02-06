/* 8.	Write a C Program for implementing a Lexical Analyzer to Scan and Count the number of characters, words, and lines in a file.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    FILE *file;
    int lines = 1, words = 1, chars = 0;

    file = fopen("sample.txt","r");

    while((ch = fgetc(file))!=EOF){
        if(ch=='\n')
            lines++;
        if(ch==' '|| ch=='\n')
            words++;
        else
            chars++;
    }
    printf("Words : %d \n", words);
    printf("Lines : %d \n", lines);
    printf("Characters : %d \n", chars);

    fclose(file);
    
    return 0;
}
