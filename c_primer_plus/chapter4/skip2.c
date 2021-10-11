/* skiptwo.c -- ship first two intergers */

#include <stdio.h>

int main(void)
{
	int n;
	printf("Please enter three integers: \n");
	scanf("%*d %*d %d", &n);
	printf("The lst interger was %d\n", n);
	return 0;
}
