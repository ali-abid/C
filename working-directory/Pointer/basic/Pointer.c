/*
 * Pointer.c
 *
 *  Created on: 25 Apr 2015
 *      Author: Ali
 */
#include<stdio.h>
void main(){
	const int a = 10;
	printf("Constant Variable: %d   ", a);
    // How to change constant variable
	int *ptr = &a;
	*ptr = 20;
	printf("Constant Variable: %d", a);

}
