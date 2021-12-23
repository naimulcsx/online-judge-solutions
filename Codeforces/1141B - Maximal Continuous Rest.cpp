#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int i = 0, mx = 0;
    while( i < n ) {
        int j = i + 1, k = i;
        while( arr[i] == 1 && j < n && arr[i] == arr[j] ) i++, j++;
        if ( arr[k] == 1 ) mx = max( mx, j - k );
        i = j;
    }

    int l = 0, m = l + 1, cnt1 = (arr[0] == 1) ? 1 : 0, cnt2 = (arr[n - 1] == 1) ? 1 : 0;
    while( m < n && arr[l] == 1 && arr[l] == arr[m] ) l++, m++, cnt1 = max(cnt1, m);
    l = n - 1, m = l - 1;
    while( m >= 0 && arr[l] == 1 && arr[m] == arr[l]) l--, m--, cnt2 = max(cnt2, n - l);

    if (cnt1 + cnt2 >= n) cout << n << endl;
    else cout << max(mx, cnt1+ cnt2) << endl;
    return 0;
}
