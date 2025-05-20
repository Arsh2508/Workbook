#include <stdio.h>

int main()
{
	char ch = '\0';

	printf("Enter a character: ");
	ch = getchar();

	switch(ch){
		case 'a':
		case 'i':
		case 'o':
		case 'u':
		case 'e':
			printf("You entered vowel character: \n");
			break;
		default:
			printf("You entered consonant: \n");
	}

	return 0;
}
