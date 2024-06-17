#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * C program to build an ehanced calculator with better error handling
 * Use basic operators(+, -, /, *, %) and 
 * exponential (^) and bitwise operators(&, |, ^, ~)on two operands
 * We ask the user to enter operator and two operands
 * If the user enters q we exit the program
 *
 * Return 0 upon success
 */

int main() {
	char operator;
	double num1, num2;
	int num_1, num_2;

	while(1) {
	 printf("Enter an operator (+, -, *, /, %%, ^, &, |, ^, ~), if you want to exit press q: ");
        scanf(" %c", &operator);

        // Exit the program if the user enters 'q'
        if (operator == 'x') {
            exit(0);
        }

        // Prompt the user to enter the operands
        if (operator == '~') {
            // For bitwise NOT (~), we only need one operand
            printf("Enter the operand: ");
            if (scanf("%lf", &num1) != 1) {
                // Input validation: ensure a valid number is entered
                printf("Error! Please enter a valid number.\n\n");
                while (getchar() != '\n');
                continue;
            }
            int_num1 = (int)num1;
        } else {
            // For other operations, we need two operands
            printf("Enter the first and second operand: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                // Input validation: ensure two valid numbers are entered
                printf("Error! Please enter valid numbers.\n\n");
                while (getchar() != '\n');
                continue;
            }
            // Convert inputs to integers for bitwise operations
            int_num1 = (int)num1;
            int_num2 = (int)num2;
        }

        // Using switch case to differentiate operations based on the operator
        switch (operator) {
            case '+': // Addition
                printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
                break;

            case '-': // Subtraction
                printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
                break;

            case '*': // Multiplication
                printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
                break;

            case '/': // Division
                if (num2 != 0) {
                    printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;

            case '%': // Modulus
                if (int_num2 != 0) {
                    printf("%d %% %d = %d\n", int_num1, int_num2, int_num1 % int_num2);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;

            case '^': // Exponential
                printf("%.1lf ^ %.1lf = %.1lf\n", num1, num2, pow(num1, num2));
                break;

            case '&': // Bitwise AND
                printf("%d & %d = %d\n", int_num1, int_num2, int_num1 & int_num2);
                break;

            case '|': // Bitwise OR
                printf("%d | %d = %d\n", int_num1, int_num2, int_num1 | int_num2);
                break;

            case 'x': // Bitwise XOR (this conflicts with the exit character)
                printf("%d ^ %d = %d\n", int_num1, int_num2, int_num1 ^ int_num2);
                break;

            case '~': // Bitwise NOT
                printf("~%d = %d\n", int_num1, ~int_num1);
                break;

            default: // Invalid operator
                printf("Error! Please enter a valid operator.\n");
                break;
        }

        printf("\n"); // New line for readability
    }

    return 0; // Return 0 upon successful execution
}
