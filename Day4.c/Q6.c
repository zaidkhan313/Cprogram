#include<stdio.h>

// 6. Write a program in C to display the cube of the number up to an integer.


int main (){
    int i, cube ,num;
    printf("Enter number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        cube =i*i*i;
        printf("\n the cube of integer is :%d",cube);
    }

}