#include <stdio.h>

main() {
	int T;
	printf("Enter temperature (must be in centigrade): ");
	scanf("%d", &T);

	if (T<=0) {
		printf("It is a Freezing Temperature");
	}

	else if (T>0 && T<=10) {
		printf("It is very Cold weather");
	}

	else if (T>10 && T<=20) {
		printf("It is Cold weather");
	}

	else if (T>20 && T<=30) {
		printf("It is Normal Temperature");
	}

	else if (T>30 && T<=40) {
		printf("It is Hot weather");
	}

	else {
		printf("It is very Hot weather");
	}

	return 0;
}