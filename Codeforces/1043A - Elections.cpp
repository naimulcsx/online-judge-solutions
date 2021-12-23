#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int k, int opp) {
    int res = 0;
    for (auto el: arr) res += (k - el);
    return res > opp;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0, mx = 0;
    for (auto &el: arr) cin >> el, sum += el, mx = max(mx, el);

    int hi = 10000, lo = mx, mid, res;
    while( lo <= hi ) {
        mid = (lo + hi) / 2;
        if ( possible(arr, mid, sum) ) {
            res = mid;
            hi = mid - 1;
        } else lo = mid + 1;
    }

    cout << res << endl;
    return 0;
}
