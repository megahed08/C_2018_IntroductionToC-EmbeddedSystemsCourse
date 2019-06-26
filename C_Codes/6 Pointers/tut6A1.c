#include "stdio.h" 
void sort (int* arr, int m);
void sort (int* arr, int m){
  int temp;
  for(int j = m - 1; j >= 0; j-- ){
	for(int k = 0; k < j; k++){
		if(arr[k] > arr[k+1]){
		  temp = arr[k+1];
		  arr[k+1] = arr[k];
		  arr[k] = temp;
		}
	}  
  }
}
void main(){
  int n [10], m;
  printf("How many numbers to sort? : ");
  scanf("%d", &m);
  for(int i = 1; i <= m; i++){
	printf("Enter number %d: ", i);
	scanf("%d", &n[i-1]);
  }
  sort(n,m);
  printf("Sorted Array: \n");
  for(int l = 0; l < m; l++){
    printf("%d \n", n[l]);
  }  
}




