#include<stdio.h>

int main (){
    int i,num,sum =0;
    printf("Enter number of num :");
    scanf("%d",&num);
    for(i=1;i<=num;i++);
    {
        printf("%d",i);
        sum = sum +i;
        printf("sum of number are %d",sum);
    }

}