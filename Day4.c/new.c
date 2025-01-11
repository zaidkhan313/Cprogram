#include<stdio.h>

void main (){
    int num;
    printf("Enter a negative number :");
    scanf("%d",&num);
    for( ;num <0; )
     {
printf("Enter positive number,try again");
scanf("%d",&num);
     }
}