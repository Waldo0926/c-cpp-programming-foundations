#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

static void free_list(struct Node *head) {
    while (head != NULL) {
        struct Node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void) {
    struct Node *head = NULL;
    struct Node **tail = &head;
    int value;

    while (scanf("%d", &value) == 1 && value != -1) {
        struct Node *node = malloc(sizeof *node);
        if (node == NULL) {
            free_list(head);
            return 1;
        }
        node->value = value;
        node->next = NULL;
        *tail = node;
        tail = &node->next;
    }

    for (const struct Node *node = head; node != NULL; node = node->next) {
        printf("%d%c", node->value, node->next == NULL ? '\n' : ' ');
    }
    free_list(head);
    return 0;
}
