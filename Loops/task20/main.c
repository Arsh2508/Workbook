#include <stdio.h>

int main()
{
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);

	int j = 1;
	int k = 1;
	for(int i = 1; i <= n; ++i){
		printf("%d ", i);
		if(--j == 0){
			printf("\n");
			j = ++k;
		}
	}
	printf("\n");
	return 0;
}
