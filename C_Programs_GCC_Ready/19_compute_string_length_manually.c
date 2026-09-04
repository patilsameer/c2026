/* Compute string length manually (printed page 50). */
#include <stdio.h>

int main(void)
{
    char str[80];
    size_t len = 0;

    printf("Enter string: ");
    if (fgets(str, sizeof str, stdin) == NULL) {
        return 1;
    }

    while (str[len] != '\0' && str[len] != '\n') {
        ++len;
    }

    printf("The length of the string is %zu\n", len);
    return 0;
}
