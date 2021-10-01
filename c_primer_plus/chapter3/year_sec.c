#include <stdio.h>

int main(void)
{
	int age;
	printf("\aEnter your age: ");
	printf("___\b\b\b");
	scanf("%d", &age);
	printf("\n\t%d years are %d seconds.", age, age * 3.156e7);
	return 0;
}
