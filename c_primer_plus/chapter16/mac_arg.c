/* mac_arg.c -- macro with arguments. */
#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n",X)

int main(void)
{
	int x = 5;
	int z;

	printf("x = %d\n", x);
	z = SQUARE(x);
	printf("Evaluating SQUARE(x): ");
	PR(z);
	z = SQUARE(2);
	printf("Evalutating SQUARE(2); ");
	PR(z);
	printf("Evaluating SQUARE(x+2): ");
	PR(SQUARE(x + 2));
	printf("Evalutaing 100/SQUARE(2) : ");
	PR(100 / SQUARE(2));
	printf("x is %d.\n", x);
	printf("Evaluating SQUARE(++x): ");
	PR(SQUARE(++x));
	printf("After increaming, x is %x.\n", x);

	return 0;
}
