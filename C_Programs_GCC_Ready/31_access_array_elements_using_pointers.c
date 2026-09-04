/* Access array elements using pointers (printed page 68). */
#include <stdio.h>

int main(void)
{
    int ar[5] = {10, 20, 30, 40, 50};
    int *ptr = ar;

    for (int i = 0; i < 5; ++i, ++ptr) {
        printf("%p - %d\n", (void *)ptr, *ptr);
    }

    return 0;
}
