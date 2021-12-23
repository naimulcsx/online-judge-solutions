#include <bits/stdc++.h>
#define len(str) (ll) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    int q = n * n, k = 0;
    vector<int> part[n]; bool flag = true;
    for (int i = 1; i <= q; ++i) {
        int m = i % n;
        if (flag) {
            if ( m == 0 ) part[n - 1].push_back(i);
            else part[m - 1].push_back(i);
        } else {
            if ( m == 0 ) part[0].push_back(i);
            else part[n - m].push_back(i);
        }
        if (m == 0) flag = !flag;
    }

    for (auto arr: part) {
        for (auto el: arr) cout << el << ' ';
        cout << endl;
    }

    return 0;
}
