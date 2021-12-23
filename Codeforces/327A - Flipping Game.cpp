#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n), prefix(1, 0);
    for (auto &el: arr) cin >> el, prefix.push_back(el);
    for (int i = 2; i <= n; ++i) prefix[i] += prefix[i - 1];

    int mx = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = i; j < n; ++j) {
            // find maximum distant l and r, with minimum ones
            int seg_len = j - i + 1;
            int ones_in_seg = prefix[j + 1] - prefix[i];
            int zeros = seg_len - ones_in_seg;
            // n - ones_in_seg = ones in two ends of the segments
            mx = max(mx, prefix[n] - ones_in_seg + zeros);
        }
    }

    cout << mx << endl;
    return 0;
}

