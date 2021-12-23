#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll time(int x1, int y1, int x2, int y2, int v) {
    double s = sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) );
    return (ll) ((s / v) * 1000000);
}

int main() {
    ios::sync_with_stdio(false);
    ll a, b, q;
    cin >> a >> b >> q;

    ll mn = numeric_limits<ll>::max();
    while(q--) {
        int x, y, v;
        cin >> x >> y >> v;
        mn = min(mn, time(a, b, x, y, v));
    }

    cout << fixed << setprecision(20);
    cout << mn / 1000000.00 << endl;
    return 0;
}
