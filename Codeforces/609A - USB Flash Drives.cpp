#include <bits/stdc++.h>
using namespace std;

int arr[110];

int main() {    
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr, arr + n);
    reverse(arr, arr + n);

    int i = 0, cnt = 0, taken = 0;
    while( i < n ) {
        taken += arr[i];
        cnt++;
        if (taken >= m) break;
        ++i;
    }

    cout << cnt << endl;
    return 0;
}
