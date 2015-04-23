#include<stdio.h>
int main()
{	int i; int j; int k;
	int array[5];
	
	for(i = 0; i < 5; i++){
		array[i] = 5-i;
		printf("\nArray element %d:  %d",i, array[i]);
	}


	for(j = 0; j < 5; j++){
		for(k = 0; k < 5; k++){
			if(array[j] < array[k]){
				int temp = array[k];
				array[k] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("\nBubble Sorted");
	for(i = 0; i < 5; i++){
		printf("\nArray element %d:  %d",i, array[i]);
	}

	return 0;
}
