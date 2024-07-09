#include <stdio.h>

int main() {
	/**
	 * if else statement syntax
	 * if (condition) {
	 * 	code to execute if the condition is true
	 * } else {
	 * 	code to execute if the condition evaluates to false
	 * }
	 */

	/*variable to store the user-entered number*/
	int number;

	printf("Enter a number: \n");
	scanf("%d", &number);

	if (number % 2 == 0 ) {
		printf("%i is even.\n", number);
	} else {
		printf("%i is odd.\n", number);
	}
	return 0;
}
