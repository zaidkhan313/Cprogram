#include<stdio.h>


void main(){
    int day_number;
    printf("Enter the the daynumber:");
    scanf("%d",&day_number);
    switch(day_number){
case 1:
printf("sunday");
break;

case 2:
printf("Monday");
break;
case 3:
printf("Tuesday");
break;
case 4:
printf("Wednesday");
break;
case 5:
printf("Thursday");
break;
case 6:
printf("Friday");
break;
case 7:
printf("saturday");
break;
default:
printf("invalid day number");
break;
    }
}