#include <bits/stdc++.h>
using namespace std;

int dis[110];
bool visited[110];
vector<pair<int, int>> edges[110];

void sol(int n) {
    for (int i = 1; i <= 105; ++i) dis[i] = 1e8;
    priority_queue<pair<int, int>> q;
    dis[n] = 0;
    q.push({0, n});

    while(q.size() > 0) {
        auto curr = q.top();
        q.pop();
    
        int par = curr.second;
        
        for (auto el: edges[par]) {
            if (dis[par] + el.second < dis[el.first]) {
                dis[el.first] = dis[par] + el.second;
                q.push({ -dis[par], el.first });
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        int k;
        scanf("%d", &k);
        if (i == n) {
            edges[1].push_back({n, k});
            edges[n].push_back({1, k});
        } else {
            edges[i].push_back({i + 1, k});
            edges[i + 1].push_back({i, k});
        }
    }

    int s, t;
    scanf("%d %d", &s, &t);
    sol(s);
    printf("%d\n", dis[t]);
    return 0;
}
