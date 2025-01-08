#include<stdio.h>

int main (){
    int employeeId;
    float hourWorked ,hourRate , salary;
     printf("Enter EmployeeId:");
     scanf("%d", &employeeId);
printf("Enter total hour worked in a month");
     scanf("%f", &hourWorked);
printf("Enter hourly rate :");
     scanf("%f", &hourRate);

     salary = hourWorked*hourRate;

     printf(" EmployeeId:%d\n",employeeId);
     printf("salary:%f",salary);
     
}