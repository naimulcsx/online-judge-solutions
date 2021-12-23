#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector<int> arr(k);
    for (auto &el: arr) cin >> el;

    ll curr = 1, cst = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] > curr) cst += arr[i] - curr;
        else if (arr[i] < curr) cst += n - (curr - arr[i]);
        curr = arr[i];
    }

    cout << cst << endl;    
    return 0;
}
