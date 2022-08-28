#include <stdio.h>
#include <math.h>

main() {
// 25 people so total 30 reports needed
// each report consist of 140 pages
	int totalpages= 140*30;
	printf("%d pages will be required \n", totalpages);

	printf("Reams= %f\n", (float) totalpages/500); // 8.4 reams

	int reams= ceil(8.4);

	printf("so required reams= %d", reams);

	return 0;

}