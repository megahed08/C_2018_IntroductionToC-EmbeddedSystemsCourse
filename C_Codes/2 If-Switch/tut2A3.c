#include "stdio.h"
void main(){
  int n1, n2, n3;
  printf("Enter number 1: ");
  scanf("%d",&n1);
  printf("Enter number 2: ");
  scanf("%d",&n2);
  printf("Enter number 3: ");
  scanf("%d",&n3);
  
  if(n3 > n2 && n3 > n1)
    printf("Maximum number is %d", n3);
  else if (n2 > n3 && n2 > n1)
    printf("Maximum number is %d", n3);
  else if (n1 > n3 && n1 > n2)
    printf("Maximum number is %d", n1);
}
