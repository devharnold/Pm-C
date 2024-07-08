#include <stdio.h>

int main() {
	int index = 20;
	while (index >= 7) {
		if (index % 2 == 0){
			printf("%d\n", index);
		}
		index--;
	}
	return 0;
}
