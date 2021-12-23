#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    for (int k = 0; k < n; ++k) {
        int i = 0;
        while( i < n - 1 ) {
            int j = i + 1, k = i;
            bool flag = false;
            while( j < n && arr[i] > arr[j] ) {
                swap( arr[i], arr[j] );
                flag = true;
                i += 2, j += 2;
            }
                
            if ( flag ) {
                cout << k + 1 << ' ' << j - 1 << endl;
                i = i - 1;
            } else i = j;
        }
    }

    return 0;
}
