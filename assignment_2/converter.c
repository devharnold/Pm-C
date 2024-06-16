/**
 * C program to convert temparature to your choice
 * Prompt the user to input temparature in Fahrenheit, then convert it to Celsius then Kelvin
 * Celsius = (Fahrenheit - 32) * 5/9 { But we will do *5.0 / 9.0 }
 * Kelvin = Celsius + 273.15
 * Return: O upon success with the result, else return -1 upon error
 */

#include <stdio.h>

int main(){
	//Declare the variables and the data type -> float
	float Celsius, Kelvin, Fahrenheit;

	//Prompt fo input from the user.Temparature should be in fahrenheit
	printf("Enter your temparature in Fahrenheit: ");
	scanf("%f", &Fahrenheit);

	//convert Fahrenheit to Celsius
	Clesius = (Fahrenheit - 32.0) * 5.0 / 9.0;

	Kelvin = Celsius + 273.15;//Conversion of Celsius to Kelvin
	
	// Print output to the user
	// Use a new line character to allow display into two separate lines
	printf("Your final temparature in Celsius is: %.2f°C\n", Celsius);
	printf("Your final temparature in Kelvin is: %.2fk\n", Kelvin);

	return 0;
}
