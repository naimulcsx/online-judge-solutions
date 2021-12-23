#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll combination(ll n, ll r) {
    ll res = 1;
    for (int i = n; i > n - r; --i) res *= i;
    return res / r;
}

int main() {
    #ifdef __DEBUG
    freopen("files/output.txt", "w", stdout);
    freopen("files/input.txt", "r", stdin);
    #endif

    int n;
    cin >> n;
    vector<int> arr(n);

    int mx = 0, mn = numeric_limits<int>::max();
    for (auto &el: arr) {
        cin >> el;
        mx = max(mx, el);
        mn = min(mn, el);
    }

    if (mx == mn) {
        ll mx_min_count = 0;
        for (auto el: arr)
            if (el == mx) mx_min_count++;
        cout << 0 << " " << combination(mx_min_count, 2) << endl;
    } else {
        ll mx_count = 0, mn_count = 0;
        for (auto el: arr) {
            if (el == mx) mx_count++;
            else if (el == mn) mn_count++;
        }
        cout << mx - mn << ' ' << mx_count * mn_count << endl;
    }

    return 0;
}