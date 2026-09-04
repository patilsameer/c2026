/* Average marks using a one-dimensional array (printed page 45). */
#include <stdio.h>

#define STUDENT_COUNT 25

int main(void)
{
    float marks[STUDENT_COUNT];
    float sum = 0.0f;

    for (int i = 0; i < STUDENT_COUNT; ++i) {
        printf("Enter marks for student %d: ", i + 1);
        if (scanf("%f", &marks[i]) != 1) {
            return 1;
        }
        sum += marks[i];
    }

    printf("Average marks: %.2f\n", sum / STUDENT_COUNT);
    return 0;
}
