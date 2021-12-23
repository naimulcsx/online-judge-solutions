#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    
    ll  gcd = __gcd(x, y);

    x /= gcd;
    y /= gcd;

    cout << min(a / x, b / y) << endl;
    return 0;
}
