#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for (auto &el: arr) {
        cin >> el;
        sum += el;
    }

    sort( rbegin(arr), rend(arr) );

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << sum - arr[ num - 1 ] << endl;
    }

    return 0;
}
