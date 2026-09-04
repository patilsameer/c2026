/* Function returning a pointer to the greater number (printed page 67). */
#include <stdio.h>

static int *check(int *p, int *q);

int main(void)
{
    int a, b;
    int *greater;

    printf("Enter two numbers: ");
    if (scanf("%d%d", &a, &b) != 2) {
        return 1;
    }

    greater = check(&a, &b);
    printf("Greater number: %d\n", *greater);
    return 0;
}

static int *check(int *p, int *q)
{
    return (*p >= *q) ? p : q;
}
