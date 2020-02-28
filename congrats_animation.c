#include <stdio.h>
#include <time.h>
#include <unistd.h>
#define DISTANCE 10
#define DOWNTIME 100000

int main(){
	int i, j;
	int num_rand; //for random color
	int counter = 1; //change color when hits 5

	srand(time(NULL));
	
	while(1){
		for(i = 0; i < DISTANCE; i++){
			counter++;

			for(j = 0; j < 15+i+1; j++){
				printf("\b \b"); //backspace
			}
			for(j = 0; j < i; j++){
				printf(" ");
			}
			if(counter == 5){
				num_rand = (rand() % 7) + 1;
				printf("\e[0;3%dm", num_rand);
				counter = 1;
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
