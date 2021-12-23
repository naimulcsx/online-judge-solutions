#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;
    arr.push_back(arr[0]);  

    int mn = numeric_limits<int>::max(), mni;
    for (int i = 0; i < n; ++i) {
        if (abs(arr[i + 1] - arr[i]) < mn) {
            mn = abs(arr[i + 1] - arr[i]);
            mni = i;
        }
    }

    if (mni == n - 1) cout << mni + 1 << ' ' << 1 << endl;
    else cout << mni + 1 << ' ' << mni + 2 << endl;
    return 0;   
}
