/* platinum.c -- your weight in platinum */

#include <stdio.h>

int main(void)
{
	float weight; // your weight.
	float value; // value of platinum.
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("PLease enter your weight in pounds: ");
	/* Get number what user entered. */
	scanf("%f", &weight);
	/* If value of platinum is 1700 pounds/ounce. */
	value = 1700.0*weight*14.5833;
	printf("Your weight in paltinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maitain your value.\n");
	return 0;
}
