#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid = fork();

	if(pid < 0){
		printf("Failed to fork!\n");
		exit(1);
	}

	if(!pid){
		execlp("ls", "ls", "-l", NULL);
		exit(1);
	}

	int status;
	wait(&status);

	if(WIFEXITED(status)){
		printf("The process exited with status %d\n", WEXITSTATUS(status));
	}

	return 0;
}
