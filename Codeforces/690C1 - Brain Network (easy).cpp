#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool cycle;
bool vis[1100];
vector<int> edges[1100];

void has_cycle( int x, int par ) {
    if ( vis[x] ) {
        cycle = true;
        return;
    }

    vis[x] = 1;
    for (auto el: edges[x]) {
        if ( el == par ) continue;
        has_cycle( el, x );
    }
}

void dfs(int x) {
    if (vis[x]) return;
    vis[x] = 1;
    for (auto el: edges[x]) {
        if (!vis[el]) {
            dfs(el);
        }
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    has_cycle(1, 0);
    int cnt = 0; // components
    memset(vis, 0, sizeof(vis));

    for (int i = 1; i <= n; ++i) {
        if ( !vis[i] ) {
            cnt++;
            dfs(i);
        }
    }

    if (cnt == 1 && !cycle) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}

