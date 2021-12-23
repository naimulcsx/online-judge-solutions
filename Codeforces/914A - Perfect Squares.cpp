#include <bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_map<int, bool> mp;

int main() {
    for (int i = 0; i <= 1000; ++i) mp[i * i] = true;

    int n;
    cin >> n;

    int mx = numeric_limits<int>::min();
    for (int i = 1; i <= n; ++i) {
        int k; 
        cin >> k;
        if ( mp[k] == false ) mx = max(mx, k);
    }

    cout << mx << endl;
    return 0;
}
