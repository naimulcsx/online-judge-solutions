#include <bits/stdc++.h>
using ll = long long;
using namespace std;


ll d[200200];

int main() {
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) cin >> d[i];
    for (int i = 2; i <= n; ++i) d[i] += d[i - 1];

    while(m--) {
        ll k;
        cin >> k;
        int pos = lower_bound(d + 1, d + n + 1, k) - (d);
        cout << pos << ' ' << k - d[pos - 1] << endl;
    }
    
    return 0;
} 
