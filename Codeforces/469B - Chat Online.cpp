#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifdef __DEBUG
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif // __DEBUG

    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int, int>> a(p), b(q);
    for (auto &el: a) cin >> el.first >> el.second;
    for (auto &el: b) cin >> el.first >> el.second;

    int t = 0;
    for (int i = l; i <= r; ++i) {
        int cnt = 0;
        for (auto el: b) {
            int p = el.first + i, q = el.second + i;
            for (auto x: a) {
                int p1 = x.first, q1 = x.second;
                if (p >= p1 && p <= q1) cnt++;
                else if (q >= p1 && q <= q1) cnt++;
                else if (p1 >= p && p1 <= q) cnt++;
                else if (q1 >= p && q1 <= q) cnt++;
            }
        }
        if (cnt) t++;
    }

    cout << t << endl;
    return 0;
}
