/*
 * Print numbers 1 to 10 using a do-while loop (printed page 21).
 *
 * Explanation:
 * - The program starts by declaring an integer variable named num and setting it to 1.
 * - In a do-while loop, the body executes at least once before checking the condition.
 * - The loop body prints the current value of num using printf("%d\n", num++).
 * - The num++ expression does two things:
 *     1. Uses the current value of num in the printf call.
 *     2. Increments num by 1 after it is used.
 * - After printing, the loop checks the condition: while (num <= 10)
 * - As long as num is less than or equal to 10, the loop keeps running.
 * - Once num becomes 11, the condition becomes false and the loop stops.
 * - This produces the output:
 *      1
 *      2
 *      3
 *      4
 *      5
 *      6
 *      7
 *      8
 *      9
 *      10
 */
#include <stdio.h>

int main(void)
{
    /* Initialize the starting value to 1. */
    int num = 1;

    /*
     * do-while loop:
     * The statements inside the loop execute first, then the condition is checked.
     * This guarantees that the value 1 is printed even before any condition is tested.
     */
    do {
        printf("%d\n", num++);
    } while (num <= 10);

    return 0;
}
