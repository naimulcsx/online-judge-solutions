#include <bits/stdc++.h>
using namespace std;

int cnt[1010];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    if (n == 1) {
        if (arr[0] == 15) cout << "DOWN" << endl;
        else if (arr[0] == 0) cout << "UP" << endl;
        else  cout << -1 << endl;
    }
    else if ( arr[n - 1] > arr[n - 2] ) {
        if ( arr[n - 1] == 15 ) cout << "DOWN" << endl;
        else cout << "UP" << endl;
    } else if ( arr[n - 1] < arr[n - 2] ) {
        if (arr[n - 1] == 0) cout << "UP" << endl;
        else cout << "DOWN" << endl;
    }

    return 0;
}
