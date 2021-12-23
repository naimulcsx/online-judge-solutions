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

    int mn = numeric_limits<int>::max();
    for (int i = 0; i < n; ++i) {
        int input; cin >> input;
        if (k % input == 0) mn = min(mn, k / input);
    }

    cout << mn << endl;
    return 0;
}
