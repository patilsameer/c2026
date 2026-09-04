/* Read lines from a file using fgets() (printed page 131). */
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("test.txt", "r");
    char line[80];

    if (fp == NULL) {
        perror("Cannot open test.txt");
        return 1;
    }

    while (fgets(line, sizeof line, fp) != NULL) {
        fputs(line, stdout);
    }

    if (ferror(fp)) {
        perror("Read error");
        fclose(fp);
        return 1;
    }

    fclose(fp);
    return 0;
}
