#include <stdio.h>
#include <string.h>

int main()
{
	FILE * src = fopen("text.txt", "r");
	if(!src){
		printf("Failed to open the file!\n");
		return 1;
	}

	char buf[50];

	fread(buf, sizeof(char), 50, src);

	for(int i = 0; buf[i] != '\0'; ++i){
		if(buf[i] >= 65 && buf[i] <= 90){
			buf[i] |= 32;
		}
	}

	fclose(src);

	src = fopen("text.txt", "w");
	if(!src){
		printf("Failed to open the file!\n");
		return 1;
	}
	int size = strlen(buf);

	fwrite(buf, sizeof(char), size, src);

	fclose(src);

	return 0;
}







