#include <stdio.h>

int main() {
	//if statement syntax
	//if (condition) {
		//code to execute if conditio
	//a variable to store the user-entered number	
	
	int number;

	printf("Please enter a number: \n");
	scanf("%i", &number);


	if (number < 0) {
		printf("The number is: %i \n", number);
	}

	return 0;
}	
