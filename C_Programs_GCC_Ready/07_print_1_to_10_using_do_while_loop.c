/* Print numbers 1 to 10 using a do-while loop (printed page 21). */
#include <stdio.h>

int main(void)
{
    int num = 1;

    do {
        printf("%d\n", num++);
    } while (num <= 10);

    return 0;
}
