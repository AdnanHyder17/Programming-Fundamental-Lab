//Write a program in which user enters his NTS and F.Sc marks and your program will help student in
//selection of university. Based on these marks Student will be allocated a seat at different department of
//different university.
//● NUST University
//Mechanical: Above 70% in Fsc. and 70 % in NTS
//Electrical: Above 70% in Fsc. and 60 % in NTS
//Telecommunication: Above 70% in Fsc. and 50 % in NTS
//● NED
//IT: 70% - 60 % in Fsc. and 50 % in NTS
//Chemical: 59% – 50 % in Fsc. and 50 % in NTS
//Computer: Above 40% and below 50 % in Fsc. and 50 % in NTS

#include <stdio.h>

main() {
	float nts,fsc;
	printf("Enter Fsc marks in percentage: ");
	scanf("%f",&fsc);
	printf("Enter Nts marks in percentage: ");
	scanf("%f",&nts);
//For Nust Uni
	if (fsc>=1 && fsc<=100 && nts>=1 && nts<=100) {
		if(fsc >= 70 && nts>=60 && nts<=70) {
			printf("Selected in electrical and telecommunication in nust");
		}
		if (fsc >= 70 && nts>=50 && nts<=60) {
			printf("selected in Telecommunication only in nust");
		}
		if (fsc >= 70 && nts>=70) {
			printf("Selected in mechanical, electrical and telecommunication in nust");
		}
	} else {
		printf("U are either not selected or you enter invalid marks");
	}
// for NED
	if (nts>=50) {
		if(fsc>=60 && fsc<=70) {
			printf("Seleted for IT in NED");
		}
		if(fsc>=50 && fsc<=59) {
			printf("Seleted for Chemical in NED");
		}
		if(fsc>=40 && fsc<=50) {
			printf("Selected for Computer in NED");
		}
	} else {
		printf("Not Selected");
	}

	return 0;

}