#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif     

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());

    ll i = 0, j = arr.size() - 1, total = 0;
    while(i < j) {
        ll k = (arr[i] + arr[j]);
        total += (k * k);
        i++;
        j--;
    }
    cout << total << endl;
    return 0;
}
