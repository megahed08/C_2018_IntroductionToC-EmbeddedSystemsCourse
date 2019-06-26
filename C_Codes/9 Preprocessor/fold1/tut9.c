#include <stdio.h>
#include "max.h"
#define add(x, y) x + y
#define sub(x, y) x - y
#define mul(x, y) x * y
#define div(x, y) x / y
#define PrintString() do{printf("%d\n", x);\
printf("%d", y);}while(0)
#define SetBit(Reg, bitnumber) Reg |= (1 << bitnumber)
#define ClearBit(Reg, bitnumber) Reg &= (~(1 << bitnumber))
#define TogBit(Reg, bitnumber) Reg ^= (1 << bitnumber)

void main (){
//  printmax();
int x = 5, y = 7;
/*
printf("Add: %d\n", add(x, y));
printf("Sub: %d\n", sub(x, y));
printf("Mul: %d\n", mul(x, y));
printf("Div: %f", (double) div(x, y));
*/
PrintString();
printf("\n");
SetBit(x, 4);
ClearBit(y, 2);
PrintString();
printf("\n");
TogBit(x, 4);
TogBit(y, 2);
PrintString();
}