#include "stdio.h"
/*
//Task 1
int Get_Max(int x, int y);
void main(){
  int n1, n2;	
  printf("Please Enter Value 1: ");
  scanf("%d",&n1);
  printf("Please Enter Value 2: ");
  scanf("%d",&n2);
  printf("The Maximum value is %d", Get_Max(n1, n2));
}
int Get_Max(int x, int y){
  if(x > y)
    return x;  
  else
	return y;
}

//Task 2
int x, y;
void Swap(void);
void main(){
  printf("X before swap = ");
  scanf("%d",&x); 
  printf("Y before swap = ");
  scanf("%d",&y);   
  Swap();
  printf("\nX after swap = %d\n", x);
  printf("y after swap = %d", y);
}

void Swap(void){
  int temp;
  temp = x;
  x = y;
  y = temp;
}
*/
//Task 4
int fact(int x);
int fact(int x){
  if(x > 0)	
    return (x * fact(x - 1));
  else 
	return 1;
}
void main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("Factorial = %d", fact(n));
}