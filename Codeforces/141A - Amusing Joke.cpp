#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a, b, c;
    cin >> a >> b >> c;

    if (a.size() + b.size() != c.size()) cout << "NO" << endl;
    else {
        unordered_map<char, int> mp;
        for (auto el: a) mp[el]++;
        for (auto el: b) mp[el]++;
        for (auto el: c) mp[el]--;

        int x = count_if(mp.begin(), mp.end(), [](pair<char, int> x) {
            return x.second == 1;
        });

        if (!x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
