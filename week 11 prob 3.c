#include <stdio.h>
struct extreme {
	int min;
	int max;
};

struct extreme boundary(int arr[], int *size) {
	struct extreme E;
	int i;

	E.max = -99999, E.min = 99999;
	for(i=0; i<*size; i++) {
		if (arr[i] > E.max) {
			E.max = arr[i];
		}
		if (arr[i] < E.min) {
			E.min = arr[i];
		}
	}

	return E;
}

int main() {
	int value, i;
	struct extreme call;

	printf("Enter the number of values you want in the array: ");
	scanf("%d", &value);

	int arr[value];

	printf("Enter the elements: ");
	for(i=0; i<value; i++) {
		scanf("%d", &arr[i]);
	}

	call = boundary(arr, &value);

	printf("The maximum is : %d\n", call.max);
	printf("The minimum is : %d", call.min);

	return 0;
}
