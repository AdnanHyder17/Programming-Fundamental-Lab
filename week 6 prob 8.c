//A local shop sell three items. Items are USB, Handfree and charger. USB costs 800 Rs, Handfree costs
//1000 Rs, charger costs 2000 Rs. The user can buy 1 item or the combination of any number of items.
//After selecting the item to be purchased the program should take input the number of USBs or Handfree
//or Charger, then compute the total amount. Sample output is attached below: 

#include<stdio.h>
int main() {
	int items, priceusb, pricehandsfree, pricecharger, totalamount, itemusb, itemhandsfree, itemcharger;
	char firstitem, seconditem, thirditem;
	char x;
	printf("==============================Items available are:=================================");
	printf("\n1. USB\n2. Hansdfree\n3. Charger");
	printf("\nEnter the number of items you want to purchase: ");
	scanf("%d", &items);
	switch(items) {
		case 1: {
			printf("\nItems available:\n Enter 1 for USB\n Enter 2 for Handfree\n Enter 3 for Charger");
			printf("\nEnter the only item you want" );
			scanf(" %c", &firstitem);
			switch(firstitem) {
				case '1': {
					printf("\nEnter the number of USBs you want to purchase" );
					scanf(" %d", &itemusb);
					priceusb=800*itemusb;
					printf("\nYou have purchased %d USBs having value %d", itemusb, priceusb);
					break;
				}
				case '2': {
					printf("\nEnter the number of handfrees you want to purchase" );
					scanf(" %d", &itemhandsfree);
					pricehandsfree=1000*itemhandsfree;
					printf("\nYou have purchased %d hansdfree having value %d", itemhandsfree, pricehandsfree);
					break;
				}
				case '3': {
					printf("\nEnter how the number of charger you want to purchase" );
					scanf(" %d", &itemcharger);
					pricecharger=2000*itemcharger;
					printf("\nYou have purchased %d charger having value %d", itemcharger, pricecharger);
					break;
				}
			}
			break;
		}
		case 2: {
			printf("\nEnter first item " );
			scanf(" %c", &firstitem);
			printf("\nEnter second item " );
			scanf(" %c", &seconditem);
			switch(firstitem) {
				case '1': {
					printf("\nEnter the number of USBs you want to purchase " );
					scanf(" %d", &itemusb);
					priceusb=800*itemusb;
					printf("\nYou have purchased %d USBs having value %d", itemusb, priceusb);
					break;
				}
				case '2': {
					printf("\nEnter the number of handfrees you want to purchase " );
					scanf(" %d", &itemhandsfree);
					pricehandsfree=1000*itemhandsfree;
					printf("\nYou have purchased %d hansdfree having value %d", itemhandsfree, pricehandsfree);
					break;
				}
				case '3': {
					printf("\nEnter how the number of charger you want to purchase " );
					scanf(" %d", &itemcharger);
					pricecharger=2000*itemcharger;
					printf("\nYou have purchased %d charger having value %d", itemcharger, pricecharger);
					break;

				}
				break;
			}

			switch(seconditem) {
				case '1': {
					printf("\nEnter the number of USBs you want to purchase" );
					scanf(" %d", &itemusb);
					priceusb=800*itemusb;
					printf("\nYou have purchased %d USBs having value %d", itemusb, priceusb);
					break;
				}
				case '2': {
					printf("\nEnter the number of handfrees you want to purchase" );
					scanf(" %d", &itemhandsfree);
					pricehandsfree=1000*itemhandsfree;
					printf("\nYou have purchased %d hansdfree having value %d", itemhandsfree, pricehandsfree);
					break;
				}
				case '3': {
					printf("\nEnter how the number of charger you want to purchase" );
					scanf(" %d", &itemcharger);
					pricecharger=2000*itemcharger;
					printf("\nYou have purchased %d charger having value %d", itemcharger, pricecharger);
					break;

				}
				break;
			}
			break;
		}
		case 3: {
			printf("\nEnter first item" );
			scanf(" %c", &firstitem);
			printf("\nEnter second item");
			scanf(" %c", &seconditem);
			printf("\nEnter third item");
			scanf(" %c", &thirditem);
			switch(firstitem) {
				case '1': {
					printf("\nEnter the number of USBs you want to purchase" );
					scanf(" %d", &itemusb);
					priceusb=800*itemusb;
					printf("\nYou have purchased %d USBs having value %d", itemusb, priceusb);
					break;
				}
				case '2': {
					printf("\nEnter the number of handfrees you want to purchase" );
					scanf(" %d", &itemhandsfree);
					pricehandsfree=1000*itemhandsfree;
					printf("\nYou have purchased %d hansdfree having value %d", itemhandsfree, pricehandsfree);
					break;

				}
				case '3': {
					printf("\nEnter how the number of charger you want to purchase" );
					scanf(" %d", &itemcharger);
					pricecharger=2000*itemcharger;
					printf("\nYou have purchased %d charger having value %d", itemcharger, pricecharger);
					break;
				}
				break;
			}

			switch(seconditem) {
				case '1': {
					printf("\nEnter the number of USBs you want to purchase" );
					scanf(" %d", &itemusb);
					priceusb=800*itemusb;
					printf("\nYou have purchased %d USBs having value %d", itemusb, priceusb);
					break;
				}
				case '2': {
					printf("\nEnter the number of handfrees you want to purchase" );
					scanf(" %d", &itemhandsfree);
					pricehandsfree=1000*itemhandsfree;
					printf("\nYou have purchased %d hansdfree having value %d", itemhandsfree, pricehandsfree);
					break;

				}
				case '3': {
					printf("\nEnter how the number of charger you want to purchase" );
					scanf(" %d", &itemcharger);
					pricecharger=2000*itemcharger;
					printf("\nYou have purchased %d charger having value %d", itemcharger, pricecharger);
					break;

				}
				break;
			}

			switch(thirditem) {
				case '1': {
					printf("\nEnter the number of USBs you want to purchase" );
					scanf(" %d", &itemusb);
					priceusb=800*itemusb;
					printf("\nYou have purchased %d USBs having value %d", itemusb, priceusb);
					break;
				}
				case '2': {
					printf("\nEnter the number of handfrees you want to purchase" );
					scanf(" %d", &itemhandsfree);
					pricehandsfree=1000*itemhandsfree;
					printf("\nYou have purchased %d hansdfree having value %d", itemhandsfree, pricehandsfree);
					break;

				}
				case '3': {
					printf("\nEnter how the number of charger you want to purchase" );
					scanf(" %d", &itemcharger);
					pricecharger=2000*itemcharger;
					printf("\nYou have purchased %d charger having value %d", itemcharger, pricecharger);
					break;

				}
				break;
			}
		}
	}
	totalamount= priceusb + pricehandsfree + pricecharger;
	printf("\nThe total amount is: %d", totalamount);
}









