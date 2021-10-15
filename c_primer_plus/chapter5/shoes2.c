/* shoes2.c -- calculate many shoes size */

#include <stdio.h>
#define ADJUST 7.31 // constant
int main(void)
{
	const double SCALE = 0.333; // constant
	double shoe, foot;
	printf("Shoe size (men's) foot length\n");
	shoe = 2.0;
	while (++shoe < 18.5) /* while flow starts */
	{
	foot = SCALE * shoe + ADJUST;
	printf("%10.1f %15.2f inches\n", shoe, foot);
	}
	printf("If the shoe fits, wear it.\n");
	return 0;
}	
