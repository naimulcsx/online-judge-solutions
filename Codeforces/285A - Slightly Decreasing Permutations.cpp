#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 1; i <= n; ++i) arr[i - 1] = i;

    if (k == 0) for (auto el: arr) cout << el << ' ';
    else if (k == n - 1) for (auto it = rbegin(arr); it != rend(arr); ++it) cout << *it << ' ';
    else {
        int e = n - 1, currk = 0;
        if ( k > (n + 1) / 2 ) {
            reverse(begin(arr), end(arr));
            k = n - 1 - k;
        }

        while( currk != k ) {
            if (e != 0) swap(arr[e], arr[e - 1]);
            else if (e == 0) swap(arr[0], arr[n - 1]);
            currk++;
            e -= 2;
        }

        for (auto el: arr) cout << el << ' ';
    }

    cout << endl;
    return 0;
}
