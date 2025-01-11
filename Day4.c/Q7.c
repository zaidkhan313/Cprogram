#include<stdio.h>

// 7.Write a program in C to display the multiplication table for a given integer.


int main (){
    int i , num , mul;
    printf("Enter number for table :");
    scanf("%d", &num);
    for (i=1; i<=num ;i++)
    {
        mul = num * i;
        printf("\n %d * %d = %d",num ,i ,mul);

    }
}