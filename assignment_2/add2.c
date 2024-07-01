#include <stdio.h>

int main() {
	int firstNumber, secondNumber, sum;

	printf("Enter first number: \n");
	scanf("%d", &firstNumber);

	printf("Enter second number: \n");
	scanf("%d", &secondNumber);

	sum = firstNumber + secondNumber;

	printf("Your sum is: %d\n", sum);

	return 0;
}
