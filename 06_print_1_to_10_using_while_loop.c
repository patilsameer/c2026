/* Print numbers 1 to 10 using a while loop (printed page 20). */
#include <stdio.h>

int main(void)
{
    /*
     * int num = 1;  -> start counting from 1
     * The while loop continues as long as num is less than or equal to 10.
     * Inside the loop, we print the current number and then increase num by 1.
     * This repeats until num becomes 11, after which the loop stops.
     */
    int num = 1;

    while (num <= 10) {
        /* Print the current value of num on a new line. */
        printf("%d\n", num);

        /* Increase num by 1 so the next number is printed. */
        ++num;
    }

    return 0;
}
