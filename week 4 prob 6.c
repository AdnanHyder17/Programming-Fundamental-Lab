#include <stdio.h>
#include <math.h>

int main() {
	float x1, x2, y1, y2, s;
	double dist;
	printf("Enter coordinates for the distance (x1,y1,x2,y2): \n");
	scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
	s=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	dist= sqrt(s);
	printf("Distance= %lf\n", dist);

	float X1, X2, Y1, Y2, MPx, MPy;
	printf("Enter Coordinates for Midpoint (X1,Y1,X2,Y2): \n");
	scanf("%f%f%f%f", &X1, &Y1, &X2, &Y2);
	MPx= (X2+X1)/2;
	MPy= (Y2+Y1)/2;
	printf("Midpoint= (%0.1f,%0.1f) \n", MPx, MPy);

	int a, b, c, disc;
	double r1, r2;
	printf("Enter Value of a,b,c= \n");
	scanf("%d%d%d", &a, &b, &c);
	disc = b * b - 4 * a * c;
	if (a == 0) {
		printf("Discriminent should not be 0");

	} else {
		r1 = (-b + sqrt(disc)) / (2 * a);
		r2 = (-b - sqrt(disc)) / (2 * a);
		printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
	}
	return 0;
}

