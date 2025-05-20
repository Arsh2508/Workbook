#include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	int bit = 0;
	do{
		printf("Enter bit to reverse: ");
		scanf("%d", &bit);
	}while(bit < 0 || bit > 31);

	num ^= (1 << bit);

	printf("Changed number: %d\n", num);
	return 0;
}
