/* Copy one text file to another character by character (printed pages 127-128). */
#include <stdio.h>

int main(void)
{
    FILE *source = fopen("pr1.c", "r");
    if (source == NULL) {
        perror("Cannot open source file pr1.c");
        return 1;
    }

    FILE *target = fopen("pr2.c", "w");
    if (target == NULL) {
        perror("Cannot open target file pr2.c");
        fclose(source);
        return 1;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, target) == EOF) {
            perror("Write error");
            fclose(source);
            fclose(target);
            return 1;
        }
    }

    if (ferror(source)) {
        perror("Read error");
        fclose(source);
        fclose(target);
        return 1;
    }

    fclose(source);
    if (fclose(target) == EOF) {
        perror("Error closing target file");
        return 1;
    }

    return 0;
}
