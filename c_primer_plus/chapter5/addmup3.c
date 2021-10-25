/* addmup.c -- common statments */

#include <stdio.h>

int main(void)
{
	int count, sum;

	count = 0;
	sum = 0;
    int day;
    printf("Enter how may days, I will show you how much you get in these days.\n");
	scanf("%d", &day);
    while (count++ < day)
		sum = sum + count * count;
	printf("In %d days you will get %d$s.\n", day, sum);

	return 0;
} 