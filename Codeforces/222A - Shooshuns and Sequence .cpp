#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int el = arr[k - 1];
    for (int i = k; i < n; ++i) {
        if ( arr[i] != el ) {
            cout << -1 << endl;
            return 0;
        }
    }

    int i = 0;
    for (i = k - 2; i >= 0; --i) 
        if (arr[i] != el) break;
    

    cout << i + 1 << endl;
    return 0;   
}
