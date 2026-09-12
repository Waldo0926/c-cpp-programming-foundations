#include <stdio.h>

int main(void) {
    int rows;
    if (scanf("%d", &rows) != 1 || rows < 1) return 1;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows - i - 1; ++j) putchar(' ');
        for (int j = 0; j < 2 * i + 1; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
