#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	int remainder = a - (a / b) * b; 
	printf("The remainder after %d/%d is %d\n", a, b, remainder);
	return 0;
}
