//A customer asks the IT firm to develop a program in C language, which can take tax rate
//and salary from the user on runtime and then calculate the tax, the user has to pay and
//the salary he/she will have after paying the tax. Tax rate must be between 0-100.

#include<stdio.h>

int main() {
	float taxrate;
	float Salary;
	// Inputs from the user

	printf("Enter Salary:");
	scanf("%f",&Salary);
	printf("Enter tax rate: (Must be betweeen 0-100)");
	scanf("%f",&taxrate);
	float tax = Salary* (taxrate/100);
	float Newsalary = Salary-tax;

	// Print Salary after tax
	printf("The new salary is: %f", Newsalary);
}
