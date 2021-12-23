#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifdef __DEBUG
    freopen("files/output.txt", "w", stdout);
    freopen("files/input.txt", "r", stdin);
    #endif

    int n;
    cin >> n;
    vector< int > arr(n);
    for (auto &el: arr) cin >> el;

    int mx = 0, dis = 0;
    for (int i = 2; i < n; ++i) {
        if ( arr[i] == arr[i - 1] + arr[i - 2] ) {
            dis++;
            mx = max(mx, dis);
        } else dis = 0;
    }

    if (n <= 2) cout << n << endl;
    else cout << mx + 2 << endl;
    return 0;
}
