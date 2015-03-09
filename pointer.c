#include<stdio.h>
int main(){
	int x = 2;
	printf("Value %x placed inside variable x.", x);
	printf("\nAnd variable x also stored in memroy address: %x", &x);
	int *p;
	p = &x;
	printf("\nx address assigned to pointer p, now p pointing to value x: %x", p);
	
	return 0;	
}