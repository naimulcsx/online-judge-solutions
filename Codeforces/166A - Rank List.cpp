#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> vec(n);
    for ( auto &el: vec ) cin >> el.first >> el.second;
    sort( begin(vec), end(vec), [](pair<int, int> a, pair<int, int> b)  {
        if (a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });

    int cnt = 0;
    pair<int, int> kth = vec[k - 1];
    for (int i = 0; (int) i < vec.size(); ++i) {
        if (vec[i] == kth) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
