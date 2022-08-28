//Construct a C program with the flowchart below. The input value of the Principle must be
//between 100 Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and
//Time Period must be between 1 to 10 years. Hint: these restrictions can be displayed in the
//form of message on the window. Simple interest can be computed by using the formula
//mentioned below.
//Simple Interest=(P*R*T)/100

#include<stdio.h>
int main() {
	float P, R, I;
	int T;
	printf("Enter principle between 100 and 1000000 then rate per annum between 5% to 10% then time between 1 to 10 years ");
	scanf("%f %f %d",&P,&R,&T);
	I = (P*R*T)/100;
	printf("interest is %F",I);
	return 0;
}
