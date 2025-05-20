#include <stdio.h>

int main()
{
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);

	int l = 2 * n - 1;

	for(int i = 0; i < n; ++i){
		if(i != n - 1){
			for(int j = 0; j < l; ++j){
				 if(j == l/2 - i || j == l/2 + i){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
		else{
			for(int i = 0; i < l; ++i){
				printf("%c", (i % 2) ? ' ': '*');
			}
			printf("\n");
		}
	}
	return 0;
}
