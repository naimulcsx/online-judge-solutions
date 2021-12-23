#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;
    sort(begin(arr), end(arr));

    for (int i = 1; i <= n; ++i) {
        if ( arr[i - 1] != i) {
            auto it = lower_bound(begin(arr), end(arr), i);
            if ( it != arr.end() ) *it = i; 
        }
    }

    cout << arr[n - 1] + 1 << endl;
    return 0;
}
