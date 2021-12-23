#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll arr[200200];

int main() {
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll mx = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    ll gcd = 0, left = 0;
    for (int i = 1; i < n; ++i) gcd = __gcd(gcd, abs(arr[i] - arr[i + 1])), left += mx - arr[i];
    left += mx - arr[n];

    cout << left / gcd << ' ';
    cout << gcd << endl;
    return 0;
}
