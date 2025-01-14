// 5.Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<stdio.h>


int main (){

    int i =1 ,num , sum =0 , average ;

    while (i<=10){
        printf("Enter  10 numerbers for their sum and average : ");
        scanf("%d",&num);

        sum = sum +num;
        average = sum /10;
        i++;

 
    }
    printf("\nThe sum and average of 10 random natural number are:%d\n",sum);
    printf("The sum and average of 10 random natural number are:%d",average);
}