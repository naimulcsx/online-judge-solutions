#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int waiting_time(pair<ll, ll> b, ll a) {
    ll lo = 0, hi = 1e9, mid, res = 1e9 + 7;
    while( lo <= hi ) {   
        mid = (lo + hi) / 2;
        if ( a <= ((mid * b.second) + b.first) ) res = min(mid, res), hi = mid - 1;
        else lo = mid + 1;
    }
    return res * b.second + b.first;
}

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for (auto &el: arr) cin >> el.first >> el.second;

    vector<int> times;
    int mn = numeric_limits<int>::max();
    for (auto el: arr) {
        int wt = waiting_time(el, k);
        mn = min(mn, wt);
        times.push_back(wt);
    }

    for (int i = 0; i < (int) times.size(); ++i) {
        if (times[i] == mn) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
