#include <stdio.h>
int main() {

	int n, i, j, k, z;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	int rows = n*2;

	for (i=0; i<n; i++) {
		for (j=0; j<n-i; j++) {
			printf("*");
		}
		for (k=0; k<(rows-(j*2)); k++) {
			printf(" ");
		}
		for (z=n-i; z>0; z--) {
			printf("*");
		}
		printf("\n");
	}

	for (i=1; i<=n; i++) {
		for (j=0; j<i; j++) {
			printf("*");
		}
		for (k=0; k<(rows-(j*2)); k++) {
			printf(" ");
		}
		for (z=0; z<i; z++) {
			printf("*");
		}
		printf("\n");
	}

}
