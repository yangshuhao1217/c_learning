/* tree.h -- binary search tree					*/
/*	     no douplicate items are allowed in this tree	*/
#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>

/* radefine Item as approprite */
#define SLEN 20
typedef struct item
{
	char petname[SLEN];
	char petkind[SLEN];
} Item;

#define MAXITEMS 10

typedef struct trnode
{
	Item item;
	struct trnode * left;  // pointer to right branch
	struct trnode * right; // pointer to left branch
} Trnode;

typedef struct tree
{
	Trnode * root;		// poniter to root of tree
	int size;		// number of items in tree
} Tree;

/* function prototypes */

/* operation:		initialize a tree to empty		*/
/* precondition:	ptree ponits to a tree			*/
/* postcondition:	the tree is initialized to empty	*/
void InitializeTree(Tree * ptree);

/* operation:		determine if tree is empty		*/
/* precondition:	ptree points to a tree			*/
/* postcondition:	function returns true if tree is	*/
/* 			empty and returns false otherwise	*/
bool TreeIsEmpty(const Tree * ptree);

/* operation:		determine if tree is full		*/
/* precondition:	ptree points to a tree			*/
/* postcondition:	function returns true if tree is	*/
/* 			full and returns false otherwise	*/
bool TreeIsFull(const Tree * ptree);

/* operation:		determine number of items in tree	*/
/* precondition:	ptree points to a tree			*/
/* postcondition:	function returns number of item in	*/
/* 			tree					*/
int TreeItemCount(const Tree * ptree);

/* operation;		add an item to a tree			*/
/* precondition:	pi is address of item to be added	*/
/* 			ptree points to an initialized tree	*/
/* postcondition:	if possible, function adds item to 	*/
/*			tree and returns true; otherwise,	*/
/* 			the function returns false.		*/
bool AddItem(const Item * pi, Tree * ptree);

/* operation:		find an item in a tree			*/
/* preconditions:	pi points to an item			*/
/* 			ptree pionts to an initialized tree	*/
/* postconditions:	function returns true if item is in	*/
/* 			tree and returns false otherwise	*/
bool InTree(const Item * pi, const Tree * ptree);

/* operation:		delete an item from a tree		*/
/* precondition:	pi is address of item to be deleted 	*/
/* 			ptree points to an initialized tree	*/
/* postcondition:	if possible, function delets item	*/
/*			form tree and returns true;		*/
/* 			otherwise the function returns false	*/
bool DeleteItem(const Item * pi, Tree * ptree);

/* operation:		apply a function to each item in	*/
/* 			the tree				*/
/* preconditions: 	ptree points to a tree			*/
/* 			pfun points to a function that takes	*/
/* 			an Item argument and has no return	*/
/* 			value					*/
/* postcondition: 	the function pointed to be pfun is 	*/
/*			executed once for each item in tree	*/
void Traverse(const Tree * ptree, void (* pfun)(Item item));

/* operation:		delete everything from a tree		*/
/* preconditions:	ptree points to an initialized tree	*/
/* postconditions:	tree is empty				*/
void DeleteAll(Tree * ptree);

#endif
