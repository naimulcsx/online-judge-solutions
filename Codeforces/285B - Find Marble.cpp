#include <bits/stdc++.h>
using namespace std;

int dis[100100];
bool visited[100100];
vector<int> edges[100100];

void bfs( int x ) {
    for (auto &el: dis) el = 1e9;
    queue<int> q;
    visited[x] = 1, dis[x] = 0;
    q.push(x);

    while( q.size() > 0 ) {
        int curr = q.front();
        q.pop();
        for (auto el: edges[curr]) {
            if (!visited[el]) {
                dis[el] = dis[curr] + 1;
                q.push (el);
            }
        }
    }
}

int main() {
    int n, s, t;
    scanf("%d %d %d", &n, &s, &t);

    for (int i = 1; i <= n; ++i) {
        int k;
        scanf("%d", &k);
        edges[i].push_back(k);
    }

    bfs(s);
    if ( dis[t] == 1e9 ) printf("-1\n");
    else printf("%d\n", dis[t]);
    return 0;
}
