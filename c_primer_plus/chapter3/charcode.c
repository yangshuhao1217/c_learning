/* charcode.c -- show charcode */

#include <stdio.h>

int main(void)
{
	char ch;
	printf("PLease enter a character.\n");
	scanf("%c", &ch); // user enters character
	printf("The code for %c is %d.\n", ch, ch);
	return 0;
}
