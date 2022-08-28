#include <stdio.h>
struct phone {
	int area_code;
	int exchange;
	int number;
};

int main() {
	struct phone p1, p2;
	p2.area_code=212;
	p2.exchange=767;
	p2.number=8900;
	printf("Enter your area code: ");
	scanf("%d", &p1.area_code);
	printf("Enter your exchange: ");
	scanf("%d", &p1.exchange);
	printf("Enter your number: ");
	scanf("%d", &p1.number);

	printf("\nMy number is (%d) %d-%d", p2.area_code, p2.exchange, p2.number);
	printf("\nYour number is (%d) %d-%d", p1.area_code, p1.exchange, p1.number);
}