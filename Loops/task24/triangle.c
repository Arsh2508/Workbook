#include <stdio.h>

void triangle(int n)
{
	int l = 2 * n - 1;
	for(int i = 0; i < n - 1; ++i){
		if(i != n - 1){
			for(int j = 0; j < l; ++j){
				 if(j == l/2 - i || j == l/2 + i){
					printf(" * ");
				}
				else{
					printf("   ");
				}
			}
			printf("\n");
		}
	}
}
