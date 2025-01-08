#include<stdio.h>


int main (){
    int a , b, c;
    printf("Enter value for a:");
    scanf("%d", &a);
     printf("Enter value for b:");
    scanf("%d", &b);
     c=a;
     a=b;
     b=c;
printf(" swapping value for a is %d and b is %d", a ,b);
}