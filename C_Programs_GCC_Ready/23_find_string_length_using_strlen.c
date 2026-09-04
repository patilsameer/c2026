/* Find string length using strlen() (printed page 52). */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[80];

    printf("Enter string: ");
    if (fgets(text, sizeof text, stdin) == NULL) {
        return 1;
    }

    text[strcspn(text, "\n")] = '\0';
    printf("The length of the string is %zu\n", strlen(text));
    return 0;
}
