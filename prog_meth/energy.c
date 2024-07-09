#include <stdio.h>
#include <math.h>
#define SPEED 3.0e8

/*
 *int energy() {
	float energy, mass, speed;

	printf("Enter your energy: \n");
	scanf("%f", &energy);

	printf("Enter your mass: \n");
	scanf("%f", &mass);

	printf("Enter your speed of light: \n");
	scanf("%f", &speed);

	speed = sqrt(energy / mass);
	return speed;
}

int main() {
	float speed = energy();
	return 0;
}*/
float energy (float mass) {
	return mass * SPEED * SPEED;
}

int main() {
	float mass;
	/*Prompt for mass from the user*/
	printf("Enter the mass of the object (kgs): \n");
	scanf("%f", &mass);

	/*call the enegry function */
	float e = energy(mass);

	/*Output th energy of that object*/
	printf("The energy of the object is: %.2e Joules\n", e);

	return 0;
}	
