#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i].first, arr[i].second = i;

    map<int, int> mp;
    for (auto el: arr) mp[el.first]++;

    int k = 1;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)  {
        int newk = k + it->second;
        it->second = k;
        k = newk;
    }

    for (auto &el: arr) el.second = mp[el.first];
    for (auto el: arr) cout << el.second << ' ';

    cout << endl;
    return 0;
}
