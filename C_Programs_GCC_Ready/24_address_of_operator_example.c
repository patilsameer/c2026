/* Address-of operator example (printed page 56). */
#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 200;
    int c = 300;

    printf("Address: %p contains value: %d\n", (void *)&a, a);
    printf("Address: %p contains value: %d\n", (void *)&b, b);
    printf("Address: %p contains value: %d\n", (void *)&c, c);
    return 0;
}
