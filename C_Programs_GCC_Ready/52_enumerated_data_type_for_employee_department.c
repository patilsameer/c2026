/* Enumerated data type for employee department (printed page 148). */
#include <stdio.h>
#include <string.h>

enum e_dept {
    Accounts,
    Software,
    Marketing
};

struct emp {
    char name[10];
    int age;
    float salary;
    enum e_dept dept;
};

static const char *const dept_names[] = {
    "Accounts",
    "Software",
    "Marketing"
};

int main(void)
{
    struct emp e;

    strcpy(e.name, "Martin");
    e.age = 35;
    e.salary = 8865.70f;
    e.dept = Software;

    printf("Name       : %s\n", e.name);
    printf("Age        : %d\n", e.age);
    printf("Salary     : %.2f\n", e.salary);
    printf("Department : %s\n", dept_names[e.dept]);
    return 0;
}
