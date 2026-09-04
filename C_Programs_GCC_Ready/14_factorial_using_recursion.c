/* Calculate factorial using recursion (printed page 39). */
#include <stdio.h>

static unsigned long long factorial(unsigned int n);

int main(void)
{
    int num;

    printf("Enter a non-negative integer (0-20): ");
    if (scanf("%d", &num) != 1 || num < 0 || num > 20) {
        fprintf(stderr, "Invalid input or value too large for unsigned long long.\n");
        return 1;
    }

    printf("Factorial(%d) = %llu\n", num, factorial((unsigned int)num));
    return 0;
}

static unsigned long long factorial(unsigned int n)
{
    if (n <= 1U) {
        return 1ULL;
    }
    return n * factorial(n - 1U);
}
