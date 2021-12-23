#include <bits/stdc++.h>
using namespace std;
int cnt[4];

int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
    vector<pair<int, int>> vec;
    while(q--) {
        int l, r;
        cin >> l >> r;
        vec.push_back({l, r});
    }

    vector<pair<bool, bool>> ops { {1, 1}, {1, 0}, {0, 1}, {0, 0} };

    int k = 0;
    for ( auto opt: ops ) {
        for (auto el: vec) {
            if ( el.first == opt.first && el.second == opt.second ) continue;
            else if ( el.first == !opt.first && el.second == !opt.second ) 
                cnt[k] += 2;
            else if ( el.first == !opt.first && el.second == opt.second ) 
                cnt[k]++;
            else if ( el.first == opt.first && el.second == !opt.second ) 
                cnt[k]++; 
        }
        k++;
    }

    cout << min({cnt[0], cnt[1], cnt[2], cnt[3]}) << endl;
    return 0;
}
