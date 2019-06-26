#include "stdio.h" 
/*
//Task 1
void main{
	int x = 10;
	printf("X before change = %d", x);
	int* point; 
	point = &x;
	*point = 20;
	printf("X after change = %d", x);	
}
//Task 2 - 1 
void sum(int*x, int*y, int*z);
void sum(int*x, int*y, int*z){
	*z = *x + *y;  
}
void main(){
	int x, y, z;
	printf("Enter 1st no. :");
	scanf("%d", &x);
	printf("Enter 2nd no. :");
	scanf("%d", &y);
	sum(&x, &y, &z);	
	printf("Sum = %d", z);	
} 

//Task 2 - 2
int sum(int*x, int*y);
int sum(int*x, int*y){
	return (*x + *y);  
}
void main(){
	int x, y, z;
	printf("Enter 1st no. :");
	scanf("%d", &x);
	printf("Enter 2nd no. :");
	scanf("%d", &y);
	z = sum(&x, &y);	
	printf("Sum = %d", z);	
} 

//Task 3
void sum(int*x, int*y, int*add, int*sub);
void sum(int*x, int*y, int*add, int*sub){
	*add = *x + *y;  
	*sub = *x - *y;  
}
void main(){
	int x, y, add, sub;
	printf("Enter 1st no. :");
	scanf("%d", &x);
	printf("Enter 2nd no. :");
	scanf("%d", &y);
	sum(&x, &y, &add, &sub);	
	printf("Sum = %d\nSub = %d", add, sub);
} 

//Task 4
void main(){
	int arr[10];
	int *ptr = arr;
	int s = 0;
    printf("enter 10 numbers :");
	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
		s += *(ptr + i);
	}
	printf("Sum = %d", s);
		
}
*/
//Task 5 [assignment]
int mult (int* arr1, int* arr2);
int mult (int* arr1, int* arr2){
	int result = 0;
	for(int i = 0; i < 3; i++){
		result += (arr1[i]*arr2[i]);
	}
	return result;
}
void main(){
  int arr1[3] = {1, 2, 3}, arr2[3] = {4, 5, 6};
  printf("Result = %d", mult(arr1, arr2));  
}