/* Compare the size of a structure and a union (printed pages 150-151). */
#include <stdio.h>

int main(void)
{
    struct {
        char name[20];
        int empno;
        float salary;
    } emp;

    union {
        char name[20];
        int empno;
        float salary;
    } desc;

    printf("The size of the structure is %zu\n", sizeof emp);
    printf("The size of the union is %zu\n", sizeof desc);
    return 0;
}
