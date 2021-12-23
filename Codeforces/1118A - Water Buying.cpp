#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
    while(q--) {
        ll n, a, b;
        cin >> n >> a >> b;
        cout << min( a * n, (n / 2) * b + (n % 2) * a ) << endl;
    }
    return 0;
}
