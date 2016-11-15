#include<stdio.h>
#include<sys/types.h>
#include<string.h>

#define MAX_COUNT  200
#define BUF_SIZE 100

void main(void) {
	char buf[BUF_SIZE];
	int i ;
	pid_t pid;

	fork();

	for(i = 1; i <= MAX_COUNT; i++){
		printf("The line is from pid %d, value = %d\n", pid, i);
	}

}