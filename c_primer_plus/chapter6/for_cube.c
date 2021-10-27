/* for_cube.c -- use for loop to create cubic tablet. */

#include <stdio.h>

int main(void)
{
	int num;

	printf("    n   n cubed\n");
	for (num = 1; num <= 6; num++)
		printf("%5d %6d\n", num, num*num*num);

	return 0;
}
