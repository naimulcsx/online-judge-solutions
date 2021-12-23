#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int n, m, c;
    scanf("%d %d %d", &n, &m, &c);

    int k, mn = 10000, mx = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &k);
        mn = min(mn, k);
    }

    for (int i = 0; i < m; ++i) {
        scanf("%d", &k);
        mx = max(mx, k);
    }

    int a = (c / mn), b = c % mn;
    if (mx <= mn) printf("%d\n", c);
    else printf("%d\n", a * mx + b);
    return 0;
}
