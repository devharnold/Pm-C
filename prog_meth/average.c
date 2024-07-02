/**
 * A program in C that calculates and displays the average
 * in two floating-point numbers
 * Return 0 upon success & the result
 * Upon error: -1
 */

#include <stdio.h>

int main() {
	// variables
	float firstNumber, secondNumber, sum, avg;

	// prompt the user to enter the first float number
	printf("Enter the first number: \n");
	scanf("%f", &firstNumber); //store number and locate to the mem address

	// prompt the user to enter the second float number
	printf("Enter the second number: \n");
	scanf("%f", &secondNumber); //store number and locate to the mem address

	sum = firstNumber + secondNumber;
	avg = sum / 2;

	//display the final result
	printf("Your average is: %f", avg);

	return 0;
}
