#include <stdio.h>

int main() {
	/**
	 * Switch statement syntax:
	 *
	 * switch (expression) {
	 * 	case 1:
	 * 		code to execute if case 1 matches expression;
	 * 		break;
	 * 	case2:
	 * 		code to execute if case 2 matches expression;
	 * 		break;
	 * 	default:
	 * 		code to execute if all cases were not met;
	 * }
	 */

	char grade;

	printf("Enter your grade: \n");
	scanf("%c", &grade);

	switch (grade) {
		case 'A':
			printf("Excellent");
			break;
		case 'B':
			printf("Very Good");
			break;
		case 'C':
			printf("Good");
			break;
		default:
			printf("Invalid Grade.");
	}

	return 0;
}
