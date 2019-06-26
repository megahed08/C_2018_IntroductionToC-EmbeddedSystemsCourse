#include "stdio.h" 
void main (){
	int x = 1, y = 5, z = 9;
	int* p = &x;
	int* q = &y;
    int* r = &z;
    printf("x %d\ny %d\nz %d\n*p %d\n*q %d\n*r %d\n", x, y, z, *p, *q, *r);
	printf("Swapping pointers\n");
	int* temp = r;
	r = p;
	p = q;
	q = temp; 
	printf("x %d\ny %d\nz %d\n*p %d\n*q %d\n*r %d", x, y, z, *p, *q, *r);
}