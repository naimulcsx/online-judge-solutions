#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for ( auto &el: arr ) cin >> el;
    sort( begin(arr), end(arr) );

    int l, r, mx;
    l = r = mx = 0;

    while( l <= r && r < n  ) {
        if ( arr[r] - arr[l] <= 5 ) 
            mx = max(mx, r - l + 1), r++;
        else l++;
    }

    cout << mx << endl;
    return 0;
}
