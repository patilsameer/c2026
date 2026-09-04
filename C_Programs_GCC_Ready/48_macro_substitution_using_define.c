/* Macro substitution using #define (printed page 140). */
#include <stdio.h>

#define GREET "hello"
#define NAME "Ash" " " "wini"

int main(void)
{
    printf("%s\t%s\n", NAME, GREET);
    return 0;
}
