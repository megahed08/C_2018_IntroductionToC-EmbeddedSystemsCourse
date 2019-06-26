#include "stdio.h" 
void main(){
  int n [10];
  for(int i = 0; i < 10; i++){
	printf("Enter number %d: ", i);
	scanf("%d", &n[i]);
  }
  int max = n[0], min = n[0];
  for(int i = 0; i < 10; i++){
	if(max < n[i])
	  max = n[i];
	if(min > n[i])
	  min = n[i];
  } 
  printf("Maximum = %d\nMinimum = %d", max, min);
}