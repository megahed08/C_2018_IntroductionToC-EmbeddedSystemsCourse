#include "stdio.h"
void main(){
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, s;
  
  printf("Enter Number 1: ");
  scanf("%d",&n1);
  printf("Enter Number 2: ");
  scanf("%d",&n2);
  printf("Enter Number 3: ");
  scanf("%d",&n3);
  printf("Enter Number 4: ");
  scanf("%d",&n4);
  printf("Enter Number 5: ");
  scanf("%d",&n5);
  printf("Enter Number 6: ");
  scanf("%d",&n6);
  printf("Enter Number 7: ");
  scanf("%d",&n7);
  printf("Enter Number 8: ");
  scanf("%d",&n8);
  printf("Enter Number 9: ");
  scanf("%d",&n9);
  printf("Enter Number 10: ");
  scanf("%d",&n10);
  printf("Enter the value to search: ");
  scanf("%d",&s);
  
  if(s == n1)
    printf("Value exists at element number %d", n1);
  else if(s == n2)
	printf("Value exists at element number %d", n2);
  else if(s == n3)
	printf("Value exists at element number %d", n3);
  else if(s == n4)
	printf("Value exists at element number %d", n4);
  else if(s == n5)
	printf("Value exists at element number %d", n5);
  else if(s == n6)
	printf("Value exists at element number %d", n6);
  else if(s == n7)
	printf("Value exists at element number %d", n7);
  else if(s == n8)
	printf("Value exists at element number %d", n8);
  else if(s == n9)
	printf("Value exists at element number %d", n9);
  else if(s == n10)
	printf("Value exists at element number %d", n10);
  else
	printf("Value does not exist");
}
