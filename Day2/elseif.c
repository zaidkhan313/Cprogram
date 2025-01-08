#include<stdio.h>

void main() {
    int age ;
    printf("Enter age:");
    scanf("%d",& age);
    if (age>=18 && age<=69){
       printf(" you can drive");
    } 
    else if(age>=70){
        printf("stay home, wait for the death ");
    }
    else{
        printf("you can't vote");
    }
}