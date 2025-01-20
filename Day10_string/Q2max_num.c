//2.find maximum between two numbers using pointers   

#include<stdio.h>




int main(){
    int num1 ,num2;
    int *p1 ,*p2;
    p1 =&num1;
    p2 =&num2;


    printf("Enter 1st  number:-");
    scanf("%d",&num1);

    printf("Enter 2nd  number:-");
    scanf("%d",&num2);

if(*p1>*p2)
{
    printf("The 1st number %d is greater than %d",*p1,*p2);
}
else{
    printf("The 1st number is not greater%d",*p1);

}
}
