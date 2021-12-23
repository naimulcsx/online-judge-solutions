#include <bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, a, b;
    cin >> n >> a >> b;

    int arr[n];
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    sort(arr, arr + n);
    cout << arr[n - a] - arr[b - 1] << endl;
    return 0;
}
