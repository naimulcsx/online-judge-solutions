#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll binpow( ll n, ll p ) {
    if (p == 0) return 1LL;
    if (p % 2 == 0) {
        ll res = binpow(n, p / 2);
        return res * res;
    }
    return n * binpow(n, p - 1);
}

int main() {
    ios::sync_with_stdio(false);
    

    int q;
    cin >> q;
    while(q--) {
        ll n;
        cin >> n;

        ll lo = 1, hi = 1000000000000LL, fin = 0;

        while(lo <= hi) {
            ll mid = lo + (hi - lo) / 2;
            ll k = mid;
            string res;
            while(k > 0) {
                res += (char) ((k % 2) + '0');
                k /= 2LL;
            }

            reverse(res.begin(), res.end());

            ll ans = 0;
            for (int i = res.size() - 1, p = 0; i >= 0; --i, p++) {
                if (res[i] == '1') {
                    ans += binpow(3, p);
                }
            }
            if (ans < n) {
                lo = mid + 1;
            } else {
                fin = max(ans, mid);
                hi = mid - 1;
            }
        }
        cout << fin << endl;
    }

    return 0;
}
