// Implementing symbol table in C.

#include<stdio.h>
int index[20];
char name[20][10];
char type[20][10];
char scope[20][10];

int x = 0;

void insert(){
    char n[20],t[20],s[20];
    printf("Enter Name : ");
    scanf("%s", &name[x]);
    printf("Enter Type : ");
    scanf("%s", &type[x]);
    printf("Enter Scope : ");                                                                                                                                                                                                                                                                                                                                           
    scanf("%s", &scope[x]);
    index[x] = x;
    x++;
}

void delete(){
    char s[20];
    int found = -1;
    printf("Enter NAME to delete : ");
    scanf("%s", &s);

    for(int i =0;i<x;i++){
        if(s == name[i]){
            found = i;
            break;
        }
    }
    if(found >= 0)
        printf("%s deleted from table\n", s);
    else
        printf("%s not found !! \n", s);
}

void search(){
    char s[20];
    int found = -1;
    printf("Enter NAME to search : ");
    scanf("%d", &s);

    for(int i =0;i<x;i++){
        if(s == name[i]){
            found = i;
            break;
        }
    }
    if(found >= 0)
        printf("%s found at index %d\n", s,found);
    else
        printf("%s not found !! \n", s);

}

void show(){
    char s[20];
    int found = 0;
    printf("Enter NAME : ");
    scanf("%d", &s);

    for(int i =0;i<x;i++){
        if(s == name[i]){
            found = i;
            break;
        }
    }
    if(found >= 0){
        printf("INDEX \t|NAME \t|TYPE \t|SCOPE \n");
        printf("______________________________ \n");
        printf("%d \t|%s \t|%s \t|%s \n", index[found],name[found],type[found],scope[found]);
    }
    else
        printf("%s not found !! \n", s);
}

void display(){
    printf("Current Table \n");
    printf("INDEX \t|NAME \t|TYPE \t|SCOPE \n");
    printf("______________________________ \n");
    for(int i = 0;i<x;i++){
        printf("%d \t|%s \t|%s \t|%s \n", index[i],name[i],type[i],scope[i]);
    }
}

int main(){
    int op;
    printf("Symbol Table Created !! Operations possible :\n1. Insert \n2.Delete All \n3.Get Attribute \n4. Search \n5.Display All \n");

    while(1){
        printf("Enter Operation : ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("\n\tINSERTION : \n\n");
                insert();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("\n\tSEARCHING : \n\n");
                search();
                break;
            case 5:
                display();
                break;
        }
    }
}

