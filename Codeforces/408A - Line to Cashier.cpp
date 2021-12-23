#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int mn = 9999999;
    for (int i = 0; i < n; ++i) {
        int t = 15 * arr[i];
        for (int j = 0; j < arr[i]; ++j) {
            int k;
            cin >> k;
            t += (k * 5);
        }
        mn = min(mn, t);
    }

    cout << mn << endl;
    return 0;
}
