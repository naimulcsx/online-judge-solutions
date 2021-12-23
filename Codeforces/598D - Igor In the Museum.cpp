#include <bits/stdc++.h>
using namespace std;

int r, c, q, cnt;
string mat[1010];
int res[1010][1010];
bool vis[1010][1010];
vector<pair<int, int>> neighbours;

void dfs( int x, int y ) {
    if ( vis[x][y] ) return;
    neighbours.push_back({x, y});
    vis[x][y] = 1;

    int dr[] = {0, 0, 1, -1};
    int dc[] = {1, -1, 0, 0};

    for (int i = 0; i <= 3; ++i) {
        int p = x + dr[i], q = y + dc[i];
        if (p < 0 || p >= r || q < 0 || q >= c) continue;
        if (mat[p][q] == '*') cnt++;
        if (mat[p][q] != '.') continue;
        
        dfs(p, q);
    }
}

int main() {    
    cin >> r >> c >> q;
    for (int i = 0; i < r; ++i) cin >> mat[i];


    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if ( mat[i][j] == '.' && !vis[i][j] ) {
                cnt = 0;
                dfs(i, j);
                for (auto el: neighbours) res[el.first][el.second] = cnt;
                neighbours.clear();
            }
        }
    }

    while(q--) {
        int x, y;
        cin >> x >> y;
        cout << res[x - 1][y - 1] << endl;
    }

    return 0;
}
