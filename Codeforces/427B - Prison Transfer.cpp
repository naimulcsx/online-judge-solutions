#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, t, c;
    cin >> n >> t >> c;

    int arr[n];
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    int i = 0;
    ll count = 0;
    while(i < n) {
        int j = i, length;
        while(j < n && arr[j] <= t) j++;
        length = j - i ;
        count += max(length - c + 1, 0);
        i = j + 1;
    }

    cout << count << endl;
    return 0;
}
