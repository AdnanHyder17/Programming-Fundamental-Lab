#include<stdio.h>
int main()

{
	char S,s,N,n,press;
	printf("Are you sure to Save [S/s] / [N/n]?\n");
	scanf("%c",&press);

	if (press=='S' || press=='s') {
		printf("Saved successfully");
	} else if (press=='N' || press=='n') {
		printf("Not Saved");
	} else {
		printf("Choose the Right option");
	}
	return 0;
}