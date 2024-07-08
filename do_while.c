#include <stdio.h>

//variable initialization;
//do {
	/*code*/
//	variable modification

int main() {
	int index = 20;

	do{
		if (index % 2 == 0){
			printf("%d\n", index);
		}
		index--;
	}while (index >= 7);

	return 0;
}
