#include <bits/stdc++.h>
using namespace std;

int n, m;

bool chk(vector<int> &correct, int t) {
    bool flag = false;
    for (auto el: correct) {
        if (el * 2 <= t) flag = true;
        if (el > t) return false;
    }
    return flag;
}

int main() {
    cin >> n >> m;
    vector<int> correct(n), wrong(m);
    int mx = 0, mn = numeric_limits<int>::max();

    for (auto &el: correct) {
        cin >> el, 
        mn = min(mn, el), 
        mx = max(mx, el);
    }
    
    for (auto &el: wrong) cin >> el;

    int lo = mn, hi = 2 * mx, mid, res;
    while( lo <= hi ) {
        mid = (lo + hi) / 2;
        if ( chk(correct, mid) ) {
            res = mid;
            hi = mid - 1;
        } else lo = mid + 1;
    }

    int wrong_passed = count_if(begin(wrong), end(wrong), [&](int n) {
        return n <= res;
    });

    if (wrong_passed == 0) cout << res << endl;
    else cout << -1 << endl;
    return 0;
}
