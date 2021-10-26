/* while1.c -- note curly braces . */
/* terrible code creates infinite loop. */

#include <stdio.h>

int main(void)
{
	int n = 0;

	while (n < 3)
		printf("n is %d\n", n);
		n++;
	printf("That's al this program does\n");

	return 0;
}	

