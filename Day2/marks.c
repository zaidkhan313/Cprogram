#include<stdio.h>

void main() {
    int marks ;
    printf("Enter marks:");
    scanf("%d", & marks);
    if (marks>80 && marks<=100){
       printf(" Your garde is A");
    } 
    else if(marks>60 && marks<=80){
        printf("Your garde is B ");
    }
    else if(marks>50 && marks<=60){
        printf("Your garde is C");
    }
    else{
        printf(" try next time");
    }
}