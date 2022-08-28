#include <stdio.h>
int main() {

	int array1[6], array2[6], i, j, k;
	char check = 'N';

	for (i=0; i<6; i++) {
		printf("Enter element #%d: ", i+1);
		scanf("%d", &array1[i]);
	}

	printf("\nEnter the element of second array\n");

	for (j=0; j<6; j++) {
		printf("Enter the element #%d: ", j+1);
		scanf("%d", &array2[j]);
	}

	for (k=0; k<6; k++) {
		if (array1[k] != array2[k]) {
			check = 'Y';
		}

	}

	if (check == 'Y') {
		printf("The array is Asymetric.");
	} else {
		printf("The array is Symetric.");
	}

	return 0;
}
