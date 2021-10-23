/* cm_inch_foot.c -- convert centimeters to inches and feet. */

#include <stdio.h>
#define CEN_PER_INCH 2.54
#define CEN_PER_FOOT 30.48

int main(void)
{
    float cen, inch, foot;

    printf("Convert centimeters to inches and feet!\n");
    printf("Enter the number of centimeters (<=0 to quit): \n");
    scanf("%f", &cen);
    while (cen > 0)
    {
        inch = cen / 2.54;
        foot = cen / 30.48;
        printf("%.2f centimeters are %.2f inches, %.2f feet.\n", cen, inch, foot);
        printf("Enter next value (<=0 to quit): \n");
        scanf("%f", &cen);
    }
    printf("Done!\n");

    return 0;
}