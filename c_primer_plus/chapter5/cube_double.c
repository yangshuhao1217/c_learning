/* cube_double.c -- show double's cubic value */

#include <stdio.h>

void showCube(double x);

int main(void)
{
    double val;

    printf("Enter a floating-point value: ");
    scanf("%lf", &val);
    showCube(val);

    return 0;
}

void showCube(double x)
{
    printf("The cube of %e is %e.\n", x, x*x*x);
}