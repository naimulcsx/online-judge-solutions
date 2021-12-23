#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    int mx = numeric_limits<int>::min();
    for (int i = 1; i <= n; ++i) {
        int f, t;
        cin >> f >> t;
        if (t > k)  mx = max(mx, f - (t - k));
        else mx = max(mx, f);
    }

    cout << mx << endl;
    return 0;   
}
