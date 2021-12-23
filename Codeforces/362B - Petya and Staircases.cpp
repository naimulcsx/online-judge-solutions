#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    bool front = true, end = true;
    vector<int> arr(m);
    for (auto &el: arr) {
        cin >> el;
        if (el == 1) front = false;
        else if (el == n) end = false;
    }

    sort(arr.begin(), arr.end());

    int i = 0;
    bool flag = true;
    while( i < m ) {
        int cons = 1, j = i + 1;
        while( j < m && arr[j] - arr[i] == 1 ) j++, i++, cons++;
        if (cons >= 3) {
            flag = false;
            break;
        }
        i = j;
    }

    if ( flag && front && end ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
