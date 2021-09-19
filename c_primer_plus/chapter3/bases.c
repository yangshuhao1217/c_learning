/* base.c -- print 100 in different ways. */

#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x", x, x, x);
	return 0;
}
