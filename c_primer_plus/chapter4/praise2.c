/* praise2.c */

// If compiler dosn't read %zd, try %u or %lu.

#include <stdio.h>
#include <string.h> /* gives prototype strlen() */
#define PRAISE "You are an exdraodinary being."

int main(void)
{
	char name[4];
	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s.%s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters", strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);
	return 0;
}
