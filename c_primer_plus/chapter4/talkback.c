// talkeback.c -- show interface with users.

#include <stdio.h>
#include <string.h> // Give prototype strlen()
#define DENSITY 62.4 // density person (pound/cubic foot

int main()
{
	float weight, volume;
	int size, letters;
	char name[40]; // name is array, what has 40 characters
	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);
	return 0;
}
