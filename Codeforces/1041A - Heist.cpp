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

    int mx, mn, input;
    mx = 0, mn = numeric_limits<int>::max();

    for (int i = 0; i < n; ++i) {
        cin >> input;
        mx = max(mx, input);
        mn = min(mn, input);
    }

    cout << mx - mn - n + 1 << endl;
    return 0;
}
