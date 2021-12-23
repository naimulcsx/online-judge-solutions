#include <bits/stdc++.h>
using namespace std;

int price[60];

int main() {
    ios::sync_with_stdio(false);
    for (int i = 0; i < 60; ++i) price[i] = 1e8;
    int n, h, q;
    cin >> n >> h >> q;

    int res = 0;
    while( q-- ) {
        int l, r, x;
        cin >> l >> r >> x;
        for (int i = l; i <= r; ++i) price[i] = min(price[i], x);
    }

    for (int i = 1; i <= n; ++i) {
        if (price[i] == 1e8) res += h * h;
        else res += price[i] * price[i];
    }

    cout << res << endl;
    return 0;
}
