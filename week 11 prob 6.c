#include <stdio.h>
float middle(int arr[], int *size) {
	int mid;
	float center;

	if (*size % 2 == 1) {
		mid = *size/2;
		center = arr[mid];
	} else {
		mid = *size/2;
		center = (arr[mid] + arr[mid-1]) / 2;
	}

	return center;
}

// The program checks if the array is of even number of elements than it takes the average of two middle
// number otherwise if the array is of odd number elements than it outputs the middle elements.

int main() {
	int i, size;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int elements[size];

	printf("Enter the elements: ");
	for(i=0; i<size; i++) {
		scanf("%d", &elements[i]);
	}

	float mid = middle(elements, &size);

	printf("The middle element is: %g", mid);

	return 0;
}
