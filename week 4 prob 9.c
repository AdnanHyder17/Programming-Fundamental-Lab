#include<stdio.h>
int main() {
	// sell price is 45 rp
	// cost price is 20 rp

	int profit= 45-20;
	printf("Profit = sell price - cost price \n");
	printf("Profit = 45 - 20 = %d\n", profit);

	//Profit Percentage
	int P = ((profit*100)/20)-100;
	printf("\nProfit Percentage = %d", P);

	return 0;

}