#include <stdio.h>

int main(void)
{
	float quart;
	printf("\aEnter quantity water(quart): ");
	scanf("%f", &quart);
	printf("\n\t%.2f quart(s) water has %e molecules.", quart, quart * 950 / 3.0e-23);
	return 0;
}
