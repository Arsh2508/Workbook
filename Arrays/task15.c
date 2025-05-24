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

	int left = 0;
	int right = size - 1;

	while(left < right){
		while(arr[left] % 2 == 0){
			++left;
		}

		while(arr[right] % 2){
			--right;
		}
		
		if(left < right){
			arr[left] ^= arr[right];
			arr[right] ^= arr[left];
			arr[left] ^= arr[right];
			++left;
			--right;
		}
	}

	printf("Changed array: \n");
	for(int i = 0; i < size; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);

	return 0;
}





