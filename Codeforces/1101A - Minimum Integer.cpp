#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int l, r, d;
        cin >> l >> r >> d; 

        int mn = d;

        int mx = (r / d) * d;
        if ( mx <= r || mx == 0 ) mx += d;

        if ( l <= mn ) cout << mx << endl;
        else cout << mn << endl;
    }

    return 0;
}

