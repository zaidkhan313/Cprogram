// 7.Write a program in C to display the multiplication table for a given integer.

#include<stdio.h>

int main()
{
int i=1, num , multi=0;
printf("Enter the number for table:-");
scanf("%d",&num);
while(i<=10){
multi = num *i;

printf("\nTable of given number %d * %d = %d",num,i,multi);
i++;
}


}