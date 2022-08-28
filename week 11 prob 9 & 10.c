#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int n=0;
	char *rollno;

	printf("Enter the number of characters in your username (First and Last name) ");
	scanf("%d", &n);
	fflush(stdin);

	int *ptr;
	ptr=(char *)malloc(n*sizeof(char));

	if(ptr != NULL) {
		printf("Enter your name: "); ;
		gets(ptr);
	} else {
		printf("Memory not allocated\n") ;
	}
	printf("%s", ptr) ;

	rollno=(char *)realloc(rollno, 8+n);
	if(rollno != NULL) {
		printf("\nEnter your roll number: ");
		fflush(stdin) ;
		gets(rollno) ;
	} else {
		printf("Memory not allocated");
	}
	strcat(rollno, " ") ;
	strcat(rollno, ptr) ;
	printf("%s", rollno) ;
	free(ptr);
	free(rollno);
	return 0;
}












