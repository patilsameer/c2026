/* Function arguments and return value: calcsum (printed page 30). */
#include <stdio.h>

static int calcsum(int x, int y, int z);

int main(void)
{
    int a, b, c;

    printf("Enter three numbers: ");
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        return 1;
    }

    printf("The sum is: %d\n", calcsum(a, b, c));
    return 0;
}

static int calcsum(int x, int y, int z)
{
    return x + y + z;
}
