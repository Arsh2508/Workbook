#include <stdio.h>

int main()
{
	const int size = 9;
	int arr[] = {1, 3, 4, 6, 9, 2, 5, 8, 10};	// 7 is missing

	int res = 0;
	int tmp = 0;
	for(int i = 0; i < size; ++i){
		res ^= arr[i];
		tmp ^= (i + 1);
	}
	tmp ^= 10;
	res ^= tmp;

	printf("The missing number is %d!\n", res);

	return 0;
}
