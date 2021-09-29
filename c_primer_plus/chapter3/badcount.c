/* badcount.c -- wrong parameters.*/

#include <stdio.h>

int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;
	printf("%d\n", n, m); //Too much parameters.
	printf("%d%d%d\n", n); // Too little parameters.
	printf("%d%d\n", f, g); // Values dont't match types.
	return 0;
}
