#include "stdio.h"
void main(){
  int id, pass;	
  printf("Please Enter your ID: ");
  scanf("%d",&id);
  if(id == 1234 || id == 5678 || id == 9870){
    printf("Please Enter Password: ");
	scanf("%d",&pass);	
	for(int i = 0; i < 3; i++){
	  if(pass == 7788 && id == 1234){
	    printf("Welcome Ahmed"); 
        break;	
	  }else if(pass == 5566 && id ==5678){
	    printf("Welcome Amr"); 
        break;	 
	  }else if(pass == 1122 && id ==9870){
		printf("Welcome Wael"); 
        break;		  
	  }else{ 
        if(i < 2){
		  printf("Try Again: ");   
	      scanf("%d",&pass);
	    }else
		  printf("Incorrect password for 3 times. No more tries");	
	  }
	}  
  }else
    printf("You are not registered");
}
