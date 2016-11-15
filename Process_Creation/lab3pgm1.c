#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void main () {
	printf("I am a parent process with pid %d\n", (int)getppid());
	printf("I am a child process with pid %d\n", (int)getpid());
}

//getpid() - returns the child process pid
//getppid() - returns the parent process pid 
//pid is of type pid_t hence we type cast it to int
//Child process each time returns different values, because it is unique
//Parent process returns same value. 