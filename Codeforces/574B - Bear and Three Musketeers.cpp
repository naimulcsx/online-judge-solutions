#include <bits/stdc++.h>
using namespace std;
const int MAX = 4040;

int deg[MAX];
int adj[MAX][MAX];

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        deg[u]++, deg[v]++;
        adj[u][v] = adj[v][u] = 1;
    }

    int ans = 1e9;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if ( !adj[i][j] ) continue;
            for (int k = j + 1; k <= n; ++k) {
                if ( adj[k][i] && adj[k][j] ) {
                    ans = min(ans, deg[i] + deg[j] + deg[k] - 6);
                }
            }
        }
    }

    if (ans == 1e9) cout << -1 << endl;
    else cout << ans << endl;
    return 0;   
}
