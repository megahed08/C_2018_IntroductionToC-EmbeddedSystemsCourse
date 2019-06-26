#include "stdio.h"
void main(){
  int id, password;
  
  printf("Enter Your ID: ");
  scanf("%d",&id);
  
  switch(id){
    case 3808:
      printf("Enter Your Password: ");
      scanf("%d",&password);
	    if(password == 123)
		  printf("Ahmed");
        else 
		  printf("Incorrect Password");
        break;
    case 932:
      printf("Enter Your Password: ");
      scanf("%d",&password);
	    if(password == 204)
		  printf("Abbas");
        else 
		  printf("Incorrect Password");
        break;
    case 456:
      printf("Enter Your Password: ");
      scanf("%d",&password);
	    if(password == 789)
		  printf("Ahmed");
        else 
		  printf("Incorrect Password");
        break;
    case 912:
      printf("Enter Your Password: ");
      scanf("%d",&password);
	    if(password == 111)
		  printf("Ahmed");
        else 
		  printf("Incorrect Password");
        break;
    default:
	  printf("Incorrect ID");
  }
}
