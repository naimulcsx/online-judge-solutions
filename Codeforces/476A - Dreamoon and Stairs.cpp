#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    int mn = numeric_limits<int>::max();
    for (int k2 = 0; 2 * k2 <= n; ++k2) {
        int k1 = n - (2 * k2);

        if ( (k1 + k2) % k == 0 ) 
            mn = min(k1 + k2, mn);
    }

    if (mn == numeric_limits<int>::max()) cout << -1 << endl;
    else cout << mn << endl;
    return 0;
}
