/* Maximum of two numbers using if (printed page 16). */
#include <stdio.h>

int main(void)
{
    int n1, n2, max;

    printf("Enter two numbers: ");
    if (scanf("%d%d", &n1, &n2) != 2) {
        return 1;
    }

    max = n1;
    if (n2 > n1) {
        max = n2;
    }

    printf("The maximum of the two numbers is: %d\n", max);
    return 0;
}
