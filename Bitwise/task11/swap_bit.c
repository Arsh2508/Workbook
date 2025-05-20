#include <stdio.h>

void swap_bit(int* num, int i, int j){
	if(((*num >> i) & 1)  != ((*num >> j) & 1)){
		*num ^= (1 << i);
		*num ^= (1 << j);
	}
}

