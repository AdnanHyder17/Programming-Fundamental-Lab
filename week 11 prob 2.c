#include <stdio.h>

int sum(int arr[], int *size) {
	int i, sum=0;

	for(i=0; i< *size; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int value, i;

	printf("How many elements do you want in the array: ");
	scanf("%d", &value);

	int arr[value];

	printf("Enter the elements: ");
	for(i=0; i<value; i++) {
		scanf("%d", &arr[i]);
	}

	int add = sum(arr, &value);

	printf("The sum is : %d", add);

	return 0;
}
