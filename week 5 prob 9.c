#include <stdio.h>
main() {
	int m;
	printf("Enter the Month\n");
	scanf("%d",&m);

	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) {
		printf("This month has 31 days");
	} else if (m==4 || m==6 || m==9 || m==11 ) {
		printf("This month has 30 days");
	} else if (m==2) {
		printf("The program can have 28 or 29 days");
	} else {
		printf("Invalid month");
	}
	
	return 0;
}
