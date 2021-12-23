#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;
    sort(begin(arr), end(arr));

    ll cost = 0;
    for (int i = 1; i <= n; ++i) cost += abs(i - arr[i - 1]);
    cout << cost << endl;

    return 0;   
}
