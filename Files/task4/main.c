#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* text = fopen("info_files.txt", "r");	
	if(!text){
		printf("Failed to opent the file!\n");
		return 1;
	}	

	fseek(text, 0, SEEK_END);
	unsigned long file_size = ftell(text); // bytes in file
	fseek(text, 0, SEEK_SET);
	
	for(int i = 0; i < 2; ++i){
	
		unsigned long size = 0;
		do{
			printf("\nEnter the size to write (less than %lu): ", file_size - ftell(text));
			scanf("%lu", &size);	
		}while(size < 0 || size > (file_size - ftell(text)));
	
		char * buf = malloc(size);
		if(!buf){
			printf("Memory allocation failed!\n");
			return 1;
		}
		
		fread(buf, 1, size, text);
		printf("read %d: %s\n", i+1, buf);
	
		free(buf);
	}

	fclose(text);
	return 0;
}
