#include <stdio.h>

static int min_value(int a, int b) {
    return a < b ? a : b;
}

int main(void) {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) return 1;
    printf("%d\n", min_value(a, b));
    return 0;
}
