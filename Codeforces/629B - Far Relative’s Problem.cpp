#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<pair<int, int>> res(367, {0, 0});
    vector<pair<int, int>> males, females;
    
    while(n--) {
        int l, r;
        char gender;
        cin >> gender >> l >> r;
        if (gender == 'M') males.push_back({l, r});
        else if (gender == 'F') females.push_back({l, r});
    }

    int mx = 0;
    for ( int i = 1; i <= 366; ++i ) {
        int m_cnt = count_if(begin(males), end(males), [&](auto el) {
            return i >= el.first && i <= el.second;
        });

        int fm_cnt = count_if(begin(females), end(females), [&](auto el) {
            return i >= el.first && i <= el.second;
        });

        res[i] = {m_cnt, fm_cnt};
        mx = max( mx, min(res[i].first, res[i].second) * 2 );
    }
    
    cout << mx << endl;
    return 0;
}
