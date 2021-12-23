#include <iostream>
#include <algorithm>
using namespace std;

using ulli = unsigned long long int;
inline void prefix_sum(ulli *, int);

int main() {
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n;

    ulli arr[n], sorted[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i], 
        sorted[i] = arr[i];

    sort( sorted, sorted + n );
    prefix_sum(arr, n);
    prefix_sum(sorted, n);

    cin >> q;
    while(q--) {
        int t, l, r;
        cin >> t >> l >> r;

        if ( t == 1 && l == 1 )
            cout << arr[r - 1] << endl;
        else if ( t == 1 & l > 1 )
            cout << arr[r - 1] - arr[l - 2] << endl;
        else  if ( t == 2 && l == 1 )
            cout << sorted[r - 1] << endl;
        else
            cout << sorted[r - 1] - sorted[l - 2] << endl;
    }

    return 0;
}

inline void prefix_sum(ulli *arr, int n) {
    for (int i = 1; i < n; ++i) 
        arr[i] += arr[i - 1];
}
