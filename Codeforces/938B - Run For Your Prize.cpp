#include <bits/stdc++.h>
using namespace std;

vector<int> m, f;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int k; 
        cin >> k;
        if ( k <= 5e5 ) m.emplace_back(k);
        else f.emplace_back(k);
    }

    int res = 0;
    if ( m.size() > 0 ) res = m[m.size() - 1] - 1;
    if ( f.size() > 0 ) res = max(res, (int) 1e6 - f[0]);
    cout << res << endl;
    return 0;
}
