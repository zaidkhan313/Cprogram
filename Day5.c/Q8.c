// 8.write a C program to display the n terms of odd natural numbers and their sum.

#include<stdio.h>

int main()
{
int i=1, num ,odd, sum=0;
printf("Enter the n term of odd number:-");
scanf("%d",&num);
while(i<=num){
    odd= 2*i -1;
sum  = sum +odd;

printf("\n nth term of odd natural number  are %d",odd);
i++;


}
printf("\n nth term of natural number and their sum is %d",sum);

}