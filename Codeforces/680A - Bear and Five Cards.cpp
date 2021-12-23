#include <bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int input, sum = 0;
    unordered_map<int, int> data;
    for (int i = 0; i < 5; ++i) {
        cin >> input;
        sum += input;
        data[input]++;
    }

    int res = numeric_limits<int>::max();
    for (auto it = data.begin(); it != data.end(); ++it) {
        if (it->second == 2)
            res = min( res, sum - (it->first * 2) );

        else if (it->second >= 3)
            res = min( res, sum - (it->first * 3) );
    }

    res = min(sum, res);
    cout << res << endl;
    return 0;
}
