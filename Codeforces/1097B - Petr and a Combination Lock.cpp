#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n;
int arr[20];
bool vis[20][3000], mem[20][3000];

bool sol(int pos, int val) {
    if ( pos > n ) {
        if (val % 360 == 0) return true;
        return false;
    }

    if (vis[pos][val]) return mem[pos][val];
    vis[pos][val] = 1;

    bool p = sol(pos + 1, val + arr[pos]);
    bool q = sol(pos + 1, val - arr[pos]);

    return mem[pos][val] = (p | q);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    
    if ( sol(1, 0) ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
