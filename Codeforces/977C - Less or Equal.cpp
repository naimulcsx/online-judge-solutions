#include<bits/stdc++.h>
using namespace std;
 
int arr[200200];
 
int main() {
    ios::sync_with_stdio(false);
 
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    sort(arr + 1, arr + 1 + n);
 
    int lo = 1, hi = 1e9;

    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        int itemsBefore = upper_bound(arr + 1, arr + 1 + n, mid) - arr;
        itemsBefore--;

        if (itemsBefore == k) {
            cout << mid << endl;
            return 0;
        }

        else if (itemsBefore < k) lo = mid + 1;
        else hi = mid - 1;
    }

    cout << -1 << endl;
    return 0;
}