#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size = 0;
	do{
		printf("Enter the size of an array: ");
		scanf("%d", &size);
	}while(size <= 0);

	int * arr = (int *)malloc(sizeof(int) * size);
	if(!arr){
		printf("Memory allocation failed!\n");
		return 0;
	}

	printf("Enter elements of array: \n");
	for(int i = 0; i < size; ++i){
		scanf("%d", arr + i);
	}
	
	for(int i = 1; i < size; ++i){
		if(arr[i] > arr[i - 1]){
			printf("No!\n");
			return 0;
		}
	}

	printf("Yes!\n");

	free(arr);
	return 0;
}







