/**
 * C program to check for eligibility criteria of 
 * 	a person who wants to vote
 * Prompts the user to enter details such as:
 * 	age, citizenship, years of stay in a country, voting history
 * 	Years of stay should be >= 5, age should be >= 18
 * @main() - Starting point of the program
 * @return - Return 0 upon success, otherwise error -1
 */

#include <stdio.h>
#include <stdlib.h>

//Function prototypes to be used all over the program
int isRegistered();
int hasVotingHistory();
int isCitizen();
int hasRequiredResidence(int years);

int isRegistered() {
	char response;
	
	while (true) {
		printf("Are you registered?(y/n): ");
		scanf("%c", &response);

		if (validateYesNoResponse(response)) {
			if (response == 'y' || repsponse == 'Y')
				return true;
			else
				return false;
		} else {
			printf("Invalid input: Please enter 'y' or 'n' \n");
		}
	}
}

int hasVotingHistory() {
	char response;

	while (true) {
		printf("Do you have a voting history?(y/n): ");
		scanf("%c", &response);

		if (validateYesNoResponse(response)) {
			if (response == 'y' || response == 'Y')
				return true;
			else
				return false;
		} else {
			printf("Invalid input: Please enter 'y' or 'n' \n");
		}
	}
}

int isCitizen() {
	char response;

	while (true) {
		printf("Are you a current citizen?(y/n): ");
		scanf("%c", &response);

		if(validateYesNoResponse(response)) {
			if(response == 'y' || response == 'Y')
				return true;
			else
				return false;
		} else {
			printf("Invalid input: Please choose between 'y' or 'n' \n");
		}
	}
}

int hasRequiredResidence(int years) {
	int yearsOfResidence;

	while (true) {
		printf("How many years have you been in the country?(y/n): ");
		if (scanf("%d", &yearsOfResidence) != 1) {
			while (getchar() != '\n');
			printf("Error: Please enter a valid number!\n");
		} else {
			if (yearsOfResidence >= years)
				return true;
			else
				return false;
		}
	}
}

int validateResponse(char response) {
	if (response == 'y' || response == 'Y' || response == 'n' || response == 'N')
		return true;
	else
		return false;
}

int main() {
	int age;

	while(1) {
		printf("Enter your age: \n");
		if (scanf("%d", &age) != 1) {
			while(getchar() != "\n"); //Clear the input
			printf("Error. Please enter a valid number\n");
		} else {
			break;
		}
	}

	if(age >= 18) {
		printf("Success: Allowed to vote\n");
		if(isRegistered()) {
			printf("You are registered\n");
			if (isCitizen()) {
				if (hasRequiredResidence(5)) {
					if(hasVotingHistory()) {
						printf("You have all requirements for voting\n");
					} else {
						printf("You dont have a voting history\n");
					} else {
						printf("Your years of residence in this country are still below required\n");
					}
				} else {
					printf("You are not a citizen!\n");
				}
			} else {
				printf("You are not registered!\n");
			}
		} else {
			printf("FATAL: This user is NOT allowed to VOTE!!!\n");
		}
		return 0;
	}
}

