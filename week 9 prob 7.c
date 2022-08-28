#include <stdio.h>
int main() {
	int i,j,plotno;
	float area, max = -99;
	float D[8][2]= {150.6,126.9,354,451.51,172.23,75.65,
	                73.33,707.17,415.15,116.7,415.15,116.7,415.15,116.7,415.15,116.7
	               };

	for (i=0; i<8; i++) {
		area=1;
		for(j=0; j<2; j++) {
			area*=D[i][j];
		}
		printf("Area of plot #%d is %f\n", i+1,area);

		if(max < area) {
			max=area;
			plotno=i+1;
		}
	}
	printf("\nMax area is %g of plot #%d",max,plotno);
}