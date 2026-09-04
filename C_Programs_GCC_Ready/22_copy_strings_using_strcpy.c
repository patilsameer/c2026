/* Copy strings using strcpy() (printed page 52). */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[16] = "Ash";
    const char name2[] = "win";

    printf("Before copying: %s\t%s\n", name1, name2);
    strcpy(name1, name2);
    printf("After copying:  %s\t%s\n", name1, name2);
    return 0;
}
