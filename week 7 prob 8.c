#include <stdio.h>
int main() {
	int bs,ms,no=1; //base salary and monthly sales
	float ns; // Net salary
	char x= 'n';

	while (x != 'y') {
		printf("\nEnter your salary: ");
		scanf("%d", &bs);

		if (bs>=60000) {
			printf("Enter Your monthly salary: ");
			scanf("%d",&ms);

			if(ms >= 10,000,000) {

				ns = (ms * 0.035) + bs;
				printf("\nworker%d ) Net salary: %f\n", no, ns);
			} else {
				ns = (ms * 0.02) + bs;
				printf("\nworker%d) Net salary: %f\n", no, ns);
			}
		} else {
			x='y';
			printf("Exit");
		}

		no++;
	}
	return 0;
}