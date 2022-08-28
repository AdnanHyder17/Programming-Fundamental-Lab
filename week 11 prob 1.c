#include <stdio.h>
struct nums {
	int num1;
	int num2;
	int num3;
};


struct nums swapped(int *a, int *b, int *c) {
	struct nums n;
	int temp =  *a;
	n.num1 = *b;
	n.num2 = *c;
	n.num3 = temp;

	return n;
}

int main() {
	int num1, num2, num3;

	printf("Enter Value of num 1: ");
	scanf("%d", &num1);
	printf("Enter Value of num 2: ");
	scanf("%d", &num2);
	printf("Enter Value of num 3: ");
	scanf("%d", &num3);

	printf("\nBefore swapping:\nnum 1 is : %d\nnum 2 is %d\nnum 3 is %d", num1, num2, num3);

	struct nums swap;
	swap = swapped(&num1, &num2, &num3);

	printf("\n\nAfter swapping:\nnum 1 is : %d\nnum 2 is %d\nnum 3 is %d", swap.num1, swap.num2, swap.num3);

	return 0;
}
