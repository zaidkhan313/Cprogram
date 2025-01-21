//6.Write a program in C to check whether a number is a prime number or not using the function.
#include <stdio.h>


void checkPrime() {
    int num, i, isPrime = 1;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num <= 1) {
        isPrime = 0; 
    } else {
       
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
               
            }
        }
    }

    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}

int main() {
   
    checkPrime();
    
}




















