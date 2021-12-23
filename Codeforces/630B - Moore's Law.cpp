#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    ld n, s, k = 1.000000011;
    cin >> n >> s;
    cout << fixed << setprecision(30) << n * pow(k, s) << endl;
    return 0;
}
