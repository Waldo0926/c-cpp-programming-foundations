#include <stdio.h>

int main(void) {
    double values[10];
    for (int i = 0; i < 10; ++i) {
        if (scanf("%lf", &values[i]) != 1) return 1;
    }

    int min_index = 0;
    for (int i = 1; i < 10; ++i) {
        if (values[i] < values[min_index]) min_index = i;
    }

    printf("%.2f %d\n", values[min_index], min_index);
    return 0;
}
