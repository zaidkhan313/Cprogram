
#include<stdio.h>

int main(){

    int num;
    printf("Enter a number:");
    
    scanf("%d",&num);
    while(num<0){
        printf("Enter a positive number:");
        scanf("%d",&num);
        
    }
}