#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    ll l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;

    ll res = min(r1, r2) - max(l1, l2) + 1;
    if (res < 0) cout << 0 << endl;
    else {
        if ( k >= max(l1, l2) && k <= min(r1, r2) ) res--;
        cout << res << endl;
    }
    return 0;
}
