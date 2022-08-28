#include <stdio.h>

int check(int num) {
	int i, j, count = 0;
	for (i=2; i<num; i++) {
		if (num%i==0) {
			count++;
		}
	}

	if (count == 0 )
		return 1;

	else
		return 0;

}
int main() {
	int num, output;

	printf("Number: ");
	scanf("%d", &num);

	output= check(num);

	if(output == 1)
		printf("Number is prime");

	else
		printf("Number is not prime");

	return 0;
}