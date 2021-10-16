#include <stdio.h>
#include <string.h>

int main(void)
{
	float height;
	char name[40];

	printf("Please enter your height(cm): \n");
	scanf("%f", &height);
	printf("Please enter your name: \n");
	scanf("%s", name);

	printf("%s, you are %2.2f meters tall.\n", name, height / 100);

	return 0;
}
