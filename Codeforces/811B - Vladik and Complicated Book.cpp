#include <bits/stdc++.h>
using namespace std;

int arr[10010];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    while(m--) {
        int l, r, x;
        cin >> l >> r >> x;

        int cnt = 0, pos;
        for (int i = l; i <= r; ++i) 
            if ( arr[i] < arr[x] ) cnt++;

        if ( x - l == cnt ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
