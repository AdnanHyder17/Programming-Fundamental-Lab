#include <stdio.h>

int main() {
	float temp, F, K;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&temp);
	F= (temp*9/5)+32;
	K= temp+273.15;
	printf("Temperature in Fehrenheit: %0.2f\n",F);
	printf("Temperature in Kelvin: %0.2f\n",K);

	return 0;

}