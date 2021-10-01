// inch_height.c -- convert inches to ceremeters.
#include <stdio.h>

int main(void)
{
	float inch;
	printf("\aEnter your height(inch): ");
	scanf("%f", &inch);
	printf("\n\t%2.f inches are %.2f centimeters.", inch, inch * 7.1 / 2.54);
	return 0;
}
