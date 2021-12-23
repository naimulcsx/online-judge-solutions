#include <bits/stdc++.h>
using namespace std;
using ppi = pair<pair<int, int>, int>;
 
int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
    vector<ppi> data;
    for (int i = 1; i <= q; ++i) {
        int l, r; 
        cin >> l >> r;
        data.push_back({{l, r}, i});
    }

    int lo = numeric_limits<int>::max(), hi = 0;
    for (auto el: data) {
        lo = min(lo, min(el.first.first, el.first.second));
        hi = max(hi, max(el.first.first, el.first.second));
    }
    

    for (auto el: data) {
       if (lo == el.first.first && hi == el.first.second) {
           cout << el.second << endl;
           return 0;
       } 
    }

    cout << -1 << endl;
    return 0;   
}
