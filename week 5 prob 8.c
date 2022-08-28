#include <stdio.h>
int main() {
	float x,y,z;
	printf("enter first side of the triangle\n");
	scanf("%f", &x);
	printf("enter second side of the triangle\n");
	scanf("%f", &y);
	printf("enter third side of the triangle\n");
	scanf("%f", &z);

	if (x==y && x==z && y==z) {
		printf(" Triangle is equilateral");
	} else if (x==y || x==z || y==z) {
		printf(" Triangle is Isosceles");
	} else if (x!=y && x!=z && y!=z ) {
		printf(" Triangle is Scalene");
	} else {
		printf("Not a Triangle");
	}
	
	return 0;
}










