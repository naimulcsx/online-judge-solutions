#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll power(ll n, ll k) {
    if (k == 0) return 1;
    else if (k & 1) return n * pow(n, k - 1);
    ll res = pow(n, k / 2);
    return res * res;
}

int main() {
    ios::sync_with_stdio(false);
    int p, m;
    cin >> p >> m;

    if (p >= 27) cout << m << endl;
    else cout << m % power(2, p) << endl;

    return 0;
}
