#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll arr[300100];

int main() {
    ll n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    sort(arr + 1, arr + n + 1);

    ll res = arr[n] * n;
    if (n - 1 >= 0) res += arr[n - 1] *  n;

    for (ll i = 1; i <= n - 2; ++i)
        res += arr[i] * (i + 1);

    cout << res << endl;
    return 0;
}
