#include <bits/stdc++.h>
using namespace std;

bool visited[2100];
vector<int> edges[2100];

int h;
void sol(int n, int height = 1) {
    if (visited[n]) return;
    visited[n] = 1;
    h = max(height, h);
    for (auto el: edges[n]) sol(el, height + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    vector<int> roots;
    for (int i = 1; i <= n; ++i) {
        int k;
        scanf("%d", &k);
        if (k == -1) { roots.push_back(i); continue; }
        edges[k].push_back(i);
    }

    int res = 0;
    for (auto el: roots) {
        h = 0;
        sol(el);
        res = max(h, res);
    }

    printf("%d\n", res);
    return 0;
}