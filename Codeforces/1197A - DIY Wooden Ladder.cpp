#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, q;
int arr[100100];

int main() {
    cin >> q;
    while(q--) {
        cin >> n;

        int mx1 = 0, mx2;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if ( arr[i] > mx1 ) {
                mx2 = mx1;
                mx1 = arr[i];
            } else if ( arr[i] <= mx1 && arr[i] >= mx2 ) {
                mx2 = arr[i];
            }
        }

        int mn = min(mx1, mx2);
        int res = min(mn - 1, n - 2);

        if ( res < 0 ) cout << 0 << endl;
        else cout << res << endl;
    }

    return 0;
}
