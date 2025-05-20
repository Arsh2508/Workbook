#include <stdio.h>

int Atoi(char * src){
	int res = 0;
	for(int i = 0; src[i] != '\0'; ++i){
		if(src[i] < '0' || src[i] > '9'){
			return -1;
		}
		res = res * 10 + (src[i] - '0');
	}
	return res;
}
