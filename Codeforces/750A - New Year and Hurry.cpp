#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif  

    int n, k;
    cin >> n >> k;

    vector<int> times(n);
    for (int i = 1; i <= n; ++i)
        times[i - 1] = i * 5;

    // prefix sum
    for (int i = 1; i < n; ++i)
        times[i] += times[i - 1];

    auto it = upper_bound(times.begin(), times.end(), 240 - k);
    cout << it - times.begin() << endl;
    return 0;
}
