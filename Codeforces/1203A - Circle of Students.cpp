#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);

    int q;
    cin >> q;

    while(q--) {
        int n;
        cin >> n;
        vector<int> arr(2 * n - 1);
        for (int i = 0; i < n; ++i) cin >> arr[i];
        for (int i = n; i < n + n - 1; ++i) arr[i] = arr[i - n];

        deque<int> res;
        bool flag = false;
        for (int i = 0; i < n; ++i) res.push_back(arr[i]);

        for (int i = n; i < 2 * n - 1; ++i) {
            vector<int> rev;
            if ( is_sorted(res.begin(), res.end()) ) {
                flag = true;
                break;
            }

            for (auto el: res) rev.push_back(el);
            reverse(rev.begin(), rev.end());

            if ( is_sorted(rev.begin(), rev.end()) ) {
                flag = true;
                break;
            }

            res.pop_front();
            res.push_back(arr[i]);
        }

        vector<int> rev;
        if ( is_sorted(res.begin(), res.end()) ) flag = true;

        for (auto el: res) rev.push_back(el);
        reverse(rev.begin(), rev.end());
        if ( is_sorted(rev.begin(), rev.end()) ) flag = true;

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
