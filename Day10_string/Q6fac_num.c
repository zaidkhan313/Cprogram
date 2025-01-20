//6.Write a program in C to find the factorial of a given number using pointers.  



#include<stdio.h>


int main (){
    int num ;
    int *p1;
    int  *p2;
    int fac =1;
    printf("Enter number for the factorial:-");
    scanf("%d",&num);

    p1 =&num;
    p2 =&fac;
for(int i=1; i<=*p1; i++)
    {   
     *p2 = *p2 * i;
    
           
    }
    printf("Factorial of  number %d is  :%d",*p1,*p2);

}