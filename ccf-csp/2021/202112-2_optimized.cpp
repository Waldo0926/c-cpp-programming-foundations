// CCF CSP 202112-2 optimized solution.
// Instead of evaluating every x in [0, N), it sums over intervals where both f(x) and g(x) are constant.
// Complexity: O(n + N/r), which is O(n) under the problem constraints.

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, N;
    if (!(std::cin >> n >> N)) return 0;

    std::vector<int> a(n + 2, 0);
    for (int i = 1; i <= n; ++i) std::cin >> a[i];
    a[n + 1] = N;

    const int r = N / (n + 1);
    long long error = 0;
    int f_value = 0;
    int x = 0;

    while (x < N) {
        while (f_value < n && x >= a[f_value + 1]) ++f_value;

        const int g_value = x / r;
        const int next_f_change = a[f_value + 1];
        const int next_g_change = std::min(N, (g_value + 1) * r);
        const int end = std::min(next_f_change, next_g_change);

        error += static_cast<long long>(end - x) *
                 std::llabs(static_cast<long long>(g_value) - f_value);
        x = end;
    }

    std::cout << error << '\n';
    return 0;
}
