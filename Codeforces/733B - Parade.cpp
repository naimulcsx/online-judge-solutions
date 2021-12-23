#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);

    int l = 0, r = 0;
    for (auto &el: arr) {
        cin >> el.first >> el.second;
        l += el.first;
        r += el.second;
    }

    int res = abs(l - r), resi = 0;

    for (int i = 0; i < n; ++i) {
        int p = l - arr[i].first + arr[i].second;
        int q = r - arr[i].second + arr[i].first;
        
        if (abs(p - q) > res) {
            res = abs(p - q);
            resi = i + 1;
        }
    }

    cout << resi << endl;
    return 0;
}