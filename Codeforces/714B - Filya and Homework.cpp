#include <bits/stdc++.h>
using namespace std;

unordered_map<int, bool> marks;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int mn = numeric_limits<int>::max(), mx = 0;
    unordered_set<int> data;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        mx = max(mx, k);
        mn = min(mn, k);
        data.insert(k);
        marks[k] = true;
    }

    if ( data.size() == 1 || data.size() == 2 ) cout << "YES" << endl;
    else if (data.size() == 3 && (mx - mn) % 2 == 0 && marks[(mx + mn) / 2]) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
