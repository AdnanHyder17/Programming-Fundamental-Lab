#include <stdio.h>
#include <string.h>
int main() {
	int stu[5][9];
	int i, j, sum;

	for(i=0; i<5; i++) {
		sum=0;
		printf("For student #%d",i+1);
		for(j=0; j<9; j++) {
			if(j==0) {
				printf("\nEnter student id: ");
				scanf("%d",&stu[i][j]);
			} else if(j<6) {
				printf("Enter Your marks for course #%d: ", j);
				scanf("%d", &stu[i][j]);
				sum += stu[i][j];
			} else if(j==6) {
				stu[i][j] = 500;
			} else if(j==7) {
				stu[i][j] = sum;
			} else
				stu[i][j] = (sum/5);

		}
		printf("\n");
	}
	printf("Studentid\tcourse 1\tcourse 2\tcourse 3\tcourse 4\tcourse 5\ttotal marks\tobtained marks\tpercentage\n");
	for(i=0; i<5; i++) {
		for(j=0; j<9; j++) {
			printf("%d\t\t", stu[i][j]);
		}
		printf("\n");
	}
	return 0;
}

