#include <stdio.h>
#include <stdlib.h>

char * hex(unsigned int);
int main()
{
	unsigned int num = 0;
	do{
		printf("Enter a number to convert to hexidecimal: ");
		scanf("%d", &num);
	}
	while(num < 0);

	char * res = hex(num);
	if(res){
		printf("Hexadecimal representation of %d -> %s\n",num , res);
	}
	else{
		printf("Memory allocation fail\n");
	}

	free(res);
	return 0;
}
