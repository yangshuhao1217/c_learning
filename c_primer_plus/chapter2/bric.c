#include <stdio.h>

void br();
void ic();

int main(void)
{
	br();
	ic();
	ic();
	br();
	return 0;
}

void br(void) // Function prints Brazil, Russia.
{
	printf("Brazil, Russia.");
}

void ic(void) /*Finction prints India, China.*/
{
	printf("India, China.\n");
}

