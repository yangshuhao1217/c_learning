#include <stdio.h>

void jolly(); //Print thre messages.
void deny(); /* Print one message.*/

int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}

void jolly(void) /*Start funtion definition.*/
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!");
}
