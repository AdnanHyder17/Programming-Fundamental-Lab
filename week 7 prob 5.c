#include <stdio.h>

main() {
	int marks;
	int i=1,pass=0,fail=0,avg=0,exc=0;
	do {
		printf("%d) Input marks: ",i);
		scanf("%d",&marks);
		if( marks>=1 && marks<=100 ) {
			if(marks>=50) {
				pass=pass+1;
				if(marks>=75 && marks<=100) {
					avg=avg+1;
					if(marks>=86 && marks<=89) {
						exc=exc+1;
					}
				}
			} else {
				fail=fail+1;
			}
		} else {
			printf("Invalid marks\n");
		}
		i++;
	} while (i<=10);

	printf("\nPassed Students: %d", pass);
	printf("\nFailed Students: %d", fail);
	printf("\nExcellent Students: %d", exc);
	printf("\nAbove average Students: %d", avg);

	return 0;
}