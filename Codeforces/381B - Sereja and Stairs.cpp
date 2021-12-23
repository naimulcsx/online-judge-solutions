#include <bits/stdc++.h>
using namespace std;

int cnt[5050];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int mx = 0;
    deque<int> res;
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        mx = max(mx, k);
        cnt[k]++;
    }   

    res.push_back(mx);
    for (int i = mx - 1; i >= 1; --i) {
        if ( cnt[i] == 1 ) res.push_front(i);
        else if (cnt[i] > 1) {
            res.push_front(i);
            res.push_back(i);
        }
    }

    cout << res.size() << endl;
    for (auto el: res) cout << el << ' ';
    cout << endl;
    return 0;
}