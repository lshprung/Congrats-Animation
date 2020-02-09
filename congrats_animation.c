#include <stdio.h>
#include <unistd.h>
#define DISTANCE 10
#define DOWNTIME 100000

int main(){
	int i, j;
	
	while(1){
		for(i = 0; i < DISTANCE; i++){
			for(j = 0; j < 15+i+1; j++){
				printf("\b \b"); //backspace
			}
			for(j = 0; j < i; j++){
				printf(" ");
			}
			printf("Congratulations");
			fflush(stdout);
			usleep(DOWNTIME);
		}

		i--;

		while(i > 1){

			for(j = 0; j < 15+i; j++){
				printf("\b \b"); //backspace
				fflush(stdout);
			}

			i--;

			for(j = 0; j < i; j++){
				printf(" ");
			}
			printf("Congratulations");
			fflush(stdout);
			usleep(DOWNTIME);
		}
	}

	printf("\n");

	return 1;
}
