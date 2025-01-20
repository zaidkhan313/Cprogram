#include<stdio.h>


int main (){
    char name[7];

    printf("Enter your name:- ");
    scanf("%s",name);
    printf("%s",name);
}










// gets is used to take full name of string
int main (){
    char name[7];

    printf("Enter your name:- ");
    gets(name);
    printf("%s",name);
}