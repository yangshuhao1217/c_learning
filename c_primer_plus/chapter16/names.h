// names.h -- corrected names_st


#ifndef NAMES_H_
#define NAMES_H_


// Constant
#define SLEN 22

// Struct
struct names_st
{
	char first[SLEN];
	char last[SLEN];
};

// Types
typedef struct names_st names;

// function prototype
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif
