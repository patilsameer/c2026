/* Pointer declaration, initialization and dereferencing (printed page 58). */
#include <stdio.h>

int main(void)
{
    int i;
    int j = 1;
    int *jp1;
    int *jp2 = &j;

    jp1 = jp2;
    i = *jp1;
    *jp2 = *jp1 + i;

    printf("i=%d j=%d *jp1=%d *jp2=%d\n", i, j, *jp1, *jp2);
    return 0;
}
