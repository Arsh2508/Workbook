#include <stdio.h>

void swap_bit(int *, int, int);
int main()
{
	unsigned int x = 0;
	printf("Enter number to reverse bits: ");
	scanf("%d", &x);

	unsigned int test = x;
	
	int count = 0;
	while(test){
		test >>= 1;
		++count;
	}

	for(int i = 0; i < count / 2; ++i){
		swap_bit(&x, i, (count - i - 1));
	}
	
	printf("After reversing bits: %d\n", x);
	return 0;
}
