// 6. Write a program in C to display the cube of the number up to an integer.

#include<stdio.h>

int main (){
    int i =1 , num , cube;
    printf("Enter number for their cube:");
    scanf("%d",&num);
    while(i<=num){
cube =i*i *i;
i++;
 printf("\nThe cube of  is :-%d",cube);
    }
   
}