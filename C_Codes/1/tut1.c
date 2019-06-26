#include "stdio.h"
void main(){
int hrs;
float hrlyrate;
printf("enter Hours:");
scanf("%d",&hrs);
printf("enter Hourly rate:");
scanf("%f",&hrlyrate);
float salary = hrs * hrlyrate;
printf("Salary is %f", salary);
}