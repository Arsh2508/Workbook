#include <stdio.h>
#include <stdlib.h>

char * hex(unsigned int n){
	if(n == 0){
		char* res = malloc(4);
		if(!res){
			return NULL;
		}
		res[0] = '0';
		res[1] = 'x';
		res[2] = '0';
		res[3] = '\0';
		return res;
	}

	int count = 0;
	unsigned int test = n;
	while(test){
		test >>= 4;
		++count;
	}

	int size = 	count + 2;

	char * str = (char *)malloc(sizeof(char) * (size + 1));
	if(!str){
		return NULL;
	}
	str[size] = '\0';
	str[0] = '0';
	str[1] = 'x';
	
	for(int i = size - 1; i >= 2; --i){
		int tmp = n % 16;
		str[i] = (tmp > 9) ? ('A' + tmp - 10) : ('0' + tmp);
		n /= 16;
	}

	return str;
	 
}
