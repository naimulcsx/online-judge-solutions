#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;
    vector<ll> divs;
    for (ll i = 1; i * i <= n; ++i) {
        if (i * i == n) divs.push_back(i);
        else if (n % i == 0) divs.push_back(i), divs.push_back(n/i);
    }

    sort(begin(divs), end(divs));

    if ( k > (ll) divs.size() ) cout << -1 << endl;
    else cout << divs[k - 1] << endl;

    return 0;
}
