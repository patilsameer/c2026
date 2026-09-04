/* Automatic versus static variables (printed page 35). */
#include <stdio.h>

static void incr(void);

int main(void)
{
    for (int i = 0; i < 3; ++i) {
        incr();
    }
    return 0;
}

static void incr(void)
{
    int auto_i = 0;
    static int static_i = 0;

    printf("auto=%d\tstatic=%d\n", auto_i++, static_i++);
}
