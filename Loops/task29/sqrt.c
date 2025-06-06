#include <stdio.h>

int my_sqrt(int x){
	if(x < 2){
		return x;
	}

	int left = 1;
	int right = x/2;

	while(left <= right){
		int mid = (left + right) / 2;
		
		if((long)mid * mid == x){
			return mid;
		}
		else if((long)mid * mid < x){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	return -1;
}
