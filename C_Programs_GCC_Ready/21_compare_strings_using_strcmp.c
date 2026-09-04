/* Compare two strings using strcmp() (printed page 51). */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80];
    char str2[80];
    int result;

    printf("Enter first string (single word): ");
    if (scanf("%79s", str1) != 1) {
        return 1;
    }

    printf("Enter second string (single word): ");
    if (scanf("%79s", str2) != 1) {
        return 1;
    }

    result = strcmp(str1, str2);
    if (result < 0) {
        printf("String2 is greater than String1.\n");
    } else if (result == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("String1 is greater than String2.\n");
    }

    return 0;
}
