#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

map<pair<int, int>, int> mp;
int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int h, m;
        cin >> h >> m;
        mp[{h, m}]++;
    }
    
    int mx = 0;
    for (auto el: mp) mx = max(el.second, mx);
    cout << mx << endl;
    return 0;
}
