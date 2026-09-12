// CCF CSP 202112-1 historical approach reconstructed from the original course report.
// The archived 202112-1.cpp and 202112-2.cpp were identical; the saved content matches the 202112-2 approach.

#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, N;
    if (!(std::cin >> n >> N)) return 0;

    std::vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; ++i) std::cin >> a[i];

    long long sum = 0;
    int interval = 0;
    for (int x = 0; x < N; ++x) {
        while (interval < n && x >= a[interval + 1]) ++interval;
        sum += interval;
    }

    std::cout << sum << '\n';
    return 0;
}
