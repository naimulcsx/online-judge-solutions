#include <bits/stdc++.h>
using namespace std;

int arr[110];

int main() {
    int q;
    cin >> q;
    while(q--) {
        int m, n;
        cin >> m >> n;

        int mn = INT_MAX;
        for (int i = 0; i < m; ++i) cin >> arr[i], mn = min(mn, arr[i]);

        bool flag = true;
        int new_price = mn + n;
        for (int i = 0; i < m; ++i) {
            if (abs(arr[i] - new_price) > n) {
                flag = false;
                break;
            }
        }

        if (flag) cout << new_price << endl;
        else cout << -1 << endl;
    }

    return 0;
}

