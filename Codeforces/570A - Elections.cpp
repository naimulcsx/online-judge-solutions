#include <bits/stdc++.h>
#define len(str) (ll) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr[m];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int val;
            cin >> val;
            arr[i].push_back(val);
        }
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < m; ++i) {
        int winner = 0, mx = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] > mx) {
                mx = arr[i][j];
                winner = j;
            }
        }
        mp[winner + 1]++;
    }

    int mx = 0;
    for (auto el: mp) mx = max(el.second, mx);

    int mn = 100100;
    for (auto el: mp) 
        if (el.second == mx) 
            mn = min(mn, el.first);

    cout << mn << endl;
    return 0;
}
