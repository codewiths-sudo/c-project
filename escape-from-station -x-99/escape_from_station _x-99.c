#include <stdio.h>

int main() {
    int choice;
    int labChoice;
    int prChoice;

    printf("Escape from Station X-99\n\n");
    printf("Warning! Oxygen low!\n\n");
    printf("1. Go to Laboratory\n");
    printf("2. Go to Power room\n");
    printf("Enter choice: ");

    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nEntered Laboratory\n");        
            printf("You enter the lab and see a robot standing guard.\n\n");
            
            printf("1. Hack the robot?\n");
            printf("2. Steal the oxygen tank right in front of the robot?\n");
            printf("Enter choice: ");
            scanf("%d", &labChoice);

            switch(labChoice) {
                case 1:
                    printf("\nRobot hacked successfully! You secured the oxygen tank! Mission complete!\n");
                    break;
                case 2:
                    printf("\nThe robot caught you! You ran out of oxygen! Mission failed!\n");
                    break;
                case 3:
                default:
                    printf("\nInvalid choice! Mission failed!\n");
                    break;  
            }
            break;

        case 2:
            printf("\nYou entered the Power Room.\n");
            printf("The power room fuse is blown.\n\n");

            printf("1. Connect the battery to the fuse?\n");
            printf("2. Repair the fuse?\n");
            printf("Enter choice: ");
            scanf("%d", &prChoice);

            switch(prChoice) {
                case 1:
                    printf("\nThe battery was damaged! The rocket exploded! Mission failed!\n");
                    break;
                case 2:
                    printf("\nThe rocket successfully returned to Earth! Mission complete!\n");
                    break;
                case 3:
                default:
                    printf("\nInvalid choice! Mission failed!\n");
                    break;
            }
            break;

        default:
            printf("\nInvalid choice! Game over!\n");
            break;
    }

    return 0;
}