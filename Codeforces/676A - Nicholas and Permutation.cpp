#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int mx_pos, mn_pos;
    for (int i = 1; i <= n; ++i) {
        int k; cin >> k;
        if (k == n) mx_pos = i;
        else if (k == 1) mn_pos = i;
    }

    cout << max({abs(mx_pos - n), abs(mn_pos - n), mx_pos - 1, mn_pos - 1}) << endl;
    return 0;
}
