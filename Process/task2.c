#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
	int status;
	int num = 0;

	do{
		printf("Enter a positive number: ");
		scanf("%d", &num);
	}while(num <= 0);

	pid_t pid1 = fork();
	if(!pid1){
		int log2 = 0;
		int test = num;
		while(test > 1){
			test >>= 1;
			++log2;
		}

		printf("The log2(%d) = %d\n", num, log2);
		exit(0);
	}	


	pid_t pid2 = fork();
	if(!pid2){
		int test2 = num;
		int res = 1;
	
		while(test2 > 0){
			res *= test2;
			--test2;
		}

		printf("The factorial of %d is %d\n", num, res);
		exit(0);
	}

	pid_t pid3 = fork();	
	if(!pid3){
		int cube = num * num * num;
		printf("The cube of %d is %d\n", num, cube);
		
		exit(0);
	}
	
	int P = wait(&status);
	
	printf("The first executed process is with PID - %d\n", P);

	if(pid1 != P){
		kill(pid1, SIGKILL);
	}
	if(pid2 != P){
		kill(pid2, SIGKILL);
	}
	if(pid3 != P){
		kill(pid3, SIGKILL);
	}

	while(wait(NULL) > 0);
	
	return 0;
}


