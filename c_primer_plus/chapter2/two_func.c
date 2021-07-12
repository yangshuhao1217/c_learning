/*two_func.c -- One file with two functions.*/
#include <stdio.h>

void butler(void); /*Prototype function ANSI/ISO C*/

int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	return 0;
}

void butler(void)
{
	printf("You rang, sir?\n");
}
