#include<stdio.h>
void main() {
	int pkr=2000000;
	float Swiss_franc, Pound_Sterling, Spanish_Euro, Canadian_Dollar, Japanese_Yen;
	// pkr to french
	Swiss_franc= pkr/182.02;
	printf("Pkr to France currency= %f \n",Swiss_franc);
	// pkr to pounds
	Pound_Sterling= pkr/229.36;
	printf("Pkr to UK Pounds= %f \n",Pound_Sterling);
	// pkr to Euro
	Spanish_Euro= pkr/197.13;
	printf("Pkr to Spain Euro= %f \n",Spanish_Euro);
	// pkr to canadian dollars
	Canadian_Dollar = pkr/133.53;
	printf("Pkr to Canadian Dollar= %f \n",Canadian_Dollar);
	// pkr to yen
	Japanese_Yen=pkr/1.52;
	printf("Pkr to Japanese Yen= %f \n",Japanese_Yen);
	return 0;
}
