/* Command-line arguments hello example (printed pages 128-129). */
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("You forgot to type your name.\n");
        return 1;
    }

    printf("Hello %s\n", argv[1]);
    return 0;
}
