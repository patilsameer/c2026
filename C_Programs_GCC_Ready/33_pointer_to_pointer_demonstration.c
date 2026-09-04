/* Demonstrate a pointer to a pointer (printed page 80). */
#include <stdio.h>

int main(void)
{
    int i = 3;
    int *j = &i;
    int **k = &j;

    printf("The value of i = %d\n", i);
    printf("The value of j (address of i) = %p\n", (void *)j);
    printf("The value of k (address of j) = %p\n", (void *)k);

    printf("\nAddress of i:\n");
    printf("&i = %p, j = %p, *k = %p\n", (void *)&i, (void *)j, (void *)*k);

    printf("Value of i:\n");
    printf("i = %d, *j = %d, **k = %d\n", i, *j, **k);

    printf("\nAddress of j:\n");
    printf("&j = %p, k = %p\n", (void *)&j, (void *)k);

    printf("Value of j:\n");
    printf("j = %p, *k = %p\n", (void *)j, (void *)*k);

    printf("\nAddress of k:\n");
    printf("&k = %p\n", (void *)&k);
    return 0;
}
