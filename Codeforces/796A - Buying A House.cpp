#include <bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, m, k;
    cin >> n >> m >> k;

    int dis = numeric_limits<int>::max();
    for (int i = 0; i < n; ++i) {
        int input; cin >> input;

        int current_distance = [&](int from, int to) -> int {
            return abs(from - to) * 10;
        }(i + 1, m);

        if (input != 0 && input <= k)
            dis = min(dis, current_distance);
    }

    cout << dis << endl;
    return 0;
}