#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll sum(ll n) {
    ll res = 0;
    while(n > 0) res += n % 10, n /= 10;
    return res;
}

int main() {
    ll n;
    cin >> n;
    ll k = 0;
    while( n > k * 10 + 9 ) k = k * 10 + 9;
    cout << sum(n - k) + sum(k) << endl;
    return 0;
}
