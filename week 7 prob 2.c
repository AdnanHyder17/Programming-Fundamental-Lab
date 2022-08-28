#include <stdio.h>
main() {
	int N,value;
	float avg;
	int a=1,total=0,even=0,odd=0,fact=0;
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	if(N>=10) {
		do {
			printf("Input the value of element %d: ", a);
			scanf("%d",&value);
			total=total+value;
			avg=total/N;
			a++;
			if(value%2==0) {
				even=even+1;
			} else {
				odd=odd+1;
			}
			if (value%3==0) {
				fact=fact+1;
			}
		} while(a<=N);
		printf("\nSTATISTICS OF Input Series\n");
		printf("\nAverage of the Series is %.2f", avg);
		printf("\nNumbers of even elements: %d", even);
		printf("\nNumbers of odd elements: %d", odd);
		printf("\nNumber of elements which are factors of 3: %d", fact);
	} else {
		printf("\nInvalid Number");
	}
	return 0;
}