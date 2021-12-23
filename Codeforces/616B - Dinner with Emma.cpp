#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int mn = numeric_limits<int>::max();
        for (int j = 0; j < m; ++j) {
            int k;
            cin >> k;
            mn = min(mn, k);
        }
        mx = max(mn, mx);
    }

    cout << mx << endl;
    return 0;
}
