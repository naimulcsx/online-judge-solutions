#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll n, k, m;
    cin >> n >> k;    

    ll mx = -1, mx_pos, p;
    for (int i = 1; i <= k; ++i) {
        cin >> m;
        if ( (n / m) * m > mx ) {
            mx = (n / m) * m;
            p = (n / m);
            mx_pos = i;
        }
    }

    cout << mx_pos << ' ' << p << endl;
    return 0;
}
