// 11.Write a C program to reverse a number.

#include<stdio.h>

int main (){
    int num ,rem, rev=0;
    printf("Enter numer you want to reverse:");
    scanf("%d",&num);

while(num >0){
    rem = num %10;
    rev = rev*10 + rem;
    num = num / 10;
     
    
   
  
}
 printf("\nreverse of is %d",rev);
}