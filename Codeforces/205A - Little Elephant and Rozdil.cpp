#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int mn = numeric_limits<int>::max(), mnp = -1;
    for (int i = 0; i < n; ++i) {
        if ( arr[i] < mn ) mn = arr[i], mnp = i;
    }

    if (count(begin(arr), end(arr), mn) > 1) cout << "Still Rozdil" << endl;
    else cout << mnp + 1 << endl;
    return 0;   
}
