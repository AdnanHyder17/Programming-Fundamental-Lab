#include<stdio.h>
int reverse(int num) {
	int digit;
	static int sum=0;
	if(num !=0) {
		digit = num % 10;
		sum= sum*10 + digit;
		reverse(num/10);
	} else
		return sum;

	return sum;
}

int palindrome(int num) {
	if(num == reverse(num))
		return 1;

	else
		return 0;
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	if( palindrome (num) == 1)
		printf("Palindrome");

	else
		printf("not a palindrome");

	return 0;
}

