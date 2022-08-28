#include <stdio.h>
int main() {

	int students[10], i, j, max = -99, min = 100;

	for (i=0; i<10; i++) {
		printf("Enter Quiz marks of student #%d (Between 0 and 10): ", i+1);
		scanf("%d", &students[i]);

		if (students[i] > 10) {
			printf("Wrong entry.\n");

			while (1) {

				printf("Re-enter Quiz marks of student #%d (Between 0 and 10): ", i+1);
				scanf("%d", &students[i]);

				if (students[i] >= 0 && students[i] <= 10)
					break;
			}
		}

		if (students[i] > max) {
			max = students[i];
		}
		if (students[i] < min) {
			min = students[i];
		}
	}

	for (j=0; j<10; j++) {
		printf("The marks of student #%d are: %d\n", j+1, students[j]);
	}
	printf("The maximum marks are: %d\n", max);
	printf("The minimum marks are: %d\n", min);

	return 0;
}
