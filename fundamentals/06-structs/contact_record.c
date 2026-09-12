#include <stdio.h>

struct Contact {
    char name[40];
    int age;
    char telephone[24];
};

int main(void) {
    struct Contact contact;
    if (scanf("%39s%d%23s", contact.name, &contact.age, contact.telephone) != 3) {
        return 1;
    }
    printf("name: %s\nage: %d\ntelephone: %s\n",
           contact.name, contact.age, contact.telephone);
    return 0;
}
