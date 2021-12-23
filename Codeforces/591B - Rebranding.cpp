#include <bits/stdc++.h>
using namespace std;

unordered_map< char, vector<int>> mp;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    string str;
    cin >> n >> m >> str;

    for (int i = 0; i < n; ++i)
        mp[ str[i] ].push_back( i );


    for (int i = 0; i < m; ++i) {
        char f, t;
        cin >> f >> t;
        swap(mp[f], mp[t]);
    }

    string res = str;
    for (auto el: mp) {
        for (auto x: el.second) 
            res[x] = el.first;
    }

    cout << res << endl;
    return 0;
}
