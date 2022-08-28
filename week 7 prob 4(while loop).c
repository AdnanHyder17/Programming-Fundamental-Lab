#include <stdio.h>

main() {
	int num,i,j,fibonacci,sum=0;
	printf("Enter the Number: \n");
	scanf("%d",&num);
	if(num<=500) {
		int f1=1,f2=1;
		printf("\n%d ,%d",f1,f2);

		while(i<500) {
			fibonacci=f1+f2;
			printf(" ,%d",fibonacci);
			f1=f2;
			f2=fibonacci;
			sum=sum+fibonacci;
			i+=f1;
		}
		sum=sum+2;
		printf("\nThe Sum= %d  ",sum);

		if (sum%2==0 && sum%3==0 && sum%5==0) {
			printf("This number is divisible of 2,3,5");
		} else if (sum%2==0) {
			printf("This number is divisible of 2");
			if (sum%5==0) {
				printf("This number is divisible of 2,5");
			}
		} else if (sum%3==0) {
			printf("This number is divisible of 3");
			if (sum%2==0) {
				printf("This number is divisible of 2,3");
			}
		} else if (sum%5==0) {
			printf("This number is divisible of 5");
			if (sum%3==0) {
				printf("This number is divisible of 3,5");
			}

		} else {
			printf("This number is not divisible of 2,3,5");
		}
	} else {
		printf("Number Should not be greater than 500");
	}
	return 0;
}
