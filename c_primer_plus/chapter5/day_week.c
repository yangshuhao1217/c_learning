// day_week.c -- convert days to weeks and days.

#include <stdio.h>
#define DAY_PER_WEEK 7

int main(void)
{
    int day, week, left;

    printf("Convert days to weeks and days!\n");
    printf("Enter the number of days (<=0 to quit): \n");
    scanf("%d", &day);

    while (day > 0)
    {
        week = day / DAY_PER_WEEK;
        left = day % DAY_PER_WEEK;
        printf("%d days are %d weeks, %d days.\n", day, week, left);
        printf("Enter next value (<=0 to quit): \n");
        scanf("%d", &day);    
    }
    printf("Done!\n");

    return 0;
}