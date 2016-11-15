#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void main () {
	int  pid; 
	printf("I am a process with pid %d\n", (int)getpid());
	pid = fork();
	printf("Fork returned %d\n",pid );
	printf("I am process with pid %d\n", (int) getpid() );
}

//fork basically returns two pids one of the parent process and other of the child process

