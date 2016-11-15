#include<stdio.h>
#include<string.h>
#include<sys/types.h>

#define MAX_COUNT 200

void childprocess ();
void parentprocess();

void main(void) {
	pid_t pid; 
	pid = fork();

	if (pid == 0) {
		childprocess();
	} else {
		parentprocess();
	}

}

	void childprocess ( void) {
		int i; 

		for(i = 1; i <= MAX_COUNT ; i++){
			printf("This is the child process %d \n", i);
		}

	}

	void parentprocess (void ) {

		int i;

		for(i = 1; i <= MAX_COUNT ; i++){
			printf("This is the parent process %d\n", i);
		}

	}

