//Design  a  lexical  analyzer  for  given  language  should  ignore the redundant spaces, tabs and new lines and ignore comments.

#include<stdio.h>
#include<string.h>

int main(){
    char ch;
    FILE *file;

    file = fopen("sample.txt","r");

    while((ch = fgetc(file))!=EOF){
        if(ch=='\n')
            continue;
        else if(ch==' '|| ch=='\n')
            continue;
        else if(ch == '/')
            continue;
        else    
            printf("%c", ch);
    }

}