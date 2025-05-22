#include <stdio.h>

int power(int a, int b){
	int res = 1;
	while(b--){
		res *= a;
	}
	return res;
}

int Geometric_sum(const int * prog, const int n){
	if(n == 1){
		return prog[0];
	}
	if(prog[0] == 0){
		return 0;
	}
	int q = prog[1] / prog[0];

	if(q == 1){
		return prog[0]*n;
	}


	return (prog[0] * (power(q, n) - 1)) / (q - 1);

}
