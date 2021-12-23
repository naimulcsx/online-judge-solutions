#include <bits/stdc++.h>
using namespace std;
 
int cnt[10010];
bool used[10010];
 
int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
 
    while(q--) {
        int n;
        cin >> n;
        memset(cnt, 0, sizeof(cnt));
 
        int mn = 1e4 + 10, mx = 0;
        for (int i = 0; i < 4 * n; ++i) {
            int p;
            cin >> p;
            cnt[p]++;
            mn = min(mn, p);
            mx = max(mx,p);
        }
 
        int prod = mx * mn;
 
        vector<pair<int, int>> divp;
        for (int i = 1; i * i <= prod; ++i) {
            if (prod % i == 0) divp.push_back({i, prod / i});
        }
 
        bool flag = true;
        for (auto el: divp) {
            if (el.first > 1e4 || el.second > 1e4) continue;
            if (el.first != el.second) {
                if (cnt[el.first] == cnt[el.second] && cnt[el.first] % 2 == 0 && cnt[el.second] % 2 == 0) {
                    used[el.first] = 1;
                    used[el.second] = 1;
                    continue;
                }
                flag = false;
                break;
            } else {
                if ( cnt[el.first] % 2 == 0 && (cnt[el.first] / 2) % 2 == 0 ) {
                    used[el.first] = 1;
                    continue;
                }
                flag = false;
                break;
            }
        }

        for (int i = 1; i <= 1e4; ++i)
            if (cnt[i] > 0 && !used[i]) flag = false;
        
 
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}
