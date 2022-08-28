#include <stdio.h>
#include <string.h>
int wordcount(char text[], int *size) {
	int i, count=1;

	for(i=0; i<*size; i++) {
		if (text[i] == ' ') {
			count++;
		}
	}

	return count;
}


int main() {
	char name[50];

	printf("Enter a string: ");
	fgets(name, 50, stdin);

	int size = strlen(name);

	int call = wordcount(name, &size);
	printf("There are %d words in the string.", call);

	return 0;
}
