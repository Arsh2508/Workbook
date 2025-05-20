#include <stdio.h>

void triangle(int);
int main()
{
	const int n = 5;
	triangle(n - 1);

	for(int i = 0; i < n; ++i){
		printf("   ");
		for(int j = 0; j < n; ++j){
			if(i == 0 || i == n - 1  || j == 0 || j == n - 1){
				printf(" * ");
			}
			else{
				printf("   ");
			}
		}
		printf("\n");
	}

	return 0;
}
