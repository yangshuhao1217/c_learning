/* operand.c -- operand opreations. */

#include <stdio.h>

int main(void)
{
    int f_operand, s_operand;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: \n");
    scanf("%d", &s_operand);
    printf("Now enter the first operand: \n");
    scanf("%d", &f_operand);
    while (f_operand > 0)
    {
        printf("%d %% %d is %d\n", f_operand, s_operand, (f_operand%s_operand));
        printf("Enter next number for first operand (<= 0 to quit): \n");
        scanf("%d", &f_operand);

    }

    return 0;
}