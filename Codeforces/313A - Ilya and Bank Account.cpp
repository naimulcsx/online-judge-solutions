#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    if ( n >= 0 ) cout << n  << endl;
    else cout << max(n/10, n/100 * 10 + n % 10) << endl;
    return 0;
}
