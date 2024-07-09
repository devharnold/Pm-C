#include <stdio.h>
#define NUM_ITEMS 3

int main() {
	/*Declare an array to store the prices of goods: sugar, salt, laptop*/

	float prices[NUM_ITEMS];
	float sum = 0.0; /*Initialize the sum of the float to 0.0*/
	int i;
	const char *items[NUM_ITEMS] = {"sugar", "salt", "laptop"}; /*Items to be used within the program*/

	/*loop through our commodities*/
	for (i = 0; i < 3; i++) {
		printf("Enter prices of your goods %s: \n", items[i]);
		scanf("%f", &prices[i]);
	}

	/*add all prices*/
	for (i = 0; i < 3; i++) {
		sum += prices[i];
	}

	/*print the total price*/
	printf("The total prices of your goods is: %f", sum);

	return 0;
}
