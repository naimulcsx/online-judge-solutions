#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> q(n - 1);

    ll sum = 0, mn = 0;
    for (int i = 0; i < n - 1; ++i) {
        cin >> q[i];
        sum += q[i];
        mn = min(mn, sum);
    }

    vector<ll> p(n);
    p[0] = 0;
    for (int i = 1; i < n; ++i) p[i] = p[i - 1] + q[i - 1];

    bool flag = true;
    unordered_set<ll> elems;
    for (auto el: p) {
        ll t = el + (1 - mn);
        elems.insert(t);
        if ( t > n || t < 1 ) flag = false;
    }

    if ( flag && (int) elems.size() == n ) {
        for (auto el: p) cout << el + (1 - mn) << ' ';
    } else cout << "-1" << endl;

    return 0;
}
