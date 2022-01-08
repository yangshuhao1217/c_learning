/* cards.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts("Enter card's name: ");
	scanf("%2s", card_name);
	int val = 0;
	if (card_name[0] == 'K')
	{
		val = 10;
	}
	else if (card_name[0] == 'Q')
	{
		val = 10;
	}
	else if (card_name[0] == 'J')
	{
		val = 10;
	}
	else if (card_name[0] == 'A')
	{
		val = 11;
	}
	else {
		val = atoi(card_name);
	}
	// check if point bigger than 3 and smaller than 6.
    if ((val > 2) && (val < 7))
        puts("Add point");
    else if (val == 10)
        puts("Minus point");
    
    return 0;
}
