#include<stdio.h>


int main (){
    int a=17 , b=2 , res;
    int *p1, *p2 ;
    p1 =&a;
    p2= &b;
    res = *p1 / *p2;

    printf("devision of two number is %d",res);

}