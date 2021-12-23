#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int arr[210];
int vis[210], dis[210];
vector<int> edges[210];

int bfs( int x ) {
    queue<int> q;
    memset(vis, 0, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    q.push(x);
    vis[x] = 1;

    while(q.size() > 0) {
        int par = q.front();
        q.pop();
        for (auto el: edges[par]) {
            if (el == x)  return dis[par] + 1;
            if ( !vis[el] ) {
                vis[el] = 1;
                q.push(el);
                dis[el] = dis[par] + 1;
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);


    int q;
    cin >> q;
    while(q--) {

        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
            edges[i].push_back(arr[i]);
        }

        for (int i = 1; i <= n; ++i) cout << bfs(i) << ' ';
        cout << '\n';

        for (int i = 1; i <= n; ++i) edges[i].clear();   
    }

    return 0;
}
