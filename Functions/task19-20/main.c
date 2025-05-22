#include <stdio.h>

int Arithmetic_sum(const int *, const int);
int Geometric_sum(const int *, const int);
int main()
{
	const int size = 6;
	int arr[] = {0, 2, 4, 6, 8, 10};
	int arr_2[] = {1, 2, 4, 8, 16, 32};

	printf("%d\n", Arithmetic_sum(arr, size));
	printf("%d\n", Geometric_sum(arr_2, size));
	return 0;
}
