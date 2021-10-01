#include <stdio.h>

int main(void)
{
	int ch;
	printf("Please enter a character.\n");
	scanf("%d", &ch);
	printf("The code for %d is %c.\n", ch, ch);
	return 0;
}
