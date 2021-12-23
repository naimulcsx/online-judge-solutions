#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int mx_diff = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) 
            mx_diff = max(mx_diff, arr[i] - arr[i + 1]);
    }

    if (mx_diff - c >= 0) cout << mx_diff - c << endl;
    else cout << 0 << endl;

    return 0;
}
