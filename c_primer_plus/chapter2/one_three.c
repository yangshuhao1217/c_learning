#include <stdio.h>

int one_three();
void two();

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;
}

// Funtion one_three.
int one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}

// Function two().
void two(void)
{
	printf("two\n");
}
