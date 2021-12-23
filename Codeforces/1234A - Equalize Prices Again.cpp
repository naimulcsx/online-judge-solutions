#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        ll sum = 0;
        for (int  i = 0; i < n; ++i) cin >> arr[i], sum += arr[i];

        ll lo = 0, hi = 2e10, res = 2e10;

        while( lo <= hi ) {
            ll mid = (hi + lo) / 2;
            if ( mid * n >= sum ) {
                res = min(res, mid);
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        cout << res << endl;
    }
    
    return 0;
}
