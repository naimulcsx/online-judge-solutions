#include<bits/stdc++.h>
using ll = long long;
using namespace std;


int degree[200200];
vector<int> edges[200200];
bool vis[200200];

void dfs( int x ) {
    if ( vis[x] ) return;
    vis[x] = 1;
    for (auto el: edges[x]) dfs(el);
}

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i) {
        int a, b;
        cin >> a >> b;
        degree[a]++, degree[b]++;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }


    for (int i = 1; i <= n; ++i) {
        if (degree[i] != 2) {
            dfs(i);
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (vis[i]) continue;
        dfs(i);
        cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}