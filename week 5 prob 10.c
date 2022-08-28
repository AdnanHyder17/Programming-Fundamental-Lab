#include<stdio.h>
#include<math.h>

int main() {
	float a,b,c,i;
	float d,r1,r2;  // r1= root1 and r2= root2

start:

	printf("Enter a, b and c of quadratic equation: ");
	scanf("%f %f %f", &a, &b, &c);

	d= (b*b)-4*a*c;

	if(d > 0) {

		printf("Roots of quadratic equation are: ");
		r1 =  (-b + sqrt(d)) / (2*a);
		r2 = (-b - sqrt(d)) / (2*a);
		printf("%.2f",r1);
		printf("%.2f",r2);

	} else if(d==0) {
		printf("Equal roots \n");

		r1 = r2;
		printf("Root of the equation is: %.3f ",(-b / (2*a)));

	} else {
		printf("Roots are complex numbers.\n");

		r1 = (-b / (2*a));
		r1 = r2;
		i= sqrt(-d) / (2 * a);
		printf("Roots of quadratic equation are: %.3f , %.3fi",r1,i);
	}
	printf("\n");

	goto start;

	return 0;
}