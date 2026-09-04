/* Nested macros for square and cube (printed page 141). */
#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define CUBE(x) (SQUARE(x) * (x))

int main(void)
{
    int no;

    printf("Enter the number: ");
    if (scanf("%d", &no) != 1) {
        return 1;
    }

    printf("Square of the number is %d\n", SQUARE(no));
    printf("Cube of the number is %d\n", CUBE(no));
    return 0;
}
