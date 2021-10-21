/* len_name.c -- show how many characters in name. */

#include <stdio.h>

int main(vodi)
{
    char name[40], surname[4];
    printf("Plese input your first name:");
    scanf("%s", name);
    printf("Please input your last name:");
    scanf("%s", surname);
    
    printf("\n%*d %*d", strlen(name), strlen(name), strlen(surname), strlen(surname));

    return 0;
}