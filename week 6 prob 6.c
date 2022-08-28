//Write a program to calculate the fares of seats in the train. The train has three classes i.e., Economy, AC
//standard, Business Class. The user will provide the number of seats in any one of the classes mentioned
//earlier. The user can also compute fares of seats of any combination of the classes (Economy, AC
//Standard, Business Class). For Example, the user wants to calculate the fares of two seats in Economy
//class, 2 seats in Business class and two seats in Ac Standard class. Seat in Economy class has fare equals
//600 Rs. Seat in Ac standard class has fare equals 1000 Rs and Seat in business class has fare equals 2000
//Rs.

#include <stdio.h>

main() {
	int se, sac, sbc; //s=seats
	int ps, pac, pbc; //p=price
	printf("Enter the number of seats in Economy: ");
	scanf("%d", &se);
	printf("Enter the number of seats in AC standard: ");
	scanf("%d", &sac);
	printf("Enter the number of seats in Business Class: ");
	scanf("%d", &sbc);

	ps = ( se>=0 ) ? (se*600):0;
	printf("\n%d",ps);
	pac = ( sac>=0 ) ? (sac*1000):0;
	printf("\n%d",pac);
	pbc = ( sbc>=0 ) ? (sbc*2000):0;
	printf("\n%d",pbc);


	printf("\nTotol Fare= %d", (ps+pac+pbc));

}