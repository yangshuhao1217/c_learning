#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[10], lname[10];

	printf("Please enter your first name:\n");
	scanf("%s", fname);
	printf("Please enter your family name:\n");
	scanf("%s", lname);

	printf("%s %s\n", fname, lname);
	printf("%*ld %*ld\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname);
	printf("%s %s\n", fname, lname);
	printf("%-*ld %-*ld\n", strlen(lname), strlen(lname), strlen(name), strlen(name);

	return 0;
}
