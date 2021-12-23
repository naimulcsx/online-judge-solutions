#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    ll p = k / 2, q = k / 2 + k % 2;
    if ( k % 2 == 0 ) p--, q++;

    ll res =  min(p, n - q + 1);
    if (res <= 0) cout << 0 << endl;
    else cout << res << endl;
    return 0;
}
