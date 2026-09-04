/* Cleaned GCC-ready sizeof example (printed pages 11-12). */
#include <stdio.h>

int main(void)
{
    int sum = 0;

    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(sum) = %zu\n", sizeof(sum));
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof('G') = %zu\n", sizeof('G'));

    return 0;
}
