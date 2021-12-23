#include <bits/stdc++.h>
using namespace std;

int arr[200], marks[200];

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int cnt = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    if (s.size() > 3) {
        cout << -1 << endl;
    }

    else if ( s.size() == 1 ) {
        cout << 0 << endl;
    }

    else if ( s.size() == 2 ) {
        vector<int> res;
        for (auto el: s) res.push_back(el);
        sort(begin(res), end(res));
        int ans = res[1] - res[0];

        if (ans % 2 == 0) cout << ans / 2 << endl;
        else cout << ans << endl;
    }

    else if ( s.size() == 3 ) {
        vector<int> res;
        for (auto el: s) res.push_back(el);
        sort(begin(res), end(res));

        int diff1 = res[1] - res[0];
        int diff2 = res[2] - res[1];

        if (diff1 != diff2) cout << -1 << endl;
        else cout << diff1 << endl;
    }

    return 0;
}
