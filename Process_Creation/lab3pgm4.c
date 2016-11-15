#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

void main() {

	int pid;
	printf("I am the parent process with pid %d\n", getppid());

	pid = fork();
	if(pid < 0) {
		printf("Fork has failed!");
	} 

	if(pid == 0 ) {
		printf("The child process has been created with the pid%d\n and a process pid with %d\n", getpid(), pid);
		exit(0);
	}

	//How can the parent process values differ

}