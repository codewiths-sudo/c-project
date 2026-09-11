#include <stdio.h>

int main() {
    char choice;
    char op;
    double num1, num2, result;

    printf("== Console-Based Calculator ==\n");

    while (1) { 
    	
        printf("\nCalculate press 'c', Quit press 'q': ");
        scanf(" %c", &choice);

        if (choice == 'q' || choice == 'Q') {
            printf("Goodbye!\n");
            break;
        }

        if (choice == 'c' || choice == 'C') {
            printf("Enter: <num1> <op> <num2>: ");
            scanf("%lf %c %lf", &num1, &op, &num2);

            switch (op) {
                case '+':
                    result = num1 + num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '-':
                    result = num1 - num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '*':
                    result = num1 * num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '/':
                    if (num2 == 0) {
                        printf("Error! Division by zero.\n");
                    } else {
                        result = num1 / num2;
                        printf("Result: %.2lf\n", result);
                    }
                    break;

                default:
                    printf("Invalid operator!\n");
            }
        } else {
            printf("Invalid choice! Press 'c' or 'q'.\n");
        }
    }

    return 0;
}
