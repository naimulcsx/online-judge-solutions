#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    int n;
    cin >> n;

    if (n % 2 == 0) {
        for (int i = 1; i <= n; ++i) {
            if (i & 1) cout << i + 1 << " ";
            else cout << i - 1 << " ";
        }
    } else cout << -1;

    cout << endl;
    return 0;
}
