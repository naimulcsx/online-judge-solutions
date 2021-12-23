#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int marks[200];

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; ++j) marks[j] = 1;
    }

    vector<int> res;
    for (int i = 1; i <= m; ++i) if (!marks[i]) res.push_back(i);
    cout << res.size() << endl ;
    for (auto el: res) cout << el << ' ';
    cout << endl;

    return 0;
}
