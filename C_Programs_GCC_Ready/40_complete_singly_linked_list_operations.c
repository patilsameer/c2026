/* Complete singly linked list operations (printed pages 119-122). */
#include <stdio.h>
#include <stdlib.h>

struct node {
    int empid;
    char name[20];
    float salary;
    struct node *next;
};

static struct node *list = NULL;

static struct node *getnode(void);
static struct node *search_previous(int id, int *found);
static int insert_node(struct node *new_node);
static int delete_node(int id);
static void display_all(void);
static void free_all(void);

int main(void)
{
    int choice;

    do {
        printf("\nMenu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display list\n");
        printf("0. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            fprintf(stderr, "Invalid input.\n");
            free_all();
            return 1;
        }

        switch (choice) {
        case 1: {
            struct node *new_node = getnode();
            if (new_node == NULL) {
                fprintf(stderr, "Could not create node.\n");
                free_all();
                return 1;
            }
            if (insert_node(new_node) == -1) {
                printf("Error: duplicate employee ID; node not inserted.\n");
                free(new_node);
            } else {
                printf("Node inserted.\n");
            }
            break;
        }
        case 2: {
            int id;
            printf("Enter employee ID to delete: ");
            if (scanf("%d", &id) != 1) {
                fprintf(stderr, "Invalid input.\n");
                free_all();
                return 1;
            }
            printf(delete_node(id) == 0 ? "Node deleted.\n" : "Deletion failed.\n");
            break;
        }
        case 3:
            display_all();
            break;
        case 0:
            break;
        default:
            printf("Unknown choice.\n");
            break;
        }
    } while (choice != 0);

    free_all();
    return 0;
}

static struct node *getnode(void)
{
    struct node *temp = malloc(sizeof *temp);
    if (temp == NULL) {
        return NULL;
    }

    printf("Enter employee ID: ");
    if (scanf("%d", &temp->empid) != 1) {
        free(temp);
        return NULL;
    }

    printf("Enter name (single word): ");
    if (scanf("%19s", temp->name) != 1) {
        free(temp);
        return NULL;
    }

    printf("Enter salary: ");
    if (scanf("%f", &temp->salary) != 1) {
        free(temp);
        return NULL;
    }

    temp->next = NULL;
    return temp;
}

/* Returns the node before id's position. Sets *found when id exists. */
static struct node *search_previous(int id, int *found)
{
    struct node *prev = NULL;
    struct node *cur = list;

    while (cur != NULL && cur->empid < id) {
        prev = cur;
        cur = cur->next;
    }

    *found = (cur != NULL && cur->empid == id);
    return prev;
}

static int insert_node(struct node *new_node)
{
    int found;
    struct node *prev = search_previous(new_node->empid, &found);

    if (found) {
        return -1;
    }

    if (prev == NULL) {
        new_node->next = list;
        list = new_node;
    } else {
        new_node->next = prev->next;
        prev->next = new_node;
    }

    return 0;
}

static int delete_node(int id)
{
    int found;
    struct node *prev = search_previous(id, &found);
    struct node *temp;

    if (!found) {
        return -1;
    }

    if (prev == NULL) {
        temp = list;
        list = list->next;
    } else {
        temp = prev->next;
        prev->next = temp->next;
    }

    free(temp);
    return 0;
}

static void display_all(void)
{
    if (list == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Employee ID\tName\t\tSalary\n");
    for (const struct node *cur = list; cur != NULL; cur = cur->next) {
        printf("%d\t\t%-19s\t%.2f\n", cur->empid, cur->name, cur->salary);
    }
}

static void free_all(void)
{
    while (list != NULL) {
        struct node *next = list->next;
        free(list);
        list = next;
    }
}
