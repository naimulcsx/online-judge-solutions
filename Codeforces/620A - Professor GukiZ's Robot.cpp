#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll p1 = abs(x1 - x2), p2 = abs(y1 - y2);
    if (y1 < y2) y1 += p1;
    else if (y2 < y1) y1 -= p1;

    if (x1 < x2) x1 += p2;
    else if (x2 < x1) x1 -= p2;

    ll d1 = p1 + abs(y1 - y2), d2 = p2 + abs(x1 - x2);
    cout << min(d1, d2) << endl;
    return 0;
}
 