#include<stdio.h>



// 8.write a C program to display the n terms of odd natural numbers and their sum.

int main (){
  int num, sum = 0,odd;
        printf("enter the n term of odd number:-");
        scanf("%d", &num);
    
    for(int i=1;i<=num;i++)
    {   
    int odd = 2*i - 1;
    printf("\nNth odd number are :%d",odd);
           sum = sum + odd;
    }
    printf("\n sum of odd numbers are:- %d",sum);
}