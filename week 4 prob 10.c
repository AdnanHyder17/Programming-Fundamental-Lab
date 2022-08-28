#include <stdio.h>
#include<math.h>


int main() {
	// PART (a)

//600 meter long distance = 0.6 km
// covered in 5 mints = 0.08333 hrs

	float dist= 0.6;
	printf("Distance in km = 0.6\n");

	float time = 0.083333;
	printf("Time in hours= 0.83333\n");

	printf("Speed km/hr= %f\n\n\n", (float) dist/time);

// Part (b)

	float base, perpen, hypo;

	printf("Base of Triangle= \n");
	scanf("%f", &base);

	printf("Perpendicular of Triangle= \n");
	scanf("%f", &perpen);

	hypo= sqrt((base * base) + (perpen * perpen));
	printf("Hypotenuse of the Triangle= %.3f\n", hypo);

	return 0;


}