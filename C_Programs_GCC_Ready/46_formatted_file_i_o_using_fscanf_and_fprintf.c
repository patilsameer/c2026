/* Formatted file I/O using fscanf() and fprintf() (printed page 132). */
#include <stdio.h>

int main(void)
{
    char text[80];
    FILE *fp = fopen("test.txt", "w");

    if (fp == NULL) {
        perror("Cannot open test.txt for writing");
        return 1;
    }

    printf("Enter a line of text: ");
    if (fscanf(stdin, "%79[^\n]", text) != 1) {
        fclose(fp);
        return 1;
    }

    fprintf(fp, "%s", text);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("Cannot open test.txt for reading");
        return 1;
    }

    if (fscanf(fp, "%79[^\n]", text) == 1) {
        fprintf(stdout, "%s\n", text);
    }

    fclose(fp);
    return 0;
}
