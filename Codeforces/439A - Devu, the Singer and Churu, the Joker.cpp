#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    bool rest = false;
    int time_elapsed = 0, i = 0, churu = 0;
    while( true ) {
    
        if ( !rest && i < n && time_elapsed + arr[i] <= t ) {
            time_elapsed += arr[i], i++;
        } else {
            time_elapsed += 10;
            if (time_elapsed > t) {
                churu += (t - time_elapsed + 10) / 5;
                break;
            } else {
                if (rest) churu += 2;
            }
        }
        
        if ( i < n ) rest = !rest;
        else rest = true;
    }

    if (i == n) cout << churu << endl;
    else cout << -1 << endl;
    return 0;
}
