#include <bits/stdc++.h>
#define what(x) cerr << "\n" << (#x) << " : " << (x) << endl
using namespace std;
using ll = long long;

bool visited[1100];
vector<int> edges[1100];
void sol(int n) {
    if (visited[n]) {
        cout << n << ' ';
        return;
    }
    visited[n] = 1;
    for (auto el: edges[n]) sol(el);
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i - 1];
        edges[i].push_back(arr[i - 1]);
    }

    for (int i = 1; i <= n; ++i) {
        memset(visited, 0, sizeof(visited));
        sol(i);
    }
    return 0;
}
