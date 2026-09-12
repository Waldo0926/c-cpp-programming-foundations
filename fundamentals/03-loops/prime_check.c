#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    if (n < 2) {
        puts("not prime");
        return 0;
    }

    for (int i = 2; i <= n / i; ++i) {
        if (n % i == 0) {
            puts("not prime");
            return 0;
        }
    }
    puts("prime");
    return 0;
}
