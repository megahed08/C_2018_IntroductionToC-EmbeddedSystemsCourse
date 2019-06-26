#include <stdio.h>
#include "../fold2/typedef.h"
#define array_size 5

void printmax(){	
  u32 array[array_size] = {0};                   // initialize new array
  u32 maximum_number = array[0];                 // initialize the maximum_number
  for(int i = 0; i < array_size; i++){           // Loop on the array
	printf("Enter number %d: ", i+1);              // Take numbers from user
	scanf("%d",&array[i]);            
	if(maximum_number < array[i]){                 // set the maximum_number
	  maximum_number = array[i];
	}	
  }

  printf("Maximum Number = %d", maximum_number); // print the maximum_number
} 

