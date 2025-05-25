#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * str = fopen("hello.txt", "w");
	if(!str){
		printf("Failed to open!\n");
		exit(1);
	}

	char buf[10] = "hello";
	fwrite(buf, sizeof(char), 5, str);
	fclose(str);

	str = fopen("hello.txt", "r");
	if(!str){
		printf("Failed to reopen the file!\n");
		exit(1);
	}

	fread(buf, sizeof(char), 5, str);
	printf("%s\n", buf);

	fclose(str);
	return 0;

}
