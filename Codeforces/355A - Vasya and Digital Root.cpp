#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;

    if (n == 1 && m == 0) cout << 0;
    else if (m == 0) cout << "No solution";
    else {
        cout << m;
        for (int i = 1; i <= n - 1; ++i) cout << 0;
    }

    cout << endl;
    return 0;
}