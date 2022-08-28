#include <stdio.h>
float sum(float *x, float *y) {
	float add = *x + *y;
	return add;
}

float diff(float *x, float *y) {
	float subtract = *x - *y;
	return subtract;
}

float multiply(float *x, float *y) {
	float product = *x * *y;
	return product;
}

float divide(float *x, float *y) {
	float div = *x / *y;
	return div;
}

int main() {
	int choice;
	float num1, num2;

	printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
	printf("Select the operation you want to perform: ");
	scanf("%d", &choice);
	printf("\nEnter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);

	if (choice == 1) {
		printf("The Sum of the two inputs is %g", sum(&num1, &num2));
	} else if (choice == 2) {
		printf("The difference of the two inputs is %g", diff(&num1, &num2));
	} else if (choice == 3) {
		printf("The Multiplication of the two inputs is %g", multiply(&num1, &num2));
	} else {
		printf("The Division of num 1 by num 2 is %g", divide(&num1, &num2));
	}

	return 0;
}
