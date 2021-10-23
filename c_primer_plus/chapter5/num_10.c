/* num_10.c -- show all numbers in from number to number gigger than 10 */

#include <stdio.h>

int main(void)
{
	int num;
	int i = 0;
	printf("Enter a number, I will show you all numbers from");
	printf("this very number to number that bigger than 10.\n");
	scanf("%d", &num);
	while (i++ < 11)
	{
		printf(" %d \n", num++);
	}
	printf("PROGRAM EXIT!\n");
	return 0;
}
