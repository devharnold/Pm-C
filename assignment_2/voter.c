/**
 * C program to check if a user is eligible to voting
 * Prompts the user to enter their age and whether they
 * 	are registered voters
 * @main - Starting point of this program
 * @retun - Return 0 upon success else -1 error; 
 */

#include <stdio.h>
#include <stdlib.h>

//A function prototype to check if is registered
int isRegistered();

int isRegistered() {
	char response;

	printf("Are you registered?(y/n): ");
	scanf("%c", &response);

	if (response == 'y' || response == 'Y')
		return 1; //This is true
	else
		return 0; //This is false
}

int main() {
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	if (age >= 18) {
		printf("Success: Allowed to vote\n");
		if (isRegistered())
			printf("You are registered!\n");
		else
			printf("You are not registered!\n");
	}
	else {
		printf("You are not allowed to vote\n");
	}
	return 0;
}

