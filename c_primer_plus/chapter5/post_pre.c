/* post_pre.c -- prefix, suffix */
#include <stdio.h>
int main(void)
{
	int a = 1, b =1;
	int a_post, pre_b;

	a_post = a++; // increment suffix
	pre_b = ++b; // increment prefix
	printf("a a_post b pre_b \n");
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

	return 0;
}
