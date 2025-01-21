// 3.multiplication of two numbers using function 


//with return  with argument
#include<stdio.h>

int mul(int x, int y){
    
 int res =x *y;
 return res;
 
}

void main(){
    int a=2;
    int b=6;
   int r= mul(a,b);
    
    printf("%d",r);
}