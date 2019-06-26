#include "stdio.h"
int n1, n2, n3, n4;
int maximum(void);
int minimum(void);
int maximum(void){
  if(n1 > n2 && n1 > n3 && n1 > n4)
    return n1;  
  else if(n2 > n3 && n2 > n4 )
	return n2;
  else if(n3 > n4)
    return n3;
  else 
	return n4;
}
int minimum(void){
  if(n1 < n2 && n1 < n3 && n1 < n4)
    return n1;  
  else if(n2 < n3 && n2 < n4 )
	return n2;
  else if(n3 < n4)
    return n3;
  else 
	return n4;
}
void main(){
  printf("Enter number 1: ");
  scanf("%d",&n1);
  printf("Enter number 2: ");
  scanf("%d",&n2);
  printf("Enter number 3: ");
  scanf("%d",&n3);
  printf("Enter number 4: ");
  scanf("%d",&n4);
  printf("Maximum = %d\nMinimum = %d", maximum(), minimum());
}