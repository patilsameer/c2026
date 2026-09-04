/* Demonstrate passing an argument by value (printed page 31). */
#include <stdio.h>

static void modify(int n);

int main(void)
{
    int num = 100;

    printf("In main, the value of num is %d\n", num);
    modify(num);
    printf("Back in main, the value of num is %d\n", num);
    return 0;
}

static void modify(int n)
{
    printf("In function, value of num is %d\n", n);
    n = 200;
    printf("In function, changed value of num is %d\n", n);
}
