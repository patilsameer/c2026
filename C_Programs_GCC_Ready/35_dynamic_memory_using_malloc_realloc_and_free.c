/* Dynamic memory using malloc(), realloc() and free() (printed pages 86-87). */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t count = 0;
    size_t capacity = 4;
    int *marks = malloc(capacity * sizeof *marks);

    if (marks == NULL) {
        fprintf(stderr, "Not enough memory.\n");
        return 1;
    }

    printf("Enter marks (-1 to stop):\n");
    for (;;) {
        int mark;
        if (scanf("%d", &mark) != 1) {
            free(marks);
            return 1;
        }
        if (mark == -1) {
            break;
        }

        if (count == capacity) {
            size_t new_capacity = capacity + 4;
            int *tmp = realloc(marks, new_capacity * sizeof *marks);
            if (tmp == NULL) {
                free(marks);
                fprintf(stderr, "Not enough memory to grow the array.\n");
                return 1;
            }
            marks = tmp;
            capacity = new_capacity;
            printf("Reallocated space for 4 more integers.\n");
        }

        marks[count++] = mark;
    }

    printf("The marks entered are:\n");
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", marks[i], (i + 1 == count) ? "\n" : " ");
    }

    free(marks);
    return 0;
}
