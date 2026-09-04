/* Cleaned GCC-ready version of the PDF's "First C program" (printed page 7).
 * The program demonstrates declarations, keyboard input with scanf, formatted
 * output with printf, and the format specifiers used by several C data types. */
#include <stdio.h>

/* main is the program's entry point. The void parameter list explicitly means
 * that this version does not receive command-line arguments. An int result is
 * returned to the operating system to indicate success or failure. */
int main(void)
{
    /* These declarations demonstrate character, integer, and floating-point
     * types. Each variable reserves appropriately typed storage in memory. */
    char c;
    unsigned char d;
    int i;
    unsigned int j;
    long int k;
    unsigned long int m;
    float x;
    double y;
    long double z;
    char d_input;

    /* %c reads one character. The spaces in the format string tell scanf to
     * skip whitespace, such as the newline left after earlier input. Because
     * d is unsigned char but %c expects char storage, input is first collected
     * in the compatible char variable d_input. */
    printf("Enter two characters: ");
    if (scanf(" %c %c", &c, &d_input) != 2) {
        /* scanf returns the number of successfully assigned values. If it is
         * not 2, input was missing or was not a valid character sequence. */
        return 1;
    }
    /* Convert the second character to unsigned char before storing it in d.
     * This conversion makes the assignment match d's declared type. */
    d = (unsigned char)d_input;
    /* %c prints characters, while \n is an escape sequence that moves the
     * cursor to the next line and flushes a line-oriented terminal display. */
    printf("%c %c\n", c, d);

    /* %d reads a signed int, which can represent negative values, and %u reads
     * an unsigned int, which represents only nonnegative values but usually
     * provides a larger positive range. */
    printf("Enter a signed and an unsigned integer: ");
    if (scanf("%d %u", &i, &j) != 2) {
        return 1;
    }
    /* & supplies each variable's address. scanf needs these addresses so it
     * can write the converted input into the variables rather than receiving
     * only their current values. */
    printf("%d %u\n", i, j);

    /* The l length modifier selects long integer conversion: %ld is for a
     * signed long int and %lu is for an unsigned long int. */
    printf("Enter a signed and an unsigned long integer: ");
    if (scanf("%ld %lu", &k, &m) != 2) {
        return 1;
    }
    printf("%ld %lu\n", k, m);

    /* For scanf, %f expects float *, %lf expects double *, and %Lf expects
     * long double *. The length modifiers ensure that scanf writes the right
     * number of bytes for each destination type. */
    printf("Enter float, double and long double values: ");
    if (scanf("%f %lf %Lf", &x, &y, &z) != 3) {
        return 1;
    }
    /* For printf, float arguments are promoted to double, so %f displays both
     * float and double values. %Lf selects long double for the final value. */
    printf("%f %f %Lf\n", x, y, z);

    /* Returning zero conventionally indicates successful completion. */
    return 0;
}
