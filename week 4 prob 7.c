#include <stdio.h>
int main()
{
	// PART A
	// First 6/2 operation will be performed =3
	// Second 3*(6/2) will be performed = 9
	// Third 7+3*(6/2) = 16
	// lastly (16)-1  = 15
	int x = 7 + 3 * (6/2) -1;
	printf("%d\n",x);
	
	// PART B
	// First 2-2 will be performed = 0
	// Second 2%2
	// Third 2 * (2-2) = 0
	// fourth 0 / 2 = 0
	int y= 2 % 2 + 2 * (2-2) / 2;
	printf("%d\n",y);  
	
	//PART C
	// First 3/3 will be performed = 1
	// Second (9-3/(3)) = 9 - 1 = 8
	// Third (3+(9-3/(3))) = 3 + 8= 11
	// Fourth (9*(3+(9-3/(3)))) = 9 * 11 = 99
	// Lastly 3 * 99 = 297
	int z=(3*(9*(3+(9-3/(3)))));
	printf("%d",z);
	
	
}