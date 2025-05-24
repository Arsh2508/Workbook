#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>


int main()
{
	int status;
	pid_t pid = fork();

	if(pid > 0){
		int PID = getpid();
		printf("The parent PID is %d \n", PID);
		printf("The child PID is %d \n", pid);
	
		wait(&status);
		if(WIFEXITED(status)){
			printf("The child exited with status %d\n", WEXITSTATUS(status));
		}
		if(WIFSIGNALED(status)){
			printf("The child exited with signal %d\n", WTERMSIG(status));
		}
	}
	if(!pid){
        int PID = getpid();
        int PPID = getppid();

		printf("The child PID is %d \n", PID);
		printf("The child PPID is %d \n", PPID);
		exit(12);
	}

	return 0;
}
