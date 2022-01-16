/* list.h --header file for a simple list type. */
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

/* program-specific delarations */

#define TSIZE 45 // size of array to hold title.
struct film
{
	char title[TSIZE];
	int rating;
};

/* general type filt Item */

typedef struct film Item;

typedef struct node
{
	Item item;
	struct node * next;
} Node;

typedef Node * List;

/* function prototypes */

/* operation:		initialize a list.				*/
/* precondition:	plist points to a list.				*/
/* postconditions:	the list is initialized to empty.		*/
void InitializeList(List * plist);

/* operation:		determine if list is empty			*/
/* 			plist points to an initialized list.		*/
/* postconditions:	function returns True if list is empty		*/
/* 			and returns False onterwise.			*/
bool ListIsEmpty(const List *plist);

/* operation:		determin if list is full			*/
/*			plist points to an initialized list.		*/
/* postconditions:	functions returns True if list is full 		*/
/* 			and returns False otherwise.			*/
bool ListIsFull(const List *plist);

/* operation: 		determine number of items in list		*/
/* 			plist points to an initialized list.		*/
/* postconditions:	function returns number of items in list.	*/
unsigned int ListItemCount(const List *plist);

/* operation:		add item to end of list.			*/
/* precondition:	item is an item to be added to list		*/
/* 			plist points to an initialized list.		*/
/* postconditions:	if possible, function adds item to end		*/
/* 			of list and returns True: otherwise the 	*/
/* 			function returns False.				*/
bool AddItem(Item item, List * plist);

/* operation:		apply a function to each item in list.		*/
/* 			plist points to an initialized list		*/
/* 			pfun points to a function that takes an		*/
/* postcondition:	the fucntion pointed to by pfun is		*/
/* 			executed once for each item in the list.	*/
void Traverse(const List *plist, void (* pfun)(Item item));

/* operation:		free allocated memory, if any			*/
/* 			plist ponits to an initialized list.		*/
/* postconditions:	any memory allocated for the list s freed	*/
/* 			and the lsit is set to empty.			*/
void EmptyTheList(List * plist);

#endif
