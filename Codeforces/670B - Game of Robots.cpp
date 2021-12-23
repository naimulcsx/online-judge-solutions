#include <bits/stdc++.h>
using namespace std;

inline int sum(int n) {
    if (n & 1) return (n+1)/2*n;
    return n/2 *(n+1);
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif  

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr.at(i);

    int l = 0, m = 0;
    while(m < k) {
        l++;
        m = sum(l);
    }   
    cout << arr.at(k - (m - l) - 1) << endl;
    return 0;
}
