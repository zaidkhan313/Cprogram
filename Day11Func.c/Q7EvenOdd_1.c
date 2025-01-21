// 7.Write a program in C to check if a given number is even or odd using the function.

#include<stdio.h>

void num(){
    int number ;
    printf("Enter number to check Even Odd:-");
    scanf("%d",&number);

    if (number %2 == 0){
        printf("The %d number is even",number);
    }
else{
         printf("The %d number is odd",number);
}
}
void main (){
    num();
}