#include "stdio.h" 
#include <stdlib.h>

void main(){
  int c1[10] = {47, 69, 57, 7, 46, 85, 76, 3, 56, 22}, 
  c2[10] = {46, 83, 87, 90, 76, 56, 48, 98, 96, 6},
  c3[10] = {45, 67, 35, 36, 87, 56, 11, 34, 78, 64}, sum = 0;
 /* for(int i = 0; i < 10; i++){
    c1[i] = rand() % 100;
	printf("%d  ",c1[i]);
    c2[i] = rand() % 100;
	printf("%d  ",c2[i]);
    c3[i] = rand() % 100;
	printf("%d\n",c3[i]);
  }*/
  int pass = 0, hgrade = c1[0], lgrade = c3[0];
  for(int j = 0; j < 10; j++){
    if(c1[j] > 49)
	  pass++;
    if(c2[j] >49) 
	  pass++;
    if(c3[j] >49) 
	  pass++;
    if(c1[j] > hgrade) 
	  hgrade = c1[j];
    if(c2[j] > hgrade) 
	  hgrade = c2[j];
    if(c3[j] > hgrade) 
	  hgrade = c3[j];
    if(c1[j] < lgrade) 
	  lgrade = c1[j];
    if(c2[j] < lgrade) 
	  lgrade = c2[j];
    if(c3[j] < lgrade) 
	  lgrade = c3[j];
    sum += (c1[j] + c2[j] + c3[j]);
  } 
  printf("Passed students = %d\nFailed students = %d\nHighest Grade = %d\nLowest Grade = %d\nAvarage Grade = %d", pass, 30 - pass, hgrade, lgrade, sum / 30);
}