
// 10.Write a C program to calculate the factorial of a given number 5.

#include<stdio.h>

int main (){
    int i=1 , fac = 1,num = 5;
while(i<=num){
    fac= fac*i;
    
    printf("\nfactorial of %d is %d",i,fac);
    i++;
}

}