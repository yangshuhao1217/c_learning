#include <stdio.h>

int main(void)
{
	float cup;
	printf("\aEnter quantity of cup, I will tell you it is how many pints, ounces, landles and teaspons.");
	scanf("%f", &cup);
	printf("\n\t%.2f cup(s) are %.2f pints.", cup, cup * 4);
	printf("\n\t%.2f cup(s) are %.2f ounces.", cup, cup * 8);
	printf("\n\t%.2f cup(s) are %.2f landels.", cup, cup * 16);
	printf("\n\t%.2f cup(s) are %.2f teaspoons.", cup, cup * 48);
	return 0;
}	
