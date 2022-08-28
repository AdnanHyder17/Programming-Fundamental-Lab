#include <stdio.h>
#include <string.h>
int main() {

	char course[100], maxfreqchar;
	int maxfreq = 0; //alphabet with max time repeated
	int i, j,count;

	printf("Enter name or course to get max freq of chars: \n");
	gets(course);

	for (i=0; i<strlen(course); i++) {
		count=0;

		for (j=0; j<strlen(course); j++) {

			if (course[i] == course[j]) {
				count++;

			}
		}

		if (maxfreq<count) {
			maxfreq=count;
			maxfreqchar= course[i];
		}
	}

	printf("Character with maximum frequency of %d is %c",maxfreq,maxfreqchar);

	return 0;
}