#include<stdio.h>


int main (){
    float w1 ,w2 ,p1 ,p2, value;
    printf("Enter the weight of the items and number of purchase");
    scanf("%f%f",&w1,&p1);
printf("Enter the 2ndweight of the items and number of purchase");
    scanf("%f%f",&w2,&p2);
    value= (w1*p1+w2*p2)/2;
    printf("The average of items is %f", value);

}