#include "stdio.h"
void main(){
int a, b;
printf("Please enter number a: ");
scanf("%d",&a);
printf("Please enter number b: ");
scanf("%d",&b);
printf("a + b = %d\na - b = %d\na & b = %d\na | b = %d\na ^ b = %d",
(a+b),(a-b),(a&b),(a|b),(a^b));
}