/*
 * This program demonstrates the sizeof operator in C.
 * It prints the memory size, in bytes, of several types and an expression.
 */

/* Includes declarations for printf, which is used to display output. */
#include <stdio.h>

/* Program execution begins in the main function. */
int main(void)
{
    /* Declares an integer named sum and initializes it to zero. */
    int sum = 0;

    /* sizeof(float) returns the number of bytes used by the float type. */
    /* %zu is the printf format specifier for a size_t value. */
    printf("sizeof(float) = %zu\n", sizeof(float));

    /* sizeof(sum) returns the number of bytes used by sum's int type. */
    printf("sizeof(sum) = %zu\n", sizeof(sum));

    /* sizeof(char) returns the size of char, which is always 1 byte in C. */
    printf("sizeof(char) = %zu\n", sizeof(char));

    /*
     * 'G' is an integer character constant in C, so sizeof('G') reports
     * the size of an int, not the size of a char.
     */
    printf("sizeof('G') = %zu\n", sizeof('G'));

    /* Returning zero tells the operating system that the program succeeded. */
    return 0;
}
