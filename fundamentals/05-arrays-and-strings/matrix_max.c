#include <stdio.h>

int main(void) {
    int matrix[4][4];
    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 4; ++col) {
            if (scanf("%d", &matrix[row][col]) != 1) return 1;
        }
    }

    int max_value = matrix[0][0];
    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 4; ++col) {
            if (matrix[row][col] > max_value) max_value = matrix[row][col];
        }
    }
    printf("%d\n", max_value);
    return 0;
}
