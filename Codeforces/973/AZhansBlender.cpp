#include <bits/stdc++.h>

void solve()
{
    int n, x, y;
    std::cin >> n >> x >> y;
    int bottleneck = std::min(x, y);
    int result = n % bottleneck == 0 ? n / bottleneck : n / bottleneck + 1;
    std::cout << result << "\n";
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
        solve();

    return 0;
}