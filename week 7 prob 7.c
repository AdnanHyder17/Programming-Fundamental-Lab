//you are asked to generate an electricity bill. write a program to calculate the total electricity bill according to the given condition:
//For the first 50 units Rs. 0.50/unit
//For the next 100 units Rs. 0.75/unit
//For the next 100 units Rs. 1.20/unit
//For units above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill.

#include <stdio.h>
int main() {
	int units, r_units; //r_units: remaining units
	float units_price, total;
	printf("Enter total consumed units: ");
	scanf("%d", &units);

	if (units > 0) {
		if(units <= 50) {
			units_price = units * 0.50;
		}

		else if (units>50 && units<=150) {
			r_units = units - 50;
			units_price= (50*0.5) + (r_units*0.75);
		}

		else if (units>150 && units <=250) {
			r_units = units - 150;
			units_price= (50*0.5) + (100*0.75) + (r_units*1.20);
		}

		else if (units > 250) {
			r_units= units - 250 ;
			units_price= (50*0.5) + (100*0.75) + (100*1.20) + (r_units*1.50);
		}

		total= units_price + (units_price * 0.2) ;

		printf("\nElectricity Bill: %f", total);
	}

	else {
		printf("\nUnits must be greater than 0");
	}

	return 0;
}