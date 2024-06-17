/**
 * C program to implement Bubble sort algorithm
 * The program asks user for input(array) and implement the algorithm
 * 
 * @return - Return (the sorted array) with 0 upon success else 1 with error message
 */

#include <stdio.h>


//function to implement swap
void swap(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

//bubble sort algorithm function
void bubbleSort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)

		//considering last i elements already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
}

//print array function
void printArray(int arr[], int size) {
	int i;
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
       printf("\n");
}

//main code
int main() {
	int n, i;

	//Ask user for size of array
	printf("Enter random number of elements in the array: \n");
	scanf("%d ", &n);

	//declare array
	int arr[n];

	//ask for array elements
	printf("Enter random elements of the array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	//sort the array
	bubbleSort(arr, n);


	//print sorted array
	printf("Sorted array: ");
	printArray(arr, n);

	return 0;
}

