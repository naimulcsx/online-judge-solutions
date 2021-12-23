#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int arr[200200];

int main() {    

    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);

    while(m--) {
        cin >> k;
        cout << upper_bound(arr, arr + n, k) - arr << ' ';
    }

    return 0;
}
