#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[20];
	int index;
	
	printf("Please enter a single word:\n");
	scanf("%s", a);
	for (index = strlen(a); index > 0; index--)
		printf("%c", a[index - 1]);
		printf("\n");
	return 0;
}