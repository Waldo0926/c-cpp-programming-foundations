#include <stdio.h>

int main(void) {
    unsigned int value;
    if (scanf("%u", &value) != 1) return 1;

    if (value == 0) {
        puts("0");
        return 0;
    }

    while (value > 0) {
        printf("%u", value % 10);
        value /= 10;
    }
    putchar('\n');
    return 0;
}
