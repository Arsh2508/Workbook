#include <stdio.h>

int my_sqrt(int);
int my_sqrt_2(int);

int main()
{
	int num1 = 25;
	int num2 = 10;
	printf("sqrt_1(%d) = %d \n", num1, my_sqrt(num1));
	printf("sqrt_2(%d) = %d \n", num1,  my_sqrt_2(num1));

	printf("sqrt_1(%d) = %d \n", num2,  my_sqrt(num2));
	printf("sqrt_2(%d) = %d \n", num2,  my_sqrt_2(num2));

	return 0;
}
