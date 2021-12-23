#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> left, right;
    while(n--) {
        int x, q;
        cin >> x >> q;
        if (x < 0) left.push_back({x, q});
        else right.push_back({x, q});
    }

    sort(begin(left), end(left), [](pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first > b.first;
    });

    sort(begin(right), end(right), [](pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    });


    if (left.size() == right.size()) {
        int res =0;
        for (auto el: left) res += el.second;
        for (auto el: right) res += el.second;
        cout << res << endl;
    } 
    
    else if ( left.size() > right.size() ) {
        int w = right.size(), res = 0;
        for (auto el: right) res += el.second;
        for (int i = 0; i < w + 1; ++i) res += left[i].second;
        cout << res << endl;
    } 
    
    else if ( right.size() > left.size() ) {
        int w = left.size(), res = 0;
        for (auto el: left) res += el.second;
        for (int i = 0; i < w + 1; ++i) res += right[i].second;
        cout << res << endl;
    }

    return 0;
}
