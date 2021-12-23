#include <bits/stdc++.h>
using namespace std;

int bigmod(int n, int p, int m) {
    if ( p == 0 ) return 1;
    else if ( p % 2 == 0 ) {
        int res = bigmod(n, p/2, m);
        return (res * res) % m;
    }
    return (n % m * bigmod(n, p - 1, m)) % m;
}

int main() {
    #ifdef __DEBUG
    freopen("files/output.txt", "w", stdout);
    freopen("files/input.txt", "r", stdin);
    #endif

    int b, k, a;
    cin >> b >> k;

    int res = 0;
    while( k-- ) {
        cin >> a;
        res += (a % 2 * bigmod(b, k, 2)) % 2;
    }

    if (res % 2 == 0) cout << "even" << endl;
    else cout << "odd" << endl;

    return 0;
}
