#include <string.h>
#include <stdio.h>

int main() {
	char firstName[10] = "Arnold";
	char secondName[10] = " Henry";

	strcat(firstName, secondName);

	printf("My name is: %s", firstName);

	return 0;
}

