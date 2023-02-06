//3.	Design  a  lexical  analyzer to find the number of whitespaces and newline characters.

#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    FILE *file;
    int lines = 1,spaces = 0;

    file = fopen("sample.txt","r");

    while((ch = fgetc(file))!=EOF){
        if(ch=='\n')
            lines++;
        if(ch==' ')
            spaces++;
    }
    printf("White Spaces : %d \n", spaces);
    printf("Lines : %d \n", lines);

    fclose(file);
    
    return 0;
}