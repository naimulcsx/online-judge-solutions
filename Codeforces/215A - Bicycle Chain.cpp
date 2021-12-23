#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n;
    vector<int> p(n);
    for (auto &el: p) cin >> el;

    cin >> m;
    vector<int> q(m);
    for (auto &el: q) cin >> el;


    int mx = 0;
    vector<int> res;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (q[i] % p[j] == 0) {
                mx = max(mx, q[i] / p[j]);
                res.push_back(q[i] / p[j]);
            }
        }
    }

    cout << count(begin(res), end(res), mx) << endl;
    return 0;   
}
