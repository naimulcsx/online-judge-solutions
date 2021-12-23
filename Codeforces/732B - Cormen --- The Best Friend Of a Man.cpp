#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    int i = 0, min_walks = 0;
    while(i < n - 1) {
        if ( arr[i] + arr[i + 1] < k ) {
            int diff = abs( arr[i] + arr[i + 1] - k );
            arr[i + 1] += diff;
            min_walks += diff;
        }
        ++i;
    }

    cout << min_walks << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
