#include "stdio.h" 
/*
//Task 1
void main (){
	char c;
	int i;
	float f;
	double d;
	printf("Sizes :\nchar = %d\nint = %d\nfloat = %d\ndouble = %d\n", 
	sizeof(c), sizeof(i), sizeof(f), sizeof(d));	
}

//Task 2
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef float f32;
typedef double f64;

void main (){
	u8 n1;
	u16 n2;
	u32 n3;
	s8 n4;
	s16 n5;
	s32 n6;
	f32 n7;
	f64 n8;
	printf("Sizes :\nu8 = %d\nu16 = %d\nu32 = %d\ns8 = %d\ns16 = %d\ns32 = %d\nf32 = %d\nf64 = %d", 
	sizeof(n1), sizeof(n2), sizeof(n3), sizeof(n4),sizeof(n5), sizeof(n6), sizeof(n7), sizeof(n8));	
	
}
*/
//Task3
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef float f32;
typedef double f64;

typedef struct students {
	u32 id;
	u32 grade;
}student;

void main (){
	student ahmed;
	student omar;
	printf("Enter Ahmed ID: \n");
	scanf("%d", &ahmed.id);
	printf("Enter Ahmed Grade: \n");
	scanf("%d", &ahmed.grade);
	printf("Enter Omar ID: \n");
	scanf("%d", &omar.id);
	printf("Enter Omar Grade : \n");
	scanf("%d", &omar.grade);
	printf("Ahmed ID: %d\nAhmed Grade: %d\nOmar ID: %d\nOmar Grade : %d",
	ahmed.id, ahmed.grade, omar.id, omar.grade);
}