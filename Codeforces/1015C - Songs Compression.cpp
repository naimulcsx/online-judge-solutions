#include <bits/stdc++.h>
using ll = long long;
using namespace std;


ll n, m;
pair<ll, ll> arr[100100];


int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    cin >> n >> m;

    ll sum = 0, tot = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
        sum += arr[i].second;
        tot += arr[i].first;
    }

    if ( sum > m ) {
        cout << -1 << endl;
        return 0;
    }

    sort(arr, arr + n, [](pair<ll, ll> a, pair<ll, ll> b) {
         return a.first - a.second > b.first - b.second;
    });

    int i = 0, cnt = 0;
    while( tot > m ) {
        tot -= (arr[i].first - arr[i].second);
        cnt++, ++i;
    }

    cout << cnt << endl;
    return 0;
}
