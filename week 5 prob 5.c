#include<stdio.h>
int main() {
	int x, y, operation;
	printf("Enter First Number: ");
	scanf("%d",&x);
	printf("Enter Second Number: ");
	scanf("%d",&y);

	printf("Press + for Sum \n Press - for Subtract \n Press * for Multiplication \n Press / for Division: ");
	scanf("%d", &operation);

	switch (operation) {
		case 1:
			printf("Sum = %d\n", x+y);
			break;
		case 2:
			printf("subtraction = %d\n", x-y);
			break;
		case 3:
			printf("multiplication = %d\n", x*y);
			break;
		case 4:
			printf("Division = %d\n", x/y);
			break;
		default:
			printf("Enter valid operation");
	}
}