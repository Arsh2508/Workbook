#include <stdio.h>

int main()
{
	char ch = '\0';
	printf("Enter a character: ");
	scanf(" %c", &ch);

	printf("The numeric representation of %c is %d\n", ch, ch);
	return 0;
}
