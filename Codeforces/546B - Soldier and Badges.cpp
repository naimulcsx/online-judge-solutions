#include <bits/stdc++.h>
using namespace std;

int cnt[6005];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el, cnt[el]++;

    int cost = 0;
    for (int i = 1; i <= 6000; ++i) {
        if ( cnt[i] > 1 ) {
            cnt[i + 1] += cnt[i] - 1;
            cost += cnt[i] - 1;
        }
    }

    cout << cost << endl;
    return 0;
}
