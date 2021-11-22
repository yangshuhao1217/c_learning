/* paint.c -- conditional rxpression */
#include <stdio.h>
#define COVERAGE 350
int main(void)
{
	int sq_feet;
	int cans;

	printf("ENter number of suqare feet to be painted:\n");
	while (scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet /COVERAGE;
		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
		printf("Enter next value (q to tuit): \n");
	}
	return 0;
}
