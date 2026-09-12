// CCF CSP 202112-2 historical approach reconstructed from the original course report.
// The report records a score of 70/100. The O(N) scan is the main performance bottleneck.

#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, N;
    if (!(std::cin >> n >> N)) return 0;

    std::vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; ++i) std::cin >> a[i];

    const int r = N / (n + 1);
    long long error = 0;
    int interval = 0;

    for (int x = 0; x < N; ++x) {
        while (interval < n && x >= a[interval + 1]) ++interval;
        const int g = x / r;
        error += std::llabs(static_cast<long long>(g) - interval);
    }

    std::cout << error << '\n';
    return 0;
}
