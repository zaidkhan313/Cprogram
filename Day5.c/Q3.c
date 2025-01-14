//  3 Display the sum of first 10 natural numbers

#include<stdio.h>

int main(){
    int i=1 , sum =0 ;
    printf("Enter n natural number for the sum:");
   
    while(i<=10){
        printf("\nn atural number are %d",i);
         
        sum =sum +i;
   i++;
    }
        printf("sum of n natural number are :-%d",sum);
}