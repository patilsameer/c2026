/* Average marks using a two-dimensional array (printed page 48). */
#include <stdio.h>

#define STUDENT_COUNT 25

int main(void)
{
    int student[STUDENT_COUNT][2]; /* [][0] = roll no, [][1] = marks */
    long sum = 0;

    for (int i = 0; i < STUDENT_COUNT; ++i) {
        printf("Enter roll number and marks for student %d: ", i + 1);
        if (scanf("%d%d", &student[i][0], &student[i][1]) != 2) {
            return 1;
        }
        sum += student[i][1];
    }

    printf("Average marks: %.2f\n", (double)sum / STUDENT_COUNT);
    return 0;
}
