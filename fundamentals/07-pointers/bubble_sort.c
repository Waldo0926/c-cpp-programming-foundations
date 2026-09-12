#include <stdio.h>

static void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

static void bubble_sort(int values[], int count) {
    for (int end = count - 1; end > 0; --end) {
        int swapped = 0;
        for (int i = 0; i < end; ++i) {
            if (values[i] > values[i + 1]) {
                swap(&values[i], &values[i + 1]);
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int main(void) {
    int values[10];
    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &values[i]) != 1) return 1;
    }
    bubble_sort(values, 10);
    for (int i = 0; i < 10; ++i) printf("%d%c", values[i], i == 9 ? '\n' : ' ');
    return 0;
}
