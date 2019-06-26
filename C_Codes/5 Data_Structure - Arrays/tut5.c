#include "stdio.h" 
void main(){
/*	
  //Task 1	
  int n [10];
  for(int i = 0; i < 10; i++){
	printf("Enter number %d: ", i);
	scanf("%d", &n[i]);
  }
  printf("The Values in reversed order\n");
  for(int j = 9; j >= 0; j--){
    printf("%d \n", n[j]);
  }
  //Task 2
  int m [10], sum = 0;
  for(int k = 0; k < 10; k++){
	printf("Enter number %d: ", k);
	scanf("%d", &m[k]);
	sum += m[k];
  }  
  printf("Sum = %d \nAvarage = %f", sum, (double) sum / 10);

  //Task 3
  int n [10], temp, m;
  printf("How many numbers to sort? : ");
  scanf("%d", &m);
  for(int i = 1; i <= m; i++){
	printf("Enter number %d: ", i);
	scanf("%d", &n[i-1]);
  }
  for(int j = m - 1; j >= 0; j-- ){
	for(int k = 0; k < j; k++){
		if(n[k] > n[k+1]){
		  temp = n[k+1];
		  n[k+1] = n[k];
		  n[k] = temp;
		}
	}  
  }
  for(int l = 0; l < m; l++){
    printf("%d \n", n[l]);
  }

  //Task 4
  int n [10], count = 0, srch;
  for(int i = 1; i <= 10; i++){
	printf("Enter number %d: ", i);
	scanf("%d", &n[i]);
  }
  printf("Enter Value to search: ");
  scanf("%d", &srch);
  for(int j = 0; j <10; j++){
    if(n[j] == srch)	
	  count++;
  }
  if(count == 0)
	printf("Value Not Exist");
  else 
	printf("Value Exists %d times", count);
  */
//Task 5
  int an;
  printf("How many numbers in an array? : ");
  scanf("%d", &an);
 int n [an], count = 0;
  for(int i = 1; i <= an; i++){
	printf("Enter number %d: ", i);
	scanf("%d", &n[i - 1]);
  }
  int  srch, l = 0, h = an - 1, m = (l+h)/2;
  printf("Enter Value to search: ");
  scanf("%d", &srch);
  while(l < h){
    if(n[m] == srch){
	  count++;
	  for(int j = 1; j < (h + l) / 2 + 1; j++){
		if(n[m+j] == srch)
		  count++;
        if(n[m-j] == srch)
		  count++;	
      }
      break;	  
	}else if (n[m] > srch)
	  l = m + 1;
	else 
      h = m - 1;		
	m = (l+h)/2;
  }
  if(count == 0)
	printf("Value Not Exist");
  else 
	printf("Value Exists %d times", count);
}