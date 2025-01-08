#include<stdio.h>



int main(){
    int input , year, weeks , days, rdays , rweeks;
    printf("Enter inputdays :");
    scanf("%d",&input);

    year= input/365;
    rdays = input%365;
    weeks =rdays/7;
    rweeks = rdays%7;
    days = rweeks%7;
    

    printf("Number of years are  %d  \n",year);
    printf("Number of weeks are %d \n",weeks);
    printf("Number of days are  %d",days);
}