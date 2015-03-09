#include<stdio.h>
int main(){
	int x = 2;
	printf("Value %x placed inside variable x.", x);
	printf("\nAnd variable x also stored in memroy address: %x", &x);
	return 0;	
}