//A car traveled for some hours. The time car traveled is taken at run time of the program,
//and it must not be negative and must be between one to five hours. The car had not
//traveled same distance in each hour. The distance that the car covered must not be
//negative. Write a C Program that computes the Average Speed of the Car in miles per hour.
//Hint: the restrictions can be displayed in the form of message on the window.

#include <stdio.h>

int main() {
	int dis1, dis2, time1, time2, velo1 = 0, velo2 = 0, avg;
	printf("Only enter integers. \nTime can only be in between 1 to 5 hrs. \nDistance should be different evey hr, and it cannot be negative.");

	//Inputs From User
	printf("\nEnter 1st distance travelled: ");
	scanf("%d", &dis1);

	printf("\nEnter 1st time duration: ");
	scanf("%d", &time1);

	printf("\nEnter 2nd distance travelled: ");
	scanf("%d", &dis2);

	printf("\nEnter 2nd time duration: ");
	scanf("%d", &time2);

	velo1 = dis1 / time1;
	velo2 = dis2 / time2;
	avg = (velo1 + velo2) / 2;

	//Output
	printf("\nAverage speed is: %d", avg);

	return 0;
}
