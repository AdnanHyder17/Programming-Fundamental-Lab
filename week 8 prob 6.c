#include <stdio.h>
int main() {

	int students1[5], students2[5], i, j, k, max, min, max1 = -99, max2 = -99, min1 = 100, min2 = 100, count, cout;

	for (i=0; i<5; i++) {
		printf("Enter Quiz marks of student #%d (Between 0 and 10): ", i+1);
		scanf("%d", &students1[i]);

		if (students1[i] > 10) {
			printf("Wrong entry.\n");

			while (1) {

				printf("Re-enter Quiz marks of student #%d (Between 0 and 10): ", i+1);
				scanf("%d", &students1[i]);

				if (students1[i] >= 0 && students1[i] <= 10)
					break;
			}
		}

		if (students1[i] > max1) {
			max1 = students1[i];
		}
		if (students1[i] < min1) {
			min1 = students1[i];
		}
	}

	for (j=0; j<5; j++) {
		printf("Enter Quiz marks of student #%d (Between 0 and 10): ", j+6);
		scanf("%d", &students2[j]);

		if (students2[j] > 10) {
			printf("Wrong entry.\n");

			while (1) {

				printf("Re-enter Quiz marks of student #%d (Between 0 and 10): ", i+6);
				scanf("%d", &students2[j]);

				if (students2[j] >= 0 && students2[j] <= 10)
					break;
			}
		}

		if (students2[j] > max2) {
			max2 = students2[j];
		}
		if (students2[j] < min2) {
			min2 = students2[j];
		}
	}

	if (max1 >= max2) {
		max = max1;
	} else {
		max = max2;
	}

	if (min1 <= min2) {
		min = min1;
	} else {
		min = min2;
	}

	for (k=0; k<10; k++) {
		if (k<5) {
			printf("The marks of student #%d are: %d\n", k+1, students1[k]);
		} else {
			printf("The marks of student #%d are: %d\n", k+1, students2[k-5]);
		}
	}

	for (cout=0; cout<5; cout++) {
		for (count=0; count<5; count++) {
			if (students1[cout] == students2[count]) {
				printf("The common element is %d.", students1[cout]);
			}
			break;
		}
	}

	printf("\nThe maximum marks are: %d\n", max);
	printf("The minimum marks are: %d\n", min);

	return 0;
}
