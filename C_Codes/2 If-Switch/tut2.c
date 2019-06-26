#include "stdio.h"
void main(){
  /*
  // task 1:
  int n1;
  printf("Please enter number");
  scanf("%d",&n1);
  int cond = (n1 > 10);
  printf("%d",cond);
  
  // task 2:
  int hrs;
  printf("Please enter your working hours: ");
  scanf("%d",&hrs);
  int salary = hrs * 50;
  if(hrs < 40){
	  salary *= 0.9;
  }
  printf("Yours Salary is %d", salary);
    
  // task 3:
  int n;
  printf("Please enter number: ");
  scanf("%d",&n);
  if(n % 2 == 0){
    printf("Number is even ");
  }else{
    printf("Number is odd ");
  }
  
  // task 4:
  int grade;
  printf("Please enter your grade");
  scanf("%d",&grade);
  if(grade >= 85){
	  printf("Your rating is Excellent");	  
  }else if(grade >= 75){
	  printf("Your rating is Very Good");	  
  }else if(grade >= 65){
	  printf("Your rating is Good");	  
  }else if(grade >= 50){
	  printf("Your rating is normal");	    
  }else{
	  printf("Your rating is Failed");	     
  }
  */
  int id;
  printf("Please enter your ID: ");
  scanf("%d",&id);
  switch(id){
    case 1234:
      printf("Welcome Ahmed");
	  break;
    case 5678:
      printf("Welcome Youssef");
      break;	  
    case 1145:
      printf("Welcome Mina");
	  break;
	default: 
	  printf("Wrong ID");
  }
}

