#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, m;
ll dis[100100], nxt[100100];
vector<pair<ll, ll>> edges[100100];

void dijsktra( int st ) {
    for (int i = 1; i <= n; ++i) dis[i] = (ll) 1e15;
    priority_queue<pair<ll, ll>> pq; 
    pq.push({0, st});
    dis[st] = 0;

    while( pq.size() > 0 ) {
        auto par = pq.top();
        pq.pop();

        for (auto child: edges[par.second]) {
            if ( -par.first + child.second < dis[child.first] ) {
                dis[child.first] = -par.first + child.second;
                pq.push({-dis[child.first], child.first});
                nxt[child.first] = par.second;
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; ++i) {
        int u, v, d;
        scanf("%d %d %d", &u, &v, &d);
        edges[u].push_back({v, d});
        edges[v].push_back({u, d});
    }

    dijsktra( 1 );

    int curr = n;
    vector<int> res;
    while( curr > 0 ) {
        res.push_back(curr);
        curr = nxt[curr];
    }
    reverse(begin(res), end(res));
    if (res[0] != 1) cout << -1 << endl;
    else for (auto el: res) cout << el << ' ';
    return 0;
}
