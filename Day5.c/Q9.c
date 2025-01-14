// 9.Write a C program to display the sum of n terms of even natural numbers.

#include<stdio.h>

int main()
{
int i=1, num ,even, sum=0;
printf("Enter the n term of odd number:-");
scanf("%d",&num);
while(i<=num){
    even= 2*i;
sum  = sum + even;

printf("\n nth term of even natural number  are %d",even);
i++;


}
printf("\n nth term of  even natural number and their sum is %d",sum);

}