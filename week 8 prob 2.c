#include <stdio.h>
int main() {

	int i,j, amount, sum=0;

	printf("Enter the amount of numbers you want to enter: ");
	scanf("%d", &amount);

	int num[amount];

	for (i=0; i<amount; i++) {
		printf("Enter the number: ");
		scanf("%d", &num[i]);
	}

	for (j=0; j<amount; j++) {
		if (num[j] > 0) {
			sum = sum + num[j];
		}
	}

	float Average = (float)sum/amount;
	printf("The Sum is %d\nThe Average is %g.", sum, Average);

	return 0;
}
