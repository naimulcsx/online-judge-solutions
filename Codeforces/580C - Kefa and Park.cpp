#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, l, res = 0;
bool cat[100100];
vector<int> edges[100100];

void dfs(int x, int par, int cats_cnt) {
    if ( !cat[par] ) cats_cnt = 0;
    if ( cat[x] ) cats_cnt++;
    if ( cats_cnt > l ) return;
    if ( edges[x].size() == 1 && x != 1 ) res++;

    for ( auto el: edges[x] ) {
        if ( el != par )
            dfs( el, x, cats_cnt );
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin >> n >> l;
    for (int i = 1; i <= n; ++i) cin >> cat[i];


    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    dfs( 1, 0, 0 ) ;
    cout << res << endl;
    return 0;
}
