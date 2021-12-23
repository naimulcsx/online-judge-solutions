#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll cnt[26];

int main() {
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;
    string str; cin >> str;
    for (const auto &el: str) cnt[el - 'A']++;

    vector<pair<char, ll>> data;
    for (int i = 0; i < 26; ++i) data.push_back({'A' + i, cnt[i]});
    sort(begin(data), end(data), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });

    ll cost = 0;
    for (auto el: data) {
        if (k == 0) break;
        if ( el.second <= k ) {
            cost += (el.second * el.second);
            k -= el.second;
        } else {
            cost += (k * k);
            k = 0;
        }
    }

    cout << cost << endl;
    return 0;   
}
