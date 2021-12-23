#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int bm[110], gm[110];

int main() {
    int b, g;
    cin >> b >> g;

    vector<pair<int, int>> res;
    for (int i = 1; i <= b; ++i) {
        for (int j = 1; j <= g; ++j) {
            if ( bm[i] == 0 || gm[j] == 0 ) {
                res.push_back({i, j});
                bm[i] = gm[j] = 1;
            }
        }
    }

    cout << res.size() << endl;
    for (auto el: res)
        cout << el.first << ' ' << el.second << endl;

    return 0;
}
