#include <stdio.h>
int main() {
	//target to win the match 282
	//3.2 rr in 1st 10 overs

	int current_runs= 3.2*10;
	printf("current runs= %d\n", current_runs);

	int remaining_target= 282-current_runs;
	printf("Remaining target= %d\n", remaining_target);

	//Run Rate of remaining 40 overs
	float runrate;
	runrate= remaining_target/40;
	printf("New Zealand requires %.1f runrate", runrate);

	return 0;
}