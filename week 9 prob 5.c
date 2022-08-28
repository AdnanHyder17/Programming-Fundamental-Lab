#include <stdio.h>
int volCal(int a, int h) {
	float V = (a*a)*((1/3.0)*h);
	return V;
}

float getData() {
	int a,h;
	float V;
	printf("Enter value of h: ");
	scanf("%d",&h);
	printf("Enter value of a: ");
	scanf("%d",&a);
	V = volCal(a, h);

	return V;
}

int main() {
	printf("The volume of pyramid is %g", getData());
	return 0;
}
