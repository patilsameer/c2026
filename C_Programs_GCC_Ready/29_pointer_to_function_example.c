/* Pointer-to-function example (printed page 65). */
#include <stdio.h>

static int func1(int i)
{
    return i;
}

static float func2(float f)
{
    return f;
}

int main(void)
{
    int (*p)(int) = func1;
    float (*q)(float) = func2;
    int i = 5;
    float f = 1.5f;

    printf("i = %d f = %f\n", p(i), q(f));
    return 0;
}
