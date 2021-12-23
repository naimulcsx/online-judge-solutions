#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;
    vector<int> res;

    for (int i = 1; i <= n; ++i) {
        int k;
        cin >> k;

        bool flag = false;
        for (int j = 1; j <= k; ++j) {
            int mon;
            cin >> mon;
            if (v > mon) flag = true;
        }

        if (flag) res.push_back(i);
    }

    cout << res.size() << endl;
    for (auto el: res) cout << el <<  ' ';
    cout << endl;
    return 0;
}