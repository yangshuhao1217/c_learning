#include <stdio.h>

int main(void)
{
	float toosmall = 0.1234E-38 / 10;
	printf("%e\n", toosmall);
	return 0;
}
