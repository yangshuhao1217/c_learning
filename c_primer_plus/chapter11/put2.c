/* put2.c -- print string, and count qantity of characters. */
#include <stdio.h>
int put2(const char * string)
{
	int count = 0;
	while (*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');

	return(count);
}
