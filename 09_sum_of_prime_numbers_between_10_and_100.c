/* Sum of prime numbers between 10 and 100 (printed page 23). */
#include <stdio.h>

int main(void)
{
    int sum = 0;

    /* Outer loop: check each number from 10 to 100. */
    for (int i = 10; i <= 100; ++i) {
        int is_prime = 1;

        /* Inner loop: try dividing the current number by every integer from 2
           up to sqrt(i). If any divisor is found, the number is not prime. */
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}
