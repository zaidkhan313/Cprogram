// 2.subtraction of two numbers using function.


//with return  with argument
#include<stdio.h>

int sub(int x, int y){
    
 int res =x -y;
 return res;
 
}

void main(){
    int a=29;
    int b=21;
   int r= sub(a,b);
    
    printf("%d",r);
}