//Write a c program that prints “I will go to school” if the days are weekdays. Otherwise the program
//should print “I will go to play cricket”. 

#include<stdio.h>
int main() {
	int x;
	printf("Enter the day 1 being monday till 7 being sunday: ");
	scanf("%d", &x);

	switch(x) {
		case 1: {
			printf("I will go to school");
		}
		break;
		case 2: {
			printf("I will go to school");
		}
		break;
		case 3: {
			printf("I will go to school");
			break;
		}
		case 4: {
			printf("I will go to school");
			break;
		}
		case 5: {
			printf("I will go to school");
			break;
		}
		case 6: {
			printf("I will go to play cricket");
			break;
		}
		case 7: {
			printf("I will go to play cricket");
			break;
		}

		default: {
			printf("Invalid Number");
		}
	}
}