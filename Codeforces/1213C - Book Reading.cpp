#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    int q;
    cin >> q;

    while(q--) {
        ll n, k;
        cin >> n >> k;

        if (k > n) cout << 0 << endl;
        else {
            ll times = n / k;

            vector<ll> arr {1};
            ll sum = 0;
            for (int i = 1; i <= 9; ++i) arr.push_back((k * i) % 10);
            for (int i = 1; i <= 9; ++i) sum += arr[i];
            

            ll left = times % 10;
            ll res = (times / 10) * sum;
            for (int i = 1; i <= left; ++i) res += arr[i];
            cout << res << endl;
        }
    }
    return 0;
}
