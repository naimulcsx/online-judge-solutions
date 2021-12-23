#include <bits/stdc++.h>
using namespace std;

int arr[100100];

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        if (arr[i] >= 0) arr[i] = -(arr[i] + 1);
    }

    int cnt = 0;
    for (int i = 1; i <= n; ++i) if (arr[i] < 0) cnt++;

    if ( cnt % 2 == 0 ) for (int i = 1; i <= n; ++i) cout << arr[i] << ' ';
    else {
        int mx = -1, mx_pos;
        for (int i = 1; i <= n; ++i) {
            int val = abs(arr[i]) - 1;
            if ( val > mx ) {
                mx = val;
                mx_pos = i;
            }
        }
        
        arr[mx_pos] = mx;
        for (int i = 1; i <= n; ++i) cout << arr[i] << ' ';
        cout << endl;
    }

    return 0;   
}
