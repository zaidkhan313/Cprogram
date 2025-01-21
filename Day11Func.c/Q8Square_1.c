// 8.Write a program in C to find the square of any number using the function.



#include<stdio.h>

void square(){
int num,res ;
printf("Enter number for there square:-");
scanf("%d",&num);
res = num * num ;
printf("The square of %d id %d",num ,res);

}

void main (){
    square();
}