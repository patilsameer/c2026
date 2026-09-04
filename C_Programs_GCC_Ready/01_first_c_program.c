/* Cleaned GCC-ready version of the PDF's "First C program" (printed page 7). */
#include <stdio.h>

int main(void)
{
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

    printf("Enter two characters: ");
    if (scanf(" %c %c", &c, &d_input) != 2) {
        return 1;
    }
    d = (unsigned char)d_input;
    printf("%c %c\n", c, d);

    printf("Enter a signed and an unsigned integer: ");
    if (scanf("%d %u", &i, &j) != 2) {
        return 1;
    }
    printf("%d %u\n", i, j);

    printf("Enter a signed and an unsigned long integer: ");
    if (scanf("%ld %lu", &k, &m) != 2) {
        return 1;
    }
    printf("%ld %lu\n", k, m);

    printf("Enter float, double and long double values: ");
    if (scanf("%f %lf %Lf", &x, &y, &z) != 3) {
        return 1;
    }
    printf("%f %f %Lf\n", x, y, z);

    return 0;
}
