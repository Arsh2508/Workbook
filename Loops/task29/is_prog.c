#include <stdio.h>

int my_sqrt(int);
int is_prog(int n, int size){
	
	if(size < 3){
		return 1;
	}

	int c = n % 10;
	int b = (n / 10) % 10;
	int a = (n / 100) % 10;

	
	if( my_sqrt(a * c) != b ){
			return 0;
	}

	return is_prog(n/10 ,  (size - 1));
}
