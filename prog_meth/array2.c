#include <stdio.h>

int main() {
	/*create an array of the prices of some fruits*/

	int fruits_prices[5] = {20, 30, 40, 50, 60};
	int fruitNumber;

	/*lets display the price of a certain fruit*/
	printf("Enter fruit number between 1 and 5 to know its price: ");
	scanf("%i", &fruitNumber);

        printf("Price of %i is ksh%i", fruitNumber, fruits_prices[fruitNumber - 1]);

	return 0;
}
