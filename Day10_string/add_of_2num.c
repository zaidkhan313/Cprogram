//1.Add two numbers 

#include<stdio.h>


int main (){
    int a=2 , b=3 , res;
    int *p1, *p2 ;
    p1 =&a;
    p2= &b;
    res = *p1+*p2;

    printf("Addition of two number is %d",res);

}