#include <bits/stdc++.h>
using namespace std;

int cnt[1010];

int main() {
    ios::sync_with_stdio(false);
    int n, mx = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        cnt[k]++;
        mx = max( mx, cnt[k] );
    }

    int c = 0;
    for (auto el: cnt) if (el > 0) c++;
    cout << mx << ' ' << c << endl;
        
    return 0;
}
