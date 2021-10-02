// defines.c 

#include <stdio.h>
#include <limits.h> // integers limits
#include <float.h> // floats limits

int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Bigges int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);
	return 0;
}
