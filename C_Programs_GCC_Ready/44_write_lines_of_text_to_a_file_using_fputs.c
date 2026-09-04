/* Write lines of text to a file using fputs() (printed page 130). */
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("test.txt", "w");
    char line[80];

    if (fp == NULL) {
        perror("Cannot open test.txt");
        return 1;
    }

    printf("Enter lines of text. Enter a blank line to stop.\n");
    while (fgets(line, sizeof line, stdin) != NULL) {
        if (line[0] == '\n') {
            break;
        }
        if (fputs(line, fp) == EOF) {
            perror("Write error");
            fclose(fp);
            return 1;
        }
    }

    if (fclose(fp) == EOF) {
        perror("Error closing test.txt");
        return 1;
    }
    return 0;
}
