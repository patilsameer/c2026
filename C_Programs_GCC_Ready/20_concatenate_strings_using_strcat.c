/* Concatenate strings using strcat() (printed page 50). */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[16] = "Ash";
    const char name2[] = "wini";

    strcat(name1, name2);
    puts(name1);
    return 0;
}
