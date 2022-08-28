#include <stdio.h>
int main() {

	int i, j, num;

	for (i=3; i<=10; i++) {
		if (i%2 == 1) {
			for (j=1; j<=10; j++) {
				num = i * j;
				printf("%d x %d = %d\n", i, j, num);
			}
			printf("\n");
		}
	}
	return 0;
}
