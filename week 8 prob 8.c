#include <stdio.h>
int main() {

	int elements[100];
	int size, i, insert, change, j;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter elements in the array: ");

	for (i=0; i<size; i++) {
		scanf("%d", &elements[i]);
	}

	printf("Enter element to insert: ");
	scanf("%d", &insert);
	printf("Enter the element position: ");
	scanf("%d", &change);

	for(i=size; i>=change ; i--) {

		elements[i] = elements[i-1];
	}

	elements[change-1] = insert;

	printf("Array elements after insertion: ");
	for (j=0; j<size+1; j++) {
		printf("%d\t", elements[j]);
	}

	return 0;
}
