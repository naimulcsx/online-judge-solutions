#include <bits/stdc++.h>
using namespace std;

int arr[300300];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    int l1 = 0, l2 = 0;
    for (int i = n; i > 1; --i) 
        if ( arr[i] != arr[1] ) { l1 = i - 1; break; }
    
    for (int i = 1; i < n; ++i)
        if ( arr[i] != arr[n] ) { l2 = n - i; break; }

    cout << max(l1, l2) << endl;
    return 0;
}
