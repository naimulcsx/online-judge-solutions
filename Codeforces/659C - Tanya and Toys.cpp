#include <bits/stdc++.h>
using namespace std;

int n, k;
unordered_map<int, bool> mp;

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        mp[p] = 1;
    }

    
    int i = 1;
    vector<int> res;
    while( k >= i ) {
        if ( mp.count(i) ) {
            i++;
            continue;
        }
        res.push_back(i);
        k -= i;
        i++;
    }

    cout << res.size() << '\n';
    for (auto el: res) cout << el << ' ';
    cout << '\n';
    return 0;
}
