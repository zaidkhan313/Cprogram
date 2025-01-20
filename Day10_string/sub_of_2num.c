#include<stdio.h>


int main (){
    int a=20 , b=14 , res;
    int *p1, *p2 ;
    p1 =&a;
    p2= &b;
    res = *p1-*p2;

    printf("substraction of two number is %d",res);

}