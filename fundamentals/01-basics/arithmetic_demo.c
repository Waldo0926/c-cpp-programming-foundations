#include <stdio.h>

int main(void) {
    const int a = 9;
    const int b = 5;

    printf("a = %d, b = %d\n", a, b);
    printf("product = %d\n", a * b);
    printf("quotient = %.1f\n", (double)a / b);
    printf("remainder = %d\n", a % b);
    return 0;
}
