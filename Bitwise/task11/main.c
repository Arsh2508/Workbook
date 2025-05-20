#include <stdio.h>

void swap_bit(int *, int, int);
int main()
{
	int num = 0;
	printf("Enter number: ");
	scanf("%d", &num);

	int i = 0;
	int j = 0;
	do{
		printf("Enter i-th and j-th bits to swap: ");
		scanf("%d %d", &i, &j);
	}
	while(i > 31 || j > 31 || i < 0 || j < 0);
	
	swap_bit(&num, i, j);

	printf("The swapped number: %d\n", num);
	return 0;
}
