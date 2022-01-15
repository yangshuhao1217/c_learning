// names_st.h -- headfile of names_st struct.
// constants
#include <string.h>
#define SLEN 32

// struct statement
struct names_st
{
	char first[SLEN];
	char last[SLEN];
};

// tyepes
typedef struct names_st names;

// function prototye
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);
