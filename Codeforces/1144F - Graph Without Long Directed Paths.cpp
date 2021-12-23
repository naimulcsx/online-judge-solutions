#include <bits/stdc++.h>
using namespace std;

vector<int> edges[200200];

unordered_map<int, unordered_set<int>> mp;

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vec;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
        vec.push_back({u, v});
    }


    int st = 1;
    queue<int> q;
    q.push(st);

    bool flag = true;
    while( q.size() > 0 ) {
        int top = q.front();
        q.pop();

        bool edge_in = false, edge_out = false;
        for (auto el: edges[top]) {
            if (mp[el].count(top)) {
                edge_in = true;
            }
            if (mp[top].count(el)) {
                edge_out = true;
            }
        }

        if (edge_in && edge_out) {
            flag = false;
            break;
        }

        for (auto el: edges[top ]) {
            if (mp[el].count(top) || mp[top].count(el)) continue;


            if ( edge_in == false && edge_out == false )  {
                mp[top].insert(el);
            }
            else if ( edge_in ) {
                mp[el].insert(top);
            }
            else if ( edge_out ) {
                mp[top].insert(el);
            }

            q.push(el);
        }
    }

    if (flag) {
        cout << "YES" << endl;
        for (auto el: vec) {
            if (mp[el.first].count(el.second)) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    else cout << "NO" << endl;

    return 0;
}
