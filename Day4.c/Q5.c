#include<stdio.h>

int main (){
    int i;
    float num,average ,sum =0;
    // printf("Enter number of num :");
    // scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("Enter number of num :");
        scanf("%f",&num);
         sum =sum +num;
        
    }
   
average = sum /10 ;
printf("%f %f", sum , average);
}