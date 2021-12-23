#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll k, n, a, b;
bool func( ll x ) {
    if ( a * x == k ) return 0;
    if ( b * (n - x) == k ) return 0;
    if ( a * x == k - b * (n - x) ) return 0;
    if ( b * (n - x) == k - a * x ) return 0;
    return a * x + b * (n - x) <= k;
}

ll ans() {
    ll lo = 0, hi = n;
    while( hi - lo > 1 ) {
        ll mid = (lo + hi) / 2;
        if ( func(mid) ) lo = mid;
        else hi = mid;
    }        

    if ( func(hi) ) return hi;
    else if ( func(lo) ) return lo;
    return -1;
}

int main() {
    ll q;
    cin >> q;

    while(q--) {
        cin >> k >> n >> a >> b;
        cout << ans() << endl;
    }
    
    return 0;
}
