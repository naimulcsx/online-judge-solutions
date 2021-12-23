#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll n;
    scanf("%lld", &n);

    vector<pair<ll, ll>> res;
    for (ll i = 2; i * i <= n; ++i) {
        int p = 0;
        if ( n % i == 0 ) {
            while( n % i == 0 ) {
                n /= i;
                p++;
            }
            res.push_back({i, p});
        }
    }

    ll ans = 1;
    if (n != 1) res.push_back({n, 1});
    for (auto el: res) ans *= el.first;
    printf("%lld\n", ans);
    
    return 0;
}
