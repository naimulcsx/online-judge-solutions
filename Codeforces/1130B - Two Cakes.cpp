#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    #ifdef DEBUG
        freopen("files/output.txt", "w", stdout);
        freopen("files/input.txt", "r", stdin);
    #endif

    ll n;
    cin >> n;
    vector<pair<ll, ll>> data(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        ll input; cin >> input;
        data[i] = {input, i + 1};
    }

    sort( data.begin(), data.end() );

    ll sh = 1, dm = 1, dis = 0;
    for (int i = 0; i < 2 * n; i += 2) {
        dis += abs(data[i].second - sh);
        sh = data[i].second;

        dis += abs(data[i + 1].second - dm);
        dm = data[i + 1].second;
    }
    cout << dis << endl;
    return 0;
}
