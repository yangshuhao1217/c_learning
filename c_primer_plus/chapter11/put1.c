/* put1.c -- printf string, doesn't add \n */
#include <stdio.h>
void put1(const char * string)
{
	while (*string != '\0')
		putchar(*string++)
