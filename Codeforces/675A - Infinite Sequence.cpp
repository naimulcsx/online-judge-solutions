#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, n, d;
    cin >> a >> n >> d;

    // n = a + (n - 1) d
    // nd = n - (a - d)
    // n = (n - a + d) / d

    ll p = n - a + d;
    if (a == n) cout << "YES" << endl;
    else if ( n < a && d < 0 && p % d == 0 ) cout << "YES" << endl;
    else if ( n > a && d > 0 && p % d == 0 ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
