#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x, y;
        cin >> x >> y;
        ll diff = x - y;
        if (diff == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
