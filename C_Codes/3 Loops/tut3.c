#include "stdio.h"
void main(){

  //Task 1
  for(int i = 0; i < 10; i++){
    printf("Ahmed \n");
  } 
  //Task 2
  for(int i = 1; i < 11; i++){
    printf("%d ", i);
  }
  //Task 3
  int s, sum = 0;
  double av;
  for(int i = 1; i < 11; i++){
    printf("Enter number %d: ", i);
    scanf("%d",&s);
	sum += s; 
  }
  printf("The Sum of 10 no. is = %d \n", sum);
  av = sum;
  av /= 10;
  printf("The Average is = %f", av);
  //Task 4
  int ans;
  printf("Enter the answer of 3x4: ");
  scanf("%d",&ans);    
  while(ans != 12){
	printf("Not correct. Please try again: ");	  
	scanf("%d",&ans);  
  }  
  printf("Thank you");
  //Task 5
  int n,i = 1; 
  printf("Enter the no. to display it's multiplication table: ");
  scanf("%d", &n);
  while(i < n + 1){
    printf("%d x %d = %d \n",n ,i , n*i);
    i++;	
  }
  //Task 6
  int m, f = 1;
  printf("Enter an integer: ");
  scanf("%d", &m);
  do{
  f *= m;
  m--;
  }while(m > 0);
  printf("Factorial = %d", f);  
}
