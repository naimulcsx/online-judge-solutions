#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll arr[200200];

int main() {
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; ++i) cin >> arr[i];
    for (ll i = 1; i <= n; ++i) arr[i] += arr[i - 1];

    ll ans = 0;
    for (ll i = 1; i <= n; ++i) {
        ll sum = arr[i], res = -1;

        ll lo = i, hi = n - 1;
        while( lo <= hi ) {
            ll mid = (hi + lo) / 2;
            ll val = arr[n] - arr[mid];

            if ( val == sum ) {
                res = val;
                break;
            } else if ( val < sum ) hi = mid - 1;
            else if ( val > sum ) lo = mid + 1;
        }

        ans = max(ans, res);
    }

    cout << ans << endl;
    return 0;
}
