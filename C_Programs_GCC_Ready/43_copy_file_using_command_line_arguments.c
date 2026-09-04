/* Copy a file using command-line arguments (printed page 129). */
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source> <destination>\n", argv[0]);
        return 1;
    }

    FILE *source = fopen(argv[1], "rb");
    if (source == NULL) {
        perror("Cannot open source file");
        return 1;
    }

    FILE *target = fopen(argv[2], "wb");
    if (target == NULL) {
        perror("Cannot open destination file");
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
        perror("Error closing destination file");
        return 1;
    }

    return 0;
}
