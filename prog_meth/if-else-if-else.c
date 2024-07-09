#include <stdio.h>

int main() {
	/**
	 * if else-if else statement
	 * Syntax below:
	 * if (condition1) {
	 * 	code executes if condition1 is true
	 * } else if (condition2) {
	 * 	code executes if condition1 is false && condition2 is true
	 * } else if (condition3) {
	 * 	code executes if both condition1 && condition2 are false but condition3 is true
	 * } else {
	 * 	code executes if all the conditions are false
	 * }
	 */

	int num1, num2;

	printf("Enter num1: ");
	scanf("%d", &num1);

	printf("Enter num2: ");
	scanf("%d", &num2);

	if (num1 > num2) {
		printf("Num1 is greater than Num2");
	} else if (num2 > num1) {
		printf("Num2 is greater than Num1");
	} else {
		printf("Fatal: Not applicable!");
	}
	return 0;
}


