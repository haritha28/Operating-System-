#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

void main() {

	int pid; 
	printf("I am a process with the pid %d\n", (int)getppid() );
	pid  = fork();
	if(pid < 0) {
		printf("The process creation is unsuccessfull");
	} else if( pid == 0){
		printf( "The child has been created with pid%d\n", (int)getpid());
	} else if(pid>0){
		printf("I am the parent process with pid %d\n", (int)getppid());

	}

}

//outputing the pid value would only give you the value returned by fork.