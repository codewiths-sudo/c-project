#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int secret_number, guess = 0, attampts = 0;

	srand(time(0));

	secret_number = (rand() % 100) + 1;

	printf("== number guessing game ==\n");
	printf("choose the number 1-100\n");

	while(guess != secret_number) {
		printf("\nenter your number: ");
		scanf("%d",&guess);

		attampts++;

		if(guess > secret_number) {
			printf("secret number is higher!\n");
		} else if(guess < secret_number) {
			printf("secret_number is lower!\n");
		} else {
			printf("correct! secret number is: %d\n",secret_number);
			printf("your attampts number: %d",attampts);
		}
	}
	return 0;
}