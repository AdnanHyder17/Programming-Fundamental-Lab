#include<stdio.h>
int main() {
	int yob, age;
	printf("Enter Your Y.O.B: ");
	scanf("%d", &yob);
	age=2021-yob;
	if (age>=18) {
		printf("You are eligible to cast the vote");
	} else {
		printf("You are underage");
	}
	return 0;
}