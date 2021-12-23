#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll arr[100100], cum[100100];

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        cum[i] = arr[i];
    }

    for (int i = 1; i <= n; ++i) cum[i] += cum[i - 1]; 

    int mx = 0;
    for (int i = 1; i <= n; ++i) {
        int pos = upper_bound( cum + 1, cum + n + 1, cum[i - 1] + k) - cum;
        mx = max( pos - i, mx);
    }

    cout << mx << endl;
    return 0;
}