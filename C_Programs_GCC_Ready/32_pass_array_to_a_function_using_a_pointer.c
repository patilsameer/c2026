/* Pass an array to a function using a pointer (printed page 71). */
#include <stdio.h>

static void display(const int *values, size_t count);

int main(void)
{
    int num[5] = {25, 60, 74, 50, 39};
    display(num, sizeof num / sizeof num[0]);
    return 0;
}

static void display(const int *values, size_t count)
{
    printf("Array elements are:\n");
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", values[i], (i + 1 == count) ? "\n" : "\t");
    }
}
