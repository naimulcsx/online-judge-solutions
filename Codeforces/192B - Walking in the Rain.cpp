#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int mn = numeric_limits<int>::max();
    for (int i = 0; i < n - 1; ++i) {
        mn = min(mn, max(arr[i], arr[i + 1]));
    }
    mn = min(mn, arr[0]);
    mn = min(mn, arr[n - 1]);

    cout << mn << endl;
    return 0;
}
