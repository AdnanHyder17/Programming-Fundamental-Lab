#include <stdio.h>
#include <string.h>
void assign(int marks, int ex) {

	if (marks>=60 && marks<70 && ex>=1) {
		printf("Selected as assistant developer\n");
	}
	if (marks>=70 && ex>=2) {
		printf("Selected as associate developer");
	}
}
int main() {
	int marks,ex;
	printf("Enter marks: ");
	scanf("%d", &marks);
	printf("Enter your experience: ");
	scanf("%d", &ex);
	if (marks>=60) {
		assign(marks,ex);
	} else if (marks>=50 && marks<60 && ex>=0) {
		printf("Selected for the post of trainee engineer");
	} else {
		printf("Not selected");
	}
	return 0;
}





