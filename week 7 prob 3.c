#include<stdio.h>
main() {
	int num,sum,i,p=0;
	int a,b,c,d,e,x,y,z;
	printf("Enter 5 digit number: ");
	scanf("%d",&num);
	if (num>9999 && num<100000) {

		a=num/10000;
		x=num%10000;
		b=x/1000;
		y=x%1000;
		c=y/100;
		z=y%100;
		d=z/10;
		e=z%10;
		sum=a+b+c+d+e;
		printf("%d",sum);

		if (sum%2==0) {
			for (i=2 ; i<num; i++) {
				if (num%i==0) {
					p=1;
				}

				if (p==1) {
					printf("\nit is prime");
				}

				else {
					printf("\nit is not prime");
				}
			}
		} else if (sum%2!=0) {
			if (a==e && b==d) {
				printf("\nIt is palindrone");
			} else {
				printf("\nIt is not a palindrone");
			}
		}
	} else {
		printf("Not a five digit number");
	}
}