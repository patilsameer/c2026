/* Binary record I/O using fwrite() and fread() (printed page 137). */
#include <stdio.h>

struct emp {
    char name[40];
    int age;
    float basic_salary;
};

int main(void)
{
    FILE *fp = fopen("emp.dat", "wb");
    if (fp == NULL) {
        perror("Cannot open emp.dat for writing");
        return 1;
    }

    char another = 'Y';
    while (another == 'Y' || another == 'y') {
        struct emp e;

        printf("Enter name (single word), age and basic salary: ");
        if (scanf("%39s%d%f", e.name, &e.age, &e.basic_salary) != 3) {
            fclose(fp);
            return 1;
        }

        if (fwrite(&e, sizeof e, 1, fp) != 1) {
            perror("Write error");
            fclose(fp);
            return 1;
        }

        printf("Add another record (Y/N): ");
        if (scanf(" %c", &another) != 1) {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);

    FILE *fpr = fopen("emp.dat", "rb");
    if (fpr == NULL) {
        perror("Cannot open emp.dat for reading");
        return 1;
    }

    struct emp e;
    while (fread(&e, sizeof e, 1, fpr) == 1) {
        printf("%s %d %.2f\n", e.name, e.age, e.basic_salary);
    }

    if (ferror(fpr)) {
        perror("Read error");
        fclose(fpr);
        return 1;
    }

    fclose(fpr);
    return 0;
}
