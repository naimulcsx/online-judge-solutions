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

vector<ll> vec;

void func( int digits, string res ) {
    if ( digits == 0 ) {
        ll k = 0;
        for (int i = 14, p = 0; i >= 0; --i, p++) {
            if (res[i] == '1') {
                k += binpow(3, p);
            }
        }
        vec.push_back(k);
        return;
    }
    func(digits - 1, res + "0");
    func(digits - 1, res + "1");
}


int main() {
    ios::sync_with_stdio(false);
    func(15, "");
    
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        cout << *lower_bound(vec.begin(), vec.end(), (ll) n) << endl;
    }
    
    return 0;
}
