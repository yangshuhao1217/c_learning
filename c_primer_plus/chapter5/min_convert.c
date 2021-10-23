// min_convert.c -- convert minutes to hours and minutes. 

#include <stdio.h>
#define CONVERT 60
int main(void)
{
	int min, hour, left;
	printf("Enter minutes, I will show you how many hours.\n");
	scanf("%d", &min);
	while (min > 0)
	{
		hour = min / CONVERT;
		left = min % CONVERT;
		printf("%d minutes is %d hoursm %d minutes.", min, hour, left);
		printf("Enter next value (<=0 to quit): \n");
		scanf("%d", &min);
	}
	printf("Done!\n");

	return 0;
}
