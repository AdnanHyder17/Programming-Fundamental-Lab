//Calculate the area for a rectangle in which user inputs width and length of a rectangle.
//Formula: area of a rectangle=width * height. 

#include<stdio.h>
int main() {
	int width;
	int height;
	printf("enter width of the rectangle: ");
	scanf("%f",&width);
	printf("enter height of the rectangle: ");
	scanf("%f",&height);
	int area = width*height;
	printf("The Area of the rectangle is: %f",area);

	return 0;
}
