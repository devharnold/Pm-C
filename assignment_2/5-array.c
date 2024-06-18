/**
 * C program that finds the max and min values in an array of integers.
 * The program prompts the user to enter the number of elements and elements
 * @return - Return 0 upon success, else -1 error
 */

#include <stdio.h>

//define the pair structure
struct pair {
	int min;
	int max;
};

struct pair getMinMax(int arr[], int n) {
	struct pair minmax;
	int i;

	/*If there is only one element then return it as min and max both*/
	if (n == 1) {
		minmax.max = arr[0];
		minmax.min = arr[0];
		return minmax;
	}

	/*If there are more than one elements, then initialize min and max*/
	if (arr[0] > arr[1]) {
		minmax.max = arr[0];
		minmax.min = arr[1];
	} else {
		minmax.max = arr[1];
		minmax.min = arr[2];
	}

	for (i = 2; i < n; i++) {
		if (arr[i] > minmax.max)
			minmax.max = arr[i];
		else if (arr[i] < minmax.min)
			minmax.min = arr[i];
	}
	return minmax;
}

/*Driver code for our program*/
int main() {
	int arr[] = {1000, 11, 445, 1, 330, 3000};
	int arr_size = 6;
	struct pair minmax = getMinMax (arr, arr_size);
	printf("nMinimum element is %d", minmax.min);
	printf("nMaximum element is %d", minmax.max);
	getchar();
	return 0;
}

