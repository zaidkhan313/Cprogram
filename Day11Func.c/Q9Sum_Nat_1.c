// 9.write a c program to find sum of first n natural numbers using function.


#include<stdio.h>


void sum(){
    int i, num , res =0;
    printf("Enter  N number of natural number :-");
    scanf("%d",&num);

    for (i=1; i<=num ;i++){
        res= res +i;


    }
    printf("The sum of n natural number are %d",res);
}

void main (){
    sum();
}