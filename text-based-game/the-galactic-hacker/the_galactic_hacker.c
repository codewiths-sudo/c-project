#include <stdio.h>

int main() {
	int secrate_code = 49;
	int input;
	int lives = 0;

	while(lives < 7) {
		printf("Enter Your Password: ");
		scanf("%d", &input);

		if(input == secrate_code) {
			printf("System Hacked Successfully! Space Station Unlocked!\n");
		break;
		} else if (input ==999) {
			printf("[CHUCKLE] Glitch detected! Secret code is: %d\n",secrate_code);
		continue;					
		} else if (input < secrate_code) {
			printf("Access Denied! Secret Code is HIGHER.\n");
		} else if (input < secrate_code) {
			printf("Access Denied! Secret Code is LOWER.\n");						
		}
		lives--;		
	if (lives == 7) {
		printf("Self-Destruct Triggered! Mission Failed!\n");
	}
		
	}
return 0;
}