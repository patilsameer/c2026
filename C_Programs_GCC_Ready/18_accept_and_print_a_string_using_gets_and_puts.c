/* Accept and print a line of text; modern replacement for gets() (printed page 49). */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[80];

    printf("Enter a line of text: ");
    if (fgets(name, sizeof name, stdin) == NULL) {
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';
    puts(name);
    return 0;
}
