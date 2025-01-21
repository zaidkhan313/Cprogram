#include<stdio.h>
   int Add(int x,int y){
    int result;
    result =x+y ;
    return result;
   }
   void main (){
    int a=2 , b=3;
    int r;
     r=Add (a,b);
    printf("adition %d",r);
   }