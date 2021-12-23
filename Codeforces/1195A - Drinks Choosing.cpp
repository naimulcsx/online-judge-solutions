#include <bits/stdc++.h>
using namespace std;

int freq[1010];

int main() {
    ios::sync_with_stdio(false);
    int n, k, p;
    cin >> n >> k;    
    for (int i = 0; i < n; ++i) {
        cin >> p;
        freq[p]++;
    }

    int s = 0, t = 0, have = (n + 1) / 2;
    for (int i = 1; i <= 1000; ++i) {
        if ( freq[i] == 0 ) continue;
        s += freq[i] / 2;
        t += freq[i] % 2;
    }

    int res = s * 2;
    have -= s;
    if ( have > 0 ) res += have;
    cout << res << endl;
    return 0;
}
