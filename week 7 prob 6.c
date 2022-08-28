#include <stdio.h>

int main() {

	char Q1, Q2, Q3, Q4, Q5;
	int marks=0, lost=0 ; //lost = marks that got deducted

	printf("Q1.If 5x plus 32 equals 4 minus 2x what is the value of x :\nA.-4\nB.-3\nC.2\nD.0\n");
	scanf("%c", &Q1);
	if (Q1 == 'A') {
		marks = marks + 4;
	} else {
		lost = lost + 1;
	}

	printf("Q2.Which one is output device \nA.Mouse\nB.Keyboard\nC.Printer\nD.Headphone\n");
	scanf(" %c", &Q2);
	if (Q2 == 'C') {
		marks = marks + 4;
	} else {
		lost = lost + 1;
	}

	printf("Q3.The term ‘Computer’ is derived from\nA.German\nB.Latin\nC.French\nD.Arabic\n");
	scanf(" %c", &Q3);
	if (Q3 == 'B') {
		marks = marks + 4;
	} else {
		lost = lost + 1;
	}

	printf("Q4.WWW stands for\nA.World whole web\nB.Wide World Web\nC.Web World Wide\nD.World Wide Web\n");
	scanf(" %c", &Q4);
	if (Q4 == 'D') {
		marks = marks + 4;
	} else {
		lost = lost + 1;
	}

	if (lost == 4) {
		printf("Sorry you did not qualify for the admission.");
	} else {
		printf("Q5.Product of Force and Velocity is called:\nA.Work\nB.Power\nC.Energy\nD.Momentum\n");
		scanf(" %c", &Q5);
		if (Q5 == 'B') {
			marks = marks + 4;
		}
		if (marks == 20) {
			printf("Congratulations! you have qualified for the admission.");
		} else {
			printf("Sorry you did not qualify for the admission.");
		}
	}

	return 0;
}
