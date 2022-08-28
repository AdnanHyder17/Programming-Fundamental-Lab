#include <stdio.h>
int main() {

	int row, i, j, k;

	printf("Enter rows: ");
	scanf("%d", &row);

	for (i=row; i>0; i--) {
		for (j=0; j<i-1; j++) {
			printf(" ");
		}

		for (k=0; k<5; k++) {
			if (i == row || i == 1) {
				printf("*");
			} else {
				if (k==0 || k==4) {
					printf("*");
				} else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
