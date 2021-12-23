#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &el: arr) cin >> el;
    sort( begin(arr), end(arr) );

    int k = 1, cnt = 0;
    for (auto el: arr) {
        if ( el >= k ) { cnt++, k++; }
    }

    cout << cnt << endl;
    return 0;
}
