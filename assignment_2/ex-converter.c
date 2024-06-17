/**
 * C program to convert temparature within different states -> 
 * An extension of the first file `converter.c` 
 * Here we change from 
 * 	Fahrenheit to Celsius and Kelvin
 * 	Celsius to Fahrenheit and Kelvin
 * 	Kelvin to Fahrenheit and Celsius
 * Prompt the user to input temp in Kelvin and begin from there
 * We are to use these formulas:
 * 	Celsis = (Fahrenheit - 32) * 5/9
 * 	Kelvin = (Celsius + 273.15)
 * Upon success return: Final temp changes else: Return -1 error messsage
 */

int main() {
	float Celsius, Kelvin, Fahrenheit;
	int choice;
	printf("Choose your unit of conversion: \n");
	printf("1.Kelvin\n");
	printf("2.Celsius\n");
	printf("3.Fahrenheit\n");
	scanf("%d", &choice); // Scan the input and we use the `&` to obtain address of the choice
	switch (choice) {
		case 1:
			/**
			 * Conversion from Kelvin to Celsius and Fahrenheit
			 * Prompt the user to enter valid inputs in Kelvin
			 * Read the inputs
			 * Validate inputs
			 * Convert: from{ Kelvin to Celsius and Fahrenheit }and return outputs
			 * Upon success: Temp in the different states, else: Error message
			 */
			printf("Enter your desired temparature in Kelvin: ");
			result = scanf("%f", &Kelvin);

			if (result != 1) {
				printf("Error. Invalid Input. Enter a valid temp in Kelvin\n");
				return -1;
			}

			Celsius = (Kelvin - 273.15); 
			Fahrenheit = 1.8 * (Kelvin - 273.15) + 32.0;
			printf("Your value in Celsius is: \t %f \n", Celsius);
			printf("Your value in Fahrenheit is: \t %f", Fahrenheit);
			break;
		case 2:
			/**
			 * Convert from Celsius to Kelvin and Fahrenheit
			 * Prompt the user to enter valid inputs in Celsius
			 * Read the inputs
			 * Validate the inputs
			 * Convert: from { Celsius to Kelvin and Fahrenheit } and return outputs
			 * Upon success: Temp in different states, else: Error message
			 */
			printf("Enter your desired temparature in Celsius: ");
			result = scanf("%f", &Celsius);

			if (result != 1) {
				printf("Error. Invalid Input. Enter a valid temp in Celsius\n");
				return -1;
			}

			Kelvin = (Celsius + 273.15);
			Fahrenheit = (Celsius * 1.8) + 32.0;
			printf("Your value in Kelvin is: %f \n", Kelvin);
			printf("Your value in Fahrenheit is: %f", Fahrenheit);
			break;
		case 3:
			/**
			 * Convert from Fahrenheit to Celsius and Kelvin
			 * Prompt the user to enter valid inputs in Fahrenheit
			 * Read the inputs
			 * Validate the inputs
			 * Convert: from{ Fahrenheit to Celsius and Kelvin } and return outputs
			 * Upon success: Temp in different states, else: Error message
			 */
			printf("Enter your desired temparature in Fahrenheit: ");
			result = scanf("%f", &Fahrenheit);

			if (result != 1) {
				printf("Error.Invalid. Enter a valid number in Fahrenheit\n");
				return -1;
			}

			Celsius = (Fahrenheit - 32.0) * 5.0 / 9.0;
			Kelvin = (Fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
			printf("Your value in Celsius is: \t %f \n", Celsius);
			printf("Your value in Kelvin is: \t %f \n", Kelvin);
			break;
		default:
			printf("Please enter a valid value \n");
			break;
	}
	printf("\n\n");
	return 0;
}
