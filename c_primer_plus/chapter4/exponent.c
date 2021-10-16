#include <stdio.h>

int main(void)
{
	float n;

	printf("Please enter a floating-point number:\n");
	scanf("%f", &n);
	printf("The input is %2.2f or %2.2e.\n", n, n);

	return 0;
}
