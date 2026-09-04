/* Accept and print a single-word string using scanf/printf (printed page 49). */
#include <stdio.h>

int main(void)
{
    char name[20];

    printf("Enter a name (single word): ");
    if (scanf("%19s", name) != 1) {
        return 1;
    }

    printf("%s\n", name);
    return 0;
}
