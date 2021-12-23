#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif  

    int n, q, c = 1;
    while(cin >> n >> q) {
        if (n == 0 && q == 0) break;
        cout << "CASE# " << c <<":" << endl;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr.at(i);

        sort(arr.begin(), arr.end());

        while(q--) {
            int k;
            cin >> k;
            auto it = lower_bound(arr.begin(), arr.end(), k);

            cout << k;
            if (*it == k) cout << " found at "<< it - arr.begin() + 1 << endl;
            else cout << " not found" << endl;
        }
        c++;
    }
    return 0;
}
