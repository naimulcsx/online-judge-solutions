#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll l, r, k, lim;
    cin >> l >> r >> k;

    lim = log(1e18) / log(k);

    ll cnt = 0;
    for (ll i = 0; i <= lim; ++i) {
        ll res = pow(k, i);
        if ( res >= l && res <= r ) {
            cnt++;
            cout << res << ' ';
        }
        else if ( res > r ) break;
    }

    if (cnt == 0) cout << -1 << endl;
    return 0;   
}
