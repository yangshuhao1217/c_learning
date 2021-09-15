/* two_func.c -- One file has two functions*/

#include <stdio.h>

void butler(void); /* ANSI/ISO C function prototype.*/
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	return 0;
}

void butler(void) /* Start function definition.*/
{
	printf("You rang, sir?\n");
}
