//Write a C program to check isosceles, scalene or equilateral triangle when sides are given using conditional
//operators.

#include<stdio.h>
int main() {
	float length1, length2, length3;

	printf("Enter length 1 of the triangle ");
	scanf("%f", &length1);
	printf("Enter length 2 of the triangle ");
	scanf("%f", &length2);
	printf("Enter length 3 of the triangle ");
	scanf("%f", &length3);

	(length1==length2 && length2==length3)? printf("The triangle is equilateral"):(length1==length2 || length1==length3 || length2==length3 )? printf("The triangle is isosceles"):printf("The triangle is scalene");
	return 0;
}
