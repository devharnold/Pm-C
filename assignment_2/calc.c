/**
 * C program to perform basic arithmetic operations(+, -, *, /, %)
 * We will prompt the user to enter an operator and 2 operands
 * Also design a function such that if the user enters 'q' the program quits
 *
 * Returns 0 upon successful operation
 */

int main() {
    char ch;        // Variable to store the operator
    double a, b;    // Variables to store the two operands
    int int_a, int_b; // Variables to store the integer equivalents of the operands for modulus operation

    while (1) {
        // Prompt the user to enter an operator
        printf("Enter an operator (+, -, *, /, %%), if you want to exit press q: ");
        scanf(" %c", &ch);

        // Exit the program if the user enters 'q'
        if (ch == 'q')
            exit(0);

        // Prompt the user to enter the values
        printf("Enter the first and second values: ");
        scanf("%lf %lf", &a, &b);

        // Convert inputs to integers for modulus operation
        int_a = (int)a;
        int_b = (int)b;

        // Using switch case to differentiate operations based on the operator
        switch (ch) {
            // Addition
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
                break;

            // Subtraction
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
                break;

            // Multiplication
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
                break;

            // Division
            case '/':
                if (b != 0)
                    printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
                else
                    printf("Error! Division by zero.\n");
                break;

            // Modulus
            case '%':
                if (int_b != 0)
                    printf("%d %% %d = %d\n", int_a, int_b, int_a % int_b);
                else
                    printf("Error! Division by zero.\n");
                break;

            // Default case if operator doesn't match any valid case
            default:
                printf("Error! Please enter a valid operator.\n");
        }

        printf("\n");
    }

    return 0; // Return 0 upon successful execution
}
