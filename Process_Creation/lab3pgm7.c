#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main () {
	int parentpid = (int)getpid();
	int p1pid, p2pid, p3pid, p4pid, p5pid, p6pid;

	p1pid = fork(); 

	if (p1pid < 0) { 
		printf("Fork System call failed!", );
	}

	if (p1pid == 0) {
		
		p2pid = fork();

			if (p2pid == 0) {
				printf("P2pid is%d\n",(int)getpid() );

				p4pid = fork();
				if (p4pid == 0 ){
					printf("P4pid = %d\n", (int)getpid());
				}
			} else {
				p3pid = fork();
					if (p3pid == 0) {
						p5pid = fork();
							if (p5pid > 0){
								p6pid = fork();
							} else {
								printf("P6pid = %d\n",(int)getpid());
							}
					} else {
						printf("P5pid = %d\n", (int)getpid() );
					}
			}

	}
	


}