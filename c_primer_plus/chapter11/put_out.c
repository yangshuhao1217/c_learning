/* put_out.c -- use puts() */
#include <stdio.h>
#define DEF "I am a #defined string."
int main(void)
{
	char str1[80] = "An array was innitialized to me.";
	const char * str2 = "A pointer was innitialized to me.";

	puts("I'm an argment o puts().");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);
	puts(str2 + 4);


	return 0;
}

