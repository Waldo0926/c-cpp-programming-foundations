#include <stdio.h>

int main(void) {
    int value;
    if (scanf("%d", &value) != 1) return 1;
    puts(value % 2 == 0 ? "even" : "odd");
    return 0;
}
