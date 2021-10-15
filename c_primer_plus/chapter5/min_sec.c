// min_sec.c -- convert seconds to minutes and senconds

#include <stdio.h>
#define SEC_PER_MIN 60 // one minute has 60 seconds

int main(void)
{
	int sec, min, left;

	printf("Covert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit): \n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN; // truncation
		left = sec % SEC_PER_MIN; 
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit): \n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}
