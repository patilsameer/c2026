/* Pass an entire structure to a function (printed page 108). */
#include <stdio.h>

struct book {
    char name[20];
    char author[10];
    int pages;
};

static void display(struct book b);

int main(void)
{
    struct book b1 = {"Programming in C", "Stephen", 300};
    display(b1);
    return 0;
}

static void display(struct book b)
{
    printf("Name: %s\nAuthor: %s\nPages: %d\n", b.name, b.author, b.pages);
}
