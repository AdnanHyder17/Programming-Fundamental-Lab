#include<stdio.h>

int main()
{
	int a=2, b=4, c=2;
	float x1,x2,x3;
	// First satement
	x1= a+b/c+b%2*a-c;
	printf("Value of x in 1st statement: %f \n", x1);
	// second statement
	x2= a++*(a/b*c)+b--;
	printf("Value of x in 2st statement: %f \n", x2);
	// third statement
	x3= a++*(a/b*c)+--b;
	printf("Value of x in 3st statement: %f \n", x3);
	
	return 0;
	
	
}