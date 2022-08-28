#include <stdio.h>
int main() {

	int size, i, remove, change, j, k;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int elements[size];

	printf("Enter elements in the array: ");

	for (i=0; i<size; i++) {
		scanf("%d", &elements[i]);
	}

	printf("Enter the element position to delete: ");
	scanf("%d", &remove);

	remove -= 1;

	for (j=remove; j<size; j++) {
		elements[j] = elements[j+1];
	}

	printf("Array elements after delete are: ");
	for (k=0; k<size-1; k++) {
		printf("%d ", elements[k]);
	}

	return 0;
}
