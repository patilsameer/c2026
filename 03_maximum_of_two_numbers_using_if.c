/*
 * Maximum of two numbers using an if statement (printed page 16).
 * The program reads two integers, compares them, and prints the larger
 * value. If both numbers are equal, either value is correctly the maximum.
 */
#include <stdio.h>

int main(void)
{
    int n1, n2, max;

    /*
     * Read both integers from standard input. scanf returns the number of
     * values it successfully reads, so the program stops when the user does
     * not provide exactly two valid integers.
     */
    printf("Enter two numbers: ");
    if (scanf("%d%d", &n1, &n2) != 2) {
        return 1;
    }

    /*
     * Initially assume n1 is the maximum. The if statement checks whether
     * n2 is greater than n1; when it is, n2 replaces the initial maximum.
     * When n2 is smaller or equal, max remains equal to n1.
     */
    max = n1;
    if (n2 > n1) {
        max = n2;
    }

    /* Display the value selected as the maximum. */
    printf("The maximum of the two numbers is: %d\n", max);
    return 0;
}
