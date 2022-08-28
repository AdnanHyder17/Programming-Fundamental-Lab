#include <stdio.h>
int main() {

	int i, j;
	float elements[6];

	for (i=0; i<6; i++) {
		printf("Enter element # %d: ", i+1);
		scanf("%f", &elements[i]);
	}

	for (j=5; j>=0; j--) {
		printf("%g, ", elements[j]);
	}

	return 0;
}
