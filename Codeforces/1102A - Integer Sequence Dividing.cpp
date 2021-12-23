#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    if (sum % 2 == 0) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}
