/* Print a date using a structure variable (printed page 94). */
#include <stdio.h>

struct date {
    char month[15];
    int day;
    int year;
};

int main(void)
{
    struct date today = {.day = 11, .year = 1998};

    printf("Enter month: ");
    if (scanf("%14s", today.month) != 1) {
        return 1;
    }

    printf("Today's date is %d-%s-%d\n", today.day, today.month, today.year);
    return 0;
}
