#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for ( auto &el: arr ) cin >> el;

    int i = 0, mx = 0;
    while(i < n) {
        int j = i; bool flag1 = false, flag2 = false;
        while( j < n && arr[j] == arr[i] ) {
            flag1 = true;
            j++;
        }

        int k = j;
        while( k < n && arr[k] != arr[i] ) {
            flag2 = true;
            k++;
        }

        if ( flag1 && flag2 ) {
            int res = min(k - j, j - i);
            mx = max(mx, res * 2);
        }
        i = j;
    }

    cout << mx << endl;
    return 0;
}
