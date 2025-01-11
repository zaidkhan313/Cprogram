// 10.Write a C program to calculate the factorial of a given number 5.

#include<stdio.h>

int main (){
  int num, fac;
        num = 5;
        fac =1;

    for(int i=1;i<=num;i++)
    {   
     fac = fac*i;
    printf("\nFactorial of  number 5 is  :%d", fac);
           
    }
    
}