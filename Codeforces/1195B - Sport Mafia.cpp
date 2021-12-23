#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll sum(ll n) {
    if (n % 2 == 0) return n / 2 * (n + 1);
    return (n + 1) / 2 * n;
}

int main() {
    ios::sync_with_stdio(false);

    ll p, k;
    cin >> p >> k;

    ll lo = 0, hi = p, res = 0;
    while( lo <= hi ) {
        ll mid = (hi + lo) / 2;
        ll midval = sum(mid) - (p - mid);
        if ( midval == k ) {
            res = mid;
            break;
        } 
        else if ( midval < k ) lo = mid + 1;
        else hi = mid - 1;
    }

    cout << p - res << endl;
    return 0;
}
