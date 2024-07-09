#include <stdio.h>

/**
 *  function to add 2 integers
 */

int addTwoNumbers() {
	int x, y, sum;

	printf("Enter the value of x: \n");
	scanf("%i", &x);


	printf("Enter the value of y: \n");
	scanf("%i", &y);

	sum = x + y;
	return sum;
}

int main() {
	 /* call the add function here*/
	printf("The sum of the two numbers is: %i \n", addTwoNumbers());

	return 0;
}
