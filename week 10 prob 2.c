#include <stdio.h>
int value(int,int);

int main() {
	int n1, n2, lcm;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("\nEnter second number: ");
	scanf("%d", &n2);

	lcm = value(n1,n2);
	printf("\nLCM of %d and %d is : %d\n", n1,n2,lcm);
	return 0 ;
}

int value(int n1, int n2) {
	static int temp = 1;
	if(temp%n1 == 0 && temp%n2 == 0) {
		return temp;
	} else {
		temp++;
		value(n1,n2);
		return temp;
	}
}