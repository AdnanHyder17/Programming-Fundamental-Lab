#include <stdio.h>
int main() {
	char C;
	printf("Enter the The Character: ");
	scanf("%c", &C);

	if (C>=65 && C<=90) {
		printf ("It is uppercase character");
	} else if (C>=97&& C<=122) {
		printf ("It is in lowercase character");
	} else if (C>=48& C<=57) {
		printf ("It is a digit");
	} else if (C>=0 && C<=47 || C>=58 && C<=64 || C>=91 && C<=96 || C>=123 && C<=127) {
		printf("it is a special character");
	} else {
		printf("invalid Character");
	}

	return 0;
}