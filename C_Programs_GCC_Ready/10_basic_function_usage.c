/* Basic function usage (printed page 27). */
#include <stdio.h>

static void sub(void);

int main(void)
{
    printf("In main function, before function call.\n");
    sub();
    printf("In main function, after function call.\n");
    return 0;
}

static void sub(void)
{
    printf("Welcome to the function sub\n");
}
