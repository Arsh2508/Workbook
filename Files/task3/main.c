#include <stdio.h>

int main()
{
	FILE * file = fopen("file.txt", "r");
	if(!file){
		printf("Failed to open the file!\n");
		return 1;
	}

	char buf[50];

	fread(buf, sizeof(char), 50, file);

	int count = 0;

	for(int i = 0; buf[i] != '\0'; ++i){
		if(buf[i] >= '0' && buf[i] <= '9'){
			++count;
		}
	}

	fclose(file);

	printf("The count of digits in file is - %d\n", count);
	return 0;

}


