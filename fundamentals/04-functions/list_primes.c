#include <stdio.h>

static int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / i; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    for (int n = 2; n <= 100; ++n) {
        if (is_prime(n)) printf("%d%c", n, n < 100 ? ' ' : '\n');
    }
    putchar('\n');
    return 0;
}
