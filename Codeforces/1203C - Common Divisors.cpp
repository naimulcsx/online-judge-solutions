#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int n;
    cin >> n;

    ll gcd = 0;
    for (int i = 0; i < n; ++i) {
        ll p;
        cin >> p;
        gcd = __gcd(gcd, p);
    }

    ll cnt = 0;
    for (ll p = 1; p * p <= gcd; ++p) {
        if (p * p == gcd) cnt++;
        else if (gcd % p == 0) cnt += 2;
    }

    cout << cnt << endl;
    return 0;
}
