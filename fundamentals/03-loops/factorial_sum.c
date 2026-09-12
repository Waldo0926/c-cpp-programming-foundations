#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) return 1;

    unsigned long long factorial = 1;
    unsigned long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        factorial *= (unsigned)i;
        sum += factorial;
    }
    printf("%llu\n", sum);
    return 0;
}
