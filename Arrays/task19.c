#include <stdio.h>

int main()
{
	const int size = 19; 
	int arr[] = {1, 1, 1, 2, 2, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 7, 7, 9, 9};

	int res = 0;
	for(int i = 0; i < size; ++i){
		if( ( (i == 0) || arr[i] != arr[i - 1] ) && ( (i == size - 1) || arr[i] != arr[i + 1]) ){
			res = arr[i];
			break;
		}
	}
	printf("The unique number is %d\n", res);
	return 0;
}
