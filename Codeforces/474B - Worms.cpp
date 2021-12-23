#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n;
    vector<ll> vec(n);
    for (auto &el: vec) cin >> el;
    for (int i = 1; i < n; ++i) vec[i] = vec[i] + vec[i - 1];

    cin >> m;
    while(m--) {
        ll p;
        cin >> p;
        cout << lower_bound(begin(vec), end(vec), p) - begin(vec) + 1 << endl;
    }
    return 0;
}
