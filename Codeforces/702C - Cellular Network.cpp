#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool bin(vector<pair<ll, ll>> &range, ll val) {
    int l = range.size()  - 1;
    int lo = 0, hi = l, mid;
    while( lo <= hi ) {
        mid = (lo + hi) / 2;
        if ( val >= range[mid].first && val <= range[mid].second ) return true;
        else if ( val == range[mid].first || val == range[mid].second ) return true;
        else if ( val < range[mid].first ) hi = mid - 1;
        else if ( val > range[mid].second ) lo = mid + 1;
    }
    return false;
}

bool sim( vector<int> &cpos, vector<int> &tpos, ll rad ) {
    vector<pair<ll, ll>> range;
    for (auto &el: tpos) range.push_back( {el - rad, el + rad} );
    for (auto &city: cpos) {
        if ( !bin(range, city) ) return false;
    }
    return true;
}

int main() {
    int cities, towers;
    scanf("%d %d", &cities, &towers);
    vector<int> cities_pos(cities), towers_pos(towers);
    for (auto &el: cities_pos) scanf("%d", &el);
    for (auto &el: towers_pos) scanf("%d", &el);

    ll lo = 0, hi = 2e9 + 100, mid, res;
    while( lo <= hi ) {
        mid = (lo + hi) / 2;
        if ( sim(cities_pos, towers_pos, mid) ) {
            res = mid;
            hi = mid - 1;
        } else lo = mid + 1;
    }

    cout << res << endl;
    return 0;
}

