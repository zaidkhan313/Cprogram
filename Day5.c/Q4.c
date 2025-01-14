// 4.Write a program in C to display n terms of natural numbers and their sum.

//  3 Display the sum of first 10 natural numbers

#include<stdio.h>

int main(){
    int i=1 ,num , sum =0 ;
    printf("Enter n natural number for the sum:");
    scanf("%d",&num);
    while(i<=num){
        printf("n atural number are %d\n",i);
        
        sum =sum +i;
    i++;
    }
        printf("sum of n natural number are :-%d",sum);
}