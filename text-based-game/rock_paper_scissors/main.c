#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int playerChoice, comChoice;
	int lives = 10;

	srand(time(NULL));

	printf("=== Rock Paper Scissors Game ===\n");
    printf("1. Rock | 2. Paper | 3. Scissors\n\n");

	while(lives > 0) {
		printf("Remaining Lives: %d\n",lives);
		printf("Enter Your Choice(1-3): ");
		scanf("%d", &playerChoice);

		comChoice = (rand() % 3) + 1;

		switch(playerChoice) {
			case 1:
				if(comChoice == 1) {
					printf("Computer choose: Rock. Tie!\n\n");
				} else if (comChoice == 2) {
					printf("Computer choose: Paper. You loss\n\n");
				lives--;
				} else {
					printf("Computer choose: Scissors. You Win\n\n");
			    }
			    break;
			case 2:
				if(comChoice == 2) {
					printf("Computer choose: Paper. Tie\n\n");
				} else if(comChoice == 3) {
					printf("Computer choose: Scissors. You lose\n\n");
				lives--;
				} else {
					printf("Computer choose: Rock. You Win\n\n");
				}
			break;
			case 3:
				if(comChoice == 3) {
					printf("Computer choose: Scissors. Tie\n\n");
				} else if(comChoice == 1) {
					printf("Computer choose: Rock. You lose\n\n");
				lives--;
				} else {
					printf("Computer choose: Paper. You Win\n\n");
				}
			break;
			default:
                printf("Invalid choice! Choose between 1, 2, or 3.\n\n");
            break;
		}
	}
return 0;
}