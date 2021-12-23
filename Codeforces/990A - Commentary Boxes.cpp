#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll nxt, prv;
    prv = (n / m) * m;
    nxt = prv + m;

    if ( n % m == 0 ) cout << 0 << endl;
    else cout << min((n - prv) * b, (nxt - n) * a) << endl;
    return 0;
}
