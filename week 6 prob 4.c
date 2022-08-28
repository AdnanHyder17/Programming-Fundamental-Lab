//Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black and
//W for White. Ask the user if the cup size is double (d) and the cup size is single(s). The following table
//details the time chart for the machine for each coffee type. Display a statement for each step. If the coffee
//size is double, increase the making time by double. Use functions to display instructions to the user and to
//compute the coffee time.

#include<stdio.h>
int main() {
	char x;
	char cupsize;
	int totaltime;
	printf("What type of coffee do you want? (B or W) ");
	scanf(" %c", &x);
	printf("What cup size are you using? ");
	scanf(" %c", &cupsize);

	switch(x) {
		case'B':{
				switch(cupsize) {
					case 'd': {
						printf("It will take double the time to make a double cupsize coffee ");
						printf("\nPut water (40 mins) ");
						printf("\nPut sugar (40 mins)");
						printf("\Mix well (50 mins) ");
						printf("\nAdd coffee (30 mins) ");
						printf("\nMix well (50 mins) ");
						totaltime=20+20+25+15+25;
						totaltime=totaltime*2;
						printf("\nThe total time taken for your coffee would be: %d minutes", totaltime);
						break;
					}

					case 's': {
						printf("\nPut water (20 mins) ");
						printf("\nPut sugar (20 mins)");
						printf("\nMix well (25 mins) ");
						printf("\nAdd coffee (15 mins) ");
						printf("\nMix well (25 mins) ");
						totaltime=20+20+25+15+25;
						printf("\nThe total time taken for your coffee would be: %d minutes", totaltime);
						break;
					}

				}


			break;
		case 'W': {
			switch(cupsize) {
				case'd':{
						printf("It will take double the time to make a double cupsize coffee ");
					printf("\nPut water (30 mins) ");
					printf("\nPut sugar (30 mins)");
					printf("\Mix well (40 mins) ");
					printf("\nAdd coffee (4 mins) ");
					printf("\nAdd milk (8 mins)");
					printf("\nMix well (40 mins) ");
					totaltime=15+15+20+2+4+20;
					totaltime=totaltime*2;
					printf("\nThe total time taken for your coffee would be: %d minutes", totaltime);
					break;
			}
			case 's': {
				printf("\nPut water (15 mins) ");
				printf("\nPut sugar (15 mins)");
				printf("\Mix well (20 mins) ");
				printf("\nAdd coffee (2 mins) ");
				printf("\nAdd milk (4 mins)");
				printf("\nMix well (20 mins) ");
				totaltime=15+15+20+2+4+20;
				printf("\nThe total time taken for your coffee would be: %d minutes", totaltime);
				break;
			}
		}

	}

}
}
return 0;
}

