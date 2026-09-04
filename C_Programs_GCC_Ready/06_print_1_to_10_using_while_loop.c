/* Print numbers 1 to 10 using a while loop (printed page 20). */
#include <stdio.h>

int main(void)
{
    int num = 1;

    while (num <= 10) {
        printf("%d\n", num);
        ++num;
    }

    return 0;
}
