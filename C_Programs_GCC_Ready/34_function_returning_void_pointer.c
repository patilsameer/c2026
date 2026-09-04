/* Function returning void * (printed page 86). */
#include <stdio.h>
#include <stdlib.h>

static void *message(void);

int main(void)
{
    int *int_ptr = message();
    int *second_ptr = message();

    if (int_ptr == NULL || second_ptr == NULL) {
        free(int_ptr);
        free(second_ptr);
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    /* A void pointer can be converted back to the original object-pointer type. */
    printf("First returned integer = %d\n", *int_ptr);
    printf("Second returned integer = %d\n", *second_ptr);

    free(int_ptr);
    free(second_ptr);
    return 0;
}

static void *message(void)
{
    int *value = malloc(sizeof *value);
    if (value != NULL) {
        *value = 16707;
    }
    return value;
}
