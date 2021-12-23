#include <bits/stdc++.h>
using namespace std;

int a, b, c, sz;

bool chk( int t ) {
    if (sz <= t * b) return true;
    return ((a * c) - (t * b)) <= (b * c);
}

int main() {
    cin >> a >> b >> c;
    sz = a * c;

    int lo = 1, hi = 1e6, mid, res;
    while(lo <= hi) {
        mid = (lo + hi) / 2;
        if ( chk(mid) ) {
            res = mid;
            hi = mid - 1;
        } else lo = mid + 1;
    }

    cout << res << endl;
    return 0;
}
