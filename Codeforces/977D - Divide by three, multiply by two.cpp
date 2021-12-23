#include<bits/stdc++.h>
using ll = long long;
using namespace std;

ll arr[110];
map<ll, vector<ll>> edges;
map<ll, bool> vis, exists;

vector<ll> res;

void dfs( ll x ) {
    if (vis[x] == 1) return;
    vis[x] = 1;

    res.push_back(x);
    for (auto el: edges[x]) {
        if ( exists[el] == 1 && vis[el] == 0 ) {
            dfs(el);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        exists[arr[i]] = 1;
        edges[ arr[i] ].push_back(arr[i] * 2);
        if ( arr[i] % 3 == 0 ) edges[ arr[i] ].push_back(arr[i] / 3);
    }

    for (int i = 1; i <= n; ++i) {
        vis.clear();
        res.clear();
        dfs(arr[i]);

        if (res.size() == n) {
            for (auto el: res) cout << el << ' ';
            cout << endl;
            return 0;
        }
    }
    
    return 0;
}