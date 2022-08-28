#include <stdio.h>
#include <string.h>
int main () {
	char first[20];
	char last[20];
	printf("First Name: ");
	gets(first); // john
	printf("Last Name: ");
	gets(last); // ailiya

	strcat(first,last);
	puts(first); //johnailiya

	char temp;
	int i;

	for (i=0 ; i<strlen(first)/2 ; i++) {
		temp = first[i];
		first[i] = first[strlen(first)-1-i];
		first[strlen(first)-1-i] = temp;
	}

	puts(first);

	return 0;
}