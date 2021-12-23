#include <bits/stdc++.h>
#define len(str) (ll) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n);

    for (auto &el: arr) cin >> el;
    sort(begin(arr), end(arr));

    ll t = m / (k + 1), left = m % (k + 1);
    cout << arr[n - 1] * k * t + arr[n - 2] * t + arr[n - 1] * left << endl;

    return 0;
}
