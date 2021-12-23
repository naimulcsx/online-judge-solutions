#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if ( a - c < 0 || b - c < 0 || a + b - c < 0 || n - (a + b - c) <= 0 ) cout << -1 << endl;
    else cout << n - (a + b - c) << endl;
    return 0;
}
