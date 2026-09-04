/* Demonstrate call by value with swap() (printed page 62). */
#include <stdio.h>

static void swap(int x, int y);

int main(void)
{
    int a = 5;
    int b = 7;

    printf("Before function call: a=%d b=%d\n", a, b);
    swap(a, b);
    printf("After function call:  a=%d b=%d\n", a, b);
    return 0;
}

static void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swap:          x=%d y=%d\n", x, y);
}
