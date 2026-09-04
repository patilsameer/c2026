/* Array of structures: book records (printed page 99). */
#include <stdio.h>

#define BOOK_COUNT 10

struct book {
    char name[15];
    int pages;
    float price;
};

int main(void)
{
    struct book books[BOOK_COUNT];

    printf("Enter name (single word), pages and price for %d books:\n", BOOK_COUNT);
    for (int i = 0; i < BOOK_COUNT; ++i) {
        printf("Book %d: ", i + 1);
        if (scanf("%14s%d%f", books[i].name, &books[i].pages, &books[i].price) != 3) {
            return 1;
        }
    }

    printf("\nName\tPages\tPrice\n");
    for (int i = 0; i < BOOK_COUNT; ++i) {
        printf("%s\t%d\t%.2f\n", books[i].name, books[i].pages, books[i].price);
    }

    return 0;
}
