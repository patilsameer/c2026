/* Check whether a number is even or odd (printed page 17). */
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
