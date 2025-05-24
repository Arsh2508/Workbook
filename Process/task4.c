#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid_1 = fork();

	if(pid_1 < 0){
		printf("Failed to fork!\n");
		exit(1);
	}

	if(!pid_1){
		execlp("ls", "ls", NULL);

		printf("Failed to exec\n");
		exit(1);
	}

	pid_t pid_2 = fork();

	if(pid_2 < 0){
		printf("Fork failed!\n");
		exit(1);
	}
	if(!pid_2){
		execlp("pwd", "pwd", NULL);
		
		printf("Failed to exec\n");
		exit(1);
	}

	int status;
	waitpid(pid_1, &status, 0);

	if(WIFEXITED(status)){
		printf("\nThe first process exited with status %d\n", WEXITSTATUS(status));
	}

	waitpid(pid_2, &status, 0);
	
	if(WIFEXITED(status)){
		printf("\nThe second process exited with status %d\n", WEXITSTATUS(status));
	}

	return 0;
}
