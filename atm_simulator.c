#include <stdio.h>

void Menu() {
    int balance = 1000; 
    int choice;
    int amount;

	   printf("\n=== Bank ATM ===\n");
	   printf("1. Check Balance\n");
	   printf("2. Deposit Money\n");
	   printf("3. Withdraw Money\n");
	   printf("4. Exit\n");
	   printf("Enter your choice: ");
	   scanf("%d", &choice);

	   switch(choice) {
		  case 1:
			 printf("\nYour current balance is: $%d\n", balance);
			 break;

		  case 2:
			 printf("\nEnter amount to deposit: $");
			 scanf("%d", &amount);
			 balance = balance + amount; 
			 printf("Successfully deposited $%d. New balance: $%d\n", amount, balance);
			 break;

		  case 3:
			 printf("\nEnter amount to withdraw: $");
			 scanf("%d", &amount);
			
			 if(amount > balance) {
				printf("Insufficient balance!\n");
			 } else {
				balance = balance - amount; 
				printf("Successfully withdrew $%d. Remaining balance: $%d\n", amount, balance);
			 }
			 break;

		  case 4:
			 printf("\nThank you for using  Bank! Goodbye.\n");
			 break;

		  default:
			 printf("\nInvalid choice! Please try again.\n");
			 break;
	   }

}

int main() {
    while(1) {
	   Menu();
    }
return 0;
}