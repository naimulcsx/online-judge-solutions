#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll d[110], h[110];

int main() {
    int t;
    cin >> t;
    while(t--) {

        ll n, x;
        cin >> n >> x;
        for (int i = 1; i <= n; ++i) cin >> d[i] >> h[i];

        bool can_be_defeated = false;
        for (int i = 1; i <= n; ++i) if (h[i] < d[i]) { can_be_defeated = true; break; };

        ll maxd = 0, maxdh = 0;
        for (int i = 1; i <= n; ++i) maxdh = max(maxdh, d[i] - h[i]), maxd = max(maxd, d[i]);

        if ( x > maxd && !can_be_defeated ) {
            cout << -1 << endl;
            continue;
        }

        if ( maxd >= x ) cout << 1 << endl;
        else cout << (int) ceil( (double) (x - maxd) / maxdh ) + 1 << endl;
    }

    return 0;
} 