#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int q;
int arr[200200];

int main() {
    cin >> q;

    while(q--) {
        int n, k;
        cin >> n >> k;
        int odd_cnt = 0;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] & 1) 
                odd_cnt++;
        }

        if ( odd_cnt < k ) cout << "NO" << endl;
        else if ( abs(k - odd_cnt) % 2 == 1 ) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            int left = k, i = 0;
            while( i < n ) {
                if ( left == 1 ) {
                    cout << n << endl;
                    break;
                }
                int sum = arr[i], j = i + 1;
                while(j < n && sum % 2 == 0) {
                    sum += arr[j];
                    j++;
                }
                cout << j << ' ';
                left--;
                i = j;
            }
        }
    }

    return 0;
}
