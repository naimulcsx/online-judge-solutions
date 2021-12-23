#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sol( ll pos, ll center, ll size ) {
    ll middle = size / 2 + 1;
    if (pos == middle ) return center;
    else if ( pos < middle ) {
        return sol( pos, center - 1, size / 2 );
    } else if ( pos > middle ) {
        return sol(pos - middle, center - 1, size / 2 );
    }
}

int main() {
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;

    ll size = 1;
    for (int i = 0; i < n - 1; ++i)
        size = size * 2LL + 1LL;

    cout << sol(k, n, size) << endl;
    return 0;
}
