#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n * m);
    for (auto &el: arr) cin >> el;
    sort(begin(arr), end(arr));

    int p = arr[0];
    for (int i = 1; i < n * m; ++i) {
        if (abs(p - arr[i]) % k != 0) {
            cout << - 1 << endl;
            return 0;
        }
    }
    
    int md1 = (m * n) / 2, md2 = md1 - 1, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < m * n; ++i) cnt1 += abs(arr[i] - arr[md1]) / k;
    if ( n % 2 == 1 ) cout << cnt1 << endl;
    else {
        for (int i = 0; i < m * n; ++i) cnt2 += abs(arr[i] - arr[md2]) / k;
        cout << min(cnt1, cnt2) << endl;
    }

    return 0;
}
