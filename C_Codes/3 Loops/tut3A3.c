#include "stdio.h"
void main(){
  int n;	
  printf("Please Enter the hieght of the pyramid: ");
  scanf("%d",&n);
  for(int i = 0; i < n; i++){ 
    for(int j = (n+i); j > 0; j--){
	  if(j > 2 * i + 1)	
        printf(" ");	
	  else
		printf("*");
	}	
	printf("\n");
  }
}
