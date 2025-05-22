#include <stdio.h>

int Arithmetic_sum(const int * prog, const int n){
	return (((prog[0] + prog[n - 1]) / 2) * n);
}
