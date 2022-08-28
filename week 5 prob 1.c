#include <stdio.h>
int main() {
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if (x%2==0 && x%3==0 && x%5==0) {
		printf("This number is multiple of 2,3,5");
	} else if (x%2==0) {
		printf("This number is multiple of 2");
		if (x%5==0) {
			printf("This number is multiple of 2,5");
		}
	} else if (x%3==0) {
		printf("This number is multiple of 3");
		if (x%2==0) {
			printf("This number is multiple of 2,3");
		}
	} else if (x%5==0) {
		printf("This number is multiple of 5");
		if (x%3==0) {
			printf("This number is multiple of 3,5");
		}

	} else {
		printf("This number is not Multiple of 2,3,5");
	}

}
