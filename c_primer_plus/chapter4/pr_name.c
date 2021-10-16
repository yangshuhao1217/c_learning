/* pr_name.c -- print name 8*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[40];
	int x;

	printf("Whant's your name? ");
	scanf("%s", name);
	
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	x = strlen(name) + 3;
	printf("\"%*s\"\n", x, name);

	return 0;
}
	
