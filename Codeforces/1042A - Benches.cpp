#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    int mx = 0, total = 0;
    for (int i = 0; i < n; ++i) {
        int inp; cin >> inp;
        mx = max(mx, inp);
        total += inp;
    }

    int mn = (total + m) / n;
    if ((total + m) % n != 0)  mn++;
    cout << max(mn, mx) << " " << mx + m << endl;
    return 0;
}
