#include <bits/stdc++.h>
using namespace std;

int n, m;
int dis[100100];
bool vis[100100];
vector<int> edges[20100];

void bfs( int st ) {
    queue<int> q;
    q.push(st);
    dis[st] = 0, vis[st] = 1;

    while( q.size() > 0 ) {
        int par = q.front();
        q.pop();

        for ( int chi: edges[par] ) {
            if (vis[chi]) continue;
            vis[chi] = 1;
            dis[chi] = dis[par] + 1;
            q.push(chi);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= 10000; ++i) {
        edges[i].push_back(i * 2);
        edges[i].push_back(i - 1);
    }

    bfs(n);
    cout << dis[m] << endl;
    return 0;
}
