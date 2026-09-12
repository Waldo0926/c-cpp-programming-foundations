#include <stdio.h>

int main(void) {
    int value;
    if (scanf("%d", &value) != 1) return 1;
    if (value < 10000 || value > 99999) {
        puts("input must be a five-digit positive integer");
        return 1;
    }

    int first = value / 10000;
    int second = value / 1000 % 10;
    int fourth = value / 10 % 10;
    int fifth = value % 10;
    puts(first == fifth && second == fourth ? "Yes" : "No");
    return 0;
}
