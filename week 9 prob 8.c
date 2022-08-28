#include <stdio.h>
int main() {
	int i,j,count,check,len;
	printf("Enter the size of the array: ");
	scanf("%d", &len);

	int arr[len];

	printf("Enter elements in the array: ");
	for(i=0; i<len; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Frequency of the elements in the array:\n");
	for (i=0; i<len; i++) {
		count=0;
		for (j=0; j<len; j++) {
			if ( arr[i] == arr[j] ) {
				count++;
			}
		}
		printf("%d occured %d times.\n", arr[i], count) ;
	}

	return 0;
}