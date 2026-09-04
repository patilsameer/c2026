/* Sum of prime numbers between 10 and 100 (printed page 23). */
#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 10; i <= 100; ++i) {
        int is_prime = 1;

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
