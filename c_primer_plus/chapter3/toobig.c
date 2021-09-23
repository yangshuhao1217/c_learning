/*toobig.c-- too big int value what system dosn't allow*/

#include <stdio.h>

int main(void)
{
	int i = 2147483467;
	unsigned int j = 4294967295;
	printf("%d %d %d\n", i, i+1, i+2);
	printf("%u %u %u\n", j, j+1, j+2);
	return 0;
}
