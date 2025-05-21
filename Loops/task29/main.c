#include <stdio.h>

int is_prog(int, int);
int my_sqrt(int);
int main()
{
	int num = 0;
	do{
		printf("Enter a positive number: ");
		scanf("%d", &num);
	}while(num < 0);

	int test = num;
	int size = 0;
	while(test){
		++size;
		test /= 10;
	}
	if(is_prog(num, size)){
		printf("The %d'th digits are geometric progression! \n", num);	
	}
	else{
		printf("The %d'th digits are not geometric progression! \n", num);
	}
	return 0;
}
