#include <stdio.h>
#define SIZE 10

int main() {
	/**
	 * Arrays
	 * Array declaration
	 * <data_type> <array_name> [size_of_the_array];
	 *
	 */

	/*Declare the size of an array using symbolic constant*/
	int i;
	int sum;
	int ages[5]; /*ages[10]*/

	/*a loop to add the ages to our ages array*/
	for (i = 0; i < 5; i++) {
		printf("Enter the age of student %i: \n", i+1);
		scanf("%d", &ages[i]);
	}

	/*find the sum of all the ages of the students*/
	for (i = 0; i < 5; i++) {
		sum += ages[i];
	}

	/*print the output*/
	printf("The sum of all ages is: %i", sum);

	return 0;
}


