/* Check whether a number is even or odd */
#include <stdio.h>

/*
 * Step 1: Program execution starts in main(). The void means that main does
 * not expect command-line arguments, and int means it returns a status code.
 */
int main(void)
{
    /*
     * Step 2: Declare an integer variable named num. This variable will store
     * the whole number entered by the user.
     */
    int num;

    /*
     * Step 3: Display a prompt so the user knows that input is expected.
     * The space after the colon keeps the entered number readable.
     */
    printf("Enter a number: ");

    /*
     * Step 4: Read an integer from standard input and store it in num.
     * The & operator supplies scanf() with num's memory address, allowing it
     * to write the user's input into that variable.
     *
     * scanf() returns the number of successfully converted values. Since this
     * call requests one integer, a return value other than 1 means that the
     * input was missing or was not a valid integer.
     */
    if (scanf("%d", &num) != 1) {
        /*
         * Step 5: Stop immediately when input is invalid. Returning 1 from
         * main conventionally reports that the program ended with an error.
         */
        return 1;
    }

    /*
     * Step 6: Use the remainder operator (%). Dividing an integer by 2 gives
     * a remainder of 0 for even numbers and a remainder of 1 or -1 for odd
     * numbers. Therefore, num % 2 == 0 tests whether num is even.
     */
    if (num % 2 == 0) {
        /* Step 7: This branch runs when the remainder is zero. */
        printf("%d is even\n", num);
    } else {
        /* Step 8: This branch runs when the remainder is not zero. */
        printf("%d is odd\n", num);
    }

    /*
     * Step 9: Return 0 to indicate that the program completed successfully.
     */
    return 0;
}
