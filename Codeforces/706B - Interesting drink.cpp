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
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) cin >> prices[i];
    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    while(q--) {
        int budget;
        cin >> budget;
        auto it = upper_bound(prices.begin(), prices.end(), budget);
        cout << it - prices.begin() << endl;
    }
    return 0;
}
