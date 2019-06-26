#include "stdio.h"
long n1, n2, op;
long Add(void);
long Subtract(void);
long Multiply(void);
long Divide(void);
long And(void);
long Or(void);
long Not(void);
long Xor(void);
long Reminder(void);
long Increment(void);
long Decrement(void);

long Add (void){
  return n1 + n2;
}
long Subtract (void){
  return n1 - n2;
}
long Multiply (void){
  return n1 * n2;
}
long Divide (void){
  return n1 / n2;
}
long And (void){
  return n1 & n2;
}
long Or (void){
  return n1 | n2;
}
long Not(void){
  return !n1;	
}
long Xor (void){
  return n1 ^ n2;
}
long Reminder(void){
  return n1 % n2;	
}
long Increment(void){
  return ++n1;	
}
long Decrement(void){
  return --n1;	
}

void main(){
  printf("From 1 to 11 Enter operation ID: ");
  scanf("%d",&op);
  printf("Enter operand 1: ");
  scanf("%d",&n1);
  if(op != 7 && op != 10 && op != 11 && op < 12){
    printf("Enter operand 2: ");
    scanf("%d",&n2);	
  }
  switch (op){
	case 1: 
      printf("Answer is: %d",Add());
      break;
	case 2: 
      printf("Answer is: %d",Subtract());
      break;	  
	case 3: 
      printf("Answer is: %d",Multiply());
      break;	
	case 4: 
      printf("Answer is: %d",Divide());
      break;
	case 5: 
      printf("Answer is: %d",And());
      break;	  
	case 6: 
      printf("Answer is: %d",Or());
      break;	
	case 7: 
      printf("Answer is: %d",Not());
      break;		
	case 8: 
      printf("Answer is: %d",Xor());
      break;
	case 9: 
      printf("Answer is: %d",Reminder());
      break;
	case 10: 
      printf("Answer is: %d",Increment());
      break;	  
	case 11: 
      printf("Answer is: %d",Decrement());
      break;			
    default:
	  printf("Wrong ID");
  }  
}