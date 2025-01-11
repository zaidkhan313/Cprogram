// 9.Write a C program to display the sum of n terms of even natural numbers.


#include<stdio.h>

int main (){
  int num, sum = 0,Even;
        printf("enter the n term of  EVEN number:-");
        scanf("%d", &num);
    
    for(int i=1;i<=num;i++)
    {   
    int EVEN = 2*i;
    printf("\nN EVEN number are :%d",EVEN);
           sum = sum + EVEN;
    }
    printf("\n sum of  EVEN numbers are:- %d",sum);
}