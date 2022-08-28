#include<stdio.h>
int main() {
	int num,i;
	int factorial=1;

	printf("Enter number for factorial: ");
	scanf("%d", &num);
	if (num<0) {
		printf("Invalid Number");
	} else if ( num==0 ) {
		printf("The Factorial is 1\n");
	} else {
		for(i=num; i>= 1; i--) {
			factorial= factorial * i;
		}
		printf("Factorial of %d is %d", num,factorial);
	}
}